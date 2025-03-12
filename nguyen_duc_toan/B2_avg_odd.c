/*
Tinh trung binh cong cac so le trong mang
*/
float arr_avg_odd(int* arr, int arr_num)
{
	float arr_avg_odd = 0;
	int odd_num = 0;
	int arr_sum_odd = 0;
	for (int i = 0; i < arr_num; i++)
		if (arr[i] % 2 != 0)
		{
			arr_sum_odd += arr[i];
			odd_num++;
			arr_avg_odd = (float)arr_sum_odd / odd_num;
		}
	return arr_avg_odd;
}