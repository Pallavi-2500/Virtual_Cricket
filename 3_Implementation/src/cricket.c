#include "virtualcricket.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

int over=0,temp=-1,count=0;
void cricket()
{
	system("cls");
	int choice,choose;
	char name[50],ch;
	srand(time(NULL));
	printf("_______________________________________WELCOME TO HAND CRICKET_______________________________________\n");
	lb:
	printf("Choose to Go ahead\n");
	printf("1.Play unlimited overs\n");
	printf("2.Play limited overs\n");
	printf("3.Instructions\n");
	printf("4.Quit\n");
	fflush(stdin);
	scanf("%d",&choice);
	system("cls");
	switch(choice)
	{
		case 1:	printf("_______________________________________GAMEPLAY_______________________________________\n");
				printf("Let me know your name-");
				fflush(stdin);
				gets(name);
				choose=toss(name);
				break;
		case 2:	printf("_______________________________________GAMEPLAY_______________________________________\n");
				printf("Let me know your name-");
				fflush(stdin);
				gets(name);
				printf("How many overs would you like to play-");
				scanf("%d",&over);
				choose=toss(name);
				break;
		case 3:	printf("_______________________________________How to Play_______________________________________\n\n");
				printf("Virtual Cricket is going to take you on your 'virtual' chlidhood memory lane.\n");
				printf("I am your game partner, PCplayer. Let's get started with the rules:\n");
				printf("To win the game, make sure you score more than PCplayer.\n");
				printf("The Game begins with a Toss, and you get to choose: Head or Tail.\n");
				printf("If the toss is won by you, you again get to choose: Bat or Bowl.\n");
				printf("If the toss is lost by you, PCplayer makes the decision.\n");
				printf("\n After the Toss, You will either Bat or Bowl.\n");
				printf("Once the Game starts, you will be asked to choose a number from 1 to 6.\n");
				printf("Similary, PCplayer also chooses a number.\n");
				printf("If the numbers choosen by both players are different, the batsman's score\n");
				printf("equals the number seleced by him. The scores keep adding until both the\n");
				printf("players keep selecting the different numbers. Once the numbers selected by\n");
				printf("both the players are equal, the batsman is considered to be OUT.\n");
				printf("Hence, a Target is now set for the bowler in the next inning.\n");
				printf("The Bowler starts to bat and chases the target and game commences forward.\n");
				printf("\nThat's all about the rules. Enter any key to begin the game. \n");
				getchar();
				system("cls");
				printf("________________________WELCOME TO VIRTUAL CRICKET________________________\n");
				goto lb;
				break;
		case 4:	printf("Thanks for playing,Hope you enjoyed!!!\n");
				//Sleep(1000);
				menu();
				break;
		default:printf("________________________WELCOME TO VIRTUAL CRICKET________________________\n");
				goto lb;
	}
	printf("_______________________________________****************_______________________________________\n");
	printf("Let's Play Again? (Y/N)-");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y')
	{	system("cls");
		printf("________________________WELCOME TO VIRTUAL CRICKET________________________\n");
		goto lb;
	}
	else
		printf("\nIt was Fun! Thanks for playing!!\n");
		menu();
}
