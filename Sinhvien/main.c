//1. scan từ bàn phím n.sao đó nhập n học sinh
//2. viết hàm in ra màn hình danh sách n học sinh này
//3. viết hàm in ra học sinh có điểm trung bình cao nhất
//4. viết hàm sắp xếp danh sách học sinh theo điểm trung bình từ cao đến thấp
//học sinh :
//tên
//tuổi
//gioi tinh
//điểm toán
//điểm văn
//diem trung binh
//xep loai
//
//điểm trung bình = (điểm toán + điểm văn) / 2
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char ten[50];
	int tuoi;
	char gioitinh[10];
	float toan, van, tb;

} hocsinh;
int main()
{
	
	int N;
	printf("Nhap vao so luong hoc sinh:");
	scanf_s("%d", &N);
	getchar();//xoa ky tu xuong dong con xot lai trong bo dem
	//Cap phat bo nho dong cho mang hoc sinh
	hocsinh* ds_hocsinh = (hocsinh*)malloc(N * sizeof(hocsinh));
	if (ds_hocsinh == NULL) {
		printf("Loi cap phat bo nho!\n");
		return 1;
	}
	for (int i = 0; i < N; i++)
	{
		printf("Nhap thong tin hoc sinh thu %d\n",i+1);

		//Nhap vao ten hoc sinh
		printf("Nhap ten: ");
		fgets(ds_hocsinh[i].ten, sizeof(ds_hocsinh[i].ten), stdin);
		size_t len = strlen(ds_hocsinh[i].ten);
		if (len > 0 && ds_hocsinh[i].ten[len - 1] == '\n')
			ds_hocsinh[i].ten[len - 1] = '\0'; // Xóa ký tự xuống dòng

		//Nhap tuoi
		printf("Nhap tuoi: ");
		scanf_s("%d", &ds_hocsinh[i].tuoi);
		getchar(); // Xóa ký tự xuống dòng sau khi nhập số nguyên

		//Nhap vao gioi tinh hoc sinh
		printf("Nhap gioi tinh: ");
		fgets(ds_hocsinh[i].gioitinh, sizeof(ds_hocsinh[i].gioitinh), stdin);
		len = strlen(ds_hocsinh[i].gioitinh);
		if (len > 0 && ds_hocsinh[i].gioitinh[len - 1] == '\n')
			ds_hocsinh[i].gioitinh[len - 1] = '\0';

		printf("Nhap diem Toan: ");
		scanf_s("%f", &ds_hocsinh[i].toan);
		printf("Nhap diem Van: ");
		scanf_s("%f", &ds_hocsinh[i].van);
		getchar(); // Xóa ký tự xuống dòng còn sót lại
	}

	printf("\n===== DANH SACH HOC SINH =====\n");
	for (int i = 0; i < N; i++) {
		printf("\nHoc sinh thu %d:\n", i+1);
		printf("Ten: %s\n", ds_hocsinh[i].ten);
		printf("Tuoi: %d\n", ds_hocsinh[i].tuoi);
		printf("Gioi tinh: %s\n", ds_hocsinh[i].gioitinh);
		printf("Diem Toan: %.2f\n", ds_hocsinh[i].toan);
		printf("Diem Van: %.2f\n", ds_hocsinh[i].van);
	}

	// Giải phóng bộ nhớ đã cấp phát
	free(ds_hocsinh);

	return 0;
}