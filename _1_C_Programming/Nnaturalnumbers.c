// write a program to print first N natural numbers using for loop in c programming
#include"stdio.h"
#include"conio.h"
int main()
{
    int n;
    printf("Enter a number : = ");
    scanf("%d",&n);
      printf("N Naturl Numbers are :- \n");
      for(int i=1;i<=n;i++)
      printf("%d\n",i); 
      getch();
      return 0;
}