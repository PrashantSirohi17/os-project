	void swap(pos,1)
	{
		temp=pr[1];
		pr[1]=pr[pos];
		pr[pos]=temp;
		
		temp=bt[1];
		bt[1]=bt[pos];
		bt[pos]=temp;
		
		temp=p[1];
		p[1]=p[pos];
		p[pos]=temp;
		
		temp=wt[1];
		wt[1]=wt[pos];
		wt[pos]=temp;
		
		temp=at[1];
		at[1]=at[pos];
		at[pos]=temp;
	}
