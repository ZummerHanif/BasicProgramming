//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<Windows.h> 
//
//int main()
//{
//	int player1, player2, countp1=0, countp2=0, countD=0;
//	srand(time(NULL));
//	player1 = rand() % 6 + 1;
//	player2= rand() % 6 + 1;
//
//	printf("Rolling Dice....Please Wait\n\n");
//	Sleep(2000);
//	printf("Player 1 got : number %d  on Turn ONE\n\n", player1);
//	printf("Player 2 got : number %d  on Turn ONE\n\n", player2);
//
//	if (player1 > player2)
//	{
//		countp1++;
//	}
//	else if (player1 < player2)
//	{
//		countp2++;
//	}
//
//	else
//	{
//		countD++;
//	
//	}
//
//	player1 = rand() % 6 + 1;
//	player2 = rand() % 6 + 1;
//
//	printf("Rolling Dice Agian....Please Wait\n\n");
//	Sleep(2000);
//
//	printf("Player 1 got : number %d  on Turn TWO\n\n", player1);
//	printf("Player 2 got : number %d  on Turn TWO\n\n", player2);
//
//
//	if (player1 > player2)
//	{
//		countp1++;
//	}
//	else if (player1 < player2)
//	{
//		countp2++;
//	}
//
//	else
//	{
//		countD++;
//
//	}
//
//	if (countp1 > countp2)
//	{
//		printf("Player 1 wins the game :)\n\n");
//	}
//	else if (countp1 < countp2)
//	{
//		printf("Player 2 wins the game :)\n\n");
//	}
//	else if(countD<=2)
//	{
//		printf("DRAW :( \n\n");
//	}
//	
//
//
//
//	return 0;
//}