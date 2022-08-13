def print_rangoli(size):
  mystr = 'abcdefghijklmnopqrstuvwxyz'[0:size]
  
  for i in range (size-1, -size, -1):
    x = abs(i)
    if  x >= 0:
      line = mystr[size:x:-1] + mystr[x:size]
      print ("--"*x + '-'.join(line) + "--"*x)