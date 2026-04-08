#include <stdio.h>
#include <conio.h>

void enqueue();
void dequeue();
void display();
void peek();
int queue[100];
int front = -1;
int rear = -1;
int N;

void main()
{
    int choice = 0;
    clrscr();

    printf("How many elements you want to enter?");
    scanf("%d", &N);

    while (1)
    {
        printf("\n\n****Main Menu****\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert \n2.Delete\n3.peek\n4.Show\n5.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("Please enter valid choice..");
        }
    }
    getch();
}

void enqueue()
{
    int x;
    printf("\n Enter data");
    scanf(" \n%d", &x);

    if (rear == N - 1)
    {
        printf("overflow");
    }

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow");
    }

    else if (front == rear)
    {
        front = rear = -1;
    }

    else
    {
        printf("Element which are deleted is %d", queue[front]);
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }

    else
    {
        printf("\n peek number is %d\n", queue[front]);
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }

    else
    {
        printf("\n elements are....\n");
        for (i = front; i < rear + 1; i++)
        {
            printf("\n%d\n", queue[i]);
        }
    }
}