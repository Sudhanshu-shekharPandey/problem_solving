def factorial_tail(n, acc=1):
    if n == 0:
        return acc
    else:
        return factorial_tail(n - 1, acc * n)

print(factorial_tail(int(input())))

