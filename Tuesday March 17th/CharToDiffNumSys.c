
//QUESTION: Write the c-program to input a character and write the decimal, octal, hexadecimal and binary equivalent of the character.
// Algorithm:
// 1. Input a read 
// 2. Operation Excecution
// 3. To display the desired output

#include <stdio.h>

int main()
{
    int i = 0;
    char ch = 0;

    printf("Enter the character: ");
    scanf("%c", &ch);

    //C allows format specifiers for diff number systems except binary
    printf("decimal: %d, hexa: %x, octal: %o", ch,ch,ch);

    printf("Binary: ");

    for (i = 7; i >= 0; i--) {
        int bit = (ch >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
    return 0;
}
