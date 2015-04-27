N = 100

sieve = [True]*N

for i in xrange(2, N):
    if sieve[i]:
        for j in xrange(2*i, N, i):
            sieve[j] = False;

for i in xrange(2, N):
    if sieve[i]:
        print i
