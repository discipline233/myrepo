#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,p=1,b=1;
	double   a, m, n , s;
	printf("Please input m:");
	scanf("%lf", &m);
	s = 0;
	for (int i = 1; i <= 20; i++)
	{
		j = 1;
		a = pow(m, i);
		while (j <= i)
		{
			b *= j;
			j++;
		}
		n = (a / b) * p;
		p = -p;
		s += n;
		while (fabs(n) < 1e-4)
		{
			printf("%.2lf", s);
			return 0;
		}
	}
	return 0;
}
