#include <stdio.h>
#include <string.h>
char name[100];
int hw1Scrore;
int hw2Scrore;
int hw3Scrore;
int midtermScore;
int finalScore;
int grade;
char level[12];
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
void main() {
	printf("\nTips: Use TAB to input each score value !!!\n\n");
	enterName();
	enterScore();
	outputGrade();
	getch();
}