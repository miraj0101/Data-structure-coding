#include<stdio.h>
int main()
{
    int i,arr[5] = {4,2,6,8,12};
    printf("Array is: ");
    for(i=0; i<5; i++)
        printf(" %d",arr[i]);
    int max = arr[0];
    int min = arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }
    printf("\nMaximum value: %d\n",max);
    printf("Minimum value: %d\n",min);
    return 0;
}
