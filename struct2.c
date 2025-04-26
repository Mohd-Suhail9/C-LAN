#include<stdio.h>
//creat a structure called myStructure
struct myStructure {
    int myNum; //  This is member variabel of myStructure

    char myLetter;
};
int main (){
    // creat a structure variable of myStructure called s1
    struct myStructure s1;
    //Assign value to member of s1
    s1.myNum= 12;
    s1.myLetter= 'B';
    // Print values
    printf("My number : %d \n ", s1.myNum);
    printf("My letter : %c \n", s1.myLetter);
    return 0;
}