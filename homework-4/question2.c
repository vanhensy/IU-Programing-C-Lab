#include <stdio.h>
#include <stdlib.h>
int MIN = 100;
void main() {
	srand((unsigned)time(NULL));
	int arraySize;
	do {
		printf("Enter the number element of Array: ");
		scanf_s("%i", &arraySize);
	} while (arraySize < MIN);
	int *parray = malloc(arraySize * sizeof *parray);
	for (int i = 0; i < arraySize; i++) {
		parray[i] = (rand() % (89 - 10)) + 10;
	}
	int counter = 0;
	for (int i = 0; i < arraySize; i++) {
		if (counter == 10) {
			printf("\n");
			counter = 0;
		} // Reset the counter
		printf("%3i", parray[i]);
		counter++;
	}
	getch();
}

