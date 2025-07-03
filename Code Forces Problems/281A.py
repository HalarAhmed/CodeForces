s=input()
if 1<=len(s)<=10**3:
    for i in range(len(s)):
        if i==0:
            v=s[i]
            print(v.upper(),end="")
        else:
            print(s[i],end="")
