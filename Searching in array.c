#include<stdio.h>
int main()
{
    int arr[8]={10,2,15,20,35,46,28,18};

    int i,value,position = -1;
    printf("Enter value for search: ");
    scanf("%d",&value);
    for(i=0;i<8;i++)
    {
        if(arr[i] == value)
        {
            position = i;
            //Increase position one because array starts from zero
            position++;
            break;
        }
    }
    printf("Position of value is: %d\n",position);
    if(position == -1)
        printf("Value is not found in array.\n");
    return 0;
}
