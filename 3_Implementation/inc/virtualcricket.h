/**
 * @file virtualcricket.h
 * @author Pallavi Sharma
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __VIRTUALCRICKET_H__
#define __VIRTUALCRICKET_H__
extern int over,temp,count;
int toss(char name[]);
int batting(int overs,char name[]);	
void result(int score_p,int score_c,char name[]);
void cricket();
void menu();
#endif 