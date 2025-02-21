def percent(income, amount, type):
    percent_type = float(input(amount/income*100))
    print(f"You spent ${amount:.2f} on {type} and that is {percent_type:.0f}% of your income")

income = user("income")
rent = user("rent")
utilities = user("utilities")
groceries = user("groceries")
transportation = user("transportation")