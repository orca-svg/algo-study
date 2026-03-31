import sys
import heapq
input = sys.stdin.readline

n = int(input())
q = []
abs_q = []

for _ in range(n):
    x = int(input())
    
    if x > 0:
        heapq.heappush(q, (x, x))
    elif x < 0:
        heapq.heappush(q, (-x, x))

    else:
        if q:
            result = heapq.heappop(q)
            if result[1] < 0:
                print(-result[0])
            else:
                print(result[0])
        else:
            print(0)