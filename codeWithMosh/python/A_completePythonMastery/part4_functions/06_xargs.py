def product(x, y):  # cannot do more than two numbers
    return x * y


def multiply(*numbers):
    print(numbers)
    total = 1
    for number in numbers:
        print(number)
        total *= number
    return total


multiply(2, 3, 4, 5)  # will output a tuple
print(multiply(2, 3, 4, 5))  # will output total
