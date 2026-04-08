#include <stdio.h>
#include <conio.h>

void bubblesort(int arr[20], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void main()
{
    int i, size, arr[20];
    clrscr();

    printf("\nEnter Size of Array : ");
    scanf("%d", &size);

    printf("\nEnter Elements : \n");
    for (i = 0; i < size; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, size);
    printf("\nSorted Array : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    getch();
}