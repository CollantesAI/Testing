temperature = 35
print(f"The temperature is: {temperature}")
if temperature > 30:
    print("It's warm")
    print("Drink water")
elif temperature > 20:  # must be placed before closing indent
    print("It's nice")
else:
    print("It's cold")
print("Done\n")  # indent here matters; this is the closing indent.

# changing temperature to 15
temperature = 15
print(f"The temperature is: {temperature}")
if temperature > 30:
    print("It's warm")
    print("Drink water")
elif temperature > 20:
    print("It's nice")
else:
    print("It's cold")
print("Done\n")
