#include <stdio.h>

int main(void) {

  float soma[10];
  float total = 0;

  for (int i = 0; i <= 9; i++) {
    soma[i] = 10;
    total = total + soma[i];
  }
  printf("%.2f\n", total);
}
