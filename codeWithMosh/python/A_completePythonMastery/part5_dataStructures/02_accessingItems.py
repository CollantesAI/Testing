letters = ["a", "b", "c", "d"]
print(letters)
print(letters[0])
print(letters[1])
print(letters[2])
print(letters[3])
print(letters[-1])
letters[0] = "A"
print(letters)
print(letters[0:3])  # prints first 3 items in list
print(letters[::2])  # prints every other item

# a better example of skips
numbers = list(range(20))
print(numbers)
print(numbers[::2])
print(numbers[::-1])  # prints all items in list in reverse order
