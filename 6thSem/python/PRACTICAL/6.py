# Functions: Calculate the area of a circle based on the radius entered by the user.
def calculate_area(radius):
    area = 3.14159 * (radius ** 2)
    return area
    

radius=int(input("Enter the radius: "))
area = calculate_area(radius)
print("The area of the circle with radius", radius, "is", area)
