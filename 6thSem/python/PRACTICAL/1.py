# Create a program that prompts the user for their name and age and prints a personalized message. 
def get_user_info():
    name = input("Please enter your name: ")
    age = int(input("Please enter your age: "))
    return name, age

def print_personalized_message(name, age):
    """Print a personalized message"""
    if age < 18:
        message = f"Hello {name}, you are still young and have a bright future ahead!"
    elif age < 65:
        message = f"Hello {name}, you are in the prime of your life!"
    else:
        message = f"Hello {name}, you have gained a lot of experience and wisdom over the years!"
    print(message)

name, age = get_user_info()
print_personalized_message(name, age)