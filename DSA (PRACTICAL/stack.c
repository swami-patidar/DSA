#include <stdio.h>
#include <conio.h>

int stack[20], maxstk;
int top = -1;
void push();
void pop();
void display();
void revers();
void main()
{
    int choice;
    clrscr();

    printf("\n\n *** Stack Operations ***");
    printf("\n\n How many items you want to push?");
    scanf("%d", &maxstk);

    while (1)
    {
        printf("\n\n 1.Push");
        printf("\n 2. POP");
        printf("\n 3. Display");
        printf("\n 4. Reverse");
        printf("\n 5. Exit");
        printf("\n\n Enter Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            revers();
            break;

        case 5:
            exit(0);
            break;
        }
    }
}

void push()
{
    int item;
    if (top == maxstk - 1)
    {
        printf("\n Stack overflow");
    }

    else
    {
        printf("Enter elemet to be pushed in the stack:");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }

    return;
}

void pop()
{
    if (top == -1)
    {
        printf("\n stack underflow");
    }

    else
    {
        printf("\n popped element from the stack is %d", stack[top]);
        top--;
    }

    return;
}

void display()
{
    int j;
    if (top == -1)
    {
        printf("\n stack is empty");
    }

    else
    {
        printf("\n stack elemets are:\n\n");
        for (j = top; j >= 0; j--)
        {
            printf("%d\n\n", stack[j]);
        }
    }

    return;
}

void revers()
{
    int j;
    if (top == -1)
    {
        printf("\n stack is empty");
    }

    else
    {
        printf("stack element are: \n\n");
        for (j = 0; j <= top; j++)
        {
            printf("%d\n\n", stack[j]);
        }
    }

    return;
}