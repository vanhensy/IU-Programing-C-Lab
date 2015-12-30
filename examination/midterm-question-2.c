#include <stdio.h>
void main() {
	srand(time(NULL)); // Reset time each time core function run 
	int dice1, dice2, total = 0, counter = 0;
	printf("Game start !!!\n");
	while (total < 90) {
		dice1 = random(1, 6);
		dice2 = random(1, 6);
		if (dice1 == dice2) {
			total += 2 * (dice1 + dice2);
		}
		else {
			total += dice1 + dice2;
		}
		printf("Your got %i %i (total = %i)\n", dice1, dice2, total);
		counter++;
	}
	if (counter <= 15) {
		printf("\nExcellent game !");
	}
	else if (counter > 15 && counter <= 20) {
		printf("\nGood game !");
	}
	else if (counter > 20 && counter <= 25) {
		printf("\nFair game !");
	}
	else {
		printf("You should try again :)");
	}
	getch();
}
int random(number1, number2) {
	int randNumber = 0, temp;
	while (randNumber == 0)
	{
		temp = rand();
		if (temp % 10 <= number2 && temp % 10 >= number1) {
			randNumber = temp % 10;
		}
		else {
			randNumber = 0;
		}
	}
	return randNumber;
}