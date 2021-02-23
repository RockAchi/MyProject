#include<stdio.h>
int main() 
{
int n,r,s=0,t;
printf("Enter the number\n");
scanf("%d",&n);
t=n;
while(n!=0)
{
r=n%10;
s=10*s+r;
n=n/10;
}
if(t==s)
printf("The number is a Palindrome\n");
else 
printf("The number is not a Palindrome\n");
return 0;
}

