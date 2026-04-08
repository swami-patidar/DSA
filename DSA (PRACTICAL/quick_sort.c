#include <stdio.h>
#include <conio.h>

void quicksort(int arr[20], int first, int last)
{
    if (first < last)
    {
        int i, j, pivot, temp;
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (arr[i] <= arr[pivot])
            {
                i++;
            }

            while (arr[j] > arr[pivot])
            {
                j--;
            }

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
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

    quicksort(arr, 0, size - 1);

    printf("\nSorted Array : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
}