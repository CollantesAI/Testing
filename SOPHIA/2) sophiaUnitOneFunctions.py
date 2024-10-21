print("I\'ve used the print function before.")

#first we define the function definition by using the reserved keyword “def” to define it
#then set up the function myFunction with three parameters firstName, middleInitial, and lastName.
#to end a function, we place a colon at the end

def myFunction(firstName, middleInitial, lastName):
    print(firstName, middleInitial, lastName)

myFunction("John", "E", "Bravo")

#len() function = length / number of characters in a string

myString = "Python is Fun!"
print(str(len(myString)) + " characters in myString")

#int() same as floor function in calculus

print(int(100))
print(int(2.95))
print(int("200"))

#float() creates a float number from an integer literal, float literal, or a string literal as long as the string represents a float or an integer.

print(float(100))
print(float(2.95))
print(float("200"))

#str() creates a string from various data types, including strings, integer literals, and float literals.

print(str(100))
print(str(2.95))
print(str("200"))

#There are over 40 different String Methods in Python! (https://www.w3schools.com/python/python_ref_string.asp)

