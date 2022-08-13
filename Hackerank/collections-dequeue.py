from collections import deque

d = deque()
n = int(input())

for i in range(n):
    io = input().split()
    if(io[0] == 'append'):
        d.append(io[1])
    elif(io[0] == 'popleft'):
        d.popleft()
    elif(io[0] == 'appendleft'):
        d.appendleft(io[1])
    elif(io[0] == 'pop'):
        d.pop()

print(' '.join(d))