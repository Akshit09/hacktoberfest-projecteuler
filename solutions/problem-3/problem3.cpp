// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void SieveOfEratosthenes(bool prime[],int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
    long int maxSize = 775147;
    long int num = 600851475143;
    bool prime[maxSize];
    int pMax;
    memset(prime, true, sizeof(prime));
    SieveOfEratosthenes(&prime[0], maxSize);
    for(int i =2; i<=maxSize; i++)
    {
        if(prime[i])
        {
            if(num%i==0){
                pMax = i;}
        }
    }
    cout <<pMax;
}
