//Write a program to check Whether a  Number is positive  Negative and Zero using  ladder if else .
#include"stdio.h"
#include"conio.h"
int main()
{
    int n;
    printf("Enter A number : = ");
    scanf("%d",&n);
    if(n>0){
        printf("Number is Positive ");
    }
    else if(n<0){
        printf("Number is  Negative ");
    }
    else {
        printf("Number is Zero ");
    }
     getch();
     return 0;

    }
