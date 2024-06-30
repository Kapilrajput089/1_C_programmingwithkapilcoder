// write a program to add two number using function with kapilcoder.
#include"stdio.h"
#include"conio.h"
void add();
int main(){
  
  add();
  getch();
  return 0;


}
void add(){
  int a,b,res;
    printf("Enter two Numbers : = ");
    scanf("%d%d",&a,&b);
    res=a+b;
    printf("Addition of two Numbers : %d",res);
}
