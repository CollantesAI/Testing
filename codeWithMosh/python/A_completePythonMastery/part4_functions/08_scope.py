message = "c"  # this is a global variable; avoid these if possible


def greet(name):
    message = "a"  # This only applies within the greet definition; LOCAL VARIABLE


def send_email(name):
    message = "b"  # independent from the one above; LOCAL VARIABLE


greet("John")
print(message)
