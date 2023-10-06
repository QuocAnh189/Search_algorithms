#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a[9] = { 2,4,1,5,63,234,1,6,23 };
	for (int i = 0; i < 9; i++)
	{
		int min = i;
		for (int j = i + 1; j < 9; j++)
			if (a[j] > a[min])
				min = j;
		swap(a[i], a[min]);
	}

	for (int i = 0; i < 9; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}