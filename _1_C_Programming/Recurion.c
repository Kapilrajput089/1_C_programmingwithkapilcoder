// write a program to use Recursion.
#include"stdio.h"
#include"conio.h"
int Recursion(int);// function prototype.
int main(){

    printf("Recursion in c programming \n");
    /*  What is Recursion function  in c programming.
     * Recurion Function calling itself is called Recursion.
     * Any function which calls itself is Called recursion function.
    */
 
    int n;
    printf("Ente a number to find faactorial of : = ");
    scanf("%d",&n);
    int x= Recurion(n);
    printf("The Factoral of %d is : %d\n",n,x);
    
    getch();
    return 0;
}
int Recurion(int n){
    if (n==0 || n==1)
    {
        return (1);
    }
    else {
        return(n*Recurion(n-1));
    }
}