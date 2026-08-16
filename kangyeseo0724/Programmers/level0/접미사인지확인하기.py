def solution(my_string, is_suffix):
    suffix = []
    for i in range (len(my_string)):
        suffix.append(my_string[i:len(my_string)])
    for i in range (len(suffix)):
        if(suffix[i] == is_suffix):
            return 1
    return 0
    
my_string = input()
is_suffix = input()
print(solution(my_string, is_suffix))