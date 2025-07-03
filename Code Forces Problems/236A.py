s=input()
l=[]

if 1<=len(s)<=100 and s.islower()==True:
    for i in s:
        if i not in l:
            l.append(i)
    if len(l)%2==0 and l!=0:
        print("CHAT WITH HER!")
    elif len(l)%2!=0 and l!=0:
        print("IGNORE HIM!")
