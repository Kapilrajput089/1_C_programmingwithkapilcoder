// Write a program to check number is even  and odd numbers using nested if
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter A Numbeer : = ");
    scanf("%d",&x);
    if(x > 0){
        if(x%2==0){
            printf("Number is even %d\n",x);
        }
        else{
            printf("Number is odd %d ",x);
        }

    }
    else{
        printf("Number is not positive %d",x);
    }
    getch();
    return 0;
}