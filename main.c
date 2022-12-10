#include <stdio.h>

int main(void) {
  int a,b;
  printf(" enter a,b values\n");
  scanf("%d %d",&a,&b);
  printf("%d",a*=b);
  return 0;
}