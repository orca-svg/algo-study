def solution(my_string, s, e):
    return my_string[:s] + my_string[s:e+1][::-1] + my_string[e+1:]

my_string = input()
s, e = map(int, input().split())

print(solution(my_string, s, e))