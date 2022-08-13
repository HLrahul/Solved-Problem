from collections import OrderedDict

words = OrderedDict()

n = int(input())
a = 1

for i in range(n):
    word = input()
    if word in words:
        words[word] += 1
    else:
        words[word] = a
        
print(len(words), end ='\n')

for w in words:
    print(''.join(str(words[w])), end =' ')