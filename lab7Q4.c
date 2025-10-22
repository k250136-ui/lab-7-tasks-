#include<stdio.h>

int main(){

    int n;
    printf("Enter the number of sensor reading: ");
    scanf("%d", &n);
    
	int arr[n];
    printf("Enter readings\n");
    
	for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Chronological order reading: ");
	for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    int left,right,temp;
    left=0;
    right=n-1;
    
    while(left<right)
    {
    	temp = arr[left];
    	arr[left] = arr[right];
    	arr[right] = temp;
    	left++;
    	right--;
	}
	printf("\nReverse chronological order reading: ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}