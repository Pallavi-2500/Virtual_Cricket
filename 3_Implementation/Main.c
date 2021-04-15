/**
 * @file Cricket.c
 * @author Pallavi Sharma
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdlib.h>							//For fflush() and random
#include<string.h>
#include<stdio.h>						
#include<time.h>							//For time(NULL)

//Function Declarations for Hand cricket
int toss(char name[]);
int batting(int overs,char name[]);
void result(int score_p,int score_c,char name[]);
void cricket();
void menu();

//Global variables for Hand cricket
//int over=0,temp=-1,count=0;

//Main function
int main()
{
	menu();
	return 0;
}