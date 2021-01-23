#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define Pi 3.14
int main();
int Add()
{
	system("CLS");
	printf("=================== Addition Opeartion =============================");
	int N,i,sum=0;
	printf("\nEnter on how many number to perform Addition : ");
	scanf("%d",&N);
	int Add[N];

	for(i=0;i<N;i++)
	{
		printf("\nEnter the %d number : ",i+1);
		scanf("%d",&Add[i]);
		sum=sum+Add[i];
	}
	printf("\nThe Total Sum of %d numbers is :: %d",N,sum);	
	getch();	
	system("CLS");
	main();
}
int Substraction()
{
	system("CLS");
	printf("=================== Substraction Opeartion =============================");
	int fir,sec,sub;
	printf("\nEnter the First number :: ");
	scanf("%d",&fir);
	printf("\nEnter the Secound number :: ");
	scanf("%d",&sec);
	sub=fir-sec;
	printf("\nThe substraction of numbers is :: %d",sub);
	getch();
	system("CLS");
	main();
}
int Multiplication()
{
	system("CLS");
	printf("=================== Multiplication Opeartion =============================");
	int N,i,mul=1;
	printf("\nEnter on how many number to perform Multiplication : ");
	scanf("%d",&N);
	int Add[N];

	for(i=0;i<N;i++)
	{
		printf("\nEnter the %d number : ",i+1);
		scanf("%d",&Add[i]);
		mul*=Add[i];
	}
	printf("\nThe Total Mul of %d numbers is :: %d",N,mul);	
	getch();	
	system("CLS");
	main();
}
float Division()
{
	system("CLS");
	printf("=================== Division Opeartion =============================");
	int fir,sec;float div;
	printf("\nEnter the first number : ");
	scanf("%d",&fir);
	printf("\nEnter the secound number : ");
	scanf("%d",&sec);
	div=fir/sec;
	printf("\nThe divison of number is :: %f ",div);
	getch();
	system("CLS");
	main();
}
int Modulous()
{
	system("CLS");
	printf("=================== Modulous Opeartion =============================");
	int fir,sec,mod;
	printf("\nEnter the first number : ");
	scanf("%d",&fir);
	printf("\nEnter the modular number : ");
	scanf("%d",&sec);
	mod=fir%sec;
	printf("\nThe modulous of number is :: %d ",mod);
	getch();
	system("CLS");	
	main();
}
int Power()
{
	system("CLS");
	printf("=================== Power Opeartion =============================");
		int fir,sec,i,pow=1;
	printf("\nEnter the base number : ");
	scanf("%d",&fir);
	printf("\nEnter the power number : ");
	scanf("%d",&sec);
	for(i=0;i<sec;i++)
		pow*=fir;
	printf("\nThe Power of number is :: %d ",pow);
	getch();
	system("CLS");
	main();
}
float sqroot()
{
	system("CLS");
	printf("=================== SquareRoot Opeartion =============================");
	int num;float root;
	printf("\nEnter the number  : ");
	scanf("%d",&num);
	root=sqrt(num);
	printf("\nThe square Root is :: %d ",root);
	getch();
	system("CLS");
	main();
}
float inverse()
{
	system("CLS");
	printf("=================== Inverse Opeartion =============================");
	int x;float in;
	printf("\nEnter the number : ");
	scanf("%d",&x);
	in=1/x;
	printf("\nThe ionverse of the number is :: %d",in);
	getch();
	system("CLS");
	main();
}
float area()
{
	system("CLS");
	printf("=================== Area Opeartion =============================");
	int side,area=1;
	printf("\nEnter the side : ");
	scanf("%d",&side);
	area=side*side;
	printf("\nThe area is :: &d",area);
	getch();
	system("CLS");
	main();
}
int main()
{
	printf("================================ Calculator =====================================");
	int choice;
	while(1)
	{
		printf("\n1.Addition\n2.substraction\n3.Multiplication\n4.Division\n5.Modulous\n6.Power\n7.Squareroot\n8.inverse\n9.Area\n10.Exit ");
		printf("\nEnter Your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Add();
				break;
			case 2:Substraction();
				break;
			case 3:Multiplication();
				break;
			case 4:Division();
				break;
			case 5:Modulous();
				break;
			case 6:Power();
				break;
			case 7:sqroot();
				break;
			case 8:inverse();
				break;
			case 9:area();
				break;
			case 10:exit(0);
			default:printf("You have Entered the Wrong Input ! ");
		}
		
		
		
	}	
	return 0;
}	
