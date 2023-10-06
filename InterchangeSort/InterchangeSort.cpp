#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a[9] = {2,4,1,5,63,234,1,6,23};
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
	}

	for (int i = 0; i < 9; i++)
		cout << a[i] << " ";
	return 0;
}