
/**
 * @file code.h
 * @author Pavani Tadepalli (SF-Id:-260876)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __functions_h__
#define __functions_h__

/**
 * @brief Line function is for graphic design of the program
 * 
 */
#include<stdio.h>
#include<string.h>
#define LEN 100
#define WID 80

void bsort();//Bubble sort
void ssort();//Selection sort
void isort(char s[][WID], int n);//Inserction sort
void quicksort(int list[], int low, int high);//Quick sort


long long int n;
long long int a[n],b[n],i,j,t,r,cn=0,pnr[10];
char name[10][100], tname[10][100],copy[10][100];
long long int trname[n],pnr[n];
char pname[10][10];
char elem[WID];
int pivot;
int choice;
char s[LEN][WID],temp[10][10];
int size;


#endif
