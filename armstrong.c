#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int i,n,r,temp,s=0;
    clrscr();
    printf("\nenter the no to check Armstrong or not");
    scanf("%d",&n);
    temp=n; 
    while(n!=0){
   
        r = n % 10; 
        s = s + pow(r,3);
        n = n / 10;
    }
    if(temp==s)
    printf("\nThe number %d is a Armstrong number",n);
    else
    printf("\nThe number %d is not a Armstrong number");
    
    getch();
}
