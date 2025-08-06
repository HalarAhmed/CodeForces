s=input()
sumU=0
sumL=0
for i in s:
    if i.isupper():
        sumU+=1
    else:
        sumL+=1

if sumU>sumL:
    print(s.upper())
else:
    print(s.lower())