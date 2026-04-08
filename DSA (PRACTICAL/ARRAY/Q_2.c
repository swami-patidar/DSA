#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10][10], r, c, i, j, sum = 0;
    clrscr();

    printf("Enter total number of rows and column");
    scanf("%d%d", &r, &c);

    printf("Enter elements");
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("Sum=%d", sum);
    getch();
}