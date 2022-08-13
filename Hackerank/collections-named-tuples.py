from collections import namedtuple

n = int(input())
titles = ','.join(input().split())
Students = namedtuple('Students', titles)

total = 0
for i in range(n):
    row = input().split()
    students = Students(*row)
    total += int(students.MARKS)
    
print(total/n)