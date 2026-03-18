import sys
input = sys.stdin.readline

n, k = map(int, input().split())

def binomial(x):
    if x == 0: 
        return 1
    return x * binomial(x-1)
    

print(binomial(n)//(binomial(k)*binomial(n-k)))
