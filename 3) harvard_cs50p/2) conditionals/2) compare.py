x = int(input("What's x? "))
y = int(input("What's y? "))

def main():
    if x < y:
        print("x is less than y")
    elif x > y:
        print("x is greater than y")
    # elif x == y:
    else:
        print("x is equal to y")

def alt():
    #if x < y or x > y:
        #print("x is not equal to y")
    #else:
        #print("x is equal to y")
    if x != y:
        print("x is not equal to y")
    else:
        print("x is equal to y")

main()
alt()