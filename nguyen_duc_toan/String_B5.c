//Xay dung ham in hoa chu cai dau tien cua tu trong chuoi
void first_char_str(char* str)
{
	int count_word = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[0] >= 97) && (str[0] <= 122))
			str[0] = str[0] - 32;
		if (str[i] == 32)
			if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
				str[i + 1] = str[i + 1] - 32;
	}
	for (int i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
}