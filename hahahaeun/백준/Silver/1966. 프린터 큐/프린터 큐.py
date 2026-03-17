import sys
input = sys.stdin.readline

test = int(input())

for _ in range(test):
    n, m = map(int, input().split())
    
    q = list(map(int, input().split()))
    goal = q[m]
    q[m] = -1
    
    count = 1
    while True:
        if goal < max(q):
            if q[0] != max(q):
                q.append(q.pop(0))
                
            else:
                q.pop(0)
                
                count+=1
    
        else:
            if q[0] != -1:
                if q[0] == goal:
                    count+=1
                q.append(q.pop(0))
                
            else:
                print(count)
                break
            