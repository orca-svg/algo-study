def solution(my_string, n):
    answer = ''
    answer = my_string[-n:]
    return answer

my_string = input()
n = int(input())
print(solution(my_string, n))