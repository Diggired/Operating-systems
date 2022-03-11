/*
Создает копии самой себя и выводит индентификатор текущего и родительского процесса
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
        printf("Выводит индентификаторы до создании копии самой себя\n");
        printf("PID родительского процесса - %d\n",getppid());
        printf("PID дочернего процесса - %d\n",getpid());
        printf("Выводит индентификаторы после создании копии самой себя\n");
        if (fork() == 0) {
                printf("PID дочернего процесса - %d\n",getpid());
        } else {
                printf("PID родительского процесса - %d\n",getpid());
        }
        return 0;
}