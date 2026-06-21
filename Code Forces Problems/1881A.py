t=int(input())
for i in range(t):
    n, m = map(int, input().split())
    x=input() # length n
    s=input() # length m
    ops=0
    found=False
    
    while len(x)<=25:
        if s in x:
            found=True
            break
        x=x+x
        ops=ops+1
    
    if found==True or s in x:
        print(ops)
    else:
        print(-1)