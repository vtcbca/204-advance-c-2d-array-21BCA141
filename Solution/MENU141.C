/*write a program to perform following operation using UDF
Author:Patel Mihir
Date:22-03-2022*/
#include<stdio.h>
#include<conio.h>
int menu();
int sod();
void pel();
void arm();
void sqs(int);
void main()
{
	   int a,sum,c;
	   char yn;
	   clrscr();
	   do
	   {
	      c=menu();
	      switch(c)
	      {
		     case 1:
			    c=sod();
			    printf("sod is %d",c);
			    break;
		     case 2:
			    pel();
			    break;
		     case 3:
			    arm();
			    break;
		     case 4:
			    printf("Enter Any Number:");
			    scanf("%d",&a);
			    sqs(a);
			    getch();
			    break;
		     case 5:
			    exit(0);

		     default:
			     printf("\n invalid choice");
	      }
	      printf("\nDo You Want To Continue?(yes=Y/y,No=N/n):");
	      flushall();
	      scanf("%c",&yn);
	      clrscr();
	      }while(yn=='Y'||yn=='y');
}
int menu()
{

		       int choice;
		       printf("\n\t\tMenu\n");
		       printf("\t--------------------");
		       printf("\n\t\t1.sod");
		       printf("\n\t\t2.pel");
		       printf("\n\t\t3.arm");
		       printf("\n\t\t4.sqs");
		       printf("\n\t\t5.exit");
		       printf("\n\t--------------------");
		       printf("\n\t    Enter Choice: ");
		       scanf("%d",&choice);
		       return choice;
}
int sod()
{
		       int n,t,sum=0,s;
		       printf("Enter Any Number:");
		       scanf("%d",&n);
		       t=n;
		       while(n>0)
		       {
			 s=n%10;
			 sum=sum+s;
			 n=n/10;
		       }
		       return sum;
}
void pel()
{
		       int n,n1,rev=0,r;
		       printf("Enter Any Number");
		       scanf("%d",&n);
		       n1=n;
		       while(n>0)
		       {
			 r=n%10;
			 rev=rev*10+r;
			 n=n/10;
		       }
		       if(n1==rev)
			 printf("Palindrome Number");
		       else
			 printf("Not Palindrome Number");
}
void arm()
{
		       int m,n,sum=0,t;
		       printf("Enter Any Number");
		       scanf("%d",&n);
		       t=n;
		       while(n>0)
		       {
			 m=n%10;
			 sum=sum+(m*m*m);
			 n=n/10;
		       }
		       if(t==sum)
			 printf("Armstrong Number");
		       else
			 printf("Not Armstrong Number");
}
void sqs(int m)
{
		       int i,sum=0;
		       printf("series of %d number is : \n\tseries= ",m);
		       for(i=1;i<=m;i++)
		       {
			 sum=i*i;
			 printf(", %d",sum);
		       }
}















