#include<stdio.h>

int main(){

	int a ;		//type and name
	a = 45; 	//assignment statement
	int *aPtr; 	// pointer variable (adress variable)
	aPtr = &a;

	printf("a = %d and adress of a = 0x%x\n" , a, aPtr);

	a = 85;
	*aPtr = 85;
	printf("a = %d\n", a);

	printf("THX FOR EXECUTION\n");


	return 0;
}