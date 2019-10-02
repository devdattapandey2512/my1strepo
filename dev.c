#include<stdio.h>
int main()
{
char ch;
int a,b;
float r;
printf("ENTER YOUR CHOICE\n");
printf("+ - ADDITION\n- - SUBTRACTION\n* - MULTIPLICATION\n/ - DIVISION");
scanf("%c",&ch);
switch(ch)
{
case'+': printf("Enter 2 no.");
         scanf("%d%d",&a,&b);
         printf("Result=%d",a+b);
         break;
case'-': printf("Enter 2 no.");
         scanf("%d%d",&a,&b);
         printf("Result=%d",a-b);
         break;
case'*': printf("Enter 2 no.");
         scanf("%d%d",&a,&b);
         printf("Result=%d",a*b);
         break;
case'/' :printf("Enter divisor and divident");
         scanf("%d%d",&a,&b);
         r=b/a;
         printf("Result=%f",r);
         break;
default : printf("Enter valid operator");

}
return 0;
}
