#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
pid_t pid;
pid=fork();
if (pid>0){
printf("Parent Process");
printf("Parent PID: %d",getpid());
}
else if (pid==0){
printf("Child Process");
printf("Child PID: %d",getpid());
printf("Parent PID: %d ", getppid());
}
else perror("Fork failed");
}
