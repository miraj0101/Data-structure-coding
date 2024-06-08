#include<stdio.h>

int binarySearch(int arr[],int arraySize,int value)
{
    int leftIndex,rightIndex,midIndex;
    leftIndex = 0;
    rightIndex = arraySize-1;

    while(leftIndex<=rightIndex)
    {
        midIndex=(leftIndex+rightIndex)/2;
        if(value==arr[midIndex])
            return midIndex;
        if(value<arr[midIndex])
            rightIndex=midIndex-1;
        else
            leftIndex=midIndex+1;
    }
    //if nothing matches
    return -1;
}

int main()
{
    int a[5]={1,2,3,4,5};

    int ValueIndex=binarySearch(a,5,8);
    printf("Index of the searching value %d\n",ValueIndex);
    return 0;
}
