/*

 Отправляет процессу сигнал SIGUSR1 или SIGUSR2

*/

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int pid = atoi(argv[1]);

	if ((strcmp(argv[2], "SIGUSR1") == 0)) {

		kill(pid, SIGUSR1);

	} else {

		kill(pid, SIGUSR2);
	}

}
