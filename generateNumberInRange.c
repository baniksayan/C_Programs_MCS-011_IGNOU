#include <stdio.h>

// Custom pseudo-random number generator
int my_rand(int lower, int upper) {
  int seed = 10; // Replace with a different seed value for different sequences
  seed = seed * 1103515245 + 12345; // Perform linear congruential operation
  return lower + (seed % (upper - lower + 1));
}

int main() {
  int lower, upper, num_gen;
  printf("Enter the lower bound of the range: ");
  scanf("%d", &lower);
  printf("Enter the upper bound of the range: ");
  scanf("%d", &upper);
  printf("Enter the number of random numbers to generate: ");
  scanf("%d", &num_gen);

  for (int i = 0; i < num_gen; i++) {
    int random_num = my_rand(lower, upper);
    printf("%d\n", random_num);
  }

  return 0;
}
