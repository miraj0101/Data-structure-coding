#include<stdio.h>
int main()
{
    int i, size, pos;
    int arr[]= {2,4,6,8,12};
    size=sizeof(arr)/sizeof(arr[0]);

    printf("Array before deletion:\n");
    for(i = 0; i < size; i++)
        printf(" %d\n",arr[i]);

    printf("Enter position for deletion: ");
    scanf("%d", &pos);
    //element deleting here
    for(i = pos - 1; i <= size-1; i++)
        arr[i] = arr[i+1];

    size = size - 1;

    printf("Array after deletion:\n");
    for(i = 0; i < size; i++)
        printf(" %d\n",arr[i]);

    return 0;
}

