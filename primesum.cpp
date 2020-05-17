bool isPrimeCheck(int A)
{
    if(A<=1)
    {
        return 0;
    }
    
    int s = sqrt(A);
    for(int i=2;i<=s;i++)
    {
        if(A%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

vector<int> Solution::primesum(int A) {
    int SIZE = A+100;
    int sqrt_size = sqrt(SIZE);
    vector<bool> isPrime(SIZE,1);
    isPrime[0] = isPrime[1] = 0;
    for(int i=2;i<sqrt_size;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<SIZE;j+=i)
            {
                isPrime[j] = 0;
            }
        }
    }
    vector<int> toreturn;
    for(int i=2;i<=A;i++)
    {
        if(isPrime[i] && isPrime[A-i])
        {
            toreturn.push_back(i);
            toreturn.push_back(A-i);
            break;
        }
    }
    return toreturn;
}
