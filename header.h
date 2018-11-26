#ifndef _Q4_C_					//if q4 has already been run then do not run again 
#define _Q4_C_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book							//this file contacts all the structs for the c program 
{
	char bookname[20];
	int bookid;
	float bookprice;
}array[5];

struct stack
{
	char name[20];
	int id;
	float price;
	struct stack * next;
}*top=NULL;

struct list
{
	int listid;
	struct list * next;
}*start=NULL;




#endif