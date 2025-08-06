# 1st method (Using in-built feature):
s1=input().lower()
s2=input().lower()
if s1<s2: # python has this inbuilt feature in which it compares each character lexicographically via ASCII codes.
    print(-1)
elif s1>s2:
    print(1)
else:
    print(0)




# 2nd method (Manually comparing each character):
s1=input().lower()
s2=input().lower()
ans=0
for i in range(len(s1)):
    ascii_1=ord(s1[i])
    ascii_2=ord(s2[i])
    if ascii_1>ascii_2:
        ans=1
        break
    elif ascii_1<ascii_2:
        ans=-1
        break
    else:
        continue

print(ans)