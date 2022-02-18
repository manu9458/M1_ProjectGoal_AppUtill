#include "quizgame.h"
void show_record()
    {system("cls");
	char nameOfPlayer[20];
	float showScore;
	FILE *scoreDataFile;
	scoreDataFile=fopen("score.txt","r");
	fscanf(scoreDataFile,"%s%f",&nameOfPlayer,&showScore);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",nameOfPlayer,showScore);
	printf("\n\n\t\t*************************************************************");
	fclose(scoreDataFile);
	getch();}

void reset_score()
    {system("cls");
    float resetableScore;
	char nm[20];
	FILE *resetedScoreFile;
	resetedScoreFile=fopen("score.txt","r+");
	fscanf(resetedScoreFile,"%s%f",&nm,&resetableScore);
	resetableScore=0;
	fprintf(resetedScoreFile,"%s,%.2f",nm,resetableScore);
    fclose(resetedScoreFile);}

void help()
	{system("cls");
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

}

void edit_score(float score, char playerName[])
	{system("cls");
	float sc;
	char nm[20];
	FILE *editedScoreFile;
	editedScoreFile=fopen("score.txt","r");
	fscanf(editedScoreFile,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(editedScoreFile);
	    editedScoreFile=fopen("score.txt","w");
	    fprintf(editedScoreFile,"%s\n%.2f",playerName,sc);
	    fclose(editedScoreFile);}}