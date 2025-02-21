# Josephine Chiu, Financial Calculator Update for Python

# write a print statemnet telling the user what the program is (budget calculator)
print("Hello! This is your personal budget calculator! Please follow the instructions to learn more about your monthly finances.")

def user(type):
    question = "How much is your monthly " + type + "?\n"
    return input(question)

monthly_income = user("income")
print(user("income"))
print(user("rent"))
print(user("utilities"))
print(user("groceries"))
print(user("transportation"))

def percent(income, amount, type):
    percent_type = amount/income*100
    print(f"You spent ${amount:.2f} on {type} and that is {percent_type:.0f}% of your income")

income, rent, utilities, groceries, transportation = float(input(f"What is your monthly {type}?"))
percent(income, rent, "rent")
percent(income, utilities, "utilities")
percent(income, groceries, "groceries")
percent(income, transportation, "transportation")