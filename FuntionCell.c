#include<stdio.h>

void square(int n);
void _square(int* n);

int main(){
    int number = 4;

    //Call By Value
    square(number);
    printf("n is : %d\n", number);

    //Call By Reference
    _square(&number);
    printf("n is d: %d\n", number);
    return 0;
}

void square(int n){
    n = n * n;
    printf("Square is : %d\n", n);
}

void _square(int* n){
    *n = *n * *n;
    printf("Square is : %d\n", *n);
}