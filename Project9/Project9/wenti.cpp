#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <unordered_map>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

//阶乘的递归算法
//int Cmath(int n) {
//
//	if (n < 0) return 0;
//	if (0 == n) return 1;
//	else return n * Cmath(n - 1);
//
//}
//
//int Gmath(int n) {
//
//	return Cmath(n);
//
//}
//
//int main() {
//
//	int n;
//	cin >> n ;
//	cout << Gmath(n);
//	system("pause");
//	return 0;
//}

//阶乘的迭代算法
//int Cmath(int n) {
//
//	int ans = 1;
//	if (n < 0) return 0;
//	if (0 == n) return 1;
//	while (n > 0) {
//		ans *= n;
//		--n;
//	}
//	return ans;
//}
//
//int main() {
//
//	int n;
//	cin >> n;
//	cout << Cmath(n);
//	system("pause");
//	return 0;
//
//}

////二项式系数递归算法
//int Cmath(int m, int n) {
//
//	if (m > n) return 0;
//	if (m == 0 || m == n) return 1;
//	else return Cmath(m, n - 1) + Cmath(m - 1 ,n - 1);
//
//}
//
//int Gmath(int m, int n) {
//
//	return Cmath(m, n);
//
//}
//
//int main() {
//
//	int n , m;
//	cin >> m >> n;
//	cout << Gmath(m,n);
//	system("pause");
//	return 0;
//
//}

//二项式系数迭代算法阶乘
int Cmath(int n) {

	int ans = 1;
	if (n < 0) return 0;
	if (0 == n) return 1;
	while (n > 0) {
		ans *= n;
		--n;
	}
	return ans;
}

int Cmath(int m, int n) 
{
	
	if (m > n) return 0;
	return Cmath(n) / (Cmath(m) * Cmath(n - m));
}

int main() 
{

	int n, m;
	cout << "二项式系数迭代算法阶乘" << endl;
	cin >> n >> m;
	cout << Cmath(n, m);
	system("pause");
	return 0;
}