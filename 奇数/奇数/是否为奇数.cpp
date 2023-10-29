#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d", &a);
	b = a % 2;
	if (b == 1)
		printf("是奇数");	
	else
		printf("不是奇数");
	return 0;
}