#include <stdio.h>
#include <stdlib.h>

int main() {
  float sqrt, f, upper, lower;
  printf("Enter number: ");
  scanf("%f", &f);
  lower = 0;
  upper = f;
  sqrt = (lower + upper) / 2.0;
  while(fabs((sqrt*sqrt)-f) > 0.000001) {
    if(sqrt*sqrt < f) {
      lower = sqrt;
    }
    else {
      upper = sqrt;
    }
    sqrt = (lower+upper)/2.0;
  }
  printf("Square root of %.2f is %.3f", f, sqrt);
  return 0;
}