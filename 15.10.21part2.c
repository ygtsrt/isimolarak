
//calculate area of a triangle
// date: 15.10.21

#include <stdio.h>

//function prototype
double calc(int b, int h);

int main () {

	printf("Please enter the base lenght: ");
	int base;
	scanf("%d" , &base);

	printf("Please enter the height: ");
	int height;
	scanf("%d" , &height);

	//calculation
	double s;
	//calling a function
	s = calc(base, height);

	//output
	printf("The area of the triangle = %lf unit square. \n" , s);

	return 0;

}

//function definition
double calc(int b, int h) {
	double surf = (b *h) / 2.0;
	return surf;
}