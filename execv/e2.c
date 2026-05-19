#include<stdio.h>
#include<unistd.h>
void main(int argc, char *argv[])
{
printf("E2");
for (int i=0;i<argc;i++)
{
printf("arg[%d] = %s",i,argv[i]);
}}
