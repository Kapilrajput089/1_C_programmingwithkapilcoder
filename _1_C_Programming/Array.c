// write a program to use Array in c programming with kapilcoder,
#include"stdio.h"
#include"conio.h"
int main()
{

printf("Array in c programming \n\n");
/* 
  * Array is a linar collection of similar elements.
  * it is used to stored at contigious memory location.


*/
int arr[5];
    arr[0]=10;
    arr[1]=30;
    arr[2]=40;
    arr[3]=50;
    arr[4]=60;
    arr[5]=70;
    printf("it's one dimensional Array \n");
    for(int i=0;i<5;i++)
    printf("The value arr at index %d is : %d\n",i,arr[i]);
    //this is called one-dimensional array.
    //and also we can get stored array values by taking from the use using loops.
}