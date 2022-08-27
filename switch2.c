#include<stdio.h>
int main(void)
{char ch,again; for(int i=1; i<=5; i++){
    printf("enter any number ");
    scanf("%c",&ch);
     scanf("%c",&again);
    switch(ch){
    case 'a':case 'e':case 'i':case 'o':case 'u':
         case 'A':case 'E':case 'I':case 'O':case 'U':
        printf("vowel");
        break;
        case 'con' :
        printf("consonent");
        break;
         case '0':case '1':case '2':case '3':case '4':case '5':
         case '6':case '7':case '8':case '9':
            printf("charachter is number \n");
            break;
         default:
            printf("others ");}
    return 0;}
}
