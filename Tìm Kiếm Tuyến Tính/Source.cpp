#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void TaoMang(int [], int& n);
int LinearSearch(int[], int,int);
void XuatMang(int [], int);

int main()
{
	int a[100];
	int n,x;
	cin >> n;
	srand(time(NULL));
	TaoMang(a, n);
	XuatMang(a, n);
	cin >> x;
	int kq = LinearSearch(a, n, x);
	cout << kq;
	return 1;
}


void TaoMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 300;
	}
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(5);
	}
}

int LinearSearch(int a[],int n,int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			return 1;
	}
	return 0;
}