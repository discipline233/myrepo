#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double s = 0, m, t = 1;
	int sign = 1, n = 1;
	scanf("%lf", &m);
	do
	{
		t *= m / n;
		s += sign * t;
		sign = -sign;
		n ++;
	} while (t >= 1e-4);
	printf("%.2lf\n", s);
	return 0;
}
