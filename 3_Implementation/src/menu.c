#include "virtualcricket.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
void menu()
{      int over=0,temp=-1,count=0;
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
			cricket();
		else if(choice==2)
		{
			printf("You played well !! Come again \n");
			exit(0);
		}

		else
			system("cls");
	}while(choice<1||choice>4);

}