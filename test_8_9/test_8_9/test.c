
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a, b, max;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	
//		if (a >= b)
//		{
//			max = a;
//		}
//		else
//		{
//			max = b;
//		}
//		printf("���ֵ�ǣ�%d\n", max);
//		return 0;
//}

//2����һ���ú�����װ�����ֵ

//int max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int a, b;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	printf("%d", max(a, b));
//	system("pause");
//	return 0;
//}

// ������ �ú궨�嶨�������ֵ
#define MAX(A,B) ((A > B) ? (A) : (B))
int main()
{
	int a, b;
	printf("��������������");
	scanf("%d%d", &a, &b);
	printf("���ֵΪ��%d\n", MAX(a, b));
	system("pause");
	return 0;
}