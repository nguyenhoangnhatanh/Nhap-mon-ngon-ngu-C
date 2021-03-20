#include<stdio.h>
 
/**
 * Tim uoc so chung lon nhat (USCLN)
 */
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
 
/**
 * Ham main
 */
int main() {
 int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    // tinh USCLN cua a và b
    printf("USCLN cua %d va %d la: %d", a, b, USCLN(a, b));
