// A program that calculates triangle area
#include <stdio.h>

int main() {
	// declaration of variables
	double base;
	double height;
	// get values
	printf("enter base: ");
	scanf("%f" , &base);
	printf("enter height: ");
	scanf("%f" , &height);


	//process the data
	double surface = (base * height) / 2;

	//output the data
	printf("Triangular area = %2f\n", surface);
}