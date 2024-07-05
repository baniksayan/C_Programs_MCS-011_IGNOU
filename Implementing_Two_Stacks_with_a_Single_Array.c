#include <stdio.h>
#define MAX_SIZE 10

int arr[MAX_SIZE];
int top1 = -1;
int top2 = MAX_SIZE;

void push1(int data) {
    if (top1 < top2 - 1) {
        top1++;
        arr[top1] = data;
    } else {
        printf("Stack 1 Overflow.\n");
    }
}

void push2(int data) {
    if (top1 < top2 - 1) {
        top2--;
        arr[top2] = data;
    } else {
        printf("Stack 2 Overflow.\n");
    }
}

int pop1() {
    if (top1 >= 0) {
        int data = arr[top1];
        top1--;
        return data;
    } else {
        printf("Stack 1 Underflow.\n");
        return -1;
    }
}

int pop2() {
    if (top2 < MAX_SIZE) {
        int data = arr[top2];
        top2++;
        return data;
    } else {
        printf("Stack 2 Underflow.\n");
        return -1;
    }
}

void display1() {
    if (top1 >= 0) {
        printf("Stack 1: ");
        for (int i = 0; i <= top1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Stack 1 is empty.\n");
    }
}

void display2() {
    if (top2 < MAX_SIZE) {
        printf("Stack 2: ");
        for (int i = MAX_SIZE - 1; i >= top2; i--) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Stack 2 is empty.\n");
    }
}

int main() {
    int choice, data;

    while (1) {
        printf("1. Push to Stack 1\n");
        printf("2. Push to Stack 2\n");
        printf("3. Pop from Stack 1\n");
        printf("4. Pop from Stack 2\n");
        printf("5. Display Stack 1\n");
        printf("6. Display Stack 2\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push to Stack 1: ");
                scanf("%d", &data);
                push1(data);
                break;
            case 2:
                printf("Enter data to push to Stack 2: ");
                scanf("%d", &data);
                push2(data);
                break;
            case 3:
                data = pop1();
                if (data != -1) {
                    printf("Popped from Stack 1: %d\n", data);
                }
                break;
            case 4:
                data = pop2();
                if (data != -1) {
                    printf("Popped from Stack 2: %d\n", data);
                }
                break;
            case 5:
                display1();
                break;
            case 6:
                display2();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
