#include<stdio.h>
#include<math.h>
void main(){
int a,x,p,r,i,k;
printf("Enter the value of a,x,p\n");
scanf("%d%d%d",&a,&x,&p);
while(x>k){
k=1;
k=(p-1)*i;
i++;
}
k=k-(p-1);
k=x-k;
r=pow(a,k);
r=r%p;
printf("%d",r);
}
