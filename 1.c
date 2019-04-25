#include<stdio.h>
int main()
{
	int P[];
	int at[];
	int br[];
	int pr[];
	int wt[];
	printf("\nEnter Arrival and Burst time :\n");
	for(i=0;i<n;i++)
	{
		do{
			printf("for p %d\n",i+1);
			printf(" Arrival:");
			scanf("%d",&at[i]);
			if(at[i]<0)
			printf("\tInvalid Arrival time please enter again\n");
		}while(at[i]<0);
