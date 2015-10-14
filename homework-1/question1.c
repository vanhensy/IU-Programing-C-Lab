#include <stdio.h>
int totalNumber;
int inputValue;
int sumOdd;
int sumEven;
void titleGenerator() {
	printf("______________________________________________________\n");
	printf("======================================================\n");
	printf("===                   Question 1                   ===\n");
	printf("======================================================\n\n");
}
void footerGenerator() {
	printf("\n\n");
	printf("======================================================\n");
	printf("================================================Finish\n");
}
void askForN() {
	printf("Total number: ");
	scanf_s("%i", &totalNumber);
	if (totalNumber <= 0) {
		printf("\nError: You entered the negative number.\nPlease enter the positive number !\n\n");
		askForN();
	}
}

void inputValueForEachN() {
	int i;
	printf("\nStart to input %i number...\n\n", totalNumber);
	for (i = 1; i <= totalNumber; i++) {
		printf("Enter value number %i : ", i);
		scanf_s("%i", &inputValue);
		if (inputValue % 2 == 0) {
			sumOdd += inputValue;
		}
		else {
			sumEven += inputValue;
		}
	}
}
void main() {
	titleGenerator();
	printf("Please enter the total number you want to calculate !\n\n");
	askForN();
	inputValueForEachN();   
	printf("\nSum of Odd: %i || Sum of Even: %i || Sum of All: %i \n", sumOdd, sumEven, sumEven + sumOdd);
	footerGenerator();
	getch();
}