	if(g==i)
	{
		if(at[pn]<=i)
		{
			if(bt[pn]<=10)
			{
				wt[pn]=bt-at[pos];
			}
		}
	}
	for(l=0;l<n;l++)
	{
		pos=l;
		for(m=l+1;m<n;m++)
		{
			if(at[m]<at[pos])
			pos=m;
		}
		sort(1,pos);
	}
	printf("\n###########################################\n");
	printf("\navarage waiting time%f\n",awt/tn);
	printf("Avarage Turn Around Time",atat/tn)
}
