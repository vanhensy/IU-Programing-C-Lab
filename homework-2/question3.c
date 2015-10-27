#include <stdio.h>
int value[3];
double remainder, GCDnumber;
void checkNumber(); // Check if user input negative value 
int calculateGCD();
void main() {
	printf("Please enter 3 number here: ");
	for (int i = 0; i < 3; i++){
		scanf_s("%i", &value[i]);
	}
	checkNumber();
	remainder = calculateGCD((int)value[0], (int)value[1]);
	GCDnumber = calculateGCD((int)remainder, (int)value[2]);
	printf("\nGCD of these number is: %.0f", GCDnumber);
	getch();
}


void checkNumber() {
	for (int counter = 0; counter < 3; counter++)
	{
		while (value[counter] < 0) {
			printf("\nDetected negative value at number %i !\n", counter + 1);
			printf("\nRe-enter wrong value at number %i: ", counter + 1);
			scanf_s("%i", &value[counter]);
			checkNumber();
			if (value[counter] > 0)
				break;
		}
	}
}

int calculateGCD(int num1, int num2) {
	while (num1 != num2)
	{
		if (num1 > num2)
		{
			num1 -= num2;
		}
		else
		{
			num2 -= num1;
		}
	}
	return num1;
}