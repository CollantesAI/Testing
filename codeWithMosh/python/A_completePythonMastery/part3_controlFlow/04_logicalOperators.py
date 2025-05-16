# logical operators
# and
# or
# not

high_income = False
good_credit = True
student = False

if high_income and good_credit:
    print("Eligible\n")
else:
    print("Not eligible\n")

if high_income or good_credit:
    print("Eligible\n")
else:
    print("Not Eligible\n")

if not student:
    print("Eligible\n")
else:
    print("Not eligible\n")

if (high_income and good_credit) or not student:
    print("Eligible\n")
else:
    print("Not eligible\n")
