/*
1. Khái niệm về Struct:
- Là một kiểu dữ liệu do người dùng định nghĩa
- Giúp nhóm các kiểu dữ liệu khác nhau vào chung một đơn vị logic duy nhất
- Giúp dễ dàng tổ chức và quản lý dữ liệu so với việc khai báo từng biến riêng lẻ
2. Cú pháp khai báo struct
struct StructName {
    data_type member1;
    data_type member2;
    ...
};
3. Khai báo biến struct
Sử dụng typedef để tạo một alias (bí danh), giúp khai báo dễ dàng hơn:
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

Person person1, person2;  // Không cần viết "struct" nữa

*/
#include<stdio.h>
typedef struct
{
	int tu;
	int mau;
} phanso;

//Ham nhan hai phan so
phanso nhanphanso(phanso ps1, phanso ps2)
{
	phanso kq;
	kq.tu = ps1.tu * ps2.tu;
	kq.mau = ps1.mau * ps2.mau;
	return kq;
}
//Ham chia hai phan so
phanso chiaphanso(phanso ps1, phanso ps2)
{
	phanso kq;
	kq.tu = ps1.tu * ps2.mau;
	kq.mau = ps1.mau * ps2.tu;
	return kq;
}
//Ham cong hai phan so
phanso congphanso(phanso ps1, phanso ps2)
{
	phanso kq;
	kq.tu = ps1.tu * ps2.mau + ps2.tu*ps1.mau;
	kq.mau = ps1.mau * ps2.mau;
	return kq;
}

//Ham tru hai phan so
phanso truphanso(phanso ps1, phanso ps2)
{
	phanso kq;
	kq.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	kq.mau = ps1.mau * ps2.mau;
	return kq;
}
//Ham rut gon phan so
phanso rutgonphanso(phanso ps)
{
	phanso kq;
	int min,ucln;
	min = ps.tu;
	if (ps.mau < min)
		min = ps.mau;
	for (int i = min; i >= 1; i--)
	{
		if ((ps.tu % i == 0) && (ps.mau % i == 0))
		{
			ucln=i;
			break;
		}
	}
	kq.tu = ps.tu / ucln;
	kq.mau = ps.mau / ucln;
	return kq;
}

int  main()
{
	phanso a, b;
	printf("Nhap vao lan luot tu va mau cua phan so thu nhat:");
	scanf_s("%d %d", &a.tu, &a.mau);
	printf("Phan so thu nhat la:%d/%d\n", a.tu, a.mau);
	printf("Nhap vao lan luot tu va mau cua phan so thu hai:");
	scanf_s("%d %d", &b.tu, &b.mau);
	printf("Phan so thu hai la:%d/%d\n", b.tu, b.mau);
	//Ket qua nhan hai phan so
	phanso tich, tichrg;
	tich= nhanphanso(a, b);
	tichrg = rutgonphanso(tich);
	printf("Ket qua phep nhan hai phan so la:%d/%d\n", tichrg.tu, tichrg.mau);

	//Ket qua chia hai phan so
	phanso chia, chiarg;
	chia= chiaphanso(a, b);
	chiarg = rutgonphanso(chia);
	printf("Ket qua phep chia hai phan so la:%d/%d\n", chiarg.tu, chiarg.mau);

	//Ket qua cong hai phan so
	phanso cong, congrg;
	cong = congphanso(a, b);
	congrg = rutgonphanso(cong);
	printf("Ket qua phep cong hai phan so la:%d/%d\n", congrg.tu, congrg.mau);

	//Ket qua tru hai phan so
	phanso tru, trurg;
	tru = truphanso(a, b);
	trurg = rutgonphanso(tru);
	printf("Ket qua phep tru hai phan so la:%d/%d", trurg.tu, trurg.mau);
	return 0;
}

	
