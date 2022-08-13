from collections import defaultdict
d = defaultdict(list)

x, y = input().split()
for i in range(1,int(x)+1):
    d[input()].append(str(i))
    
for _ in range(int(y)):
    j = input()
    if j in d:
        print(" ".join(d[j]))
    else:
        print(-1)