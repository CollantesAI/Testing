x = float(input("What's x? "))
y = float(input("What's y? "))

#round(number[, ndigits])
z = round(x / y, 2)

print(z)

#rounding rule with f str approach
z = x / y

print(f"{z:.3f}")