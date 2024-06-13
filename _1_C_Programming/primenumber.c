// write a program to check number is prime or not in C programming.
#include"stdio.h"
#include"conio.h"
int main()
{
	int n,i;
	printf("Enter a number : = ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		break;
	}
	if(n==i)
	printf("Number is prime :%d",n);
	else 
	printf("Number is not prime :%d",n);
	getch();
	return 0;
}