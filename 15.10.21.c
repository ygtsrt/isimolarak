
//sample program
// date: 15.10.21

#include <stdio.h>

//global scope
int a;
double const pi = 3.14;

int main () {
	//local variables

	int b = 9;
	char c = 'c';
	float d = 4.56;
	double dd = 78.34;
	short e = -56;
	long f = 4563452;

	unsigned int k = 234;
	unsigned char l = 34;
	unsigned long m = 234343;
	unsigned short n = 2341;

	printf("This is %d integer, its value is = %d\n", sizeof (int),  b);
	printf("This is %d byte integer, its value as char is  = %c , as interger is = %d\n",sizeof (char), c, c);
	printf("This is %d float, its value is = %f\n",sizeof (float), d);
	printf("This is %d double, its value is = %lf\n",sizeof (double), dd);
	printf("This is %d short, its value is = %d\n",sizeof (short), e);
	printf("This is %d long, its value is = %d\n",sizeof (long), b);

	printf ("The size of int =%d\n" , sizeof(int));
	int sizeChar = sizeof (char);
	printf ("The size of char =%d\n" , sizeChar);
	int sizeFl = sizeof (float);
	printf ("The size of float =%d\n" , sizeFl);
	int sizeDo = sizeof (double);
	printf ("The size of double =%d\n" , sizeDo);
	int sizeSh = sizeof (short);
	printf ("The size of short =%d\n" , sizeSh);
	int sizeLng = sizeof (long);
	printf ("The size of long =%d\n" , sizeLng);
	printf ("THX FOR EXECUTING ME :d");


}