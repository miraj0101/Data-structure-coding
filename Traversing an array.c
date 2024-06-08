#include<stdio.h>
int main()
{
    int i,size;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array elements are: \n");
    for(i=0;i<size;i++)
    {
        printf(" %d\n",arr[i]);
    }

    return 0;
}
