#include<stdio.h>
#include<stdbool.h>
int main(){
	
	char a[100],b[100];
	int i=0;
	bool flag=false;
	
	printf("Enter 1st character Array: ");
	scanf("%s", &a);
	
	printf("Enter 2nd character Array: ");
	scanf("%s", &b);
	
	while(a[i] != '\0' && b[i] != '\0')
	{
		if(a[i]!=b[i])
		{
			flag = true;
		}
		i++;
	}
	
	if(flag==false && a[i]=='\0' && b[i]=='\0')
	{
		printf("string match");
	}
	else
	{
		printf("string mis-match");
	}
	return 0;
}