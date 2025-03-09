#include <stdio.h>
#include "math.h"
long long tiendien(int so_dien_tieu_thu);
void main()
{
	int x = cong(1, 2);
	int y = tru(3, 4);
	int z = nhan(4, 5);
	int t = chia(8, 4);
	printf("Cong:%d \n", x);
	printf("Tru:%d \n", y);
	printf("Nhan:%d \n", z);
	printf("Chia:%d \n", t);
	printf("Hello World! \n");
	long long td = tiendien(1000);
}