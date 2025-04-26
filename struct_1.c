#include<stdio.h>
#include<string.h>
//creat struct with person1 variable
struct Person {
    char name[20];
    int citNo;
    float salary;

}person1 ;
int main(){
   
   
    
    // Assign value to name of person1
    strcpy(person1.name,"Mohammad Suhail");
    // Assign values to other person1 variables
   // person1.citNo=1999;
//person1.salary= 23200;
//Print struct variables
printf("Name %s \n",person1.name);
printf("Enter person citNo and salary \n"):
scanf("\n%d%.3f",&person1.citNo,person1.salary);
//printf("Citizenship No: %d\n",person1.citNo);
//printf("salary : %.2f\n",person1.salary);

    return 0;
}