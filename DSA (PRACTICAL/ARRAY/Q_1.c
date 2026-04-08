#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], n, choice, i, val, pos, max, x;
    clrscr();

    printf("How many elements you want to enter??");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d value :", i + 1);
        scanf("%d", &a[i]);
    }

    while (1)
    {
        printf("\n1.Insert 2.Delete 3.Search 4.Display 5.Largest 6.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element");
            scanf("%d", &x);
            printf("Enter position");
            scanf("%d", &pos);
            for (i = n - 1; i >= pos; i--)
            {
                a[i + 1] = a[i];
            }
            a[i + 1] = a[i];
            a[i] = x;
            n++;
            break;

        case 2:
            printf("Enter position: ");
            scanf("%d", &pos);
            for (i = pos - 1; i < n - 1; i++)
                a[i] = a[i + 1];
            n--;
            break;

        case 3:
            printf("Enter value to search: ");
            scanf("%d", &val);
            for (i = 0; i < n; i++)
            {
                if (a[i] == val)
                {
                    printf("Found at %d\n", i + 1);
                    break;
                }
            }
            if (i == n)
                printf("element not found");
            break;

        case 4:
            for (i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 5:
            max = a[0];
            for (i = 1; i < n; i++)
                if (a[i] > max)
                    max = a[i];
            printf("Largest=%d", max);
            break;
            
        case 6:
            return 0;
        }
    }
}