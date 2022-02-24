#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;

    int pai = getpid();

    printf("pai: %d\n", pai);

    fork();

    if (getpid() == pai) {
        sleep(20);
    }
    else {
        printf("filho: %d", getpid());
    }

}