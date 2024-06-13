// write a program to add all digits in c programming
#include"stdio.h"
#include"conio.h"
int main()
{
    int n,sum=0,x;
     printf("Enter a number : = ");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
     	x=n%10;
     	sum=sum+x;
     	n=n/10;
}
    printf("sum of all dgits : = %d",sum);
     
    
getch();
return 0;
}
   



