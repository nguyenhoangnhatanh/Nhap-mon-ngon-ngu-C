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

float solonnhat(){//Gi� tra tri cua ham solonnhat()
  
  if(a>b &&a>c)//dk a>b v� a>c
 printf("%g",a);//neu a l� so lon nhat thi in ra man hinh
   
  if (b>a&& b>c)
 printf("%g",b);//neu b l� so lon nhat th� in ra man hinh

  if (c>a&&c>b)
 printf("%g",c);//neu c l� so lon nhat th� in ra man hinh
 return 0;
}
