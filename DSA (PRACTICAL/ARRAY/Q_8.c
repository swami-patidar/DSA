
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], n, i, *p;
    clrscr();

    printf("How many elements you want to enter??\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a + n - 1;

    printf("\n values are...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p - i));
    }

    getch();
}