#include <stdio.h>
int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    age > 18 ? printf("adult \n") : printf("not adult \n");

    int number = 7;

    int luckyNumber = 7;

    number == luckyNumber ? printf("You are lucky \n") : printf("You are not lucky \n");
    return 0;
}