#include<stdio.h>

struct polynomial {
    int coefficient;
    int exponent;
};

int readPolynomial(struct polynomial p[10]) {
    int total_terms, i;
    printf("Enter the total number of terms in the polynomial: ");
    scanf("%d", &total_terms);
    printf("Enter the coefficient and exponent in descending order:\n");
    for(i = 0; i < total_terms; i++) {
        printf("Enter the Coefficient (%d): ", i + 1);
        scanf("%d", &p[i].coefficient);
        printf("Enter the exponent (%d): ", i + 1);
        scanf("%d", &p[i].exponent);
    }
    return total_terms;
}

int addPolynomial(struct polynomial p1[10], struct polynomial p2[10], int t1, int t2, struct polynomial p3[10]) {
    int i = 0, j = 0, k = 0;
    while(i < t1 && j < t2) {
        if(p1[i].exponent == p2[j].exponent) {
            p3[k].coefficient = p1[i].coefficient + p2[j].coefficient;
            p3[k].exponent = p1[i].exponent;
            i++;
            j++;
            k++;
        }
        else if(p1[i].exponent > p2[j].exponent) {
            p3[k].coefficient = p1[i].coefficient;
            p3[k].exponent = p1[i].exponent;
            i++;
            k++;
        }
        else {
            p3[k].coefficient = p2[j].coefficient;
            p3[k].exponent = p2[j].exponent;
            j++;
            k++;
        }
    }
    while(i < t1) {
        p3[k].coefficient = p1[i].coefficient;
        p3[k].exponent = p1[i].exponent;
        i++;
        k++;
    }
    while(j < t2) {
        p3[k].coefficient = p2[j].coefficient;
        p3[k].exponent = p2[j].exponent;
        j++;
        k++;
    }
    return k;
}

void displayPolynomial(struct polynomial p[10], int terms) {
    int i;
    for (i = 0; i < terms - 1; i++) {
        printf("%dx^%d", p[i].coefficient, p[i].exponent);
        if (i < terms - 2) {
            printf(" + ");
        }
    }
    if (terms > 1) {
        printf(" + %dx^%d\n", p[terms - 1].coefficient, p[terms - 1].exponent);
    } else {
        printf("%dx^%d\n", p[terms - 1].coefficient, p[terms - 1].exponent);
    }
}


int main() {
    struct polynomial p1[10], p2[10], p3[10];
    int t1, t2, t3;
    printf("Enter the first polynomial:\n");
    t1 = readPolynomial(p1);
    printf("First polynomial: ");
    displayPolynomial(p1, t1);
    printf("\nEnter the second polynomial:\n");
    t2 = readPolynomial(p2);
    printf("Second polynomial: ");
    displayPolynomial(p2, t2);
    t3 = addPolynomial(p1, p2, t1, t2, p3);
    printf("\nResultant polynomial after addition: ");
    displayPolynomial(p3, t3);
    return 0;
}
