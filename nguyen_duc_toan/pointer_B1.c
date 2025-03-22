/*
Xay dung ham tinh tong cac gia tri trong mang su dung con tro
*/
int arr_sum_ptr(int* arr, int arr_num)
{
	int arr_sum = 0;
	for (int i = 0; i < arr_num; i++)
		arr_sum += *(arr+i);
	return arr_sum;
}  