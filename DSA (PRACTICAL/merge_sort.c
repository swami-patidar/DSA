#include <stdio.h>
#define max 3

int arr[max];
int i, j, k;

void main()
{
    clrscr();
    printf("enter unsorted elements");
    for (i = 0; i <= 2; i++)
    {
        scanf("%d", &arr[i]);
    }

    merge_sort(0, 2);
    printf("sorted array are:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("%d\t", arr[i]);
    }
    getch();
}

merge_sort(int low, int high)
{
    if (low != high)
    {
        int mid;
        mid = (low + high) / 2;
        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low, mid, high);
    }
}

merge(int low, int mid, int high)
{
    int temp[max];
    i = low;
    k = low;
    j = mid + 1;

    while ((i <= mid) && (j <= high))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }

        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= high)
    {
        temp[k++] = arr[j++];
    }

    for (i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }

    getch();
    return 0;
}