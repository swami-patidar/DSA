#include <stdio.h>
#include <conio.h>
void main()
{
    int matrix[10][10];
    int i, j, r, c;
    clrscr();

    printf("Enter total number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\n Enter value");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("sparse matrix representation  (ROW  COL VALUE):\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (matrix[i][j] != 0)
            {
                printf(" %d  %d %d \n", i, j, matrix[i][j]);
            }
        }
    }

    getch();
}