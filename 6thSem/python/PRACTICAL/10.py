# Exception handling: Create a program that prompts the user for two numbers and then divides them, 
# handling any exceptions that may arise. 
def get_number(prompt):
    while True:
        try:
            return float(input(prompt))
        except ValueError:
            print("Invalid input. Please enter a number.")

def divide_numbers(num1, num2):
    try:
        return num1 / num2
    except ZeroDivisionError:
        print("Error: Cannot divide by zero.")
        return None

print("Enter two numbers for division")
num1 = get_number("Enter the first number: ")
num2 = get_number("Enter the second number: ")
result = divide_numbers(num1, num2)

if result is not None:
    print(f"{num1} / {num2} = {result:.2f}")

