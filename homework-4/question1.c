#include <stdio.h>
#include <stdlib.h>
void question_1() {
	int arraySize;
	printf("\nInput number of element in array: ");
	scanf_s("%i", &arraySize);
	int *parray = malloc(arraySize * sizeof *parray);
	printf("====================================\n");
	for (int i = 0; i<arraySize; i++)
	{
		printf("Enter value or element number %i: ", i + 1);
		scanf_s("%i", &parray[i]);
	}
	printf("====================================\n");
	printf("\nYour input value is here !\n");
	for (int i = 0; i<arraySize; i++)
	{
		printf("%3i", parray[i]);
	}
	int swap_positions[2];
	printf("\nPlease enter two positions that you wanna swap: ");
	for (int i = 0; i < 2; i++) {
		scanf_s("%i", &swap_positions[i]);
	}
	printf("=========================swapping...\n");
	int temp;
	if (swap_positions[0] > 0 && swap_positions[1] <= arraySize) {
		temp = parray[swap_positions[0] - 1];
		parray[swap_positions[0] - 1] = parray[swap_positions[1] - 1];
		parray[swap_positions[1] - 1] = temp;
	}
	else {
		printf("Error");
	}
	printf("\nSwapping Done !!! This is new array. !\n");
	for (int i = 0; i<arraySize; i++)
	{
		printf("%3i", parray[i]);
	}
	getch();
}
