#include <stdio.h>

//This function add two number
int plus(int a, int b){
	return a+b;
}

//This function minus two number
int minus(int a, int b){
	return a-b;
}

//This function multiple two number
int multi(int a, int b){
	return a*b;
}

//This function divide two number 
float div(int a, int b){
	if(b!=0){
		return (float)(a)/(float)(b);
	}
}

// Main function
int main()
{
	int a, b;		
	printf("Enter two integer number \n");
	scanf("%d%d", &a, &b);
	printf("Add : %d\n", plus(a, b));
	printf("Minus : %d\n", minus(a, b));
	printf("Multilple : %d\n", multi(a, b));
	if(b!=0){
		printf("Divide : %g", div(a,b));
	}
	else printf("Divide fail : The second number is invalid");
	return 0;
}

