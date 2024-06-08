#include <stdio.h>

void Tower(int n,int A, int B, int C )
{
    if (n > 0)
    {
        Tower(n-1,A,C,B);
        printf("Move a disk from peg %d to %d\n",A,C);
        Tower(n-1,B,A,C);
    }
}

int main()
{
    int n;
    printf("Enter number of disk: ");
    scanf("%d",&n);
    Tower(n,1,2,3);
    return 0;
}
