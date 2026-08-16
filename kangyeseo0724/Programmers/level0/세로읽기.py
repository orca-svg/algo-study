def solution(my_string, m, c):
    return my_string[c - 1::m]

my_string = input()
m, c = map(int, input().split())

print(solution(my_string, m, c))