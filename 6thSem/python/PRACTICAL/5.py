# prompt the user to input a string and then print out the reversed string, concatenate and length
def reverse_string(input_str):
    print("",end='')
    return input_str[::-1]

def concatenate_string(str1, str2):
    result = ""
    for char in str1:
        result += char
    for char in str2:
        result += char
    return result

def find_length(input_str):
    length = 0
    for char in input_str:
        length += 1
    return length


# Prompt the user for a string
user_str = input("Please enter a string: ")

# Reverse the string
reversed_str = reverse_string(user_str)
print("Reversed string:", reversed_str)

#concatenate the string
concat_str = concatenate_string(user_str, reversed_str)
print("Concatenated string:", concat_str)
#length the string
str_length = find_length(user_str)
# Print the reversed string
print("Length of the string:", str_length)


