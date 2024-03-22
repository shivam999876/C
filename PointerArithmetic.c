#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

    int _age = 25;
    int *_ptr = &_age;

    printf("%u\n", ptr);//address
    ptr++;
    printf("%u\n", ptr);//address
    ptr--;
    printf("%u\n", ptr);//address
    ptr = ptr - _ptr;
    printf("%u\n", ptr);//value

    ptr = &_age;
    printf("%d\n", ptr == _ptr);//value

    return 0;

}