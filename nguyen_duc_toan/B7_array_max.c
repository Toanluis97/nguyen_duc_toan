int arr_max(int* arr, int arr_sum)
{
	int arr_max = arr[0];
	for (int i = 0; i < arr_sum; i++)
	{
		if (arr[i]>arr_max)
		arr_max = arr[i];
	}
	return arr_max;
}