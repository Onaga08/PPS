#include <stdio.h>

int main()
{

    int no1, no2;
    int *ptr1, *ptr2;
    int sum, sub, mult;
    float div;

    printf("Enter number1: ");
    scanf("%d", &no1);

    printf("Enter number2: ");
    scanf("%d", &no2);

    ptr1 = &no1;
    ptr2 = &no2;

    sum = (*ptr1) + (*ptr2);
    sub = (*ptr1) - (*ptr2);
    mult = (*ptr1) * (*ptr2);
    div = (float)(*ptr1) / (*ptr2);

try_again:
    printf("\n+ - * / ?? : ");
    char option;
    scanf("%c", &option);
    scanf("%c", &option);
    switch (option)
    {
    case '+':
        printf("sum= %d\n", sum);
        break;
    case '-':
        printf("subtraction= %d\n", sub);
        break;
    case '*':
        printf("Multiplication= %d\n", mult);
        break;
    case '/':
        printf("Division= %f\n", div);
        break;
    default:
        printf("Invalid Input! Try Again");
        goto try_again;
        break;
    }
    return 0;
}
