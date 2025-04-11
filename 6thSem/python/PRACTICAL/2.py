#Program prompting the user for their age and tells if they can vote in the next election.

def get_user_age():
    """Get user's age"""
    while True:
        try:
            age = int(input("Please enter your age: "))
            return age
        except ValueError:
            print("Invalid input. Please enter a valid age.")

def check_voting_eligibility(age):
    """Check if the user is eligible to vote"""
    if age >= 18:
        print("You are eligible to vote in the next election.")
    else:
        print(f"You are not eligible to vote in the next election. You need to be at least 18 years old. You have {18 - age} years to go.")

age = get_user_age()
check_voting_eligibility(age)

