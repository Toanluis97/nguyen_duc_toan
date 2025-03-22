
void arr_increase(int* arr, int arr_num)
{
	for (int i = 0; i < arr_num - 1; i++)
	{
		int temp = arr[i];
		if (arr[i] > arr[i + 1])
		{
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
}