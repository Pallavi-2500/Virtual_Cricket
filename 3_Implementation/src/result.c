#include "virtualcricket.h"
#include "virtualcricket.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

void result(int your_score,int PC_score,char name[])				//Result function
{
	printf("____________________________________________________________________________\n");
	printf("\n***Analysing the  Scores***\n");
	//Sleep(2000);
	printf("\nPress any key to view The Result\n");
	getchar();
	system("cls");
	printf("________________________***Time for result***________________________\n");
	if(your_score>PC_score)
		printf("Yayyy !!! You win by %d runs ! \n\n",your_score-PC_score);
	else if(your_score<PC_score)
		printf("Alas ! You lost.\n\n");
	else
		printf("Match draw... Runs scored by both players: %d\n\n",PC_score);
}