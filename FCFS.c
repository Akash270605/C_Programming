#include<stdio.h>
void main()
{
	int p[10],at[10],bt[10],ct[10],tat[10],wt[10],i,j,temp=0,n;
	float awt=0,atat=0;

	printf("Enter the Number of process to execute: ");
	scanf("%d",&n);

	printf("\nEnter id of %d number of process: ",n);

	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	printf("\nEnter Arrival Time of %d number of process: ",n);

	for(i=0;i<n;i++)
		scanf("%d",&at[i]);
	printf("\nEnter Burst Time of %d number of process: ",n);

	for(i=0;i<n;i++)
		scanf("%d",&bt[i]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
		{
			if(at[j]>at[j+1])
			{
				temp=p[j+1];
				p[j+1]=p[j];
				p[j]=temp;
				temp=at[j+1];
				at[j+1]=at[j];
				at[j]=temp;
				temp=bt[j+1];
				bt[j+1]=bt[j];
				bt[j]=temp;
			}
		}
	}

	ct[0]=at[0]+bt[0];

	for(i=1;i<n;i++)
	{
		temp=0;
		if(ct[i-1]<at[i])
			temp=at[i]-ct[i-1];
		ct[i]=ct[i-1]+bt[i]+temp;
	}

	printf("\np\t AT \t BT \t CT \t TAT \t WT");

	for(i=0;i<n;i++)
	{
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
		atat+=tat[i];
		awt+=wt[i];
	}

	atat=atat/n;
	awt=awt/n;

	for(i=0;i<n;i++)
		printf("\n%d\t%d\t%d\t%d\t%d\t%d",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);

	printf("\nAverage TurnAround Time=%f",atat);
	printf("\nAverage Waiting Time=%f",awt);
}