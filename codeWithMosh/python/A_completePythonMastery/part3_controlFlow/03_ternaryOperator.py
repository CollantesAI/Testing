age = 22

print(f"Age: {age}")
if age >= 22:
    print("Eligible")
else:
    print("Not eligible")

# equivalent condensed code
message = "Eligible" if age >= 18 else "Not eligible"
print(message)
