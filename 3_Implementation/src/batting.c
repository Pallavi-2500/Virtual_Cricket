#include "virtualcricket.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
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