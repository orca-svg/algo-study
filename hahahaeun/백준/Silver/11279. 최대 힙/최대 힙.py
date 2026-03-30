import sys
import heapq
input = sys.stdin.readline

n = int(input())
q = []
for _ in range(n):
    num = int(input())

    if num != 0:
        heapq.heappush(q, -num)

    else:
        if q:
            print(-(heapq.heappop(q)))
        else:
            print(0)