/*
Program : Sort Array in Accending Order
Name    : Mihir Patel
Date    : 8-Mar-2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
 
void main()
{
	//create an array of strings
	int i,j;
	char array[5][30],temp[30];
	clrscr();


	//Inputting names
	printf("Enter 5 Strings: \n");

	for(i=0; i<5; i++)
		gets(array[i]);
	clrscr();
	//display the original array
	printf("Original array: ");
	for(i=0; i<5; i++)
		printf("\n%s",array[i]);

	//Sort array by Buuble Sort algorithm
	for(i=0; i<5; i++)
	{
		for(j=0; j<5-1-i; j++)
		{
			if(strcmp(array[j], array[j+1]) > 0)
			{
								//swap array[j] and array[j+1]
				strcpy(temp, array[j]);
				strcpy(array[j], array[j+1]);
				strcpy(array[j+1], temp);
			}
		}
	}

	//display the sorted array
	printf("Sorted Array: ");

	for(i=0; i<5; i++)
		printf("\n%s",array[i]);
	
	getch();
}