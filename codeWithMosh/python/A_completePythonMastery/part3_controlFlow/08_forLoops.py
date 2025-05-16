# number is up to but not == to range starting from 0
for number in range(3):
    print("Attempt", number + 1, (number + 1) * ".")

# produces same output
for number in range(1, 4):
    print("Attempt", number, number * ".")

# steps by third number
for number in range(1, 10, 2):
    print("Attempt", number, number * ".")
