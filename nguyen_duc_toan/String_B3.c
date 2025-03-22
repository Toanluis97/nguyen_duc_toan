//Xay dung ham chuyen chu thuong thanh chu hoa
void convert_str(char* str)
{
	for (int i = 0; str[i] != 0; i++)
		if ((str[i] >= 97) && (str[i] <= 122))
			printf("%c", str[i] - 32);
		else
			printf("%c", str[i]);
}