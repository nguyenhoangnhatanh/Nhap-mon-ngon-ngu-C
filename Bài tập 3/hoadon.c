#include <stdio.h>
int main (){
	//khai bao bien don gia so luong
	int dongia, soluong, thanhtien;
	
	//hien thi don gia 
	printf ("nhap don gia = ");
	//nhap gia tri
	scanf ("%d", &dongia);
	//hien thi so luong
	printf ("nhap so luong = ");
	//nhap gia tri
	scanf ("%d", & soluong);
	thanhtien = soluong  *  dongia;
	//mua 5 san pham don gia >= 500000 giam 50%
	if (soluong >= 5){
		if (dongia >= 500000)
		//hien thi so tien can thanh toan
		printf ("so tien can thanh toan = %d ", thanhtien * 50/100);
	} else {
		printf ("so tien can thanh toan = %d ");
	}
	
	
	return 0;
}
