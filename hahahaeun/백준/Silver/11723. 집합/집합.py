import sys
input = sys.stdin.readline

m = int(input())
s = set()
all_set = set(map(str, range(1,21)))

for _ in range(m):
    cmd = input().split()

    if cmd[0] == 'add':
        s.add(cmd[1])

    elif cmd[0] == 'remove':
        s.discard(cmd[1])

    elif cmd[0] == 'check':
        print(1 if cmd[1] in s else 0)

    elif cmd[0] == 'toggle':
        if cmd[1] in s:
            s.remove(cmd[1])
        else:
            s.add(cmd[1])

    elif cmd[0] == 'all':
        s = all_set.copy()

    elif cmd[0] == 'empty':
        s.clear()