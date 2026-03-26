//we cannot update a const value no other way other than using pointers, we will see below

#include <stdio.h>

int main(){

    int a = 10;
    const int b = 10;
    
    a= a+b;
    printf("%d", a);

    int *p = &b;
    *p = 30;
    *p = a+b;

    printf("%d\t",b);

    return 0;


}