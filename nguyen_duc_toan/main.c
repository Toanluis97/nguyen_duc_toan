#include <stdio.h>
void main()
{
	int arr[5] = { 1,5, 10, 35,56 };
	int max;
	for (int i = 0; i < 5; i++)
	{
		max = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max la:%d", max);
}