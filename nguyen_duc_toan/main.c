#include <stdio.h>
#include "math.h"
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