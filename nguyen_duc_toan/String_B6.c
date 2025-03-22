//Xay dung ham tim ky tu c trong chuoi str, ham tra ve dia chi cua ky tu trong chuoi
void c_location(char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == 99)
			printf("%d", &str[i]);
}