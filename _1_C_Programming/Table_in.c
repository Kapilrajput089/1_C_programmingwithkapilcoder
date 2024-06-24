// write a to print Table in c programming with kapilcoder.
#include"stdio.h"
#include"conio.h"
int main(){
    
    int n;
    printf("Enter A Number : = ");
    scanf("%d",&n);
    printf("Table is : \n");
    for(int i=1;i<=10;i++){
    printf("%d\n",n*i);
    }
    getch();
    return 0;
     
    }