#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float num[10], total = 0;

  for(int i = 0; i < 10; i++) {

    num[i] = rand() % 100;
    total = total + num[i];

  }

  printf("%.2f", total / (sizeof(num) / sizeof(num[0])));

}
