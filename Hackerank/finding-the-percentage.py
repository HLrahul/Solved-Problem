if __name__ == '__main__':
  n = int(input())
  students_marks = {}
  for _ in range (n):
    name, *line = input().split()
    scores = list(map(float, line))
    students_marks[name] = scores
  query_name = input()
  query_scores = students_marks[query_name]
  print("{0:.2f}".format(sum(query_scores)/(len(query_scores))))