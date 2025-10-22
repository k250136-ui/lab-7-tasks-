#include<stdio.h>

int main(){
	
	int n1,n2;
	
	printf("How many reading did 1st sensor take: ");
	scanf("%d", &n1);
	
	int a[n1];
	
	printf("Enter 1st sensor reading(s): ");
	for(int i=0;i<n1;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("How many reading did 2nd sensor take: ");
	scanf("%d", &n2);
	
	int b[n2];
	
	printf("Enter 2nd sensor reading(s): ");
	for(int i=0;i<n2;i++)
	{
		scanf("%d", &b[i]);
	}
	int size;
	size = n1+n2;
	int merge[size];

	for(int i=0;i<size;i++)
	{
		merge[i]=a[i];
	}

	for(int i=0; i<size; i++)
	{
		merge[n1+i]=b[i];
	}

    printf("Merged reading: ");
	for(int i=0;i<size;i++)
	{
		printf("%d ", merge[i]);
	}
	return 0;
}