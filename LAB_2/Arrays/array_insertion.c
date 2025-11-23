#include <stdio.h>
int main()
{
    // When we have to insert a number at a specific position in an array

    int a[20], posn, num, size;
    printf("Enter size of array :");
    scanf("%d", &size);
    if (size > 20)
    {
        printf("overflow");
    }
    else
    {
        printf("Enter elements of array :");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
    }
    printf("Enter number u want to insert :");
    scanf("%d", &num);
    printf("Enter the position where u want to insert :");
    scanf("%d", &posn);
    if (posn <= 0 || posn > size + 1)
    {
        printf("invalid position");
    }
    else
    {
        // shift till the position where we want to insert.
        // start the loop from last element i,e; size-1 till i=position
        for (int i = size - 1; i >= posn - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[posn - 1] = num;
        size++;
        printf("Elements are :");
        for (int i = 0; i < size; i++)
        {
            printf("%d \n", a[i]);
        }
    }
    return 0;
}