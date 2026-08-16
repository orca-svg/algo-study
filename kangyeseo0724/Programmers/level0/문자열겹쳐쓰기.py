def solution(my_string, overwrite_string, s):
    length = len(overwrite_string) + s
    return(my_string[:s] + overwrite_string + my_string[length:])
    
my_string = input()
overwrite_string = input()
s = int(input())
print(solution(my_string, overwrite_string, s))
