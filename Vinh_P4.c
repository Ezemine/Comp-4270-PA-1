#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    pid_t pid;
 
    pid = fork();//creates child

    if(pid<0){
        printf("Fork Failed");
        return 1;

    }
    if(pid>0)
    {
        printf("Parent Process");
        sleep(60);//sets the time to last exactly 60 seconds,no wait call means zombie process
    }

    else if(pid==0)
    {
        printf("Child Process");
        exit(0);//terminate child
    }
    return 0;
}