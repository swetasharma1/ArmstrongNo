#include<stdio.h>
#include<conio.h> //some software of c does not accept program if conio is not present
void main()
{
    int i,n,r,temp,s=0;
    printf("enter the no to check Armstrong or not\n");
    scanf("%d",&n);
    temp=n; 
    while(n!=0)
    {
   
        r = n % 10; 
        s = s + (r*r*r);
        n = n / 10;
    }
    if(temp==s)
    {
        printf("The number %d is a Armstrong number",n);
    
    }
    else
    {
        printf("The number %d is not a Armstrong number");
    }
}
