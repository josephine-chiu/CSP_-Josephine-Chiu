# Josephine Chiu, Financial Calculator for Python

# write a print statemnet telling the user what the program is (budget calculator)
print("Hello! This is your personal budget calculator! ")

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
spending = rent+utilities+groceries+transportation

# Calculate percent of rent (rent/income) variable 
percent_rent = rent/income*100

# Calculate percent of utilities (utilities/income) variable
percent_utilities = utilities/income*100

# Calculate percent of groceries (groceries/income) variable
percent_groceries = groceries/income*100 

# Calculate percent of transportation (transportation/income) variable
percent_transportation = transportation/income*100

# Calculate percent of spending (spending/income) variable
percent_spending = spending/income*100

# tell user category spending amount AND percent for rent ("You spend $XX.XX on rent and that is XX% of your income")
print("You spent", (f"{rent:.2f}") , "dollars on rent and that is", (f"{percent_rent:.1f}"), "percent of your income.")

# tell user category spending amount AND percent for utilities ("You spend $XX.XX on utilities and that is XX% of your income")
print("You spent", (f"{utilities:.2f}") , "dollars on utilities and that is", (f"{percent_utilities:.1f}"), "percent of your income.")

# tell user category spending amount AND percent for groceries ("You spend $XX.XX on groceries and that is XX% of your income")
print("You spent", (f"{groceries:.2f}") , "dollars on groceries and that is", (f"{percent_groceries:.1f}"), "percent of your income.")

# tell user category spending amount AND percent for transportation ("You spend $XX.XX on transportation and that is XX% of your income")
print("You spent", (f"{transportation:.2f}") , "dollars on transportation and that is", (f"{percent_transportation:.1f}"), "percent of your income.")

# tell user category spending amount AND percent for spending ("You spend $XX.XX on spending and that is XX% of your income")
print("You spent", (f"{spending:.2f}") , "dollars and that is", (f"{percent_spending:.1f}"), "percent of your income.")

# tell user category savings amount AND percent for savings ("You spend $XX.XX on rent and that is 10% of your income")
print("You saved", (f"{savings:.2f}") , "dollars and that is 10 percent of your income.")