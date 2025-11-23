#include<stdio.h>
int main(){
    int a[50],size;
    printf("Enter the size of Array :");
    scanf("%d" ,&size);
    printf("Enter the elements of Array :");
    for(int i=0 ; i<size ; i++){
        scanf("%d",&a[i]); 
    }
    printf("Elements are :");
    for(int i=0 ; i<size ; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}