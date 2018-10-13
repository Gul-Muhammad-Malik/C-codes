#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>


int strt=0;int end=100;

void fill(int *arr,int *fd)
{
	int sum=0;
	for(int i=strt;i<end;i++){
		arr[i]=1;
		sum+=arr[i];
	}
	write(fd[1],&sum,sizeof(sum));		//writing sum 
	close(fd[1]);
	exit(0);

	strt=end;
	end=end+100;
	
//	printf("%d \n",add);
}

int main(){

	int arr[1000];		//for 1-1000 numbers
	int sumvalue[10];	//for each 100 numbers sum

	int fd1[2];		//FOR pipe
	int cpid;		//child 

if(pipe(fd1)==-1)		//creating pipe
{
	printf("Pipe not created");
	return 1;
}
	//"""child 1"""
		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[0],sizeof(int));		//reading from pipe to array
			printf("child 1\n");
			close(fd1[0]);
		}


	//"""child 2"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[1],sizeof(int));		//reading from pipe to array
			printf("child 2\n");
			close(fd1[0]);
		}
		

	//"""child 3"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[2],sizeof(int));		//reading from pipe to array
			printf("child 3\n");
			close(fd1[0]);
		}


	//"""child 4"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[3],sizeof(int));		//reading from pipe to array
			printf("child 4\n");
			close(fd1[0]);
		}
		
	
	//"""child 5"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[4],sizeof(int));		//reading from pipe to array
			printf("child 5\n");
			close(fd1[0]);
		}
		

		
	//"""child 6"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[5],sizeof(int));		//reading from pipe to array
			printf("child 6\n");
			close(fd1[0]);
		}
		

		
	//"""child 7"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[6],sizeof(int));		//reading from pipe to array
			printf("child 7\n");
			close(fd1[0]);
		}
		
		
	//"""child 8"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[7],sizeof(int));		//reading from pipe to array
			printf("child 8\n");
			close(fd1[0]);
		}
		

		
	//"""child 9"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[8],sizeof(int));		//reading from pipe to array	
			printf("child 9\n");
			close(fd1[0]);
		}


	
	//"""child 10"""	

	if(pipe(fd1)==-1)		//reopening pipe
	{
		printf("Pipe not created");
		return 1;
	}

		cpid=fork();
		if(cpid<0)
		{
	 	  printf("\nChild not created\n");
	 	  exit(1);
		}
		else if(cpid==0)
		{
	  		fill(arr,fd1);
		}
		else
		{
			read(fd1[0],&sumvalue[9],sizeof(int));		//reading from pipe to array
			printf("child 10\n");
			close(fd1[0]);
		}
		

int sum1=0;			
for(int i=0;i<10;i++)		
{
	sum1=sum1+sumvalue[i];			//summing all the values of forks
}
printf("sum= %d\n",sum1);			//printing sum

return 0;
}


