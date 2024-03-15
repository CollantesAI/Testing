#def(), define, create, invent your own functions
def main():
    name = input("What's your name? ")
    hello(name)

def hello(to="world"):
    print("hello,", to)

hello()
main()