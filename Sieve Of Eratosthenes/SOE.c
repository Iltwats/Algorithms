#include<stdio.h>
#include<stdbool.h> //To take boolean value

void sieve_of_eratosthenes(int n)
{
    //take a boolean array to store which index is a prime number.
    bool prime[n + 1];

    // make all the blocks as true.
    for (int i = 2; i <= n; i++) 
    { 
        prime[i] = true; 
    } 

    // from the first prime number
    for(int j = 2; j*j <= n; j++)
    {
        // check if the current index is a prime number, if yes, then 
        if(prime[j] == true)
        {
            //if yes, then make all the blocks that are multiple of that index as false
            for(int i = j*2; i <= n; i += j)
            {
                prime[i] = false;
            }
        }
    }

    printf("All the prime numbers from 2 to %d is\n ", n);
    // from the first prime number, print all the prime numbers.
    for(int j = 2; j <= n; j++)
       if(prime[j]) // if prime[j] is true, then it is a prime number. Print it
          printf("%d ",j);
}

int main()
{
    // n is the max limit to find the list of prime numbers from
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    sieve_of_eratosthenes(n);
    return 0;
}