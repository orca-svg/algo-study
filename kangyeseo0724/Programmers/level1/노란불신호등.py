import math

def solution(signals):
    cycles = [sum(s) for s in signals]
    
    lcm_val = cycles[0]
    for i in range(1, len(cycles)):
        lcm_val = (lcm_val * cycles[i]) // math.gcd(lcm_val, cycles[i])
    
    for t in range(1, lcm_val + 1):
        is_all_yellow = True
        
        for i in range(len(signals)):
            G, Y, R = signals[i]
            cycle = cycles[i]
            
            current_in_cycle = t % cycle
            if current_in_cycle == 0: 
                current_in_cycle = cycle
            
            if not (G < current_in_cycle <= G + Y):
                is_all_yellow = False
                break
        
        if is_all_yellow:
            return t
            
    return -1