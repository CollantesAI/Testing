successful = False
for number in range(3):
    print("Attempt", number + 1, (number + 1) * ".")
    if successful:
        print("Successful")
        break
# This else will only execute if the for loop does not terminate early
else:
    print("Attempted 3 times and failed")
