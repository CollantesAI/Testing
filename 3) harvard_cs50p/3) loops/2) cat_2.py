# for acts as a list. here it updates i as 0, then 1, and then 2. So on and so forth.
#for i in [0, 1, 2]
def first():
    for i in range(3):
        print("meow")

# can supplement i for _ if variable not necessary to track
def second():
    for _ in range(3):
        print("woof")

def third():
    print("sup\n" * 3, end="") # end="" eliminates blank line at the end.

def fourth():
    while True:
        n = int(input("What's n? "))
        if n > 0:
            break
    for _ in range(n):
        print("quack")

def fifth():
    def main():
        number = get_number()
        rawr(number)
    
    def get_number():
        while True:
            n = int(input("What's n? "))
            if n > 0:
                break
        return n

    def rawr(n):
        for _ in range(n):
            print("rawr")
    
    main()
    
first()
second()
third()
fourth()
fifth()