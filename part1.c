#include<stdio.h>
int main()
{
	int i,m;
	printf("\nenter number of processes");
	scanf("%d",&m);
	int arrival[m];
	int burst[m],burst1[m];
	int waiting[m];
	int tarrival[m];
	int tq1=3;
	int tq2=6;
	int avgT=0;
	int avgW=0;
	printf("\nEnter arival time of processes:");
	for(i=0;i<m;i++)
	{  printf("\nfor processes %d :",i+1);
		scanf("%d",&arrival[i]);
	}
	printf("\nenter burst time for processes:");
	for(i=0;i<m;i++)
	{
		printf("\nfor processes %d:",i+1);
		scanf("%d",&burst[i]);
		burst1[i]=burst[i];
	}
