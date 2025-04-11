# Lists and arrays: 
# Create a program that prompts the user for a list of numbers and then sorts them in ascending order.

def get_user_input():
    """Get user's input"""
    while True:
        try:
            num_list = input("Please enter a list of numbers separated by spaces: ")
            num_list = [int(num) for num in num_list.split()]
            return num_list
        except ValueError:
            print("Invalid input. Please enter a list of numbers separated by spaces.")

def sort_numbers(num_list):
    """Sort the numbers in ascending order"""
    num_list.sort()
    return num_list

num_list = get_user_input()
print("Original list:")
print(num_list)
sorted_list = sort_numbers(num_list)
print("Sorted list:")
print(sorted_list)
