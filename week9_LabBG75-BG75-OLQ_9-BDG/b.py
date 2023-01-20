def binary_search(m: int) -> int:
    low, high = 1, m
    while low < high:
        mid = (low + high) // 2
        bruh = (mid * (mid + 1) * (2 * mid + 1)) // 6
        if bruh == m:
            return mid
        elif bruh < m:
            low = mid + 1
        else:
            high = mid
    return low

def solve(m: int):
    print(binary_search(m))

t = int(input())
for i in range(1, t+1):
    print("Case #{}: ".format(i), end="")
    m = int(input())
    solve(m)
