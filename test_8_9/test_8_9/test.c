
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a, b, max;
//	printf("请输入两个数：");
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
//		printf("最大值是：%d\n", max);
//		return 0;
//}

//2、用一个用函数封装求最大值

//int max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int a, b;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	printf("%d", max(a, b));
//	system("pause");
//	return 0;
//}

// 第三种 用宏定义定义求最大值
#define MAX(A,B) ((A > B) ? (A) : (B))
int main()
{
	int a, b;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	printf("最大值为：%d\n", MAX(a, b));
	system("pause");
	return 0;
}