#include<stdio.h>

int main(){
    
    int arr[100];
    int n, value, count = 0;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d) ", i);
        scanf("%d", &arr[i]);
    }
    
    if (n == 0) 
    {
        printf("Array is empty\n");
        return 0;
    }
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter the value to delete: ");
    scanf("%d", &value);
    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == value) 
        {
            count++;
        }
    }

    int j = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != value) {
            arr[j] = arr[i];
            j++;
        }
    }

    printf("\n%d occurrence(s) of %d deleted.\n", count, value);
    printf("New size: %d\n\n", j);
    
    printf("Array after deletion:\n");
    printf("Array: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}