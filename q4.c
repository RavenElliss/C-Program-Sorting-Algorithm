#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5
#include "header.h"					//includes the user defined header and header2
#include "header2.h"


int menu()
{   								 // menu bar to print out the options for the user to choose from
	int i;
	printf("Enter 1 to sort these books\n");
	printf("Enter 2 to search for an int element\n");
	printf("Enter 3 to insert these books into a stack\n");
	printf("Enter 4 to insert the sorted BookID into a linked list(must select option 1 before using this option)\n");
	printf("Enter 5 to insert one more BookID into the linked list\n");
	printf("Enter 6 to quit the program\n");
	
	scanf("%d", &i);
	
	return i;
	
}



void linear()
{
	int num,i;
	printf("Please enter the Book ID you wish to search for\n");
	scanf("%d", &num);
	
	for(i=0; i<SIZE; i++)					//finds the book id then returns its place in the array
	{
		if(array[i].bookid == num)
		{
			printf("%d has been found at the location %d in the array\n", num, i+1);   //returns the place of the found bookid and not its array index
			break;
		}
	}
	
	if(i==SIZE)
	{
		printf("%d has not been found in the book array\n", num);
	}
	
}



void binary()
{
	int num,mid;
	int low=0;
	int high=SIZE;
	int i=0;
	bubble();						//calls bubble sort first as the array needs to be sorted first 
	
	printf("Please enter the Book ID you wish to search for\n");
	scanf("%d", &num);
	
	while(low <= high)
	{
		mid=low+high/2;					//finds the middle of the array
		
		if(num == array[mid].bookid)
		{
			printf("%d has been found at the location %d in the array\n", num, mid+1);
			i++;
			break;
		}
		
		if(num < array[mid].bookid)
		{
			high = mid -1;					//all of the right sided values are deleted and high value becomes the mid value -1
		}
		else																																											
		{
			low = mid +1;					//all of the left side values are deleted and the low value becomes the mid value + 1
		}
		
	}
	
	if(i != 1)
	{
		printf("%d has not been found in the book array\n", num);
	}
	
	
	
}

int bubble_float(int * result)
{
	if(*result == 1)			//if the user enters one sort the array in ascending value
	{
		int i, j;
		float temp;
	
			for(i = 0; i < SIZE-1; i++)
			{
				for(j=0; j < SIZE-1-i; j++)
				{
			
					if(array[j].bookprice > array[j+1].bookprice)
					{
						temp = array[j+1].bookprice;
						array[j+1].bookprice = array[j].bookprice;
						array[j].bookprice=temp;
					}					
			
			
				}
		
			}
	
	printf("\nThe bubble sort is now:\n");
	
	for(i=0; i < SIZE; i++)
	{
		printf("%.2f\n", array[i].bookprice);
	}
	}
	
	else				//else sort the array in descending value 
	{
		int i, j;
		float temp;
	
			for(i = 0; i < SIZE-1; i++)
			{
				for(j=0; j < SIZE-1-i; j++)
				{
			
					if(array[j].bookprice < array[j+1].bookprice)
					{
						temp = array[j+1].bookprice;
						array[j+1].bookprice = array[j].bookprice;
						array[j].bookprice=temp;
					}					
			
			
				}
		
			}
	
	printf("\nThe bubble sort is now:\n");
	
	for(i=0; i < SIZE; i++)
	{
		printf("%.2f\n", array[i].bookprice);
	}
	}
		
		
}

int selection_float(int * result)
{
	if(*result == 2)			//if the result is equal to 2 then sort in ascending order 
	{
	int i, j; 
	float temp;
	
	for(i = 0; i < SIZE-1; i++)
	{
		int j, min;
		min=i;
		for(j=i+1; j < SIZE; j++)
		{
			if(array[j].bookprice < array[min].bookprice)
			{
				min=j;
			}				
			
			
		}
		temp=array[i].bookprice;
		array[i].bookprice = array[min].bookprice;
		array[min].bookprice = temp;
	}
	
	printf("\nThe selection sort is now:\n");
	
	for(i=0; i < SIZE; i++)
	{
		printf("%.2f\n", array[i].bookprice);
	}
	}
	
	else							//else sort in descending order 
	{
		int i, j; 
		float temp;
	
			for(i = 0; i < SIZE-1; i++)
			{
				int j, min;
				min=i;
					for(j=i+1; j < SIZE; j++)
					{
						if(array[j].bookprice > array[min].bookprice)
						{
							min=j;
						}				
			
			
					}
			temp=array[i].bookprice;
			array[i].bookprice = array[min].bookprice;
			array[min].bookprice = temp;
			}
	
		printf("\nThe selection sort is now:\n");
	
		for(i=0; i < SIZE; i++)
		{
			printf("%.2f\n", array[i].bookprice);
		}	
		
	}
	
}

int bubble_int(int *result)
{											//sort function for bookId which is int value only 
	if(*result == 1)							//will sort in ascending order 
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
		printf("%d\n", array[i].bookid);
	}
	}
	
	else								//will sort in descending order 
	{
		int i, j,temp;
	
			for(i = 0; i < SIZE-1; i++)
			{
				for(j=0; j < SIZE-1-i; j++)
				{
			
					if(array[j].bookid < array[j+1].bookid)
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
		printf("%d\n", array[i].bookid);
	}
	}
	
	
}

int selection_int(int *result)
{
	if(*result == 2)
	{
	int i, j,temp;
	
	for(i = 0; i < SIZE-1; i++)
	{
		int j, min;
		min=i;
		for(j=i+1; j < SIZE; j++)
		{
			if(array[j].bookid < array[min].bookid)
			{
				min=j;
			}				
			
			
		}
		temp=array[i].bookid;
		array[i].bookid = array[min].bookid;
		array[min].bookid = temp;
	}
	
	printf("\nThe selection sort is now:\n");
	
	for(i=0; i < SIZE; i++)
	{
		printf("%d\n", array[i].bookid);
	}
	}
	
	else
	{
		int i, j, temp;
	
			for(i = 0; i < SIZE-1; i++)
			{
				int j, min;
				min=i;
					for(j=i+1; j < SIZE; j++)
					{
						if(array[j].bookid > array[min].bookid)
						{
							min=j;
						}				
			
			
					}
			temp=array[i].bookid;
			array[i].bookid = array[min].bookid;
			array[min].bookid = temp;
			}
	
		printf("\nThe selection sort is now:\n");
	
		for(i=0; i < SIZE; i++)
		{
			printf("%d\n", array[i].bookid);
		}	
		
	}
	
	
}

void sort_float()
{
	int result;
	int result2;
	
	printf("Select 1 to sort in ascending order or 2 for descending order\n");
	scanf("%d", &result);
	if(result == 1)
	{
		printf("Select 1 to sort using Bubble Sort or 2 for Selection sort\n");
		scanf("%d", &result2);
			if(result2 == 1)
			{
				bubble_float(&result2);
			}
			if(result2 ==2)
			{
				selection_float(&result2);
			}
	
	
	}
	if(result ==2)
	{
		printf("Select 3 to sort using Bubble Sort or 4 for Selection sort\n");
		scanf("%d", &result2);
			if(result2 == 3)
			{
				bubble_float(&result2);
			}
			if(result2 ==4)
			{
				selection_float(&result2);
			}
	}
	
}

void sort_int()
{
	int result;
	int result2;
	
	printf("Select 1 to sort in ascending order or 2 for descending order\n");
	scanf("%d", &result);
	if(result == 1)
	{
		printf("Select 1 to sort using Bubble Sort or 2 for Selection sort\n");
		scanf("%d", &result2);
			if(result2 == 1)
			{
				bubble_int(&result2);
			}
			if(result2 ==2)
			{
				selection_int(&result2);
			}
	
	
	}
	if(result ==2)
	{
		printf("Select 3 to sort using Bubble Sort or 4 for Selection sort\n");
		scanf("%d", &result2);
			if(result2 == 3)
			{
				bubble_int(&result2);
			}
			if(result2 ==4)
			{
				selection_int(&result2);
			}
	}
	
	
}

int print_to_text(FILE * fp2, int * result)
{
	int i;
	
	if(*result ==1)
	{
	fp2=fopen("sorted.txt", "a");
	
	for(i=0; i<SIZE; i++)
	{
	    fprintf(fp2, "%.2f\n", array[i].bookprice);
	}
	}
	else
	{
	fp2=fopen("sorted.txt", "a");
	
	for(i=0; i<SIZE; i++)
	{
	    fprintf(fp2, "%d\n", array[i].bookid);
	}
		
	}
	
	return 0;
}

void insert_stack()
{
	struct stack * temp;
	int i=0;
	do
	{
	struct stack * newnode;
	newnode=(struct stack *)malloc(sizeof(struct stack));
	strcpy(newnode->name, array[i].bookname); 
	
	newnode->id=array[i].bookid;
	newnode->price=array[i].bookprice;
	if(top == NULL)              //this is the PUSH function for the stack
	{
		top = newnode;
        newnode->next = NULL;
	}
	else
	{
		newnode->next = top;
        top = newnode;
	}
	i++;
	}while(i != SIZE);
	
	
	
	
	
	
	printf("The list of stack is\n");
	temp = top;
	
	do
	{   
		printf("%s, %d, %.2f ->", temp->name, temp->id, temp->price);
		
		temp=temp->next;
	}
	while(temp != NULL);

	
	printf("NULL\n");
	
}

void print_stack(FILE * fp3)
{
	struct stack * temp;
	int i;
	fp3=fopen("stackprint.txt", "a");
	temp = top;
	
	for(i=0; i<SIZE; i++)
	{	
		fprintf(fp3, "%s  ", array[i].bookname);
	    fprintf(fp3, "%d   %.2f\n", array[i].bookid, array[i].bookprice);
	}
	
	do
	{
		
		fprintf(fp3, "%s  ", temp->name);
	    fprintf(fp3, "%d   %.2f\n", temp->id, temp->price);
		temp=temp->next;
	}while(temp != NULL);
	
	printf("Data has been printed into 'stackprint.txt\n");
	
	
}

void insert_list()
{
	struct list * temp;
	int i=0;
	do
	{
	struct list * newnode;
	newnode=(struct list *)malloc(sizeof(struct list));					//allocates a memory block based on size of struct for the new node 
	newnode->listid=array[i].bookid;
	if(start == NULL)          						    //this is the PUSH function for the stack
	{
		start = newnode;
        newnode->next = NULL;
	}
	else
	{
		newnode->next = start;							//else will instert at the end as struct is FILO methodology 
        start = newnode;
	}
	i++;
	}while(i != SIZE);
	
	
	
	
	
	
	printf("The list is:\n");
	temp = start;
	
	do
	{   
		printf("%d->", temp->listid);
		
		temp=temp->next;
	}
	while(temp != NULL);

	
	printf("NULL\n");
	
	
	
}

void add_linked()
{
	struct list * temp;
	int i=0;
	struct list * newnode;
	newnode=(struct list *)malloc(sizeof(struct list));	
	newnode->listid=999;
		newnode->next = start;
        start = newnode;

		
	printf("The list is:\n");
	temp = start;
	
	do
	{   
		printf("%d->", temp->listid);
		
		temp=temp->next;
	}
	while(temp != NULL);

	
	printf("NULL\n");
}

int main()
{
	struct book BOOK;
	int i, answer, result;
	FILE * fp;											//delcaring the 3 different text files that will be written to 
	FILE * fp2;
	FILE * fp3;
	
	char ans;
	
	printf("Wlcome to Raven's Program! Please enter 5 books with their ID and Price to start.\n");
	fp=fopen("bookdata.txt", "a");
	
	
	for(i=0; i<SIZE; i++)
	{
		printf("Enter book name\n");
		scanf("%s", &array[i].bookname);
		printf("Enter book id\n");
		scanf("%d", &array[i].bookid);
		printf("Enter book price\n");
		scanf("%f", &array[i].bookprice);
		
		fprintf(fp, "%s  ", array[i].bookname);
	    fprintf(fp, "%d   %.2f\n", array[i].bookid, array[i].bookprice);
	}
	
	print();
	
	
	printf("Thanks for that! Please select from the following:\n");
	
	do
	{
	answer=menu();
	
	switch(answer)								//uses a switch to sort through the mutiple answers the user could have 
	{
		case 1:
		{
			printf("Select 1 if you wish to sort Price(float) or 2 for BookID(int).\n");
			scanf("%d", &result);
			if(result == 1)
			{
				sort_float();
				print_to_text(fp2, &result);
			}
			if(result ==2)
			{
				sort_int();
				print_to_text(fp2, &result);
			}
			break;
		}
		
		case 2:
		{
			printf("Select 1 if you wish to use Linear Search or 2 for Binary.\n");
			scanf("%d", &result);								//passes the address of result as arguement (using pointers)
			if(result == 1)
			{
				linear();
			}
			if(result ==2)
			{
				binary();
			}
			
			break;
		}
		
		case 3:
		{
			insert_stack();
			printf("Enter Y if you wish to print the stack in normal & reverse order into a txt file or N for no.\n");
			scanf("%s", &ans);
			if(ans == 'Y')
			{
				print_stack(fp3);
			}
			if(ans == 'N')
			{
				break;
			}
			break;
		}
		
		case 4:
		{
			insert_list();
			break;
		}
		
		case 5:
		{
			printf("We are now sorting in a BookID of '999' into the linked list\n");
			add_linked();
			break;
		}
		
		case 6:
		{
			printf("Goodbye...");
			break;
		}
		
		default:
		{
			printf("You have entered an incorrect number please try again\n");
			break;
		}	
		
	}
	}while(answer != 6);
	
	
	return 0;
	
}

