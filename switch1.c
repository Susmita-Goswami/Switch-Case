//switch keyword= switch,case,break,default
//write a program that read a digit and display its spelling
#include<stdio.h>
int main(void)
{
    int digit;
    printf("enter a digit= ");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0:
        printf("zero");
        break;
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 10:
        printf("ten");
        break;
      default:
      printf("nothing");
    }

    return 0;
}
