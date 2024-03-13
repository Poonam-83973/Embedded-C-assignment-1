/*
	Q1. Write a program to Accept two numbers and
	a. find its sum.
	b. find its difference.
	c. find its product.
*/

#include<stdio.h>
int main()
{
	int n1,n2,sum,diff,mul;
	printf("Enter 1st number : \n");
	scanf("%d",&n1);

	printf("Enter 2nd number : \n");
	scanf("%d",&n2);

	sum = n1 + n2;
	diff = n1 - n2;
	mul = n1 * n2;
 
	printf("The sum of the %d and %d is : %d\n",n1,n2,sum);

	printf("The difference of the %d and %d is : %d\n",n1,n2,diff);

	printf("The product of the %d and %d is : %d\n",n1,n2,mul);

return 0;
}
