// write a program to check Number  is even or odd in c programming with kapilcoder.
#include"stdio.h"
#include"conio.h"
int main()
{
    int n;
    printf("Enter a Number : = ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Number is even : ");
    }
    else {
        printf("Number is odd : ");
    }
    getch();
    return 0;
}