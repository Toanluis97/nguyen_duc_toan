#include <stdio.h>
/*
Tim gia tri lon nhat trong mang
Input: 
mang

*/
void main()
{
	int arr[5] = { 1,100, 78, 35,56 };
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max la:%d", max);
}