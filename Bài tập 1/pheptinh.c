#include <stdio.h>

int main(){
	//khai bao bien a, b kieu int
	int a, b;
	//khoi tao bien a = 3
	a = 3;
	//khoi tao bien b = 5
	b = 5;
	//khai bao bien tong, hieu, tich, thuong
	int tong, hieu, tich;
	double thuong;
	//gan tong a+b, hieu = a-b, tich =a*b, thuong = a/b
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (double)(a / b );
	//hien thi cac bien tong, hien, tich, thuong theo dinh dang: a + b = 8, a - b = -2, a * b = 15, a / b = 0
	printf("a + b = %d, a - b = %d, a * b = %d, a / b = %f",tong, hieu, tich, thuong);
	//thay doi khai bao bien thuong va ap dung ep kieu de ket qua a/b = 0.6
	return 0;
}
	
