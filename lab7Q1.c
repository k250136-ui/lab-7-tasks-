#include<stdio.h>

int main(){
    int n;
    printf("Enter how many reading do you want: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter reading\n");
    for(int i=0;i<n;i++)
    {
        printf("%d)",i+1);
        scanf("%d", &arr[i]);
    }
    int min=arr[0],max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min) {min = arr[i];}
        if(arr[i]>max) {max = arr[i];}
    }
    printf("\nhottest day: %d", max);
    printf("\ncoldest day: %d", min);
    return 0;
}