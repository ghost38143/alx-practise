#include <stdio.h>
/**
 * main - creating a calculator
 * Return: always 0
 */
int main(void)
{
	int choice;
	double num1, num2;

	printf("This is a simple calculator\n");
	printf("__________________________\n");

	while(1)
	{

	printf("This is the menu below: \n");
	printf("press 1:substraction\n");
	printf("press 2: addition\n");
	printf("press 3: multiplication\n");
	printf("press 4: division\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	if (choice >= 5)
	{
		printf("Goodbye! \n");
		break;
	}

	printf("enter two numbers: \n");
	scanf("%lf %lf", &num1, &num2);

	switch (choice)
	{
		case 1:
		printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
		break;
		case 2:
		printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
		break;
		case 3:
		printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
		break;
		case 4:
		if (num2 != 0)
		{
			printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
		}
		else
		{
			printf("error: division by zero\n");
		}
		break;

		default:
		printf("invalid choice,please try again.\n");
		break;
	}

	}
	return 0;
}

