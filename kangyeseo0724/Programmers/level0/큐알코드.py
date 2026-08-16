def solution(q, r, code):
    return code[r::q]

q, r = map(int, input().split())
code = input()

print(solution(q, r, code))