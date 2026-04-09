#include <stdio.h>
#include <conio.h>

void main()
{
    int *ptr;
    int n, i;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!");
        getch();
        return;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    getch();
}