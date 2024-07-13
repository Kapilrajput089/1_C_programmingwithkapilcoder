// write a progran to create structure book type using function
#include<stdio.h>
#include<conio.h>
struct book input();
void display(struct book);

struct book
{
  int id;
  char b_name[25];
  float price; 	
};
int main()
{
	struct book b;
	b=input();
	display(b);
}
struct book input()
{
	struct book b1;
	printf("Enter the BookId    :     =");
	scanf("%d",&b1.id);
	printf("Enter Book Name  : =");
	scanf("%s",&b1.b_name);
	fflush(stdin);
	printf("Enter the Price : = ");
	scanf("%f",&b1.price);
	return(b1);
}
void display(struct book b)
{
	printf("\n\n\n\n");
	printf("Book Id = %d\n",b.id);
	printf("Book Name = %s\n",b.b_name);
          printf("Book Price = %f\n",b.price);
}
