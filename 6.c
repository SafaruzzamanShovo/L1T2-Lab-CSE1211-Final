#include <stdio.h>
#include <math.h>



int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);

  int dec = 0, i = 0, rem;
  long long m=n;
  while (n>0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    i++;
  }


  printf("%lld in binary = %d in decimal", m , dec);
  return 0;
}
