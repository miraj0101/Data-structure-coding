#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for finding sorted position position of pivot
int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l;
    int j = h;

    while (i < j)
    {
        while (pivot >= a[i] && i <= h - 1)
        {
            i++;
        }
        while (pivot < a[j] && j >= l + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
    //Replacing pivot at sorted position
    swap(&a[l], &a[j]);
    return j;
}

// QuickSort function
void quickSort(int a[], int l, int h)
{
    if (l < h)
    {
        int partitionIndex = partition(a, l, h);
        quickSort(a, l, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, h);
    }
}

// driver code
int main()
{
    int a[] = {10,14,6,16,5,1};
    int n = sizeof(a) / sizeof(a[0]);

    // printing the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    // calling quickSort() to sort the given array
    quickSort(a, 0, n - 1);
    // printing the sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
