
// Write a C- program to find a given number is prime number or not

#include <stdio.h>

int main()
{   
    int i;
    int num = 0;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i<=num; i++)
    {

        if(num%i==0){
            count++;
        }
    }

    if(count==2)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not prime number");
    }

    return 0;

}