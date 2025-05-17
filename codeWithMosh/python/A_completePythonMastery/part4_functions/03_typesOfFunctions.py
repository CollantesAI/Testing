# two types of functions
# 1- Perform a task
def greet(name):
    print(f"Hi {name}")


# 2- Return a value
round(1.9)

# How to make greet() function return value instead of printing on terminal


def get_greeting(name):
    return f"Hi {name}"


message = get_greeting("randomName")  # now we can use for more than printing
print(message)
file = open("content.txt", "w")
file.write(message)
