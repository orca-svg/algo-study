def solution(my_string, is_prefix):
    return 1 if my_string.startswith(is_prefix) else 0

my_string = input()
is_prefix = input()

print(solution(my_string, is_prefix))