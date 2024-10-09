pizzaSlices = 20
print("Initial Pizza Slices:" + str(pizzaSlices))
remainingSlices = (pizzaSlices - 2) / 2
print("Remaining Slices:" + str(remainingSlices))


investment = 300
print("Initial Investment:" + str(investment))
money = ((investment - (investment / 3)) - 50) * 5
print("Return Total:" + str(money))
profit = money - investment
print("Profit:" + str(profit))

print("\"It\'s time to smash\"")
print("First Line.\nSecond Line.\nThird Line.")

#Assigning Multiple Variables
myString1, myString2, myString3 = "Python", "is", "fun"
print(myString1)
print(myString2)
print(myString3)

myString1 = myString2 = myString3 = "We\'re the same"
print(myString1)
print(myString2)
print(myString3)

#adding a space when concatenating code
myVar1 = "learning"
myVar2 = "python"
print(myVar1 + " " + myVar2)

myVar1 = 111
myVar2 = 222
print(myVar1 + myVar2)
print(str(myVar1) + str(myVar2))

# The * operator
myString = "python is great"
result = myString * 5
print(result)

# incorporating the new line \n operator
myString = "python is great\n"
result = myString * 5
print(result)

# Using the 'in' operator
stringToFind = "some"
sentence = "Python is quite a fun language to learn. There can be some great\nstring functions to use."
result = stringToFind in sentence
print(result)

# using triple quotes """ to span over multiple lines
print("""This is a long line of text, so it\'s nice to see that i don\'t
      have to add \\n to make new lines and break the my text sting when
      typing in python.""")

# We are importing a module that we need to be able to generate random numbers
import random
# We are creating a random even number between 2 ans 10 by
# first randomizing an integer between 1 and 5. This will be our
# final number. The number to add will take this final number and
# multiply it by 2
randomFinalNumber = random.randrange(1, 5)
numberToAdd = randomFinalNumber * 2
# Asking the user to enter their name
name = input("Hello! What is your name?")
print("Welcome " + name + ", I\'m going to perform some mind-reading on you.")
print("First, think of a number between 1 and 10.")
enteredNumber = int(input("Enter in a number between 1 and 10."))
print("Multiply your number by 2.")
userNumber = enteredNumber * 2
print (">> userNumber at this step = " + str(userNumber))
answer = input("Ready for the next step?")
print("Now, add...let\'s see...")
print(numberToAdd)
userNumber = userNumber + numberToAdd
print(">> userNumber at this step =" + str(userNumber))
answer = input("Ready for the next step?")
print("Now, divide the number you have by 2.")
answer = input("Ready for the next step?")
userNumber = userNumber / 2
print(">> userNumber at this step =" + str(userNumber))
print("Now, subtract the original number that you started with.")
answer = input("Ready for the last step?")
userNumber = userNumber - enteredNumber
# Guessing the number
print("Well " + name + ", let me read your mind...The number that you have right now is a....")
print(userNumber)

