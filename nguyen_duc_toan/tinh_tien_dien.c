/*
Tinh tien dien sau thue tu so luong dien tieu thu nhap vao dua theo cac bac sau day
Bậc 1: Cho kWh từ 0 - 50  --> 1.893 VND/1KWh
Bậc 2: Cho kWh từ 51 - 100 --> 1.734 VND/1KWh
Bậc 3: Cho kWh từ 101 - 200 --> 2.014 VND/1KWh
Bậc 4: Cho kWh từ 201 - 300 --> 2.536 VND/1KWh
Bậc 5: Cho kWh từ 301 - 400 --> 2.834 VND/1KWh
Bậc 6: Cho kWh từ 401 trở lên --> 2.927 VND/1KWh
*/
#include <stdio.h>
#include <math.h>
long long tien_dien (int so_dien_tieu_thu)
{
	int so_dien_tieu_thu;
	printf("Nhap vao so dien tieu thu:");
	scanf_s("%d", &so_dien_tieu_thu);
	int san_luong;
	int don_gia;
	int bac = 1;
	long long thanh_tien1 = 0;
	long long thanh_tien2 = 0;
	long long thanh_tien3 = 0;
	long long thanh_tien4 = 0;
	long long thanh_tien5 = 0;
	long long thanh_tien6 = 0;
	long long bill_total = 0;
	switch (bac)
	{
	case 1:
		if (so_dien_tieu_thu > 52)
		{
			san_luong = 52;
			don_gia = 1893;
			thanh_tien1 = don_gia * san_luong;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien1);
			bill_total = thanh_tien1;
			bac++;
		}
		else
		{
			don_gia = 1893;
			san_luong = so_dien_tieu_thu;
			thanh_tien1 = san_luong * don_gia;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien1);
			bill_total = thanh_tien1;
			break;
		}
	case 2:
		if (so_dien_tieu_thu > 104)
		{
			san_luong = 52;
			don_gia = 1956;
			thanh_tien2 = don_gia * san_luong;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien2);
			bill_total = bill_total + thanh_tien2;
			bac++;
		}
		else
		{
			don_gia = 1956;
			san_luong = so_dien_tieu_thu - 52;
			thanh_tien2 = san_luong * don_gia;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien2);
			bill_total = thanh_tien2 + bill_total;
			break;
		}
	case 3:
		if (so_dien_tieu_thu > 207)
		{
			san_luong = 103;
			don_gia = 2271;
			thanh_tien3 = don_gia * san_luong;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien3);
			bill_total = bill_total + thanh_tien3;
			bac++;
		}
		else
		{
			don_gia = 2271;
			san_luong = so_dien_tieu_thu - 104;
			thanh_tien3 = san_luong * don_gia;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien3);
			bill_total = thanh_tien3 + bill_total;
			break;
		}
	case 4:
		if (so_dien_tieu_thu > 310)
		{
			san_luong = 103;
			don_gia = 2860;
			thanh_tien4 = don_gia * san_luong;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien4);
			bill_total = bill_total + thanh_tien4;
			bac++;
		}
		else
		{
			don_gia = 2860;
			san_luong = so_dien_tieu_thu - 207;
			thanh_tien4 = san_luong * don_gia;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien4);
			bill_total = thanh_tien4 + bill_total;
			break;
		}
	case 5:
		if (so_dien_tieu_thu > 413)
		{
			san_luong = 103;
			don_gia = 3197;
			thanh_tien5 = don_gia * san_luong;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien5);
			bill_total = bill_total + thanh_tien5;
			bac++;
		}
		else
		{
			don_gia = 3197;
			san_luong = so_dien_tieu_thu - 310;
			thanh_tien5 = san_luong * don_gia;
			printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien5);
			bill_total = thanh_tien5 + bill_total;
			break;
		}
	case 6:
	{
		san_luong = so_dien_tieu_thu - 413;
		don_gia = 3302;
		thanh_tien6 = don_gia * san_luong;
		printf("Bac:%d; Don gia:%d; San luong:%d; Thanh tien:%lld \n", bac, don_gia, san_luong, thanh_tien6);
		bill_total = bill_total + thanh_tien6;
	}
	}
	printf("Tong hoa don truoc thue:%lld \n", bill_total);
	long long vat;
	vat = 0.08 * bill_total;
	printf("Thue gia tri gia tang (8%%):%lld \n", vat);
	printf("Tong hoa don sau thue:%lld \n", vat + bill_total);
	return tien_dien;
}
