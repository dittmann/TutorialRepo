#include <iostream>

const int N = 100;

int main()
{
    bool sieve[N/2];
    for(bool& element : sieve) element = true;
    for(int i = 1; i*i< N/2; ++i)
    {
        if(sieve[i])
        {
            for(int j = 3*i + 1; j < N/2; j += 2*i + 1)
            {
                sieve[j] = false;
            }
        }
    }

    std::cout << 2 << std::endl;
    for(int i = 1; i < N/2; ++i)
    {
        if(sieve[i]) std::cout << 2*i + 1 << std::endl;
    }
}
