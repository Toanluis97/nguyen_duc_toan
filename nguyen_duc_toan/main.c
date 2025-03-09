#include<stdio.h>
int cong(int a, int b);
int tru(int c, int d);
int nhan(int e, int f);
int chia(int g, int h);
void main()
{
	int x = cong(1, 2);
	int y = tru(3, 4);
	int z = nhan(4, 5);
	int t = chia(8, 4);
	printf("%d \n", x);
	printf("%d \n", y);
	printf("%d \n", z);
	printf("%d \n", t);
	printf("Hello World!");
}