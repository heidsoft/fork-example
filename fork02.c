#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void){
	pid_t childpid;
	
	childpid = fork();
	if( childpid == -1 ){
		perror("Failed to fork");
		return 1;
	}
	if( childpid == 0 )  /*子进程代码*/
		printf("I am child %ld\n", (long)getpid());
	else  /*父进程代码*/
		printf("I am parent %ld\n", (long)getpid());
	return 0;
}
