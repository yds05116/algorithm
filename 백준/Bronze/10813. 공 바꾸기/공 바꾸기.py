n,m = map(int,input().split())
list = [i for i in range(1,n+1)]

for i in range(m):
    a,b, = map(int,input().split())
    list[a-1],list[b-1] = list[b-1],list[a-1]

for i in list:
    print(i, end=" ")
