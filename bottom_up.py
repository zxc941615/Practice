def bottom_up(n):
    if n == 1 :
        return 1
    elif n == 2 :
        return 1
    bottom = [0,1,1]
    for i in range(3,n+1):
        value = bottom[i-1] + bottom[i-2]
        bottom.append(value)
    return bottom[n]
    

bottom_up(7)
