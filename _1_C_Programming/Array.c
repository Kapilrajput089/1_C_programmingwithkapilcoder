// write a program to use Array in c programming with kapilcoder,
#include"stdio.h"
#include"conio.h"
int main()
{

printf("Array in c programming \n\n");
/* 
  * Array is a linar collection of similar elements.
  * it is used to stored at contigious memory location.
  * 1.=> A one-dimensional array is like a list.
  * 2.=> A two-dimensional array is like a table.

  * There are two ways more about Array in  c prgramming.   
  1.=> int arr[5];  // this is Called array in c programming.
  2.=> int arr[5]={10,30,40,50,60,70};// this is called array declaration with initialization.
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
    int arr1[2][4]={{3,5,7,4},{1,6,2,8}};
    printf("it's two dimensional Array.\n ");
    for(int i=0;i<=2;i++){
      for(int j=0;j<=3;i++){
        printf("The value of arr1 at index %d,%d is : %d\n",i,j,arr1[i][j]);
        getch();
        return 0;

      }
    }
}