#include <stdio.h>
void merge(int a[], int l, int mid, int h)
{
    int i,j,k;
    int b[h+1];//you can use constant value greater than original array size instead of h+1;
    i=l,j=mid+1,k=l;

    while(i<=mid && j<=h)
    {
        if(a[i]<=a[j])
        {
            b[k++]= a[i++];
        }
        else
        {
            b[k++]=a[j++];
        }
    }
    for( ; i<=mid; i++)
    {
        b[k++]=a[i];
    }
    for( ; j<=h; j++)
    {
        b[k++]=a[j];
    }
    //copying sorted array to original array
    for(i=l; i<=h; i++)
    {
        a[i]=b[i];
    }
}
void mergeSort(int a[], int l, int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergeSort(a,l,mid);
        mergeSort(a, mid+1, h);
        merge(a,l, mid, h);
    }
}
int main()
{
    int n;
    printf("enter the number of element : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("After Sorting : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
