import sys
from collections import deque
input = sys.stdin.readline

def d(x):
    return (2 * x) % 10000


def s(x):
    if x == 0:
        return 9999
    else:
        return x - 1
    
def l(x):
    n = str(x).zfill(4)
    left_shifted = n[1:] + n[0]
    return int(left_shifted)

def r(x):
    n = str(x).zfill(4)
    right_shifted = n[-1] + n[:-1]
    return int(right_shifted)

def bfs(start, target):
    q = deque([(start, "")])
    visit = [False] * 10000
    visit[start] = True

    while q:
        num, path = q.popleft()

        if num == target:
            return path
        
        next_d = d(num)
        if not visit[next_d]:
            visit[next_d] = True
            q.append((next_d, path+"D"))

        next_s = s(num)
        if not visit[next_s]:
            visit[next_s] = True
            q.append((next_s, path+"S"))

        next_l = l(num)
        if not visit[next_l]:
            visit[next_l] = True
            q.append((next_l, path+"L"))

        next_r = r(num)
        if not visit[next_r]:
            visit[next_r] = True
            q.append((next_r, path+"R"))
                     
        

t = int(input())

for _ in range(t):
    n, goal = map(int, input().split())

    result = bfs(n, goal)

    print(result)

