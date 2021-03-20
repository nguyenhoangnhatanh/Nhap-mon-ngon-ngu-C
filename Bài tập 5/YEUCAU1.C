#include<stdio.h>

int main()
{
  //khai báo biến
  int a;
  printf("Nhap so nguyen tu nhien: ");
  scanf("%d", &a);
  int s = 0;
  for (int i = 1; i < a; i++) 
  if (a%i == 0)
    s += i;
  if (s == a)
    printf("%d la so hoan hao", a);
  else
    printf("%d khong phai la so hoan hao", a);
  return 0;
}
