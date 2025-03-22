#include<stdio.h>
int count_str(char* str);
int count_space_str(char* str);
void convert_str(char* str);
int count_word_str(char* str);
void first_char_str(char* str);
void c_location(char* str);
void swap(int a, int b);
int arr_sum_ptr(int* arr, int arr_num);
float arr_avg_odd_ptr(int* arr, int arr_num);
int arr_max_index_ptr(int* arr, int arr_sum);
void replace_0_ptr(int* arr, int arr_num);
void arr_print_odd_ptr(int* arr, int arr_num);
void arr_songuyento_ptr(int* arr, int arr_sum);
int arr_max_ptr(int* arr, int arr_num);
void main()
{
	printf("***BAI TAP VE STRING***\n");
	char str[] = "toan luis abc xyz";
	
	printf("Chuoi ban dau la:%s\n", str);
	//String B1: So ky tu trong chuoi
	int count;
	count = count_str(str);
	printf("String B1:So ky tu trong chuoi la:%d\n", count);

	//String B2:So ky tu space trong chuoi
	int count_space;
	count_space = count_space_str(str);
	printf("String B2:So ky tu space trong chuoi la:%d\n", count_space);
	
	//String B3:Chuyen ky tu thuong thanh in hoa
	printf("String B3:Chuyen chu viet thuong thanh chu hoa:");
	convert_str(str);

	//String B4:Dem so tu trong chuoi
	int count_word;
	count_word = count_word_str(str);
	printf("\nString B4:So tu trong chuoi la:%d\n", count_word);

	//String B5:In hoa chu cai dau tien cua tu trong chuoi
	printf("String B5:In hoa chu cai dau tien cua tu trong chuoi:");
	first_char_str(str);

	//String B6:Dia chi cua ky tu c trong chuoi
	printf("\nString B6:Dia chi cua ky tu 'c' trong chuoi:");
	c_location(str);


	printf("\n\n***BAI TAP VE CON TRO***\n");
  	int arr[5] = { -12, 25, 34, 23, 9 };

	for (int i = 0; i < 5; i++)
	printf("a[%d]=%d\n", i, arr[i]);

	//Pointer B1: Tinh tong gia tri cac phan tu trong mang su dung con tro
	int sum_arr;
	sum_arr = arr_sum_ptr(arr, 5);
	printf("Pointer B1: Tong gia tri cac phan tu trong mang su dung ham con tro la:%d", sum_arr);

	//Pointer B2: Tinh trung binh cong cac so le trong mang su dung ham con tro

	int avg_odd;
	avg_odd = arr_avg_odd_ptr(arr, 5);
	printf("\nPointer B2: Trung binh cong cac so le trong mang su dung ham con tro la:%d", avg_odd);

	//Pointer B3: Vi tri cua so lon nhat trong mang su dung con tro
	
	int arr_max_index;
	arr_max_index = arr_max_index_ptr(arr, 5);
	printf("\nPointer B3: Vi tri cua so lon nhat trong mang su dung ham con tro la:%d", arr_max_index);

	//Pointer B4: Thay the cac so am trong mang bang 0 su dung con tro
	printf("\nPointer B4: Thay the cac so am trong mang bang 0 su dung con tro:");
	replace_0_ptr(arr,5);

	//Pointer B5: In ra cac gia tri le trong mang su dung con tro
	printf("Pointer B5: In ra cac gia tri le trong mang su dung con tro:");
	arr_print_odd_ptr(arr, 5);

	//Pointer B6: In ra cac gia tri la so nguyen to trong mang su dung con tro

	printf("\nPointer B6: In ra cac gia tri la so nguyen to trong mang su dung con tro:");
	arr_songuyento_ptr(arr, 5);

	// Pointer B7: In ra gia tri lon nhat trong mang su dung con tro
	int arr_max;
	arr_max=arr_max_ptr(arr, 5);
	printf("\nPointer B7: Gia tri lon nhat trong mang su dung con tro la:%d", arr_max);

	//Pointer B8: Hoan vi hai so nguyen su dung con tro
	int a = 1000, b = 2000;
	printf("\nPointer B8: Hoan vi hai so a =%d va b =%d la:", a, b);
	swap(&a, &b);
	printf("%d %d", a, b);

}

	
