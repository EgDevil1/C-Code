#include<stdio.h>
int main()
{
	double firstNumber,secondNumber,sum,difference,multiply,division;
	int option;
	char input;
	printf("\n Menu");
	printf("\n ");
	printf("\n 1. Addition");
	printf("\n ");
	printf("\n 2. Subtraction");
	printf("\n ");
	printf("\n 3. Multiplication");
	printf("\n ");
	printf("\n 4. Division");
	printf("\n ");

    printf("\n Enter first number");
    printf("\n");
    scanf("%lf",&firstNumber);
    
    printf("\n Enter second number");
    printf("\n");
    scanf("%lf",&secondNumber);
	
	printf("\n Which operator do you want to operate?");
	printf("\n");
	
	printf("\n Choose an operator from menu");
	scanf("%d",option);
	
	switch(option)
	{
		case 1:
			sum=firstNumber+secondNumber;
			printf("\n sum=%2f",sum);
			printf("\n");
		break;
	
	    case 2:
			difference=firstNumber-secondNumber;
			printf("\n difference=%2f",difference);
			printf("\n");
			break;
		
		case 3:
			multiply=firstNumber*secondNumber;
			printf("\n multiply=%2f",multiply);
			printf("\n");
		
		break;
		default:
			printf("\n");
			printf("\n Option not available....");
		}
}

	