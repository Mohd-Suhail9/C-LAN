#include<stdio.h>
int main(){
// program for find factoril of any number 
int a;
printf("Enter a number\n ");
scanf("%d ",&a);
if (  a=0  || a=1){
return 1;
}
while (a>=0)
{
    a=a*(a-1);
}
printf("The factorial of  %d is  = %d ",a);

return 0;

}