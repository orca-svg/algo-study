def solution(intStrs, k, s, l):
    answer = []
    for i in range (len(intStrs)):
        a = int(intStrs[i][s:s+l])
        if a > k:
            answer.append(a)   
    return answer

intStrs = input().split()
k, s, l = map(int, input().split())
print(solution(intStrs, k, s, l))