#include <stdio.h>
#include <conio.h>

void insertion(int a[25], int size)
{
    int i, j, temp;
    for (i = 1; i < size; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
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

    insertion(a, size);

    printf("\n\nSorted Array : \n\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    getch();
    return 0;
}
