# Calculate the factorial of a number entered by the user using a loop
def get_user_input():
    """Get user's input"""
    while True:
        try:
            num = int(input("Please enter a non-negative integer: "))
            if num < 0:
                print("Invalid input. Please enter a non-negative integer.")
            else:
                return num
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

def calculate_factorial(num):
    """Calculate the factorial of a number using a loop"""
    factorial = 1
    for i in range(1, num + 1):
        factorial *= i
    return factorial


num = get_user_input()
factorial = calculate_factorial(num)    
print(f"The factorial of {num} is {factorial}.")
