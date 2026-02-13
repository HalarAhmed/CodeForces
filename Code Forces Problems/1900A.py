t=input()
t=int(t)
for i in range(0,t):
    count=0
    r=input()
    r=int(r)
    s=input()
    if "..." in s:
        print(2)
    else:
        for r in s:
            if r=='.':
                count=count+1
        print(count)