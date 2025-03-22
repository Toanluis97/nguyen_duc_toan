//Xay dung ham in ra so nguyen to trong mang su dung con tro
void arr_songuyento_ptr(int* arr, int arr_num)
{
	for (int i = 0; i < arr_num; i++)
	{
		if (*(arr + i) == 1 || *(arr + i) == 2)
			printf("%d ", *(arr + i));
		for (int x = 2; x < *(arr + i); x++)
		{
			if (*(arr + i) % x == 0)
				break;
			else
			{
				if (x == *(arr + i) - 1)
					printf("%d ", *(arr + i));
				else;
			}
		}
	}
}
