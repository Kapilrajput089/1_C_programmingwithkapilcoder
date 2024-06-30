// write a program to add two number using function  take nothing return nothing .
#include"stdio.h"
#include"conio.h"
void fun1(void);// function declaration or prototype
int fun2(void);// function declaration or prototype
void fun3(int );// function declaration or prototype
int fun4(int n );// function declaration or prototype
int main(){
    printf("Function in C programming\n ");
/*There are two type of function in C programming .
  1.=> pre-defined function .
  2.=> User defined function.
  ->pre-defined functions are already declared into the header files.
  -> User defined functions are created by programmers.
  and a function have three things.
  which is (i)=> functuin Declaration.
           (ii)=> function call.
           (iii)=> function Definition .
*/


fun1();
int n= fun2();
printf(" I am fun2 : %d\n ",n);
fun3(3);
fun4(3);
return 0;


}
void fun1(void){
         printf("Function to take nothing and return nothing.\n");
}
int fun2(void){
            printf("Function to take  nothing and return somthing.\n");

}



void fun3(int n)
{
    printf("Function to take somthing and Return nothing %d\n",n);
}
int fun4(int n){
     printf("Function to take  somthing and return somthing.%d\n",n);
}

