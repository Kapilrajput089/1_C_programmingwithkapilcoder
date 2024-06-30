// write  program to add two using function take nothing return somthing .
#include"stdio.h"
#include"conio.h"
int add(); //function declaration .
int main(){

    int res;
    res=add(); // function call .
    printf("Addition of two numbers %d",res);
    getch();
    return 0;

}
int add()/// function definetion 
{
    int a,b,res;
    printf("Enter two  Numbers : = ");
    scanf("%d%d",&a,&b);
    res =a+b;
    return(res);
 

}