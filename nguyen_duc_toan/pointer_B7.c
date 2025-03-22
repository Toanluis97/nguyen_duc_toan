// Xay dung ham in ra gia tri lon nhat trong mang
int arr_max_ptr(int* arr, int arr_num)
{
	int arr_max = *arr;
	for (int i = 0; i < arr_num; i++)
	{
		if (*(arr + i) > arr_max)
			arr_max = *(arr + i);
	}
	return arr_max;
}