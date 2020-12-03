#include <stdio.h>

int main(void) {
  int m;
  // nhap khoi luong don vi m tu ban phim
  printf("nhap m = ");
  scanf("%d", &m);
  printf("kg = %dg\n", m * 1000);
  printf("KG    |    G\n");
  printf("%d", m);
  printf("    |    %d", m * 1000);
  return 0;
}
