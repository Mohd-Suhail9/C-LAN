#include<stdio.h>
struct myStructure {
    int myNum;
    char myLetter;
};
int main(){
    struct mySructure s1,s2;
    // Creat defferent struct variables
// Assign value to diffrent struct variable
s1.myNum= 13;
s1.myLetter='B';
s2.myNum=10;
s2.myLetter= 'C';

//print values
printf("My  first number is \n",s1.myNum);
printf("My  first letter is \n",s1.myLetter);
printf("My  second number is \n",s2.myNum);
printf("My  second letter is \n",s2.myLetter);
return 0;



}
