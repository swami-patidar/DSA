#include <stdio.h>
#include <conio.h>

void main()
{
    int a[20], n, i, item, beg, end, mid, p;
    a[-1] = -1;
    clrscr();

    printf("search an element  using binary search");

    printf("\n\n\n How many elements you wnt to enter?");
    scanf("%d", &n);

    printf("\nEnter elemnts in ascending order:\n\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            printf("Error: Array is not sorted");
            getch();
            exit(1);
        }
    }

    printf("\n Enter the element you want to search:");
    scanf("%d", &item);

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    while ((beg <= end) && (a[mid] != item))
    {
        if (item < a[mid])
        {
            end = mid - 1;
            mid = (beg + end) / 2;
        }

        else
        {
            beg = mid + 1;
            mid = (beg + end) / 2;
        }
    }

    if (a[mid] == item)
    {
        printf("\n Item is at location %d", mid + 1);
        getch();
        exit(0);
    }

    else
    {
        printf("\n Item is not in the list");
        getch();
    }
}