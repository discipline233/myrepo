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
//        max = a[i][0];/*����ÿһ�еĵ�һ��Ԫ��������*/
//        maxj = 0;/*��¼���Ԫ�ص��к�*/
//        for (j = 0; j < N; j++)/*Ѱ��ÿһ��������Ԫ��*/
//            if (a[i][maxj] < a[i][j])
//            {
//                maxj = j;
//                max = a[i][j];
//            }
//        flag = 1;/*���λ����������Ƿ��ҵ�����*/
//        for (k = 0; k < M; k++)/*�����Ԫ�ص��������жϸ�Ԫ���Ƿ�Ϊ��СԪ��*/
//        {
//            if (a[k][maxj] < max)/*���������С�ģ�������������ѭ��*/
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)/*�������������������ɹ��ҵ�����*/
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
	int flag;//����Ƿ��ҵ�����
	int max, maxj;//maxΪ�����е����ֵ�� maxjΪ���Ԫ�ص��к�
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
			printf("����İ���Ϊa[%d][%d]=%d\n", i, maxj, max);
			break;
		}
	}
	if (!flag)
		printf("It's not exist!\n");
	return 0;
}