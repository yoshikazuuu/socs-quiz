def sort_string(s):
  return ''.join(sorted(s))

def main():
  n = int(input())

  sum = 0

  for i in range(n):
    s = input()
    s = sort_string(s)

    num = int(s)
    sum = (sum + num) % 24561

  print(sum)

if __name__ == '__main__':
  main()
