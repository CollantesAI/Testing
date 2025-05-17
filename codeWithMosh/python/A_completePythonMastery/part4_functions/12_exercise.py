# rules:
# 1 - if input divisible by 3, return Fizz
# 2 - if input divisible by 5, return Buzz
# 3 - if input divisible by 3 & 5, return FizzBuzz

def fizz_buzz(input):
    if (input % 3 == 0) and (input % 5 == 0):
        return "FizzBuzz"
    if input % 3 == 0:
        return "Fizz"
    if input % 5 == 0:
        return "Buzz"
    return input


print(fizz_buzz(3))
print(fizz_buzz(5))
print(fizz_buzz(15))
print(fizz_buzz(13))
