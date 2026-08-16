def solution(a, b):
    add1 = str(a) + str(b)
    add2 = str(b) + str(a)
    if(add1 > add2):
        return int(add1)
    elif(add2 > add1):
        return int(add2)
    else:
        return int(add1)

a, b = map(int,input().split())
print(solution(a, b))