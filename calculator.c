#include<stdio.h>
int main(void)

{
    double num1,num2;
    char op;
    printf("enter an operator (+ -  * /) ") ;
    scanf("%c ", &op);
    printf("enter two numbers ");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+' :
    {
        printf("%lf+%lf=%lf",num1,num2,num1+num2);
        break;
    }
    case '-' :
    {
        printf("%lf-%lf=%lf",num1,num2,num1-num2);
        break;
    }
    case '*' :
    {
        printf("%lf*%lf=%lf",num1,num2,num1*num2);
        break;
    }
    case '/' :
    {
        printf("%lf/%lf=%lf",num1,num2,num1/num2);
        break;
    }
    default :
        {
              printf("error");
        }

    }
    return 0;

}
