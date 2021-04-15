#include<stdio.h>
#include "functions.h"
void bsort()
{
long long int n;
printf("Enter the Number Of Passengers:-\n");
scanf("%lld",&n);
long long int a[n],b[n],i,j,t,r,cn=0,pnr[10];
char name[10][10],tname[10][10];
for(i=0;i<n;i++)
{
  printf("Enter the Train Number:");
  scanf("%lld",&a[i]);
  b[i]=a[i];
  printf("Enter the Passenger Name\n");
    scanf("%s",name[i]);
    printf("Enter the Train Name\n");
    scanf("%s",tname[i]);
    printf("Enter the PNR Number\n");
    scanf("%lld",&pnr[i]);
    
    }
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("Sorted Order is:\n");
for(i=0;i<n;i++){
printf("%lld ",a[i]);
r=a[i],cn=0;
for(j=0;j<n;j++)
{
if(b[j]==r)
cn=j;
}
printf(" %s %s %lld\n",name[cn],tname[cn],pnr[cn]);
    
}
}
