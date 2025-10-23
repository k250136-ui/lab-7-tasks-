#include<stdio.h>

int main(){

    char arr[100];
    
    printf("Enter Sensor code: ");
    
    int counter=0,ch;
    int vovel=0,consonent=0;
    
    while(counter<100)
    {
        ch = getchar();
        if(ch == '\n')
        {
            break;
        }
        else
        {
            arr[counter]=ch;
            counter++;
        }
    }

    int length = counter;
    int i=0; 
    
    while(arr[i] != '\n')
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]=arr[i]+32;
        }
        i++;
    }

    printf("The lower case string: %s\n", arr);
    
    for (int i = 0; i < length; i++)
    {
        if (arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
        {
            vovel++;
        }
        else
        {
            if(arr[i]!=' ')
            consonent++;
        }
    }

    printf("The nomber of vovels in the string is: %d", vovel);
    printf("\nThe nomber of consonents in the string is: %d", consonent);
    
    return 0;
}