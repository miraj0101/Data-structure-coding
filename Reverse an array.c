#include<stdio.h>
int main()
{
    int arr[5] = {4,2,6,8,12};
    printf("Primary array: ");
    for(int i=0; i<5; i++)
        printf(" %d",arr[i]);
    printf("\nReversed array: ");
    for(int i=5-1; i>=0; i--)
        printf(" %d",arr[i]);
    return 0;
}
