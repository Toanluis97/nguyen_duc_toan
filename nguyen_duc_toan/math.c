#include<stdio.h>
/*
Chuc nang: tao mot ham cong tong cua hai so nguyen a va b
input
 int a: so nguyen thu nhat
 int b: so nguyen thu hai
 Output
 int: ket qua
*/
int cong(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}
int tru(int a, int b)
{
	int tru;
	tru = a - b;
	return tru;
}
int nhan(int a, int b)
{
	int nhan;
	nhan = a * b;
	return nhan;
}
int chia(int a, int b)
{
	int chia;
	chia = a / b;
	return chia;
}