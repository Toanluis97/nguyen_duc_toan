#include<stdio.h>
int cong(int a, int b);
int tru(int a, int b);
int nhan(int a, int b);
int chia(int a, int b);
long long tiendien(int so_dien_tieu_thu);
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
	printf("Hello World! \n");
	long long td = tiendien(1000);
}