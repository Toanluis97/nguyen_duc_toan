/*
Thay the cac so am trong mang bang 0
*/
#include<stdio.h>

void main1()
{
	int arr1[5] = { -1, -4, 5, 6, -9 };
	int arr2[5];
	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] < 0)
			arr2[i] = 0;
		else
			arr2[i] = arr1[i];
		printf("%d, ", arr2[i]);
	}
}