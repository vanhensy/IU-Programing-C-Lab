#include <stdio.h>
#include <math.h> // Using math.h to get pow() fnuction
int store[30], i = 0, inputNumber; // define max-lengh of output number is 30 digits
double outputNumber;
void getNumber() {
	printf("Enter a number: ");
	scanf_s("%i", &inputNumber);
	store[i] = inputNumber;
	i++;
}

void main() {
	getNumber();
	while (inputNumber != 0) {
		getNumber();
		if (inputNumber == 0) { break; }
	}
	for (int n = 0; n <= i; n++) {
		outputNumber += (store[n] * (pow(10., (double)(i - n - 1))));
	}
	printf("\nOutput number is %.0f", outputNumber);
	getch();
}