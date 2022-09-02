#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main()
{
	int n, a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i * i + i;
	}
	sort(a, a + 10, [](int a[], int b[])
		{
			return a[0] < b[0];
		});
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}