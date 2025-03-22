//Xay dung ham dem so tu trong chuoi
int count_word_str(char* str)
{
	int count_word = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32)
			count_word++;
	}
	count_word++;
	return count_word;
}