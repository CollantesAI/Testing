def save_user(**user):  # allow us to pass multiple key value pairs
    print(user)
    print(user["id"])
    print(user["name"])


save_user(id=1, name="John", age=22)  # outputs dictionary
