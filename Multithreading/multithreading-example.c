#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

void *workerthreadfunc (void * tid){
	long * myid = ( long *)tid;
	printf("Hello Work, This Is A Thread %ld \n", myid);
}

int main(){
	pthread_t tid0;
	pthread_t tid1;
	pthread_t tid2;
	pthread_t tid3;
	
	pthread_t * pthreads[] = {&tid0,&tid1,&tid2,&tid3};
	
	int i;
	for(i=0; i<4; i++){
	pthread_create (&pthreads[i],NULL,workerthreadfunc,(void *)&pthreads[i]);	
	}
	
	
	pthread_exit(NULL);
	
	return 0;
}
