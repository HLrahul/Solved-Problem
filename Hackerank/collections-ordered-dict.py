from collections import OrderedDict

items = OrderedDict()
n = int(input())
for _ in range(n):
    item = input().split()
    it = " ".join(item[:-1])
    price = int(item[-1])
    if it in items:
        items[it] += price
    else:
        items[it] = price
        
for det in items:
    print(det, items[det])
    print(end ='')