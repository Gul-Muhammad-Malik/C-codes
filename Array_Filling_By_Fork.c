#include<stdio.h>
#include<stdlib.h>

int add=0;int strt=0;int end=100;

void fill(int *arr)
{
	int sum=0;
	for(int i=strt;i<end;i++){
		arr[i]=1;
		sum+=arr[i];
	}
	add+=sum;
	strt=end;
	end=end+100;
	
	printf("%d \n",add);
}

int main(){

	int arr[1000];
	int cpid=-1;
	cpid=fork();

	 if(cpid<0)
	{
 	  printf("\nChild not created\n");
 	  exit(1);
	}
	else if(cpid==0)
	{
	  fill(arr);
 	  cpid=fork();
		if(cpid<0)
		{
 		  printf("\nChild not created\n");
 		  exit(1);
		}
		else if(cpid==0)
		{
		  fill(arr);
 		  cpid=fork();
			if(cpid<0)
			{
 			  printf("\nChild not created\n");
 			  exit(1);
			}
			else if(cpid==0)
			{
			 fill(arr);
 			  cpid=fork();
				if(cpid<0)
				{
			 	  printf("\nChild not created\n");
			 	  exit(1);
				}
				else if(cpid==0)
				{
				  fill(arr);
			 	  cpid=fork();
					if(cpid<0)
					{
				 	  printf("\nChild not created\n");
				 	  exit(1);
					}
					else if(cpid==0)
					{
					  fill(arr);
				 	  cpid=fork();
						if(cpid<0)
						{
					 	  printf("\nChild not created\n");
					 	  exit(1);
						}
						else if(cpid==0)
						{
						  fill(arr);
					 	  cpid=fork();
							if(cpid<0)
							{
						 	  printf("\nChild not created\n");
						 	  exit(1);
							}
							else if(cpid==0)		
							{
							  fill(arr);			
						 	  cpid=fork();
								if(cpid<0)
								{
							 	  printf("\nChild not created\n");
							 	  exit(1);
								}
								else if(cpid==0)
							 	{
								  fill(arr);
 								  cpid=fork();
								  	if(cpid<0)
   								        {
								  	 printf("\nChild not created\n");
								  	 exit(1);
								  	}
								  	else if(cpid==0)
								  	{
								  	 fill(arr);
								  	 cpid=fork();
										if(cpid<0)
										{
 										  printf("\nChild not created\n");
 										  exit(1);
										}
										else if(cpid==0)
										{
	  									 fill(arr);
 	  									 cpid=fork();
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}	
	
return 0;
}


