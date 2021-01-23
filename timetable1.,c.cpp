#include<stdio.h>
int main();
void Line()
{
	printf("\n__________________________________\n");	
}
void time1012()
{
		Line();
		printf("CSE-1");
		printf("\n\tDs Lab \n\tfaculty : Narghis gupta sir \n\tconducted in Lab 7");
		Line();	
		printf("CSE-2");
		printf("\n\tDs Lab \n\tfaculty : Umesh Kumar sahu sir \n\tconducted in Lab 8");	
		Line();
		printf("CSE-3");
		printf("\n\tDs Lab \n\tfaculty : Vipin Verma Sir \n\tconducted in Lab 3");	
}
void time13()
{
	Line();
	printf("CSE-1");
		printf("\n\tOOPM \n\tfaculty :Anita yadav ma'am \n\tconducted in 103 ");	
	Line();
	printf("CSE-2");
		printf("\n\tDCS \n\tfaculty :Deepti Malviya ma'am \n\tconducted in 102 ");
	Line();
	printf("CSE-3");
		printf("\n\tOOPM \n\tfaculty :Ruchi jain ma'am \n\tconducted in Lab 105 ");
}
void time34()
{
	Line();
	printf("CSE-1");
	printf("\n\tDCS Lav/ java Lab \n\tfaculty :Deepti Malviya ma'am/rajesh rai sir   \n\tconducted in Lab 7 ");
	Line();
	printf("CSE-2");
	printf("\n\tOOPm \n\tfaculty :Anita yadav ma'am  \n\tconducted in 102 ");
	Line();
	printf("CSE-3");
	printf("\n\tDIS \n\tfaculty :Umesh Kumar sahu sir  \n\tconducted in 105 ");
}
void TimeTable(int stime,int etime)
{
	if(stime==10 && etime==12)
		time1012();
	else if(stime==12 && etime==1)
		printf("\nLunch time ");
	else if(stime==1 && etime==3)
		time13();
	else if(stime==3 && etime==4)
		time34();
	else
	{
		printf("wrong time Try again ! ");
		main();
	}
		
}
int  main()
{
	int start,endat;
	printf("\n enter the startin time : ");
	scanf("%d",&start);
	printf("\n Enter the ending time : ");
	scanf("%d",&endat);
	TimeTable(start,endat);
}
