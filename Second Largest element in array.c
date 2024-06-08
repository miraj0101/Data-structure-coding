#include<stdio.h>
int main()
{
    int a[]= {5,3,1,8,2};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int value,count = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(count==2)
            break;
        value = a[i];
        count++;
    }
    printf("Second largest value: %d",value);
    return 0;
}
