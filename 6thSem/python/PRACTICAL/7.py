#Classes and objects: Create a program that defines a class to represent a car and then creates an object of that class with specific attributes. 

class Car:
    def __init__(self, make, model, year, color, mileage):
        self.make = make
        self.model = model
        self.year = year
        self.color = color
        self.mileage = mileage
        
    def honk(self):
        print("Honk honk!")

    def drive(self, miles):
        self.mileage += miles
        print(f"Drove {miles} miles. Current mileage: {self.mileage} miles")

    def display_details(self):
        print("Make:", self.make)
        print("Model:", self.model)
        print("Year:", self.year)
        print("Color:", self.color)
        print("Mileage:", self.mileage)

# Create a Car object
my_car = Car("Toyota", "Corolla", 2015, "Silver", 50000)

# Display the car's details
print("Car Details:")
my_car.display_details()

# # Simulate the car's horn honking
print("\nHonking the horn...")
my_car.honk()

# # Simulate driving the car
print("\nDriving the car...")
my_car.drive(100)

# # Display the car's updated details
print("\nUpdated Car Details:")
my_car.display_details()