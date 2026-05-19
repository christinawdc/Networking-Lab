#include<stdio.h>
void main()
{
int n, bucketsize,outgoingrate;
int incoming, stored=0,dropped;
printf("Enter no. of incoming packets,bucketsize,outgoing rate:");
scanf("%d %d %d",&n,&bucketsize,&outgoingrate);
while(n--)
{
printf("Enter incoming packet size");
scanf("%d",&incoming);
printf("Incoming packet size is:%d ",incoming);
if ((incoming+stored)<=bucketsize)
stored=stored+incoming;
else 
{
dropped=incoming+stored-bucketsize;
stored=bucketsize;
printf("Dropped packets: %d",dropped);
}
printf("Bucket buffer size: %d out of %d",stored, bucketsize);
if (stored>=outgoingrate)
{
stored=stored-outgoingrate;
}
else stored=0;
printf("After outgoing rate, packets left in bucket are : %d out of %d ",stored ,bucketsize);
}
}
