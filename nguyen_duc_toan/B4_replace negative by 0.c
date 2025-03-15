/*
Viet ham thay the cac so am trong mang bang 0
*/

void replace_0(int* arr, int arr_num)
{
	for (int i = 0; i < arr_num; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = 0;
			if(i==arr_num-1)
			printf("%d\n", arr[i]);
			else
			printf("%d, ", arr[i]);
		}
		else
		{
			if (i == arr_num-1)
				printf("%d\n", arr[i]);
			else
				printf("%d, ", arr[i]);
		}
	}
}