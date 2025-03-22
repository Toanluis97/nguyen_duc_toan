//xay dung ham dem co bao nhieu ky tu space trong chuoi
int count_space_str(char* str)
{
	int count_space = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32)
			count_space++;
	}
	return count_space;
}