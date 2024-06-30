// write  program to add two using function take nothing return somthing .
#include"stdio.h"
#include"conio.h"
int add();
int main(){

    int res;
    res=add();
    printf("Addition of two numbers %d",res);
    getch();
    return 0;

}
int add()
{
    int a,b,res;
    printf("Enter two  Numbers : = ");
    scanf("%d%d",&a,&b);
    res =a+b;
    return(res);
 

}