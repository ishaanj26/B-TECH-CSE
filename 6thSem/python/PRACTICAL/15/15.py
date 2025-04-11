# Networking: Create a program that uses a networking library to communicate with a server and retrieve data from it. 

import requests

class NetworkingClient:
    def __init__(self, url):
        self.url = url

    def get_data(self):
        try:
            response = requests.get(self.url)
            response.raise_for_status()  # Raise an exception for bad status codes
            return response.text
        except requests.exceptions.RequestException as e:
            print(f"Error: {e}")
            return None


url = "http://localhost:8000/" 
client = NetworkingClient(url)
data = client.get_data()
if data:
    print("Received data:")
    print(data)
else:
    print("Error in fetching the data")