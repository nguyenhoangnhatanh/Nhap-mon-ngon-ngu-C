#include <stdio.h>

int sum (int a, int b, int c) {
  int sum = 0;
  sum = a + b + c;
  return sum;
}
//t�nh to�n d�ng h�m int v� int c� return
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
  //goi lai h�m void tong de hien thi h�m d� ra m�n h�nh
  printf ("(ham int) tong cua a, b, c = %d", sum (a, b, c));
  //printf goi la h�m sum (hien thi ham sum ra man hinh)
  return 0;
}
