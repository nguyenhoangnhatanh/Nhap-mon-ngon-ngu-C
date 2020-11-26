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
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (double)(a / b );
	printf("a + b = %d, a - b = %d, a * b = %d, a / b = %f",tong, hieu, tich, thuong);
	return 0;
}
	

