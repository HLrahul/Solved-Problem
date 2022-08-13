if __name__ == '__main__':
  n = int(input())
  arr =  list(map(int, input().strip().split()))[:n]
  z = max(arr)
  while max(arr) == z:
    arr.remove(max(arr))
  print (max(arr))