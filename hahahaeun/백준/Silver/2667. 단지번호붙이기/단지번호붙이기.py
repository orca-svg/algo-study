import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

def complex(x, y):
    house = 1
    visit[y][x] = True
    for i in range(4):
        nx = x + movement[i][0]
        ny = y + movement[i][1]

        if 0 <= nx < n and 0 <= ny < n:
            if not visit[ny][nx] and grid[ny][nx] == 1:
                house += complex(nx, ny)
                
    return house

n = int(input())
grid = []
visit = [[False] * n for _ in range(n)]

for _ in range(n):
    grid.append(list(map(int, input().strip())))

movement = [(1,0), (-1,0), (0, 1), (0, -1)]


results = []
for i in range(n):
    for j in range(n):
        if grid[i][j] == 1 and not visit[i][j]:
            result = complex(j,i)
            results.append(result)

results.sort()
print(len(results))
for i in range(len(results)):
    print(results[i])