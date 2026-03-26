import sys

#sys.stdin = open("input.txt", "rt")

def solution():
    T = int(sys.stdin.readline())
    
    ns = [int(sys.stdin.readline()) for _ in range(T)]
    
    highest = max(ns)
    
    dp = [0] * (12)
    dp[1] = 1
    dp[2] = 2
    dp[3] = 4
    answer = ""
    
    if highest > 3:
        for i in range(4, 12): # highest 대신, 그냥 11까지 묻지도 따지지도 않고 다 구해버림
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
    
    for n in ns:
        answer += str(dp[n]) + "\n"
    sys.stdout.write(answer)

if __name__ == "__main__":
    solution()  