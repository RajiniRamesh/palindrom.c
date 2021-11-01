/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>  
int main()    
{    
int a,val=0,digit,t;   
printf("enter the number=");    
scanf("%d",&a);    
   
while(a)    
{    
digit=a%10;    
val=(val*10)+digit;    
a=a/10;    
}    
if(t==val)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}  