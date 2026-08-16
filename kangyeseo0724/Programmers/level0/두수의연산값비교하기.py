def solution(a, b):
    add = str(a) + str(b)
    mul = 2 * a * b
    if(int(add) > mul):
        return int(add)
    elif(mul > int(add)):
        return mul
    else:
        return int(add)
    
a, b = map(int, input().split())
print(solution(a, b))