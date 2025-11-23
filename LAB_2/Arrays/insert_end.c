#include <stdio.h>
int main()
{
    // When we have to insert a number at the End

    int a[20], num, size;
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
    for(int i=0;i<=size;i++){
        //a[i+1]=a[i];
        
    }
    a[size]=num;
    size++;
    printf("Array element are :");
    for(int i=0;i<size;i++){
        printf("%d \n",a[i]);
    }
    return 0;
}