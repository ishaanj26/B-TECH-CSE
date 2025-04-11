# Regular expressions: Create a program that uses regular expressions to find all instances of a specific pattern in a text file. 

import re

def find_pattern(file_path, pattern):
    try:
        with open(file_path, 'r') as file:
            text = file.read()
            matches = re.findall(pattern, text)
            return matches
    except FileNotFoundError:
        print(f"File not found: {file_path}")
        return []


file_path = ("9.txt")
pattern = input("Enter the regular expression pattern to search for: ")
matches = find_pattern(file_path, pattern)

if matches:
    print(f"Found {len(matches)} instances of the pattern:")
    for i, match in enumerate(matches):
        print(f"{i+1}. {match}")
else:
    print("No instances of the pattern found.")


