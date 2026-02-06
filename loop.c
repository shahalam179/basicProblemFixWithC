#include <stdio.h>
//Calcualte first 10 natural numbers
int main(void) {
  int sum = 0;

  // Loop to calculate the sum of the first 10 natural numbers
  for (int i = 1; i <= 10; i++) {
    sum += i; // Add the current number to the sum
  }

  // Display the result
  printf("The sum of the first 10 natural numbers is: %d\n", sum);

  return 0;
}
