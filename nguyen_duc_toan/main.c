#include <stdio.h>
void main()
{
	int arr[5] = { 1,5, 78, 35,56 };
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max la:%d", max);
}