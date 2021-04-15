
/**
 * @file code.h
 * @author Kurra Nagasowmika (SF-Id:-260842)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

/**
 * @brief Structure containing details about Employee
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
char name[10][10],tname[10][10];
char name[10][100], tname[10][100],copy[10][100], temp[10];
int i, j, n;
long long int trname[n],pnr[n];
char pname[10][10];
int i, item;
char elem[WID];
int pivot, i, j, temp;
int choice;
int n, i,j;
char s[LEN][WID],tname[10][10],temp[10][10];
int size, i,j;


#endif
