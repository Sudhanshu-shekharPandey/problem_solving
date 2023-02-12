import math
def sum_of_series(x, n):
    result = 0
    for i in range(0, n+1):
        result += (x**i)/math.factorial(i)
    return result
x = float(input())
n = int(input())
print(sum_of_series(x, n))
