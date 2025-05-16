course = "     PyThOn PrOgRaMmInG"
print(course.upper())  # upper-case
print(course.lower())  # lower-case
print(course.title())  # title-case
# trims white space at beginning and end; lstrip / rstrip (strip space to the left / strip space to the right)
print(course.strip())
print(course)
print(course.find("PrO"))  # prints index
print(course.replace("P", "X"))
print("PrO" in course)
print("Java" not in course)
