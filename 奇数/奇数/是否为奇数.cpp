#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d", &a);
	b = a % 2;
	if (b == 1)
		printf("������");	
	else
		printf("��������");
	return 0;
}