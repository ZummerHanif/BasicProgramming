//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<Windows.h> 
//
//int main()
//{
//	int player1[3], player2[3], sum1=0,sum2=0;
//	srand(time(NULL));
//
//	printf("Starting 2 player game....\n\n\n");
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("Rolling Dice for %d time ....Please Wait\n\n",i+1);
//		Sleep(2000);
//
//		player1[i] = rand() % 6 + 1;
//		player2[i] = rand() % 6 + 1;
//
//		printf("Player 1 got :  %d  on Turn# %d\n\n", player1[i], i + 1);
//		printf("Player 2 got :  %d  on Turn# %d\n\n", player2[i], i + 1);
//
//		sum1 += player1[i];
//		sum2 += player2[i];
//
//
//	}
//
//	printf("__________Sum of player1 numbers is %d ___________\n", sum1);
//	printf("__________Sum of player2 numbers is %d ___________\n", sum2);
//
//	printf("\n\n");
//
//	
//	if (sum1 > sum2)
//	{
//		printf("<<<<<<<<<<Player 1 wins :)>>>>>>>>>>>>>>");
//    }
//
//	else if (sum1 < sum2)
//	{
//		printf("<<<<<<<<<<<<Player 2 wins :)>>>>>>>>>>>");
//	}
//
//	else
//	{
//		printf(" <<<<<<<<,Draw :( >>>>>>>>>>" );
//
//	}
//
//
//	printf("\n\n\n");
//
//
//	return 0;
//}