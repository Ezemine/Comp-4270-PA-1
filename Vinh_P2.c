#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
int fork();
int getpid();
int getppid();

 pid_t  pid;
 pid = fork();
 //An infinite loop because the i variable will never meet the condition of being less than 0
 for(int i=1;i>0;i++)
 if (pid == 0) 
 //Indicates the child process which is retrieving both its ID and the Parent ID
    printf("Child Process. Child Pid is %d and Parent Pid is %d.\n", getpid(),getppid()); 
 else 
 //Indicates the Parent process which is retrieving only the Parent ID
    printf("Parent Process. Parent Pid is %d.\n", getpid());
}