#include<stdio.h>

int main()
{
    int a;
    float f;
    char c;

    printf("Enter the value of a = ");
    scanf("%d",a);
    printf("\nEnter the value of f = ");
    scanf("%f",f);
    printf("\nEnter the value of f = ");
    scanf(" %c",c);

    printf("\nThe value of a = %d",a);
    printf("\nThe value of f = %f",f);
    printf("\nThe Value of c = %c",c);
    return 0;
}