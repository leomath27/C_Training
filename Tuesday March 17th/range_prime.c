//Write a c prgram to print first N-Prime Numbers


#include <stdio.h>

int main()
{   
    int j;
    int i;
    int num = 0;
    int count = 0;
    int prime=0;

    printf("Enter the number of prime numbers: ");
    scanf("%d", &num);

    printd("The prime numbers are: ");

    for(i = 2; j<=num; i++)
    {
        for(j = 1; j<=i; j++)
        {
            if(i%j==0){
                count++;
            }
        }
        
        if(count==2)
        {
        printf("%d", i);
        } 
    }
    

    

    return 0;

}

//HW: Write a c program to print the prime numbers between the range