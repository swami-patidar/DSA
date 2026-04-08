#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;
    clrscr();

    printf("Enter Total number of rows and columns\n");
    scanf("%d%d", &r, &col);

    printf("\n Enter 1st matrix");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Enter 2nd matrix");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n***** addition ****\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
            printf("\n");
        }
    }
    
    getch();
}