def solve(heights):
  heights.sort()
  diff = 0
  for i in range(len(heights)-1):
    if (len(heights)/2 - 1 == i): continue
    diff = max(diff, abs(heights[i] - heights[i+1]))
  return diff
      
t = int(input())
for i in range(t):
  n = int(input())
  heights = list(map(int, input().split()))
  print("Case #" + str(i+1) + ":", solve(heights))
