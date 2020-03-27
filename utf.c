#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float,char[]);
void mainhome();
void home();
void go();
void score();
void game();

int countr,r,r1,count,i,n;
char playername[20];
char choice,nm;
float sc;

int main()
{

	mainhome();
	 if(choice=='H')
	 {
         system("cls");
         help();
         getch();
         system("cls");
	     main();
	 }


     else if (choice=='Q')
	 {
         exit(1);
     }

    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n *********** Welcome %s to C Program Quiz Game *****************",playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n ********************************************************************************");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
        printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu");



       if (toupper(getch())=='Y')
		{
		    system("cls");
		    home();
        }

       else
		{
            system("cls");
            main();
        }

    }

}

void mainhome()
     {

     printf("\t\t\t  << QUIZ GAME >>\n");
     printf("\n\t\t****************************************");

     printf("\n\t\t\t      WELCOME\n ");
     printf("\n\t\t\t        to\n ");
     printf("\n\t\t\t    THE QUIZ GAME ");
     printf("\n\t\t");
     printf("\n\t\t****************************************");
     printf("\n\t\t   BECOME RICH EARN UPTO 1 MILLION $ ;-) ");
     printf("\n\t\t****************************************");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
    }


void home()
     {
     system("cls");
     count=0;


     for(i=1;i<=3;i++)
     {
        r1=i;
        switch(r1)
        {
                  case 1:
                  printf("\n\n********ROUND ONE********\n\n");
		          printf("\n\nA collection of 8 bits are called?");
		          printf("\n\nA.bit\t\tB.word\n\nC.byte\t\tD.record");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.byte");
		        getch();
		        system("cls");
		        break;
  	   	}
                  case 2:
		          printf("\n\nWhich of the following is a Palindrome number?");
		          printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		          if (toupper(getch())=='C')
		          {
			        printf("\n\nCorrect!!!");
                    count++;
			        getch();
			        system("cls");
			        break;
                 }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.23232");
		        getch();
		        system("cls");
		        break;
  	   	}

        system("cls");

        case 3:
		printf("\n\n\nWhich of the following is most oriented toward scientific programming ?");
		printf("\n\nA.Cobol\t\tB.Fortran\n\nC.c++\t\tD.Basic");


        if (toupper(getch())=='B')
		{
            printf("\n\nCorrect!!!");
            count++;
			getch();
			system("cls");
            break;
        }


        else
        {
               printf("\n\nWrong!!! The correct answer is B.Fortran");
		       getch();
		       system("cls");
               break;
        }
      }
  	}


    if(count>=2)
	{
          system("cls");
          printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
          printf("\n\n\n\n\t!Press any key to Start the Game!");
          getch();
          game();
    }

    else
	{
            	system("cls");
            	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            	getch();
                mainhome();
	}



 }

void game()
     {

     countr=0;
     for(i=1;i<=countr+1;i++)
     {
                       system("cls");
                       r=i;

     switch(r)
     {
		case 1:
		printf("\n\nAll are the example of input devices Except a:");
		printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");
		if (toupper(getch())=='C')
		{
                                  printf("\n\nCorrect!!!");countr++;getch();
			                      break;
                                  getch();
         }


        else
        {
                                  printf("\n\nWrong!!! The correct answer is C.Printer");
                                  getch();
                                  score();
		                          break;
        }


    	case 2:
		printf("\n\n\nWhat kind of file extension .mpg?,");
		printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;

         }


    	else
        {
                    printf("\n\nWrong!!! The correct answer is A.Movie file");
                    getch();
	                score();
		            break;
	     }

        case 3:
		printf("\n\n\nA DVD is an example of a/an.. ");
		printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");
		if (toupper(getch())=='D')
		{
                     printf("\n\nCorrect!!!");
                     countr++;
                     getch();
			         break;
                     }
		else
	    {
                    printf("\n\nWrong!!! The correct answer is D.Optical disk");
                    getch();
		            score();
		            break;
                    }

        case 4:
		printf("\n\n\nWho is he founder of facebook?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if (toupper(getch())=='A')
		{
                                  printf("\n\nCorrect!!!");
                                  countr++;
                                  getch();
			                      break;
                                  }

        else
        {
                printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
                getch();
       	        score();
		        break;
		       }


        case 5:
		printf("\n\n\nWhich of the following is a web browser?");
		printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");
		if(toupper(getch())=='B')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is B.Netscape navigator");
		       getch();
		       score();
		       break;
		       }

        case 6:
		printf("\n\n\nWhat kind of file extension .bak?,");
		printf("\n\nA.Backup file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Backup file");
		       getch();
		       score();
		       break;
		       }

		case 7:
		printf("\n\n\nwhich of he following is a read only memory storage device ");
		printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");
		if(toupper(getch())=='D')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is D.CDROM");
		       getch();
		       score();
		       break;
		       }
        case 8:
		printf("\n\n\nThe _____ shows all the web sites any pages that you have visited one of recent time ");
		printf("\n\nA.Hisory list\t\tB.Status bar \n\nC.task bar\t\tD.record");
		if(toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Hisory list");
		       getch();
		       score();
		       break;
		       }
        case 9:
		printf("\n\n\nA 32 bit word computer can access ____ bytes at a time ");
		printf("\n\nA.32\t\tB.16\n\nC.8\t\tD.4");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.8");
		       getch();
		       score();
		       break;
		       }
        case 10:
     	printf("\n\n\nWho is the founder of pixar animation?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 score();

                                 }
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.Steve jobs");
		       getch();
		       score();
		       break;
		       }

		}
  	}
	}


void score()
{
	float sccore;
	system("cls");
	sccore=(float)countr*100000;
	if(sccore==1000000.00)
	{
		printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t\t\t You won %f",sccore);
	    printf("\n\t\t\t\t Thank You !!");
	    go();
	}
	else if(sccore>0.00 && sccore<1000000)
	{
	   	printf("\n\n\t\t**************** CONGRATULATION *****************");
       	printf("\n\t You won %.2f",sccore);
       	go();
    }
	else
    {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        go();
    }
}

void go()
{
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getchar())=='Y')
	{
		home();
    }
    else
	{
	    edit_score(countr,playername);
		main();
    }
}




void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t\t*********************BEST OF LUCK*********************************");
	printf("\n*******C PROGRAM QUIZ GAME is developed by students of SYMBIOSIS INSTITUTE OF TECHNOLOGY********");}

void edit_score(float sccore, char playernm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (sccore>=sc)
	  {
        sc=sccore;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",playernm,sc); //print in player name
	    fclose(f);
	    printf("Congratulations you have set a new highscore.");
      }
}
