#include <iostream>
using namespace std;
int main()
{
	int arr[8] = { 1,4,5,32,56,34,75,23 };
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl;
	cout << *arr+sizeof(int) << endl;
	return 0;
}
