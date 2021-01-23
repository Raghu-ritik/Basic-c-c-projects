#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class person
{
	public:
	string perId;
	string password;
	person(string Id,string pasword)
	{
		perId=Id;
		password=pasword;
	}
	
};
void LoginPage()
{
	cout<<"\n\t\tYou have login sucessFully !";
	cout<<"\n\tRitik ";
	cout<<"\n\t\t:) CSE";
	cout<<"\n\t\t:) 3 semester";
	cout<<"\n\t\t:) Age : 20";
	cout<<"\n\t\t:) Bhopal";
}
int main()
{
	string idd,pas;
	person P1("ritik1607","16RL12@");
	while(1)
	{
		printf("\n\t\t\t***Welcome to Facebook***\t\t\n");
		cout<<"\n\tUser id: ";
		cin>>idd;
		cout<<"\n\n\tPassword:";
		cin>>pas;
		if((idd.compare(P1.perId))==0 && (pas.compare(P1.password))==0)
		{
			cout<<"\n\t\tSucessFull Login ";
			getch();
			system("CLS");
			LoginPage();
			getch();
			return 0;
		}
		else
		{
			cout<<"\n\t\tUnSucessFull Login Try again ..";
			getch();
			system("CLS");
			main();
		}
	}
}
