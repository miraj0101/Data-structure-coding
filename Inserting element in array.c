#include<stdio.h>
int main()
{
    int i, size, x, pos;
    int arr[]= {2,4,6,8,12};
    size=sizeof(arr)/sizeof(arr[0]);

    printf("Array before insertion.\n");
    for(i = 0; i < size; i++)
        printf(" %d\n",arr[i]);

    printf("Enter element to be inserted: ");
    scanf("%d", &x);

    printf("Enter position insertion: ");
    scanf("%d", &pos);

    size = size + 1;
    //element inserting here
    for(i = size - 1; i >= pos - 1; i--)
        arr[i+1] = arr[i];

    arr[pos-1] = x;

    printf("Array after insertion:\n");
    for(i = 0; i < size; i++)
        printf(" %d\n",arr[i]);

    return 0;
}

