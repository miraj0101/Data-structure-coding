#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter values of array: ");
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);

    //searching starts
    printf("Enter value for search: ");
    int value;
    scanf("%d",&value);
    int position=-1;
    for(i=0; i<size; i++)
    {
        if(a[i]==value)
        {
            position=i;
            //increase position 1 because array starts from zero
            position++;
            break;
        }
    }
    printf("Position of value in array: %d\n",position);
    if(position==-1)
        printf("Value is not found in array\n");
    return 0;
}
