#include <stdio.h>

int sum (int a, int b, int c) {
  int sum = 0;
  sum = a + b + c;
  return sum;
}
//tính toán dùng hàm int vì int có return
void tong (int a, int b, int c) {
  int sum = 0;
  printf ("(ham void) tong cua a, b, c = %d\n", a + b + c);
}
int main () {
  int a, b, c;
  printf ("Nhap a = ");
  scanf ("%d", &a);
  printf ("Nhap b = ");
  scanf ("%d", &b);
  printf ("Nhap c = ");
  scanf ("%d", &c);
  tong (a, b, c);
  //goi lai hàm void tong de hien thi hàm dó ra màn hình
  printf ("(ham int) tong cua a, b, c = %d", sum (a, b, c));
  //printf goi la hàm sum (hien thi ham sum ra man hinh)
  return 0;
}
