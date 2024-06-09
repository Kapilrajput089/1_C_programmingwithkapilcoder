// write a program to use All logical Operators in C with kapilcoder
#include"stdio.h"
#include"conio.h"
int main()
{
    
       printf("Logical Operators in C programming\n");
       // Logical Operators are :-(!, &&, ||).
       int a=2,b=8;
          printf("1. Is A ! B : %d\n",!(a&& b));
          printf("1. Is A && B : %d\n",!(a|| b));
          printf("1. Is A || B : %d\n",(a|| b));
          printf("1. Is A && B : %d\n",(a&& b));
          getch();
          return 0;

}