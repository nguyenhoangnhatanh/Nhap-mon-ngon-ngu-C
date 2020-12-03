#include <stdio.h>

int main (void){
	//khai bao R kieu double va gan R=2.25
	double R;
		R = 1.5;
		
	//khai bao PI=3.14 kieu double	
	double PI =3.14;
	
	//hien thi chu vi va dien tich ra man hinh 
	printf("Chu vi\t   Dien Tich\n");
	
	//khai bao CV va DT
	double CV , DT;
	
	//gan va ep kieu double VC voi cong thuc 2*R*PI va DT voi cong thuc la R*R*PI 
	CV =(double) 2*R*PI;
	DT =(double) R*R*PI;
	
	//hien thi ket qua CV va DT ra man hinh
	printf("%g\t   %g",CV,DT);
	
	return 0;
}
