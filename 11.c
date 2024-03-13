/*
	Q11. Write a program to determine the ranges of char, short, int, and long variables, both signed and
	unsigned, by printing appropriate values from standard headers.
	Do not use spaces to align table columns.
	(note: the size and range changes from compiler to compiler)
*/

#include<stdio.h>
#include<limits.h>
int main()
{
	printf("------------------------------------------------------\n");
	printf("Data type         Size   Format specifier     Range   \n");
	printf("------------------------------------------------------\n");
	printf("char               %d           %%c         %d to %d  \n",sizeof(char),SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char      %d           %%C         0 to %d  \n",sizeof(unsigned char), UCHAR_MAX);
	printf("short int          %d           %%hd       %hd to %hd \n",sizeof(short int),SHRT_MIN, SHRT_MAX);
	printf("unsigned short int %d           %%hu       0 to %hu \n",sizeof(unsigned short int), USHRT_MAX);
	printf("int                %d           %%d         %d to %d  \n",sizeof(int),INT_MIN, INT_MAX);
	printf("unsigned int       %d           %%u         0 to %u  \n",sizeof(unsigned int), UINT_MAX);
	printf("long int           %d           %%ld       %ld to %ld \n",sizeof(long int),LONG_MIN, LONG_MAX);
	printf("unsigned long int  %d           %%lu        0 to %lu \n",sizeof(unsigned long int), ULONG_MAX);
	return 0; 
}

