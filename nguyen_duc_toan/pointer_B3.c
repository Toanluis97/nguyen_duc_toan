/*
In ra vi tri cua so lon nhat trong mang su dung con tro
*/
int arr_max_index_ptr(int* arr, int arr_num)
{
	int arr_max = 0;
	int index = 0;
	for (int i = 0; i < arr_num; i++)
		if (*(arr+i) > arr_max)
		{
			arr_max = *(arr + i);
			index = i;
		}
	return index;
}