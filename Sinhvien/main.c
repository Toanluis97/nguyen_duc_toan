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
//điểm trung bình = (điểm toán + điểm văn) / 2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char ten[50];
	int tuoi;
	char gioitinh[10];
	float toan, van, tb;
	char xeploai[20];

} hocsinh;

void tinhDiemVaXepLoai(hocsinh* hs) 
{
	hs->tb = (hs->toan + hs->van) / 2;
	if (hs->tb >= 8.0)
		strcpy(hs->xeploai, "Gioi");
	else if (hs->tb >= 6.5)
		strcpy(hs->xeploai, "Kha");
	else if (hs->tb >= 5.0)
		strcpy(hs->xeploai, "Trung Binh");
	else
		strcpy(hs->xeploai, "Yeu");
}

void inDanhSach(hocsinh * ds, int n) 
{
		printf("\n===== DANH SACH HOC SINH =====\n");
		for (int i = 0; i < n; i++) {
			printf("\nHoc sinh thu %d:\n", i + 1);
			printf("Ten: %s\n", ds[i].ten);
			printf("Tuoi: %d\n", ds[i].tuoi);
			printf("Gioi tinh: %s\n", ds[i].gioitinh);
			printf("Diem Toan: %.2f\n", ds[i].toan);
			printf("Diem Van: %.2f\n", ds[i].van);
			printf("Diem TB: %.2f\n", ds[i].tb);
			printf("Xep loai: %s\n", ds[i].xeploai);
		}
}

void inHocSinhGioiNhat(hocsinh* ds, int n) {
	float max = ds[0].tb;
	int idx = 0;
	for (int i = 1; i < n; i++) {
		if (ds[i].tb > max) {
			max = ds[i].tb;
			idx = i;
		}
	}
	printf("\nHoc sinh co diem trung binh cao nhat:\n");
	printf("Ten: %s | TB: %.2f\n", ds[idx].ten, ds[idx].tb);
}
void sapXepTheoDiemTB(hocsinh* ds, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[i].tb < ds[j].tb) {
				hocsinh tmp = ds[i];
				ds[i] = ds[j];
				ds[j] = tmp;
			}
		}
	}
}
int main()
{
	
	int N;
	printf("Nhap vao so luong hoc sinh:");
	scanf_s("%d", &N);
	getchar();//xoa ky tu xuong dong con xot lai trong bo dem

	/*
	Đầu tiên cần phải cấp phát bộ nhớ động cho mảng học sinh vì kích thước mảng không biết trước
	Nếu không dùng cấp phát động thì phải xác định kích thước mảng cố định trước
	ví dụ:
	hocsinh ds[100];
	Nếu người dùng chỉ nhập 5 học sinh thì chương trình vẫn cấp phát 100 phần tử -> lãng phí bộ nhớ
	Nếu người dùng nhập 101 học sinh thì chương trình lỗi ngay vì vượt quá kích thước đã khai báo
	2. Khi nào cần cấp phát động
	- Khi ko biết trước kích thước mảng tại thời điểm biên dịch
	- khi muốn viết chương trình linh hoạt theo đầu vào của người dùng
	- Khi cần quản lý bộ nhớ hiệu quả, dùng bao nhiêu cấp phát bấy nhiêu
	*/

	hocsinh* ds_hocsinh = (hocsinh*)malloc(N * sizeof(hocsinh));
	//Cấp phát mảng kiểu dữ liệu struct hocsinh gồm danh sách N học sinh
	if (ds_hocsinh == NULL) {
		printf("Loi cap phat bo nho!\n");
		return 1;
	}
	for (int i = 0; i < N; i++)
	{
		printf("Nhap thong tin hoc sinh thu %d\n",i+1);

		//Nhap vao ten hoc sinh
		//Su dung fgets(...) de nhap chuoi tu ban phim bao gom ca khoang trang
		printf("Nhap ten: ");
		fgets(ds_hocsinh[i].ten, sizeof(ds_hocsinh[i].ten), stdin);
		size_t len = strlen(ds_hocsinh[i].ten);
		/*
		Cần phải xóa \n sau khi dùng fgets() vì khi nhấn Enter thì fgets sẽ lưu luôn ký tự \n vào chuỗi nếu còn chỗ
		nếu không xóa thì khi in ra chuỗi sẽ có xuống dòng không mong muốn
		*/
		if (len > 0 && ds_hocsinh[i].ten[len - 1] == '\n')
			ds_hocsinh[i].ten[len - 1] = '\0';

		//Nhap tuoi
		printf("Nhap tuoi: ");
		scanf_s("%d", &ds_hocsinh[i].tuoi);
		getchar(); // Xóa ký tự xuống dòng sau khi nhập tuổi

		//Nhap vao gioi tinh hoc sinh
		printf("Nhap gioi tinh: ");
		fgets(ds_hocsinh[i].gioitinh, sizeof(ds_hocsinh[i].gioitinh), stdin);
		len = strlen(ds_hocsinh[i].gioitinh);
		if (len > 0 && ds_hocsinh[i].gioitinh[len - 1] == '\n')
			ds_hocsinh[i].gioitinh[len - 1] = '\0';

		printf("Nhap diem Toan: ");
		scanf_s("%f", &ds_hocsinh[i].toan);
		getchar(); // Xóa ký tự xuống dòng còn sót lại

		printf("Nhap diem Van: ");
		scanf_s("%f", &ds_hocsinh[i].van);
		getchar(); // Xóa ký tự xuống dòng còn sót lại
		tinhDiemVaXepLoai(&ds_hocsinh[i]);
	}

    inDanhSach(ds_hocsinh, N);
    inHocSinhGioiNhat(ds_hocsinh, N);
    sapXepTheoDiemTB(ds_hocsinh, N);
    printf("\n===== DANH SACH SAU KHI SAP XEP =====\n");
    inDanhSach(ds_hocsinh, N);
    // Giải phóng bộ nhớ đã cấp phát
    free(ds_hocsinh);
	return 0;
}