#include <stdio.h>
#include <string.h>
// choose question variable
char selectedOption[5];
int selectedOptionNumb;
char programState[10];
// Define for Question 1
int totalNumber;
int inputValue;
int sumOdd;
int sumEven;
// Define for Question 2
char name[100];
int hw1Scrore;
int hw2Scrore;
int hw3Scrore;
int midtermScore;
int finalScore;
int grade;
char level[12];
// Start Generate Header and Footer
void titleGenerator() {
	printf("\n______________________________________________________\n");
	printf("======================================================\n");
	if (selectedOptionNumb == 1) {
		printf("===                   Question 1                   ===\n");
	}
	else if (selectedOptionNumb == 2){
		printf("===                   Question 2                   ===\n");
	}
	printf("======================================================\n\n");
}
void footerGenerator() {
	printf("\n\n");
	printf("======================================================\n");
	printf("================================================Finish\n");
}

// Start Question 1

void askForN() {
	printf("Total number: ");
	scanf_s(" %i", &totalNumber);
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
		scanf_s(" %i", &inputValue);
		if (inputValue % 2 == 0) {
			sumOdd += inputValue;
		}
		else {
			sumEven += inputValue;
		}
	}
}
void Question1() {
	titleGenerator();
	printf("Please enter the total number you want to calculate !\n\n");
	askForN();
	inputValueForEachN();
	printf("\nSum of Odd: %i || Sum of Even: %i || Sum of All: %i \n", sumOdd, sumEven, sumEven + sumOdd);
	footerGenerator();
}

// Start Question 2

void enterName(){
	printf("_______________________________________________\n");
	printf("\nName:\t");
	fgets(name, sizeof(name), stdin);
}
void enterScore() {
	printf("_______________________________________________\n\n");
	printf("Score:\tHW1\t|HW2\t|HW3\t|Mid\t|Final  \n");
	printf("-----------------------------------------------\n\n");
	printf("\t");
	scanf_s(" %i\t %i\t %i\t %i\t %i", &hw1Scrore, &hw2Scrore, &hw3Scrore, &midtermScore, &finalScore);
	printf("_______________________________________________\n\n");
}

void outputGrade() {
	grade = ((hw1Scrore + hw2Scrore + hw3Scrore) / 3)*0.3 + midtermScore*0.3 + finalScore*0.4;
	if (grade >= 85) {
		strcpy_s(level, sizeof(level), "Excellent");
	}
	else if (grade >= 65 && grade <= 85)
	{
		strcpy_s(level, sizeof(level), "Good");
	}
	else if (grade <= 65 && grade >= 50)
	{
		strcpy_s(level, sizeof(level), "Fair");
	}
	else if (grade < 50) {
		strcpy_s(level, sizeof(level), "Fail");
	}

	printf("=====================\t ======================\n");
	printf("Student GPA:\t %i |\t |Grade:  %9s   |\n", grade, level);
	printf("=====================\t ======================\n");
}
void Question2() {
	titleGenerator();
	printf("\nTips: Use TAB to input each score value !!!\n\n");
	enterName();
	enterScore();
	outputGrade();
	footerGenerator();
}


// Main function goes here

void main() {
	while (selectedOptionNumb == 0)
	{
		printf("\nWhich question you want to check ?! (1/2) : ");
		fgets(selectedOption, 20, stdin);

		sscanf_s(selectedOption, " %d", &selectedOptionNumb);
		switch (selectedOptionNumb)
		{
		case 1:
			Question1();
			selectedOptionNumb = 0;
			getchar(); // Simple trick to eleminate bug
			break;
		case 2:
			Question2();
			selectedOptionNumb = 0;
			getchar(); // Simple trick to eleminate bug
			break;

		default:
			printf("\nError: Your request is unavailable !");
			selectedOptionNumb = 0;
			getchar(); // Simple trick to eleminate bug
			break;
		}
	}

	getch();

}
