def next(lis,ind):
    if lis[ind]==4:
        next(lis,ind+1)
        if ind+1!=len(lis)-1:
            lis[ind]=lis[ind+1]
    else:
        lis[ind]+=1
        if ind==len(lis)-1:
            for i in range(len(lis)-1):
                lis[i]=0

d=[0,1,2,6,8]
v={1:2,2:5,6:6,8:7,0:6}
a=input()
for i in range(int(a)):
    n=input()
    suma=0
    arr=[1]
    if (int(n)/7)>=1:
        for div in range(int(int(n)/7)):
            arr.append(0)
    arr.reverse()
    for c in arr:
        suma+=v[d[c]]
    while suma<=int(n):
        suma=0
        next(arr,0)
        """print(str(arr))"""
        for c in arr:
            suma+=v[d[c]]
    arr.reverse()
    a=""
    for x in arr:
        a+=str(d[x])
    print(a)