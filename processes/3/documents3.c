/*
Реализация программы из пункта 2 с помощью создания процесса (вызов exec)
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	printf("\nИсполняется third\n");
	printf("PID third: %d\n",getpid());
	char *args[]={NULL};
	execvp("./two",args);
	return 0;
}