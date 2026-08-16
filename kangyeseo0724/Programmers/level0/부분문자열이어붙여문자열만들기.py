def solution(my_strings, parts):
    answer = ''
    for i in range (len(my_strings)):
        s, e = parts[i]
        answer += my_strings[i][s:e+1]
    return answer

my_strings = input().split()
parts = eval(input())
print(solution(my_strings, parts))