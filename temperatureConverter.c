#include<stdio.h>
int main(void)
{
    int choice;
    float  convertedTemp,temp;
    printf("Temperature conversion menu\n");
    printf("1.Farhenhite to celcius\n");
    printf("2.Celcius to fahrenhite\n");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
    {
        printf("enter the fahrenhite temperature \n");
        scanf("%f",&temp);
        convertedTemp=(temp-32)/1.8;
        printf("the temperature in celcius is %d \n");
    }
    case 2:
    {
        printf("enter the celcius temperature \n");
        scanf("%f",&temp);
        convertedTemp=(1.8*temp)+32;
        printf("the temperature in  fahrenhite is %d \n");
    }
    }
}
