/*
	Q9. Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
	conversion is
*/

#include<stdio.h>
int main()
{
	float degree_celcius, degree_fahrenheit;

	//degree fahrenheit to degree celcius
	printf("Enter the value of degree fahrenheit to convert it into degree celsius: \n");
	scanf("%f",&degree_fahrenheit);

	degree_celcius = (0.55f * (degree_fahrenheit - 32));

	printf("The answer is = %.2f degree celcius\n",degree_celcius);

	//degree fahrenheit to degree celcius

	printf("Enter the value of degree celcius to convert it into degree fahrenheit: \n");
	scanf("%f",&degree_celcius);

	degree_fahrenheit = 32 +(1.8f* degree_celcius);

	printf("The answer is = %.2f degree fahrenheit\n",degree_fahrenheit);

	return 0;
}
