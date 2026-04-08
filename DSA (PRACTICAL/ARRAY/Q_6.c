#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10][10], n, i, j, sum = 0;
    clrscr();

    printf("enter total number of rows\n");
    scanf("%d", &n);

    printf("Enter elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Addition of diagonal \n");
    for (i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    printf("Diagonal Sum=%d", sum);
    getch();
}