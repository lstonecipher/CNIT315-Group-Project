//PLOT for game
#include <stdio.h>
#include <string.h>
char yourFriend[50];
char fName[50];


//validation functions
int validateYN(char* variable)
{ 
	while(strcmp(variable, "y") == 1 || strcmp(variable, "n") == 1)
	{
		printf("Reenter your choice only \"y\" and \"n\" are allowed here!\n");
	}
	
	return 0;
}

void validatenums(int variable)
{
	while (variable != 1 || variable != 2 || variable != 3 || variable != 4 
	  || variable != 5 )
	{
		printf("Only the numbers 1 through 5 are accepted here!\n");
	}
	//add else to write into &variable....
  }
void playTGCs();
void playTGCs()
{	
	//function for wanting to play a children's card game and deciding what is
	// the best choice 
	int tcg;
	
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("You have recently became obsessed with playing a children's card game...\n");
	printf("You have decided that you don't want to work on anything school related today and want to relax for once.\n");
	printf("You have several options to consider:\n");
	printf("You can either watch the Television show associated with the card game, or go out and buy a whole bunch of cards and force %s to play with you.\n", yourFriend);
	printf("You realize that if you want to play the card game that also means you also have to go out and buy some cards to use...  Of course you friend will go along with you for the ride, but do you really want to spend the money?\n");
	printf("Either way %s has decided to support you with your unproductive choices!  What a great friend...\n", yourFriend);
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n\n");
	printf("1) Play the children's card game go out to the grocery store and buy cards and spend three hours to complete this task\n");
	printf("2) Watch the television show associated with the card game, spend up to fours hours completing this task\n");
	printf("3) Do nothing you don't want to admit being obsessed with the children's card game!\n");
	scanf("%d", &tcg);
	printf("You Picked %d", tcg);
	printf("write about consequences for your actions!");
} 

void socialclubEvent();
void socialclubEvent()
{
	char *yesNo;
	printf("Today you have a social meeting for your favorite club, it is a different kind of meeting than most and you want to go because there will be free food.\n");
	printf("You also have an important exam tomorrow, and need to decide what you want to do.  You can choose to either go to your club meeting or to go home and study.");
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n\n");
	printf("Do you want to go to your club meeting and have fun with your friends? (y/n)\n");
	yesNo = (char*)getchar();
	validateYN(yesNo);
	//printf("Go home and study!\n");
}

int intro();
int intro()
{		//need to make sure fName is global in case it is added into other functions for directions or story
		int intro;
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("================================================================================");
		printf("You woke up this morning and you don't feel good at all, \n");
		printf("you can't remember your name... What is your name? \n");
		scanf("%s", fName);
		printf("Your name is: %s", fName);
		printf("You look around and fine that you are a student at Purdue,\n");
		printf("you hope your memories return, you wander into the other room and \n"		);
		printf("you decide to make the best of the end of the semster.\n");
		printf("================================================================================");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n\n");
		printf("You are beginning to regain your memories, you find that you are a CIT student,\n");
		printf(" and that you have a ton of projects and exams to take before you can go home.\n");
		
		printf("================================================================================");
		printf("You decide to make the most of the day and go to class!");
		printf("You meet your best friend on your way to class, their name is...\n");
		printf("What is your best friends name?\n");
		scanf("%s", yourFriend);
		printf("Your best friend's name is: %s", yourFriend);
		printf("%s: Hi, %s, how was your weekend?", yourFriend, fName);
		printf("You think to yourself about how to respond to your friend, after all you \n");
		printf("can't remember much about who you are...\n"); 
		printf("You decide to tell your friend the following: \n");
		printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n\n");
		printf("1) SAY: Hi, %s, I'm fine I just had a rough night is all.\n", yourFriend); 
		printf("2) SAY: Who are you again?  Do I know you?\n");
		printf("3) SAY: Looks like it's time to go to school!\n");
		scanf("%d", &intro);
		return intro;

  }
void schoolday();
void schoolday()
{
	printf("================================================================================");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("You go to your first class and learn about Spam and \n");	
	printf("tak a quiz over DNS and email, you hope you did ok.");
	printf("After class you go to lunch and tell %s that", yourFriend);
	printf("you can't remember who you are and that you need help\n");
	printf("figureing out how to complete the semster without \n");
	printf("remembering who you are.\n");
	printf("================================================================================");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n");
	//printf("%s"); 
}
  
void watchmovie();
void watchmovie()
{
	//function for watching a movie and wasting time.
}
