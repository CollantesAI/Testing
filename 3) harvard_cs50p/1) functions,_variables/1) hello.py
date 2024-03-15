#Ask user for their name
print('hello, "friend"')
print("hello, \"friend\"")
#name = input("What's your name? ")

#remove whitespace from str
#name = name.strip()

#capitalize user's name
#name = name.capitalize()

#title case user's name
#name = name.title()

#remove whitespace from str and title case user's name
#name = name.strip().title()
name = input("What's your name? ").strip().title()

#split user's name into first name and last name
first, last = name.split(" ")

#Say hello to user
#end="\n"
#sep=' '
print("hello, " + name)
print("hello,", name)

print("hello, ", end="")
print(name)

print(f"hello, {name}")
print(f"hello, {first}")

#docs.python.org

#str() = string 