#include<stdio.h>

void main()
{
	char str[] = "abcxyzTQPRS";
	printf("Cac ky tu viet hoa trong chuoi la:");
	//In ra ky tu viet hoa trong chuoi
	for (int i=0;str[i]!=0;i++)
	if ((str[i] >= 65) && (str[i] <= 90))
	{
		printf("%c", str[i]);
	}
	printf("\nChuyen chu viet thuong thanh chu hoa:");
	//Chuyen ky tu thuong thanh in hoa
	for (int i = 0; str[i] != 0; i++)
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			printf("%c", str[i] - 32);
		}
		else
			printf("%c", str[i]);

}

	
