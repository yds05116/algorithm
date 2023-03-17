n,m = map(int,input().split())
list = [0] * n # 값이  모두 0인 n크기의 배열 초기화
for i in range(m):
    a,b,c = map(int,input().split())
    for j in range(a,b+1):
        list[j-1] = c

for i in list:
    print(i, end=" ")
