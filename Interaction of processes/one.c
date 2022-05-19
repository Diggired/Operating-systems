/* 
 Бесконечно выводит заранее заданную строку и ожидает сигналов SIGUSR1 и SIGUSR2. 
 При получении каждого из сигналов меняет выводимую строку.
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

char str[50] = "string1\n";
char str1[50] = "SIGUSR1\n";
char str2[50] = "SIGUSR2\n";

void handler(int sign);


int main() {

	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);

	printf("PID: %d\n", getpid());

	for (int i = 1;; i++) { 
		printf("%s", str);
		sleep(2);
	}
}

void handler(int sign) {
	switch (sign) {
	case SIGUSR1:
		strcpy(str, str1);
		break;
	case SIGUSR2:
		strcpy(str, str2);
		break;
	}
}
