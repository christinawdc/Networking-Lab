#include<stdio.h>
struct node
{
int dist[10], from[10];
}rt[10];

void main()
{
int i,j,k,n,change=1;
printf("Enter the no of nodes:" );
scanf("%d",&n);
int c[n][n];
printf("Enter the cost matrix");
for (int i=0;i<n;i++){
for (int j=0;j<n;j++)
{
scanf("%d",&c[i][j]);
rt[i].dist[j]=c[i][j];
rt[i].from[j]=j;
}}
while(change){
change=0;
for (int i=0;i<n;i++){
for (int j=0;j<n;j++){
for (int k=0;k<n;k++){
if (rt[i].dist[j]>c[i][k]+rt[k].dist[j]){
rt[i].dist[j]=c[i][k]+rt[k].dist[j];
rt[i].from[j]=k;
change=1;
}}}}}

//print routing tables
for (int i=0;i<n;i++){
printf("Router %d:",i+1);
for (int j=0;j<n;j++){
printf("node %d via %d with distance %d",j+1,rt[i].from[j]+1,rt[i].dist[j]);
}
}}
