#include <stdio.h>
int main()
{
    int n,n1,n2;
    int a[]= {2,4,6,8,12},b[]= {5,11,18};
    n1 = sizeof(a)/sizeof(a[0]);
    n2 = sizeof(b)/sizeof(b[0]);
    n = n1+n2;
    int c[n];
    printf("First sorted array: ");
    for(int i = 0; i < n1; i++)
    {
        printf("%d ",a[i]);
        c[i] = a[i];
    }
    printf("\nSecond sorted array: ");
    for(int i = 0; i < n2; i++)
    {
        printf("%d ",b[i]);
        c[i + n1] = b[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(c[j] > c[j+1])
            {
                int temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    printf("\nFinal array after sorting: ");
    for(int i = 0; i < n ; i++)
        printf(" %d ",c[i]);
    return 0;
}
