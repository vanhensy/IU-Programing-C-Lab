void question1()
{
	int N, i;
	double sum = 0.;
	printf("Enter N here: ");
	while (scanf_s("%d", &N) == 0 || N <= 0)
	{
		printf("Please enter a POSITIVE number: ");
	}
	for (i = 1; i <= N; i++)
		sum += 1 / (double)i;
	printf("Sum of this series:  %.2f\n", sum);
	getch();
}