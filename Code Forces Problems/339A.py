s=input()
ans=[]
n=len(s)
for i in range(n):
    if i%2==0:
        ans.append(int(s[i]))
ans.sort()
n=len(ans)
for j in range(n):
    print(ans[j],end="")
    if j!=n-1:
        print("+",end="")