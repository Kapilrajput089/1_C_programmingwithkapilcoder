// Write a program to manu driven using switch case with kapilcoder.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

int main()
{
    int choice;
   int a,b,res;
    printf("1.Addition\n ");
    printf("2.Subtraction\n ");
    printf("3.Division\n ");
    printf("4.Multplication\n ");
    printf("5.Exit\n ");
    printf("please Enter your choice : ");
    scanf("%dd",&choice);
    switch(choice)
 
    {
        case 1:
        printf("Enter two Numbers : = ");
        scanf("%d %d",&a,&b);
        res=a+b;
        printf("Addition of two Numbers : %d",res);
        break;
        case 2:
          printf("Enter two Numbers : = ");
          scanf("%d %d",&a,&b);
          res=a-b;
             printf("Subtraction of two Numbers : %d",res);
          break;
            case 3:
          printf("Enter two Numbers : = ");
          scanf("%d %d",&a,&b);
          res=a/b;
             printf("Division  of two Numbers : %d",res);
          break;
            case 4:
          printf("Enter two Numbers : = ");
          scanf("%d %d",&a,&b);
          res=a*b;
             printf("Multplication of two Numbers : %d",res);
          case 5:
          exit(1);
    }
          getch();
          return 0;


}