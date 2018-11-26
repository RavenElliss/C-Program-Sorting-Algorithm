#ifndef _HEADER_H_					//if header h has already run once then do no run again 
#define _HEADER_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"					//includes header to use the structs 
									//this header file simply contains the print function and void bubble function for the c program 
void print()
{
	int i;
	printf("The following data has been stored on text file 'bookdata.txt':\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%s\n", array[i].bookname);
		printf("%d\n", array[i].bookid);
		printf("%.2f\n", array[i].bookprice);
	}
	
	
}

void bubble()
{
	int i, j, temp;
	
	for(i = 0; i < SIZE-1; i++)
	{
		for(j=0; j < SIZE-1-i; j++)
		{
			
			if(array[j].bookid > array[j+1].bookid)
			{
				temp = array[j+1].bookid;
				array[j+1].bookid = array[j].bookid;
				array[j].bookid=temp;
			}				
			
			
		}
		
	}
	
	printf("\nThe bubble sort is now:\n");
	
	for(i=0; i < SIZE; i++)
	{
		printf("%d-\n", array[i].bookid);
	}
	
	
}

#endif