*/
Program : WAP to Count and Display Vowels in Multi Strings
Name    : Mihir Patel
Date    : 8-Mar-2022 
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int vowel=0,count=0;
	char string[5][1000],v;
	clrscr();

	printf("\t Input a String : \n\n\t ");

	for(i=0;i<5;i++)
		gets(string);

	for(i=0;i<5;i++)
	{
		printf("\nVowels : ");
		while(string[count] != '\0')
		{
			v=string[count];

			if(v=='a'|| v=='A'|| v=='e'|| v=='E'|| v=='i'|| v=='I'|| v=='o'|| v=='O'|| v=='u'|| v=='U')
			{
				vowel++;
				printf(", %c",v);
			}
			count++;
		}
		printf("\n\n\t : %s : %d",string[i],vowel);
		vowel=0;
		count=0;
	}
	getch();
}