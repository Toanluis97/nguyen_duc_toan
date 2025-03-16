#include<stdio.h>

void main()
{
	//khai bao chuoi. In ra so luong ky tu trong chuoi
	char str[] = "abcXYZT";
	//In ra ky tu viet hoa trong chuoi
	int x = 0;
	for (int i=0; str[i]!=0;i++)
	if ((str[i] >= 65) && (str[i] <= 90))
	{
		x = str[i];
		printf("%c", x);
	}
}

	
