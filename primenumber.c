#include<stdio.h>

int checkForPrime(int);
int i;

int main()
{

    int n,prime;

	
    printf(" Input any positive number : ");
    scanf("%d",&n);
    
    i = n/2;

    prime = checkForPrime(n);

   if(prime==1)
        printf(" %d is a prime number. \n",n);
   else
      printf(" %d is not a prime number. \n",n);
   return 0;
}

int checkForPrime(int n)
{
    if(i==1)
    {
        return 1;
    }
    else if(n %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         checkForPrime(n);}
}
