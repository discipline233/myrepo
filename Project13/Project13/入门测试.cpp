//#include<iostream>
//using namespace std;
//int x[100], c = 0;
//int main() {
//    for (int i = 0;; i++) {
//        cin >> x[i];
//        if (x[i] == 0) break;
//        c = i;
//    }
//    for (int j = c; j >= 0; j--)
//        cout << x[j] << " ";
//    return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int a[100];
//	int m = 0;
//	for (int i = 0;; i++)
//	{
//		cin >> a[i];
//		if (a[i] == 0)//注意if如果不加大括号的作用域只会执行后面一行
//		{
//			m = i;
//			break;
//		}
//	}
//	for (int i = m-1 ; i >= 0; i--)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}
//#include<iostream>//利用vector
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int>a;
//	int c;
//	while (1)
//	{
//		cin >> c;
//		if (c == 0)
//		{
//			break;
//		}
//		a.push_back(c);
//	}
//	while (a.empty() == 0)
//	{
//		cout << a.back()<<" ";
//		a.pop_back();
//	}
//	return 0;
//}
//数组指针
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a[101];
	int* p = a;//p指针指向数组a的第一个元素
	while (1)
	{
		int c;
		cin >> c;
		if (c == 0)
			break;
		p++;
		*p = c;
	}
	while (p != a)//当指针不是指向数组的第一个元素地址时
	{
		cout << *p << " ";
		p--;
	}
	system("pause");
	return 0;
}
