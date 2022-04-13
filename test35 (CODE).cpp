#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<ctime>
using namespace std;

void toss();
void ex();
void batBall(int);
void sysBatBall1();
void sysBatBall2(int);
void playBatBall1();
void playBatBall2(int);
int main()
{
	system ("cls");
	int choose;
	cout<<"Welcome to CompCrik.[PRESS THE NUMBERS IN THE BRACKETS TO CHOOSE YOUR OPTION]";
	cout<<"\n(1) Play"<<endl;
	cout<<"(2) Exit"<<endl;
	cout<<"                                                - CREATED BY UDATYA DEB"<<endl;
	cout<<endl;
	cout<<"\nChoose Option: ";
	cin>>choose;
	if (choose == 1)
		toss();
	
	else if (choose == 2)
		ex();
	else
		cout<<"Invalid Input. Close the program and run again.";
	
	getch();
	return 0;
}

void toss()
{
	system("cls");
	int choose, temp=0;
	srand(time(NULL));
	
		cout<<"Choose :-[Bracket Nos. allowed only]"<<endl;
		cout<<"\n(1) Head"<<endl;
		cout<<"(2) Tail"<<endl;
		cin>>choose;
		
		Sleep(300);
		if (choose == 1)
		{	
			cout<<"Computer chooses tail"<<endl;
			system("pause");
		}
		else if (choose == 2)
		{	
			cout<<"Computer chooses head"<<endl;
			system("pause");
		}
		else
		{
			cout<<"Invalid Input. Retry";
			system("pause");
			toss();	
		}
	
	if ( choose == 2 && rand()%2 == 0)
		{
			Sleep(200);
			cout<<"You win"<<endl;
			temp=1;
			system("pause");
			batBall(temp);
		}
	else
		{
			Sleep(200);
			cout<<"Computer wins"<<endl;
			cout<<"\nChooses to bat first"<<endl;
			system("pause");
			batBall(temp);
		}
}

void ex()
{
	exit;
}
void batBall(int temp = 1)
{
	int choose;
	if (temp == 1)
	{
		cout<<"Choose :-[Bracket Nos. allowed only]"<<endl;
		cout<<"\n(1) Bat"<<endl;
		cout<<"(2) Ball"<<endl;
		cin>>choose;
		
		if (choose == 1)
		{
			cout<<"You choose to bat."<<endl;
			system("pause");
			playBatBall1();
		}
		
		else if (choose == 2)
		{
			cout<<"You choose to ball"<<endl;
			temp=0;
			system("pause");
			sysBatBall1();
		}
		
		else
		{
			cout<<"Invalid Input. Retry";
			system("pause");
			batBall();
		}
	}
	else 
	{
		cout<<"You are Balling"<<endl;
		sysBatBall1();
	}
}
void playBatBall1()
{
	system("CLS");
	
	int num = 0, run = 0, totRun = 0, temp = 0;
	int min = 1, max = 6;
	
	for( int i=0; ;i++)
	{
		for (int j=0 ;j<6 ;j++)
		{	
			srand(time(NULL));
			system("cls");
			cout<<"(1,2,3,4,5,6 ONLY)                    Runs: "<<totRun<<endl;
			cout<<"[YOU ARE BATTING]                     Over: "<<i<<"."<<j<<endl;
			cout<<"YOU: ";
			cin>>run;
			temp = (min + (rand() % (int)(max - min + 1)));
			cout<<"\nCOMPUTER: "<<temp<<endl;
			Sleep(550);
				
				if (temp == run)
				{
					cout<<"You are OUT"<<endl;
					num = 1;
					break;
				}
				
				else
				totRun = totRun+run;
		}
		
		if (num == 1)
			break;
	}
	cout<<"Total Runs: "<<totRun<<endl;
	system("pause");
	sysBatBall2(totRun);
}

void sysBatBall2(int plyRun)
{
	system("CLS");
	
	int num = 0, run = 0, totRun = 0, temp = 0;
	int min = 1, max = 6, temp2 = plyRun+1;
	
	for( int i=0; ;i++)
	{
		for (int j=0 ;j<6 ;j++)
		{	
			srand(time(NULL));
			system("cls");
			cout<<"(1,2,3,4,5,6 ONLY)                    Runs: "<<totRun<<endl;
			temp2 = temp2-run;
			cout<<"[YOU ARE BALLING]                     Runs made: "<<plyRun<<endl;
			cout<<"                                      Remaining Runs to WIN: "<<temp2<<endl;
			cout<<"                                      Over: "<<i<<"."<<j<<endl;
			cout<<"YOU: ";
			cin>>run;
			temp = (min + (rand() % (int)(max - min + 1)));
			cout<<"\nCOMPUTER: "<<temp<<endl;
			Sleep(550);				
			
				if (temp == run)
				{
					cout<<"System is OUT"<<endl;
					num = 1;
					break;
				}
				
				else
				{
					totRun = totRun+run;
					if (totRun > plyRun)
					{
						num = 1;
						break;
					}
				}
		}
		
		if (num == 1)
			break;
	}
	cout<<"Total Runs: "<<totRun<<endl;
	if (totRun > plyRun)
		{
			cout<<"Computer Wins"<<endl;
			system("pause");
			main();
		}
	else if (totRun < plyRun)
		{
			cout<<"You Win the game. Congratulations!!!"<<endl;
			system("pause");
			main();
		}
	else
	{
		cout<<"Match is Draw, Well Played"<<endl;
		system("pause");
		main();
	}
}

void sysBatBall1()
{
	system("CLS");
	
	int num = 0, run = 0, totRun = 0, temp = 0;
	int min = 1, max = 6;
	
	for( int i=0; ;i++)
	{
		for (int j=0 ;j<6 ;j++)
		{	
			srand(time(NULL));
			system("cls");
			cout<<"(1,2,3,4,5,6 ONLY)                    Runs: "<<totRun<<endl;
			cout<<"[YOU ARE BALLING]                     Over: "<<i<<"."<<j<<endl;
			cout<<"YOU: ";
			cin>>temp;
			run = (min + (rand() % (int)(max - min + 1)));
			cout<<"\nCOMPUTER: "<<run<<endl;
			Sleep(550);
							
				if (temp == run)
				{
					cout<<"Computer is OUT"<<endl;
					num = 1;
					system("pause");
					break;
				}
				
				else
				totRun = totRun+run;
		}
		
		if (num == 1)
			break;
	}
	cout<<"Total Runs: "<<totRun<<endl;
	playBatBall2(totRun);
}

void playBatBall2(int sysRun)
{
	system("CLS");
	
	int num = 0, run = 0, totRun = 0, temp = 0;
	int min = 1, max = 6, temp2 = sysRun+1;
	
	for( int i=0; ;i++)
	{
		for (int j=0 ;j<6 ;j++)
		{	
			srand(time(NULL));
			system("cls");
			cout<<"(1,2,3,4,5,6 ONLY)                    Runs: "<<totRun<<endl;
			temp2 = temp2-run;
			cout<<"[YOU ARE BATTING]                     Runs made: "<<sysRun<<endl;
			cout<<"                                      Remaining Runs to WIN: "<<temp2<<endl;
			cout<<"                                      Over: "<<i<<"."<<j<<endl;
			cout<<"YOU: ";
			cin>>run;
			temp = (min + (rand() % (int)(max - min + 1)));
			cout<<"\nCOMPUTER: "<<temp<<endl;
			Sleep(550);
							
				if (temp == run)
				{
					cout<<"You are OUT"<<endl;
					num = 1;
					break;
				}
				
				else
				{
					totRun = totRun+run;
					if (totRun > sysRun)
					{
						num = 1;
						break;
					}
				}
		}
		
		if (num == 1)
			break;
	}
	cout<<"Total Runs: "<<totRun<<endl;
	system("pause");
	if (totRun < sysRun)
	{
		cout<<"Computer Wins"<<endl;
		system("pause");
		main();
	}
	else if (totRun > sysRun)
	{
		cout<<"You Win the game. Congratulations!!!"<<endl;
		system("pause");
		main();
	}
	else
	{
		cout<<"Match is Draw, Well Played"<<endl;
		system("pause");
		main();
	}
}
