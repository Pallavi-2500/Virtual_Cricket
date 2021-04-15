#include "virtualcricket.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

int toss(char name[])											//function for toss
{
	int t,x,choose,your_score=0,PC_score=0;
	printf("\n%s,Time to Toss! What do you choose:\n1.Head 2.Tail\n",name);
	do
	{
		fflush(stdin);
		scanf("%d",&t);
		if(t==1)
			printf("Your choice is Head\n");
		else if(t==2)
			printf("Your choice is Tail\n");
		else{
			system("cls");
			printf("%s,Time to Toss! What do you choose:\n1.Head 2.Tail\n",name);}
	}while(t<1||t>2);
	x=rand()%(2)+1;
	if(x==t)
	{
		tos:
		printf("%s wins the toss !\n",name);
		printf("What do you choose ?\n1.Batting\n2.Bowling\n");
		fflush(stdin);
		scanf("%d",&choose);
		if(choose==1)
		{
			printf("You're the Batsman!\n");
			printf("\nPress any key to continue...\n");
			getchar();
			system("cls");
			printf("_____________***GAME starts***_____________\n");
			your_score=batting(over,name);
			printf("\n%s, you scored %d !!\n",name,your_score);
			PC_score=batting(over,"PCplayer");
			printf("\nPCplayer's total score is %d\n",PC_score);
			result(your_score,PC_score,name);
		}
		else if(choose==2)
		{
			printf("You're the Bowler !\n");
			printf("\nPress any key to continue...\n");
			getchar();
			system("cls");
			printf("_____________***GAME starts***_____________\n");
			PC_score=batting(over,"PCplayer");
			printf("\nPCplayer's total score is %d\n",PC_score);
			your_score=batting(over,name);
			printf("\n%s, you scored %d !!\n",name,your_score);
			result(your_score,PC_score,name);
		}
		else
		{
			system("cls");
			printf("Selection Invalid! Please try again.\n");
			printf("---------------------------------------------------\n");
			goto tos;
		}
	}
	else
	{
		printf("Alas! %s lost the toss.\n",name);
		choose=x;
		if(x==1)
		{
			printf("PCplayer is going to Bat!\n");
			printf("\nPress any key to continue...\n");
			getchar();
			system("cls");
			printf("_____________***GAME starts***_____________\n");
			PC_score=batting(over,"Computer");
			printf("\nPCplayer's total score is %d\n",PC_score);
			your_score=batting(over,name);
			printf("\n%s, you scored %d !!\n",name,your_score);
			result(your_score,PC_score,name);
		}
		else
		{
			printf("PCplayer is going to Bowl !\n");
			printf("\nPress any key to continue...\n");
			getchar();
			system("cls");
			printf("________________________________***Game Starts***________________________________n");
			your_score=batting(over,name);
			printf("\n%s, you scored %d !!\n",name,your_score);
			PC_score=batting(over,"Computer");
			printf("\nPCplayer's total score is %d\n",PC_score);
			result(your_score,PC_score,name);
		}
	}
}