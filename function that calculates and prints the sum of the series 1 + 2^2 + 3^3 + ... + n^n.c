#include <stdio.h>
#include <math.h>

void printSeriesSum(int n) {
    int i;
    long sum = 0;
    
    for (i = 1; i <= n; i++) {
        sum += pow(i, i);
    }
    
    printf("The sum of the series is: %ld\n", sum);
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printSeriesSum(n);
    
    return 0;
}
