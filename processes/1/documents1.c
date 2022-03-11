/*
Выводит индентификатор текущего и родительского процесса
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	printf("PID дочернего процесса: %d\n",getpid());
	printf("PID родительского процесса: %d\n",getppid());
	return 0;
}