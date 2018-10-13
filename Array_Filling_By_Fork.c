#include<stdio.h>
#include<stdlib.h>
#include <sys/wait.h>

int add;int strt=0;int end=100;

void fill(int *arr)
{
	int sum=0;
	for(int i=strt;i<end;i++){
		arr[i]=1;
		sum+=arr[i];
	}
	add=add+sum;
	strt=end;
	end=end+100;
	
}

int main(){

	int arr[1000];
	int cpid=-1;

	cpid=fork();
		printf("parent = %d \n",cpid);
//	exit(add);
if(cpid==0)
{
		 if(cpid<0)
	{
 	  printf("\nChild not created\n");
 	  exit(0);
	}
	else if(cpid==0)
	{
			//exit(add);
	  fill(arr);
 	  cpid=fork();
				printf("1= %d \n",cpid);
		if(cpid<0)
		{
 		  printf("\nChild not created\n");
 		  exit(0);
		}
		else if(cpid==0)
		{
		  fill(arr);
 		  cpid=fork();
		printf("2= %d \n",cpid);
			if(cpid<0)
			{
 			  printf("\nChild not created\n");
 			  exit(0);
			}
			else if(cpid==0)
			{
			 fill(arr);
 			  cpid=fork();
				printf("3= %d \n",cpid);
				if(cpid<0)
				{
			 	  printf("\nChild not created\n");
			 	  exit(0);
				}
				else if(cpid==0)
				{
				  fill(arr);
			 	  cpid=fork();
					printf("4= %d  \n",cpid);
					if(cpid<0)
					{
				 	  printf("\nChild not created\n");
				 	  exit(0);
					}
					else if(cpid==0)
					{
					  fill(arr);
				 	  cpid=fork();
							printf(" 5=  %d\n",cpid);
						if(cpid<0)
						{
					 	  printf("\nChild not created\n");
					 	  exit(0);
						}
						else if(cpid==0)
						{
						  fill(arr);
					 	  cpid=fork();
									printf("6= %d \n",cpid);
							if(cpid<0)
							{
						 	  printf("\nChild not created\n");
						 	  exit(0);
							}
							else if(cpid==0)		
							{
							  fill(arr);			
						 	  cpid=fork();
										printf(" 7= %d\n",cpid);
								if(cpid<0)
								{
							 	  printf("\nChild not created\n");
							 	  exit(0);
								}
								else if(cpid==0)
							 	{
								  fill(arr);
 								  cpid=fork();
											printf("8= %d\n",cpid);
								  	if(cpid<0)
   								        {
								  	 printf("\nChild not created\n");
								  	 exit(0);
								  	}
								  	else if(cpid==0)
								  	{
								  	 fill(arr);
								  	 cpid=fork();
											printf(" 9= %d\n",cpid);
										if(cpid<0)
										{
 										  printf("\nChild not created\n");
 										  exit(0);
										}
										else if(cpid==0)
										{
	  									 fill(arr);
 	  									 cpid=fork();
												printf(" 10= %d\n",cpid);
			//								exit(add);
										}
		//								exit(add);
									}
								}
							}
						}
					}
				}
			}
		}
//		exit(add);
	}	
	//exit(add);
//return 1;
}
//else
 if (cpid==0)
{
	//wait(NULL);	wait(NULL);	wait(NULL);	wait(NULL);	wait(NULL);	wait(NULL);	wait(NULL);	wait(NULL);	wait(NULL);	wait(NULL);
	printf("%d \n",add);
}
//wait(NULL);
	//wait(NULL);
	//wait(NULL);
//	wait(NULL);
	//wait(NULL);
	//wait(NULL);
	//wait(NULL);
	//wait(NULL);
	//wait(NULL);
return 0;
}




