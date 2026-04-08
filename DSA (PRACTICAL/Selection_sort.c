#include <stdio.h>
#include <conio.h>

void selection(int a[25], int size)
{
    int i, j, min;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main()
{
    int i, size, a[25];
    clrscr();

    printf("\nEnter Size of Array : ");
    scanf("%d", &size);

    printf("\n\nEnter Elements :\n\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter a[%d] Element : ", i + 1);
        scanf("%d", &a[i]);
    }

    selection(a, size);

    printf("\n\nSorted Array : \n\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
    getch();
    return 0;
}
