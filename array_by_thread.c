#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int arr[1000];
int chunk_size=100;
int sum=0;
void * fill(void *args)
{	
 int start=(int)args;	//conversion from * to int
 int end=start+chunk_size;
 sum=0;
 int i;
 for( i=start;i<end;i++)	//summing all values of chunk size from array
 {
  sum=sum+arr[i];
 }
 return ((void*)sum);
}

int main()
{
	int status1,status2,status3,status4,status5,status6,status7,status8,status9,status10; //for return values of all threads
	pthread_t thread_t1,thread_t2,thread_t3,thread_t4,thread_t5,thread_t6,thread_t7,thread_t8,thread_t9,thread_t10;  //All 10 threads

	for(int i=0;i<1000;i++)	//Filling array "arr" 
	{
		arr[i]=1;
	}

	pthread_create(&thread_t1,NULL,fill,(void*)(0*chunk_size));
	pthread_create(&thread_t2,NULL,fill,(void*)(1*chunk_size));
	pthread_create(&thread_t3,NULL,fill,(void*)(2*chunk_size));
	pthread_create(&thread_t4,NULL,fill,(void*)(3*chunk_size));
	pthread_create(&thread_t5,NULL,fill,(void*)(4*chunk_size));
	pthread_create(&thread_t6,NULL,fill,(void*)(5*chunk_size));
	pthread_create(&thread_t7,NULL,fill,(void*)(6*chunk_size));
	pthread_create(&thread_t8,NULL,fill,(void*)(7*chunk_size));
	pthread_create(&thread_t9,NULL,fill,(void*)(8*chunk_size));
	pthread_create(&thread_t10,NULL,fill,(void*)(9*chunk_size));

	pthread_join(thread_t1,(void**) & status1);
	pthread_join(thread_t2,(void**) & status2);
	pthread_join(thread_t3,(void**) & status3);
	pthread_join(thread_t4,(void**) & status4);
	pthread_join(thread_t5,(void**) & status5);
	pthread_join(thread_t6,(void**) & status6);
	pthread_join(thread_t7,(void**) & status7);
	pthread_join(thread_t8,(void**) & status8);
	pthread_join(thread_t9,(void**) & status9);
	pthread_join(thread_t10,(void**) & status10);

	int sum1=status1+status2+status3+status4+status5+status6+status7+status8+status9+status10;	//summing all 100 values
	printf("\nSum = %d\n", sum1);		//printing sum
	
	return 0;
}

