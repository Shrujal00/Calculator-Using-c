#include <stdio.h>

int main()
{
    printf("Shrujal's badic Calculator\n");

    int n1,n2;
    char func;
    int res;

    printf("Input number 1: ");
    scanf("%d",&n1);

    printf("\nInput number 2: ");
    scanf("%d",&n2);

    printf("\nEnter a function to do: +,-,*,/: ");
    scanf(" %c",&func);

    switch (func)
    {
    case '+':
        res = n1+n2;
        break;
    case '-':
        res = n1-n2;
        break;
    case '*':
        res = n1*n2;
        break;
    case '/':
        res = n1/n2;
        break;
    default:
        printf("No valid inpuut");
        break;
    }

    printf("\nResult: %d" ,res);
    printf("\nThanks for using :)");

    return 0;

}