/*
In ra vi tri cua so lon nhat trong mang
*/
int arr_max_index (int* arr, int arr_sum)
{
	int arr_max = 0;
	int index = 0;
	for (int i = 0; i < arr_sum; i++)
		if (arr[i] > arr_max)
		{
			arr_max = arr[i];
			index = i;
		}
	return index;
}