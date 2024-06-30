// write a program to use function in C programming With kapilcoder.
#include"stdio.h"
#include"conio.h"
void fun1(void);// function declaration or prototype
int fun2(void);// function declaration or prototype
void fun3(int );// function declaration or prototype
int fun4(int n );// function declaration or prototype
int main(){
    printf("Function in C programming\n ");
/* 1.There are two type of function in C programming .
  1.=> pre-defined function .
  2.=> User defined function.
  ->pre-defined functions are already declared into the header files.
  -> User defined functions are created by programmers.ś
  and a function have three things.
  which is (i)=> functuin Declaration.
           (ii)=> function call.
           (iii)=> function Definition .
   2.=> Used defined functions have four types of natures.
      i.  => Take nothing and Return nothing.
      ii. => Take nothing and Return Somthing.
      iii.=> Take somthing and Return nothing.
      iv. => Take Somthing and Return somthing. 
*/


fun1();// function call.
int n= fun2();//  function call.
printf(" I am fun2 : %d\n ",n);
fun3(3);// function call and thid passing value is called actual arguments.
fun4(3);// function call.
return 0;


}
// Take nothing and Return nothing.
void fun1(void){
         printf("Function to take nothing and return nothing.\n");
}
// Take nothing and Return somthing.
int fun2(void){
            printf("Function to take  nothing and return somthing.\n");

}
// Take somthing and Return nothin.
void fun3(int n)
{
    printf("Function to take somthing and Return nothing %d\n",n);
}
// Take somthing and Return somthing.
int fun4(int n){
     printf("Function to take  somthing and return somthing.%d\n",n);
}

