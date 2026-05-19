#include<stdio.h>
#include<stdlib.h>
void main()
{
int seq=1,ack,n=5,i;
for (i=0;i<n;i++){
printf("Sender sending frame %d",seq);
if (rand()%4==0)
{
printf("Frame lost...resending...");
i--;
continue;
}
printf("Receiver recieved frame, %d",seq);
ack=seq;
printf("Receiver sending ack %d",ack);
if (rand()%4==0)
{
printf("Ack lost...resending...");
i--;
continue;
}
printf("Sender recieved ack, %d",ack);
seq++;
}
}

