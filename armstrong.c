#include<stdio.h>
#include<math.h>
void main(){
    int i,n,r,temp,s=0,sum=0,n2;
    printf("enter the no to check Armstrong or not\n");
    scanf("%d",&n);
    temp=n;
    n2=n;
    while(n2!=0)
    { sum+=1;
     n2=n2/10;}
    while(n!=0){

        r = n % 10; 
        s+=pow(r,sum);
        n = n / 10;
    }
    if(temp==s){
        printf("The number %d is a Armstrong number",temp);

    }
    else
    printf("The number %d is not a Armstrong number",temp);
}
