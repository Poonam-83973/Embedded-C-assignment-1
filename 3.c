/*

	Print the ASCII value of user entered character in decimal, hex, octal format and also print the
	character for user entered ASCII value.
*/


#include<stdio.h>
int main()
{
	char ch;

	printf("Enter the character : ");
	scanf("%c",&ch);

	printf("ASCII value of character in decimal is %d \n",ch);

	printf("ASCII value of character in hex is %x \n",ch);

	printf("ASCII value of character in octal is %o \n",ch);
 
 	int num;
	printf("Enter the ASCII value : ");
	scanf("%d",&num);

	printf("the character of ascii value %d is %c\n",num,num);
	return 0;
}
