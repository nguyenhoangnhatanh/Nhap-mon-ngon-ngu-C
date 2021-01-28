//Khoi khai bao
#include<stdio.h>

int a, b, c;

//khoi ham main

  int main(){
    
    // nhap a, b, c tu ban phim
    
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);

  return 0;
}

int so_lon_nhat(); 

//khoi dinh nghia ham

float solonnhat(){//Giá tra tri cua ham solonnhat()
  
  if(a>b &&a>c)//dk a>b và a>c
 printf("%g",a);//neu a là so lon nhat thi in ra man hinh
   
  if (b>a&& b>c)
 printf("%g",b);//neu b là so lon nhat thì in ra man hinh

  if (c>a&&c>b)
 printf("%g",c);//neu c là so lon nhat thì in ra man hinh
 return 0;
}
