#include<stdio.h>
int main() {
    char str[] = "INFINITY";
    int length = 8;

    for(int i=0; i<length; i++) {
        for (int j=0; j<=i; j++) {

            printf("%c ", str[j]);
        }
        printf("\n");
    }
}
