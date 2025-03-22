#include<stdio.h>
int count_str(char* str);
int count_space_str(char* str);
void convert_str(char* str);
int count_word_str(char* str);
void first_char_str(char* str);
void c_location(char* str);
void main()
{
	/*
	printf("Cac ky tu viet hoa trong chuoi la:");
	//In ra ky tu viet hoa trong chuoi
	for (int i=0;str[i]!=0;i++)
	if ((str[i] >= 65) && (str[i] <= 90))
		printf("%c", str[i]);
	
	*/
	char str[] = "toan luis abc xyz";
	//So ky tu trong chuoi
	int count;
	count = count_str(str);
	printf("So ky tu trong chuoi la:%d\n", count);

	//So ky tu space trong chuoi
	int count_space;
	count_space = count_space_str(str);
	printf("So ky tu space trong chuoi la:%d\n", count_space);
	
	//Chuyen ky tu thuong thanh in hoa
	printf("Chuyen chu viet thuong thanh chu hoa:");
	convert_str(str);

	//Dem so tu trong chuoi
	int count_word;
	count_word = count_word_str(str);
	printf("\nSo ky tu space trong chuoi la:%d\n", count_word);

	//In hoa chu cai dau tien cua tu trong chuoi
	printf("In hoa chu cai dau tien cua tu trong chuoi:");
	first_char_str(str);

	//Dia chi cua ky tu c trong chuoi
	printf("\nDia chi cua ky tu 'c' trong chuoi:");
	c_location(str);
}

	
