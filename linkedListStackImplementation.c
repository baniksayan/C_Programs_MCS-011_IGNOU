//When a stack is implemented using arrays, it suffers from the basic limitation of an array – that is, its size cannot be increased or decreased once it is declared. As a result, one ends up reserving either too much space or too less space for an array and in turn for a stack. This problem can be overcome if we implement a stack using a linked list. In the case of a linked stack, we shall push and pop nodes from one end of a linked list. The stack, as linked list is represented as a singly connected list. Each node in the linked list contains the data and a pointer that gives location of the next node in the list. following Program implements a stack using linked lists.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* Definition of the structure node */
typedef struct node
{
    int data;
    struct node *next;
};

/* Definition of push function */
void push(node **tos, int item)
{
    node *temp;
    temp = (node *)malloc(sizeof(node)); /* create a new node dynamically */
    if (temp == NULL) /* If sufficient amount of memory is */
    {                /* not available, the function malloc will */
        printf("\nError: Insufficient Memory Space"); /* return NULL to temp */
        getch();
        return;
    }
    else /* otherwise*/
    {
        temp->data = item;   /* put the item in the data portion of node*/
        temp->next = *tos;    /*insert this node at the front of the stack */
        *tos = temp;          /* managed by linked list*/
    }
} /*end of function push*/

/* Definition of pop function */
int pop(node **tos)
{
    node *temp;
    temp = *tos;
    int item;
    if (*tos == NULL)
        return (NULL);
    else
    {
        *tos = (*tos)->next; /* To pop an element from stack*/
        item = temp->data;    /* remove the front node of the */
        free(temp);           /* stack managed by L.L*/
        return (item);
    }
} /*end of function pop*/

/* Definition of display function */
void display(node *tos)
{
    node *temp = tos;
    if (temp == NULL) /* Check whether the stack is empty*/
    {
        printf("\nStack is empty");
        return;
    }
    else
    {
        while (temp != NULL)
        {
            printf("\n%d", temp->data); /* display all the values of the stack*/
            temp = temp->next;           /* from the front node to the last node*/
        }
    }
} /*end of function display*/

/* Definition of main function */
void main()
{
    int item, ch;
    char choice = 'y';
    node *p = NULL;
    do
    {
        clrscr();
        printf("\t\t\t\t*****MENU*****");

        printf("\n\t\t\t1. To PUSH an element");
        printf("\n\t\t\t2. To POP an element");
        printf("\n\t\t\t3. To DISPLAY the elements of stack");
        printf("\n\t\t\t4. Exit");
        printf("\n\n\n\t\t\tEnter your choice:-");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter an element which you want to push ");
            scanf("%d", &item);
            push(&p, item);
            break;
        case 2:
            item = pop(&p);
            if (item != NULL)
                ;
            printf("\n Detected item is%d", item);
            break;
        case 3:
            printf("\nThe elements of stack are");
            display(p);
            break;
        case 4:
            exit(0);
        } /*switch closed */
        printf("\n\n\t\t Do you want to run it again y/n");
        scanf("%c", &choice);
    } while (choice == 'y');
} /*end of function main*/

// Similarly, as we did in the implementation of stack using arrays, to know the working of this program, we executed it thrice and pushed 3 elements (10, 20, 30). Then we call the function display in the next run to see the elements in the stack.

// Explanation Initially, we defined a structure called node. Each node contains two portions, data and a pointer that keeps the address of the next node in the list. The Push function will insert a node at the front of the linked list, whereas pop function will delete the node from the front of the linked list. There is no need to declare the size of the stack in advance as we have done in the program where in we implemented the stack using arrays since we create nodes dynamically as well as delete them dynamically. The function display will print the elements of the stack.
