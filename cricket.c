/**
 * @file Cricket.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<windows.h>							//For Sleep() and console
#include<stdlib.h>							//For fflush() and random
#include<string.h>
#include<stdio.h>
#include<conio.h>							//For getch()
#include<time.h>							//For time(NULL)

//Function Declarations for Hand cricket
int toss(char name[]);
int batting(int overs,char name[]);
void result(int score_p,int score_c,char name[]);
void virtualcricket();
//Global variables for Hand cricket
int over=0,temp=-1,count=0;
//Other functions
void gotoxy(short,short);
void menu();
void welcome();

//Main function
int main()
{
	//welcome();
	menu();
	return 0;
}
void menu()
{
	int choice;
	do
	{
		system("cls");
		printf("_______________________________________WELCOME TO VIRTUAL CRICKET_______________________________________\n");
		printf("Menu\n");
		printf("1. Play\n2. Quit\n");
		fflush(stdin);
		scanf("%d",&choice);
		if(choice==1)
			virtualcricket();
		else if(choice==2)
		{
			printf("You played well !! Come again \n");
			exit(0);
		}

		else
			system("cls");
	}while(choice<1||choice>4);

}
//Code for Hand Cricket
void virtualcricket()
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
				getch();
				system("cls");
				printf("________________________WELCOME TO VIRTUAL CRICKET________________________\n");
				goto lb;
				break;
		case 4:	printf("Thanks for playing,Hope you enjoyed!!!\n");
				Sleep(1000);
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
			getch();
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
			getch();
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
			getch();
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
			getch();
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

int batting(int overs,char name[])								//function for game
{
	int runs=0,i=0,j=1;
	char option[5];
	count++;
	if(strcmp(name,"PCplayer")==0)
	{
		printf("___________________________***You are going to bowl now***___________________________\n");
		strcpy(option,"Bowl");
	}

	else
	{
		printf("___________________________***You are going to bat now***___________________________\n");
		strcpy(option,"Bat");
	}
	again:
	printf("Choose any number ranging from 1 to 6: ");
	int bat,bowl;
	if(overs>0)
	{
		for(i=0;i<overs;i++)
		{
			for(j=1;j<=6;j++)
			{
				printf("\n\t\t%d is the current score.\n",runs);
				printf("Bowl %d(%d)\n",i,j);
				printf("%s : ",option);
				fflush(stdin);
				scanf("%d",&bat);
				if(bat>0&&bat<7)
				{
					bowl=rand()%6+1;
					printf("PCplayer: %d",bowl);
					if(bat==bowl)
					{
						if(runs==0)
							printf("\nALAS! Duck out");
						else
							printf("\nALAS! OUT!!!");
						temp=runs;
						return runs;
					}
					else
					{
						if(strcmp(name,"PCplayer")==0)
						{
							if(bowl==6)
								printf("\nWell Done!! SIXER!!!");
							else if(bowl==4)
								printf("\nGood Job! It's a Fourrr!!");
							runs+=bowl;
						}
						else
						{
							if(bat==6)
								printf("\nWell Done!! SIXER!!!");
							else if(bat==4)
								printf("\nGood Job! It's a Fourrr!!");
							runs+=bat;
						}
					}
					if(count%2==0&&temp<runs)
						return runs;
				}
				else
				{
					printf("Selection Invalid! Please try again.\n");
					printf("---------------------------------------------------\n");
					goto again;
				}
			}
		printf("\nOver %d is completed\n",i+1);
		}
		return runs;
	}
	else
	{
		while(1)
		{
			printf("\n\t\t%d is the current score.\n",runs);
			printf("Bowl %d(%d)\n",i,j);
			if(j!=6)
				j++;
			else{
				j=1;
				++i;
			}
			printf("%s : ",option);
			fflush(stdin);
			scanf("%d",&bat);
			if(bat>0&&bat<7)
			{
				bowl=rand()%6+1;
				printf("PCplayer : %d",bowl);
				if(bat==bowl)
				{
					if(runs==0)
						printf("\nALAS! Duck out");
					else
						printf("\nALAS! OUT !!!");
					temp=runs;
					return runs;
				}
				else
				{
					if(strcmp(name,"PCplayer")==0)
					{
						if(bowl==6)
							printf("\nWell Done!! SIXER!!!");
						else if(bowl==4)
							printf("\nGood Job! It's a Fourrr!!");
						runs+=bowl;
					}
					else
					{
						if(bat==6)
							printf("\nWell Done!! SIXER!!!");
						else if(bat==4)
							printf("\nGood Job! It's a Fourrr!!");
						runs+=bat;
					}
				}
				if(count%2==0&&temp<runs)
						return runs;
			}
			else
			{
				printf("Selection Invalid! Please try again.\n");
				printf("_________________________________________________\n");
				j--;
				goto again;
			}
		}
	}
}

void result(int your_score,int PC_score,char name[])				//Result function
{
	printf("____________________________________________________________________________\n");
	printf("\n***Analysing the  Scores***\n");
	Sleep(2000);
	printf("\nPress any key to view The Result\n");
	getch();
	system("cls");
	printf("________________________***Time for result***________________________\n");
	if(your_score>PC_score)
		printf("Yayyy !!! You win by %d runs ! \n\n",your_score-PC_score);
	else if(your_score<PC_score)
		printf("Alas ! You lost.\n\n");
	else
		printf("Match draw... Runs scored by both players: %d\n\n",PC_score);
}
//End for Virtual Cricket

void gotoxy(short x, short y)           //definition of gotoxy function//
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
