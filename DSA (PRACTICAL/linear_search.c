#include <stdio.h>
#include <conio.h>

main()
{
    int a[20], n, i, item;
    clrscr();

    printf("*** Program to search item in an array using linear search ***");

    printf("\n \n enter total number of elements");
    scanf("%d", &n);

    printf("\n Enter Elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n Enter the element you want to search:");
    scanf("%d", &item);
    for (i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            printf("\n Item to be searched is at location %d\n", i + 1);
            getch();
            exit(0);
        }
    }    
    

    if (i == n)
    {
        printf("\nItem is not in the list");
    }

    getch();
    return 0;
}