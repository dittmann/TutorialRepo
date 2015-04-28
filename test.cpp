#include <iostream>

const int N = 100;



int main()
{
    bool sieve[N];
    for(bool& element : sieve) element = true;
    for(int i = 2; i*i< N; ++i)
    {
        if(sieve[i])
        {
            for(int j = 2*i; j < N; j += i)
            {
                sieve[j] = false;
            }
        }
    }

    for(int i = 2; i < N; ++i)
    {
        if(sieve[i]) std::cout << i << std::endl;
    }
}
