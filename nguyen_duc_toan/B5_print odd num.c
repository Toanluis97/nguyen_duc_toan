/*
Xay dung ham in ra cac gia tri le trong mang
*/
void arr_print_odd(int* arr, int arr_num)
{
	for (int i = 0; i < arr_num; i++)
		if (arr[i] % 2 != 0)
			printf("%d ",arr[i]);
}