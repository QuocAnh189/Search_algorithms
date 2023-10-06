#include<iostream>
#include<string>
using namespace std;

int partion(int a[], int l, int h)
{
	int X = a[l];
	int i = l + 1;
	int j = h;
	do
	{
		while (a[i] <= X)
			i++;
		while (a[i] > X)
			j--;
		if (i < j)
			swap(a[i], a[j]);
			i++;
			j--;
	} while (i <= j);
	swap(a[l], a[j+1]);
	return j + 1;
}

void QuickSort(int a[], int l, int h)
{
	if (l < h)
	{
		int k = partion(a, l, h);
		QuickSort(a, l, h - 1);
		QuickSort(a, l + 1, h);
	}
}

int main()
{
	int a[10] = { 1,3,25,6,35,23,5,34,6,23 };
	QuickSort(a, 0, 9);

	for (int i = 0; i < 10; i++)
	{
		cout << " " << a[i];
	}
	return 0;
}

