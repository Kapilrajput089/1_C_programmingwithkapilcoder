// write a program to Explain Pointer in c programming.
#include"stdio.h"
#include"conio.h"
int main()
{
    printf("Pointer in C programming\n ");
    /*
     *What is Pointer in c programming.
     Pointer is a variable that contains address of a variable in c programming.
    */

    int x=10,*p;
    p=&x;
    printf("The address of X using &x is : %x\n",&x);
    printf("The address of *p using *P is : %x\n",&p);
    printf("The address of X using x is : %d\n",&x);
    printf("The address of *p using *p is : %d\n",p);
    getch();
    return 0;

}
