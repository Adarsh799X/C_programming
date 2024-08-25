#include <stdio.h>

int main() {
	char operator;
	float a;
	float b;
	printf("Enter an operator [+,-,*,/]: ");
	scanf("%c", &operator);

	printf("Enter number: ");
 	scanf("%f", &a);
	printf("Enter number: ");
	scanf("%f", &b);
	float result;

	switch (operator) {
	case '+':
	result =a+b;
	printf("%f \n", result);
	break;
	case '-':
	result = a-b;
	printf("%f \n", result);
	break;
	case '*':
	result = a*b;
	printf("%f \n", result);
	break;
	case '/':
	result = a/b;
	printf("%f \n", result);
	break;
	default:
	printf("Invalid input \n");

}

	return 0;

}

