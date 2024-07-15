//Write a program to Use Union in C programming.
#include"stdio.h"
#include"conio.h"

union student{
    int id;
    int marks;
}std1;
union student std2;//we can  create union varialbe like this.

int main(){
    printf("Union in C programming\n");
        std1.marks= 98;
    printf("std1 marks is : %d\n", std1.marks);
    getch();
    return 0;
}