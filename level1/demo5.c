#include <stdio.h>

void read_array(int n, int arr[]);
void print_array(int n, int arr[]);
void swap_array(int n, int a[n], int b[n]);

void read_array(int n, int arr[])
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_array(int n, int arr[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap_array(int n, int a[n], int b[n])
{
    for(int i = 0; i < n; i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements of array 1: ");
    read_array(n, a);

    printf("Enter elements of array 2: ");
    read_array(n, b);

    swap_array(n, a, b);

    printf("Array 1 after swap: ");
    print_array(n, a);

    printf("Array 2 after swap: ");
    print_array(n, b);

    return 0;
}