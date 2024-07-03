#include"stdio.h"
#include"conio.h"
int main()
{
    printf("String in C programming \n");
    /* => What is string in c programming.
     * => Sequence of characters terminated at null character
     * => Is String a data type in C programming.
    */
    /// String creation by using first method.
    char name[]={'k','a','p','i','l'};
printf("String creation using first method : ");
for(int i=0;i<=name[i]!= '\0';i++){
printf("%c",name[i]);
}
// String creation by using second method.
char name1[]="kapil coder";
printf("String creation using Second method : %s\n",name1);
// Get String by  the user.
char name2[10];
printf("Enter your name : = ");
gets(name2); // this is used to git string within space.
printf("\n This is your Entered string %s\n",name2);
printf("Print string using puts function : ");
puts(name2);
return 0;
getch();
}    
