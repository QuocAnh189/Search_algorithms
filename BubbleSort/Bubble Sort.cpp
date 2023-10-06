#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a[9] = { 2,4,1,5,63,234,1,6,23 };
	for (int i = 0; i < 8; i++)
	{
		for (int j = 8; j >= 1; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
	}

	for (int i = 0; i < 9; i++)
	{
		cout << a[i] << " ";
	}
	return 0;

}