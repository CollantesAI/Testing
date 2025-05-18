# numbers = [0, 1, 2]
# first = numbers [0]
# second = numbers [2]
# third = numbers [2]
# A better way to acheive same result
numbers = [0, 1, 2, 3, 4, 4, 4, 4, 99]
first, second, third, *other, last = numbers
print(first)
print(second)
print(third)
print(other)
print(last)
