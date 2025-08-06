#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

void *workerthreadfunc (void * add){
	long sum =0 ;
	long * val = ( long *)(add);
	long i=0;
	for(i=0; i<1000000000; i++)
	{ 
		sum+=*val;
	}
	printf("Add Is %ld \n", sum);
}

int main(){
	pthread_t tid0;
	pthread_t tid1;
	
	long value= 1;
	long value2 = 2;
	
	pthread_create (&tid0,NULL,workerthreadfunc,(void *)&value);	
	pthread_create (&tid1,NULL,workerthreadfunc,(void *)&value2);	

	pthread_join(tid0,NULL);
	pthread_join(tid1,NULL);

	
	pthread_exit(NULL);
	
	return 0;
}
