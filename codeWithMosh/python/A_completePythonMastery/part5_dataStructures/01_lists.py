letters = ["a", "b", "c"]
matrix = [[0, 1], [2, 3]]
# instead of:
# zeros = [0, 0, 0, 0, 0, 0 ..., 0]
zeros = [0] * 5
combined = zeros + letters
print(zeros)
print(matrix)
print(matrix[0])
print(combined)
numbers = list(range(20))
chars = list("Hello World")
print(numbers)
print(chars)
print(len(chars))
