#include <stdio.h>

int main(void) {

  float num;
  int i = 1;
  printf("Insert a number: ");
  scanf("%f", &num);

  while (i <= 10) {
    printf("%.2f\n", num * i);
    i++;
  }

}
