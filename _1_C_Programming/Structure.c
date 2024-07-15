// write a progran to create structure book type using function
#include<stdio.h>
#include<conio.h>
struct book input();
void display(struct book);

struct book             /* * What is structure in c programming.
                           * Structure is a user-defined data type that allows you to store multiple variables of diffrent types in a single unit its 
						     like a container that holds various data types making it easier to organize and manipulate data.
						   * A structure typically includes:
						    * Member variable (data members ) these are the individual variables that make up the structure.
						    * Member functions (Methods ) these are functions that operate on the structure's data member.
                           
						  */
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
	printf("Enter the BookId    : =");
	scanf("%d",&b1.id);
	printf("Enter Book Name  : = ");
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
