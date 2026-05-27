def solution(k, d):
    answer = 0
    m = d // k
    for i in range(1,m+1):
        cmp = (d**2 - (k*i)**2)**0.5 // k
        answer += cmp + 1
    answer += m + 1
    return answer