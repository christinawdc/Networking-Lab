#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
printf("E1");
printf("PID = %d",getpid());
char *args[]={"e1","FF","23",NULL};
execv("./e2",args);
printf("Error");
return 0;
}
