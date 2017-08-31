n, m, k = map(int,input().split())
a=[]
for i in range(k):
    r, c1, c2 = map(int,input().split())
    b=True
    for j in range(len(a)):
        if a[j][0]==r:
            b=False
            if not(c2<a[j][1] or c1>a[j][2]):
                if c1<a[j][1]: a[j][1]=c1
                if a[j][2]<c2: a[j][2]=c2
            elif (c2<a[j][1] or c1>a[j][2]):
                a.append([r,c1,c2])
    if b == True:
        a.append([r,c1,c2])  
s=0
for j in range(len(a)):
    s=s+a[j][2]-a[j][1]+1
print (n*m-s)