/*A key typing game 
//                           ------- Written by MIJANUR MOLLA
//                        DATED ON 24/11/2018*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
hard_level(int score, char *name)
{
	FILE *fp;
	char ch;
	int cont;
	time_t s; 
	struct tm* current_time; 

	// time in seconds 
	s = time(NULL); 

	// to get current time 
	current_time = localtime(&s); 
	
	fp = fopen("hard_level.txt","a");
	if(fp == NULL)
	{
		printf("\nFile can't be opened");
	}
	else
	{
		if(score * score > 1000)
		{
	       fprintf(fp,"\n%d/%d/%d       %d:%d:%d            %-15s      %d",current_time->tm_mday,current_time->tm_mon+1,1900+current_time->tm_year,current_time->tm_hour, current_time->tm_min,current_time->tm_sec,name,score*score); 
           fprintf(fp,"\n-----------------------------------------------------------------");
        }
	}
	fclose(fp);
	printf("\nDo you want to see score board for this level\n Enter 1 or others : ");
	scanf("%d",&cont);
	if(cont == 1)
	{
    	fp = fopen("hard_level.txt","r");
    	if(fp == NULL)
    	{
     		printf("\nFile can't be opened");
    	}
    	else
    	{
    		printf("\nThe scores those are greater than 1000 have been shown on score board");
    		printf("\n\n*************************|LEVEL HARD|**************************");
		    printf("\nDATE             TIME                   NAME              SCORE");
		    printf("\n================================================================\n");
     		while((ch = getc(fp))!=EOF)
    		{
	    		printf("%c",ch);
	    	}
	    }
	    fclose(fp);
	}
}
medium_level(int score, char *name)
{
	FILE *fp;
	char ch;
	int cont;
	time_t s; 
	struct tm* current_time; 

	// time in seconds 
	s = time(NULL); 

	// to get current time 
	current_time = localtime(&s); 
	
	fp = fopen("medium_level.txt","a");
	if(fp == NULL)
	{
		printf("\nFile can't be opened");
	}
	else
	{
		if(score * score > 1000)
		{
	       fprintf(fp,"\n%d/%d/%d       %d:%d:%d            %-15s      %d",current_time->tm_mday,current_time->tm_mon+1,1900+current_time->tm_year,current_time->tm_hour, current_time->tm_min,current_time->tm_sec,name,score*score); 
           fprintf(fp,"\n-----------------------------------------------------------------");
	    }
	}
	fclose(fp);
	printf("\nDo you want to see score board for this level\n Enter 1 or others : ");
	scanf("%d",&cont);
	if(cont == 1)
	{
    	fp = fopen("medium_level.txt","r");
    	if(fp == NULL)
    	{
     		printf("\nFile can't be opened");
    	}
    	else
    	{
    		
		    printf("\nThe scores those are greater than 1000 have been shown on score board");
		    printf("\n*************************|LEVEL MEDIUM|************************");
		    printf("\nDATE             TIME                 NAME              SCORE");
		    printf("\n================================================================\n");
     		while((ch = getc(fp))!=EOF)
    		{
	    		printf("%c",ch);
	    	}
	    }
	    fclose(fp);
	}
}
easy_level(int score, char *name)
{
	FILE *fp;
	char ch;
	int cont;
	time_t s; 
	struct tm* current_time; 

	// time in seconds 
	s = time(NULL); 

	// to get current time 
	current_time = localtime(&s); 
	
	fp = fopen("easy_level.txt","a");
	if(fp == NULL)
	{
		printf("\nFile can't be opened");
	}
	else
	{
		if(score * score > 1000)
	     {
    	    fprintf(fp,"\n%d/%d/%d       %d:%d:%d            %-15s      %d",current_time->tm_mday,current_time->tm_mon+1,1900+current_time->tm_year,current_time->tm_hour, current_time->tm_min,current_time->tm_sec,name,score*score); 
            fprintf(fp,"\n-----------------------------------------------------------------");
        }
	}
	fclose(fp);
	printf("\nDo you want to see score board for this level\n Enter 1 or others : ");
	scanf("%d",&cont);
	if(cont == 1)
	{
    	fp = fopen("easy_level.txt","r");
    	if(fp == NULL)
    	{
     		printf("\nFile can't be opened");
    	}
    	else
    	{
    		printf("\nThe scores those are greater than 1000 have been shown on score board");
		    printf("\n\n**********************|LEVEL EASY|******************************");
		    printf("\nDATE             TIME                NAME               SCORE");
		    printf("\n================================================================\n");
			while((ch = getc(fp))!=EOF)
    		{
	    		printf("%c",ch);
	    	}
	    }
	    fclose(fp);
	}
}
void instruction()
{
	printf("\nYou have to press the character shown on screen");
	printf("\nYou have only 1 minute to play, the game will be terminated after 1 minute");
	printf("\nThe game will also be terminated if you press wrong character");
}
int main()
{
	int t,s,t1,cont, choice;
	char ch,ch1,name[50];
	instruction();
	printf("\nEnter your name : ");
	fflush(stdin);
	gets(name);
	label2 :
	printf("\nSELECT LEVEL");
	printf("\n1.EASY\n2.MEDIUM\n3.HARD");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 ... 3 : break;
		default : printf("\nINVALID CHOICE GIVEN, PLEASE SELECT CORRECT ONE");
		          goto label2;
	}
	//label1 :
	printf("\nPress any key to play now");
	getch();
	s = 0;
	t1 = clock() / CLOCKS_PER_SEC;
	while(t <= 60+t1)
	{
		label : 
		ch = rand();
		if(choice == 1)
	    {
	    	switch(ch)
	    	{
			    case 'a' ... 'z' :
		    	case '0' ... '9' :
				             break;
		    	default : goto label;
	    	}
		}
		else if(choice == 2)
		{
			switch(ch)
	    	{
	     		case 'a' ... 'z' :
	     		case 'A' ... 'Z':
	    		case '0' ... '9':
				             break;
		    	default : goto label;
	    	}
		}
		else if(choice == 3)
		{
			switch(ch)
	    	{
	    		case 33 ... 93 :
	    		case 95 :
	     		case 97 ... 126 :
				             break;
	    		default : goto label;
	    	}
		}
		else
		{
			printf("\nInvalid choice given, please select correct one");
			goto label2;
		}
		system("cls");
		printf("\n\n\n\t           %c  ",ch);
		ch1 = getche();
		if(ch != ch1)
		{
			break;
		}
		else
		{
			s++;
		}
		t = clock() / CLOCKS_PER_SEC;
	}
	printf("\nCongratulation! %s, Your score is %d",name,s*s);
	if(choice == 1)
	{
		easy_level(s,name);
	}
	else if(choice == 2)
	{
		medium_level(s,name);
	}
	else if(choice == 3)
	{
		hard_level(s,name);
	}
	printf("\nDo you want to play again, enter 1 or others : ");
	scanf("%d",&cont);
	if(cont == 1)
	{
		goto label2;
	}
}
