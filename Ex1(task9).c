//#include<stdio.h>
//
//int main()
//{
//	
//	int n, n1=0,n2 = 0;
//	
//	printf("Enter a number1 you want on dice ");
//	scanf_s("%d", &n1);
//
//	printf("\n\n");
//
//	printf("Enter a number2 you want on dice ");
//	scanf_s("%d", &n2);
//
//
//	printf("\n\n");
//
//	srand(time(NULL));
//	
//
//	printf("--------Rolling Dice....Please Wait--------\n\n");
//	Sleep(2000);
//
//	n = rand() % 6 + 1;
//	
//	
//	if (n == n1 )
//	{
//		printf("Number on the dice:%d is equal to the provided number1 :%d ", n, n1);
//	}
//	if (n == n2)
//	{
//		printf("Number on the dice:%d is equal to the provided number2 :%d ", n, n2);
//	}
//
//	else
//	{
//		printf("Sorry Required number didn't appear ");
//	}
//
//
//
//
//
//	
//
//	return 0;
//}