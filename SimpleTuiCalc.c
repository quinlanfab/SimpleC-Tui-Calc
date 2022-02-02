#include <stdio.h>

int X, Y, Z;
int OperatorChoice;
int main()
{
	printf("Welcome to quinlanfab's simple tui calc!\n");
	printf(" _____________________\n");
	printf("|  _________________  |\n");
	printf("| | 58008           | |\n");
	printf("| |_________________| |\n");
	printf("|  ___ ___ ___   ___  |\n");
	printf("| | 7 | 8 | 9 | | + | |\n");
	printf("| |___|___|___| |___| |\n");
	printf("| | 4 | 5 | 6 | | - | |\n");
	printf("| |___|___|___| |___| |\n");
	printf("| | 1 | 2 | 3 | | x | |\n");
	printf("| |___|___|___| |___| |\n");
	printf("| | . | 0 | = | | / | |\n");
	printf("| |___|___|___| |___| |\n");
	printf("|_____________________|\n");
	printf("Type your first number:\n");
	printf("_______________________\n");
	scanf("%d", &X);
	printf("Type your second number:\n");
	printf("________________________\n");
	scanf("%d", &Y);
	printf("Type 1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division:\n");
	printf("_________________________________________________________________________________\n");
	scanf("%d", &OperatorChoice);
	if (OperatorChoice == 1) {
		Z = (X + Y);
		printf("Answer:%d\n", Z);
		printf("Closing Program....\n");
		return 0;
	}
	if (OperatorChoice == 2) {
		Z = (X - Y);
		printf("Answer:%d\n", Z);
		printf("Closing Program....\n");
		return 0;
	}
	if (OperatorChoice == 3) {
		Z = (X * Y);
		printf("Answer:%d\n", Z);
		printf("Closing Program....\n");
		return 0;
	}
	if (OperatorChoice == 4) {
		Z = (X / Y);
		printf("Answer:%d\n", Z);
		printf("Closing Program....\n");
		return 0;
	}
}
