void arr_songuyento(int* arr, int arr_sum)
{
	for (int i = 0; i < arr_sum; i++)
	{
		if (arr[i] == 1 || arr[i] == 2)
			printf("%d ", arr[i]);
		for (int x = 2; x < arr[i]; x++)
		{
			if (arr[i] % x == 0)
				break;
			else
			{
				if (x == arr[i] - 1)
					printf("%d ", arr[i]);
				else;
			}
		}
	}
}
		