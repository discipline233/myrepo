#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define M 4
#define N 5
//int main()
//{
//    int i, j, k, max, maxj, flag, a[M][N];
//    printf("enter 20 num: \n");
//    for (i = 0; i < M; i++)
//        for (j = 0; j < N; j++)
//            scanf("%d", &a[i][j]);
//    for (i = 0; i < M; i++)
//    {
//        max = a[i][0];/*假设每一行的第一个元素是最大的*/
//        maxj = 0;/*纪录最大元素的列号*/
//        for (j = 0; j < N; j++)/*寻找每一行中最大的元素*/
//            if (a[i][maxj] < a[i][j])
//            {
//                maxj = j;
//                max = a[i][j];
//            }
//        flag = 1;/*标记位，用来标记是否找到鞍点*/
//        for (k = 0; k < M; k++)/*在最大元素的所在列判断该元素是否为最小元素*/
//        {
//            if (a[k][maxj] < max)/*如果不是最小的，则跳出最近这个循环*/
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)/*如果条件成立，则表明成功找到鞍点*/
//        {
//            printf("a[%d][%d] = %d\n", i, maxj, max);
//            break;
//        }
//    }
//    if (!flag)
//        printf("It's not exist!\n");
//    return 0;
//}
int main()
{
	int a[M][N];
	int flag;//标记是否找到鞍点
	int max, maxj;//max为所在行的最大值， maxj为最大元素的列号
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < M; i++)
	{
		max = a[i][0];
		maxj = 0;
		for (int j = 0; j < N; j++)
		{
			if (a[i][maxj] < a[i][j])
			{
				max = a[i][j];
				maxj = j;
			}
		}
		flag = 1;
		for (int k = 0; k < M; k++)
		{
			if (a[k][maxj] < max)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			printf("矩阵的鞍点为a[%d][%d]=%d\n", i, maxj, max);
			break;
		}
	}
	if (!flag)
		printf("It's not exist!\n");
	return 0;
}