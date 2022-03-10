/*
Program : Check if matrix is diagonal or not
Name    : Mihir Patel
Date    : 8-Mar-2022
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int m1[3][3],i,j,st=0;    //m and n are for other sized Martrices

	printf("\nEnter values to the matrix : \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter a[%d][%d] value : ",i,j);
			scanf("%d", &m1[i][j]);
		}
	}

	printf("\nThe Diagonals elements of a matrix are : \n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j && m1[i][j]!=1)
			{
				st=-1;
				break;
			}
			else if(i!=j && m1[i][j]!=0)
			{
				st=-1;
				break;
			}
		}
	}
	if(st==0)
		printf("It is Diagonal Matrix");
	else
		printf("It is Non Diagonal Matrix");

	getch();
}