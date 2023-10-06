#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

void TaoMang(int [], int&);
void SapXep(int[], int);
void XuatMang(int[], int);
int BinarySearch(int[], int, int, int, int);

int main()
{
	int a[100];
	int n, x;
	cin >> n;
	srand(time(NULL));
	TaoMang(a, n);
	cout << "Mang ban dau la: ";
	XuatMang(a, n);
	cout << "\nMang sau khi duoc sap xep la: ";
	SapXep(a, n);
	XuatMang(a, n);
	cout << "\nNhap x: ";
	cin >> x;
	int l = 0;
	int r = n - 1;
	int kq = BinarySearch(a, n, x, l, r);
	cout << "Thuat toan Binary tra ve gia tri: " << kq;
	return 1;
}

void TaoMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 300;
	}
}

void SapXep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
	}
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(5);
	}
}

int BinarySearch(int a[], int n, int x, int l, int r)
{
	int left = l;
	int right = r;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (a[mid] == x)
			return 1;
		if (a[mid] > x)
		{
			right = mid - 1;
			BinarySearch(a, n, x, left, right);
		}
		if (a[mid] < x)
		{
			left = mid + 1;
			BinarySearch(a, n, x, left, right);
		}
	}
	return 0;
}



