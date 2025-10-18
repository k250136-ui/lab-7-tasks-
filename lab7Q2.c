#include<stdio.h>

int main() {
    int n;
    printf("Enter number of readings: ");
    scanf("%d", &n);

    float power[n], total = 0;
    printf("Enter power usage (in watts):\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d)",i+1);
        scanf("%f", &power[i]);
        total += power[i];
    }
    float avg = total / n;
    printf("Total Power Usage = %.2f watts\n", total);
    printf("Average Power Usage = %.2f watts\n", avg);
    return 0;
}