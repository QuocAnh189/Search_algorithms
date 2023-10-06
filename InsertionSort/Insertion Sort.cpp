#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int a[9] = { 2,4,1,5,63,234,1,6,23 };
	for (int i = 1; i < 9; i++)
	{
		int j = i - 1;
		int max = i;
		while (a[max] < a[j] && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		swap(a[j + 1], a[max]);
	};

	for (int i = 0; i < 9; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}