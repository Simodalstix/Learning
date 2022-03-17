# a, b = 0, 1
# while a < 2000:
#     print(a, end=',')
#     a, b = b, a+b
def fib(n): # write Fibonacci series up to n
    for n in range(2, 10):
        for x in range(2, n):
            if n % x == 0:
                 print(n, 'equals', x, '*', n//x)
                 break
        else:
        # loop fell through without finding a factor
             print(n, 'is a prime number')


