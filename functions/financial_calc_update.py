# Josephine Chiu, Financial Calculator Update for Python

# Josephine Chiu, Financial Calculator Update for Python
print("Hello! This is your personal budget calculator! Please follow the instructions to learn more about your monthly finances.")

def user(type):
    question = "How much is your monthly " + type + "?\n"
    return float(input(question))

income = user("income")
rent = user("rent")
utilities = user("utilities")
groceries = user("groceries")
transportation = user("transportation")

savings = income*0.1
spending = rent+utilities+groceries+transportation

def percent(income, amount, type):
    percent_type = float(amount/income*100)
    print(f"You spent ${amount:.2f} on {type} and that is {percent_type:.0f}% of your income")

percent(income, rent, "rent")
percent(income, utilities, "utilities")
percent(income, groceries, "groceries")
percent(income, transportation, "transportation")
percent(income, spending, "spending")

print(f"You saved ${savings:.2f} and that is 10% of your income")