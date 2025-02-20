# Josephine Chiu, Financial Calculator Update for Python

def info(income, amount, type):
    percent_type = amount/income*100
    print(f"You spent ${amount:.2f} on {type} and that is {percent_type:.0f}% of your income")


# write a print statemnet telling the user what the program is (budget calculator)
print("Hello! This is your personal budget calculator! Please follow the instructions to learn more abou t our monthly finaces.")

# ask for monthly income (user input)
income = float(input("What is your monthly income?\n"))

# ask for rent amount (user input)
rent = float(input("How much does your rent cost?\n"))

# ask for utilities (water, electricity) (user input)
utilities = float(input("How much do your monthly utilities cost?\n"))

# ask for groceries (user input)
groceries = float(input("How much do your monthly groceries cost?\n"))

# ask for transportation (car payment, bus pass) (user input)
transportation = float(input("How much is your monthly transportation?\n"))

# Calculate savings as 10% of income (variable)
savings = income*0.1

# Calculate spending money income - (rent + utilities + groceries + transportation) -> variable
spending = (rent+utilities+groceries+transportation+savings)

info(income, rent, "rent")