# File input/output: Create a program that reads data from a file and writes it to another file in a different format. 
# Reads data from a CSV file and writes it to a JSON file.

import csv
import json

def csv_to_json(csv_file, json_file):
    data = []
    with open(csv_file, 'r') as csv_f:
        reader = csv.DictReader(csv_f)
        for row in reader:
            data.append(row)

    with open(json_file, 'w') as json_f:
        json.dump(data, json_f, indent=4)

# Example usage
if __name__ == '__main__':
    csv_file = '8.csv'
    json_file = '8.json'
    csv_to_json(csv_file, json_file)
    print(f"Data converted from {csv_file} to {json_file}")