x = input("x:")  # returns a string
# y = x + 1 will return an error due to x being a string and 1 being an integer

# int(x)
# float(x)
# bool(x)
# str(x)

print(type(x))  # returns objects type
y = int(x) + 1
print(f"x: {x}, y: {y}")

# Falsy values:
# "" empty strings
# 0
# None
print(bool("False"))  # prints True due to not being an empty string
