/*
	Q10. Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
	triangle. Use sqrt() function from math.h to calculate square root.
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a = 3, b = 4, c = 5, peri;
	double s,val, area;

	printf("The sides of triangle are %d , %d and %d \n",a,b,c);

	peri = a + b + ( c * a ) + b + c ;

	printf("The perimeter of triangle is %d\n",peri);

	s = ( a+b+c ) / 2.0f;

	val = s * (s-a) * (s-b) * (s-c);

	area = sqrt(val);
	
	printf("The area of triangle is %lf\n",area);
	return 0;
}
