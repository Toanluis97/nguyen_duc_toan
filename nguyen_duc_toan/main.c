#include<stdio.h>
int arr_sum(int* arr, int arr_num);
float arr_avg_odd(int* arr, int arr_num);
int arr_max_index(int* arr, int arr_num);
void replace_0(int* arr, int arr_num);
int arr_print_odd(int* arr, int arr_num);
int arr_max(int* arr, int arr_num);


void main()
{
	int arr[5] = {1,120,78,35,56};

	//Bai 1: Tinh tong cac gia tri trong mang
	int sum = 0;
	sum = arr_sum(arr, 5);
	printf("Bai 1: Tong cac gia tri trong mang la:%d\n", sum);

	//Bai 2: Tinh trung binh cong cac so le trong mang
	float avg = 0;
	avg = arr_avg_odd(arr, 5);
	printf("Bai 2: Trung binh cong cac so le trong mang la:%0.2f\n", avg);

	//Bai 3: In ra vi tri cua so lon nhat trong mang
	int index = 0;
	index = arr_max_index(arr, 5);
	printf("Bai 3: Vi tri cua phan tu lon nhat trong mang la:arr[%d]\n", index);

    //Bai 4: Thay the cac so am trong mang bang 0
	printf("Bai 4: Thay the cac so am trong mang bang 0:");
	replace_0(arr, 5);

	//Bai 5: In ra cac so le trong mang
	printf("Bai 5: In ra cac so le trong mang:");
	arr_print_odd(arr, 5);

	//Bai 6: In ra cac gia tri la so nguyen to trong mang



	//Bai 7: In ra gia tri lon nhat trong mang
	int max;
	max = arr_max(arr, 5);
	printf("\nBai 7: Gia tri lon nhat trong mang la:%d", max);
}

	
