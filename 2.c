/*
	2.Write a program to accept a number and print the number in character, decimal, octal and hex
	formats.
*/

#include<stdio.h>
int main()
{
	int n,ch;
	printf("Enter the number : \n");
	scanf("%d",&n);

	printf("The character of given number is : %c\n",n);

	printf("The decimal number of given number is : %d\n",n);

	printf("The octal number of given number is : %o\n",n);

	printf("The hex number of given number is : %x\n",n);


return 0;
}
