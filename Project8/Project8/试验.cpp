#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int a[101], b[101];
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (a[j] > a[i])
            {
                b[i]++;
            }
        }
    }
    for (int i = 1; i <= num; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}