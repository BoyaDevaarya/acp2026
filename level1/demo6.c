#include <stdio.h>
#include <stdlib.h>

int* create_array(int n);
void initialize_array(int *arr, int n);
void print_array(int *arr, int n);
void delete_array(int **arr);

int* create_array(int n)
{
    int *arr = (int*)malloc(n * sizeof(int));
    return arr;
}

void initialize_array(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_array(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete_array(int **arr)
{
    free(*arr);
    *arr = NULL;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = create_array(n);

    printf("Enter elements: ");
    initialize_array(arr, n);

    printf("Array elements: ");
    print_array(arr, n);

    delete_array(&arr);

    if(arr == NULL)
    {
        printf("Memory deallocated successfully\n");
    }

    return 0;
}