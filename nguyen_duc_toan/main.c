#include<stdio.h>

void main()
{
	//khai bao chuoi. In ra so luong ky tu trong chuoi
	char str[] = "hello";
	int num = 0;
	for (int i = 0; str[i]!= '\0';i++)
		num++;
	printf("%d", num);
}

	
