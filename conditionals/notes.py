# Josephine Chiu, Conditionals Notes for Python

print("hello, welcome to my program that will sort you into a category.\n")
name = input("What is your name?\n")

if name == "Vienna":
    print("You're the teacher.\n")
else:
    print("You are a student. Welcome to class.\n")
# 2 equal signs (==) will check to see if the content and data type is the same between the two items

num = 1
num = int(input("how many would you like: (give me a number above 0)\n"))

if num ==1: #always have colon at the end of conditional statements
    
    print("You have asked for an item.")
elif num <= 3:
    print("You have asked for a couple of the item.")
elif num <= 5:
    print("You have asked for a few of the item...or you're in the south and you asked for a couple.")
else:
    print("You have asked for some of the item.")

# 1st condition that is correct. 
# Top condition should be the least likely 
#start with an if end with an else. have as many elifs as you need. 

name = "Katie"

if "a" not in name or "e" in name or "i" in name or "o" in name or "u" in name:
    print("Your name has a vowel!")
else:
    print("Your name doesn't have a vowel.")

#Nested Conditional Statement: a lot of nested conditionals will become really confusing if many are used
num = 6

if num > 5 and num < 10:
    if num == 7:
        print(f"{num} is an unlucky number!")
    else:
        print(f"{num} is a large single digit number")
else:
    if num == 4:
        print(f"{num} is the best number!")
    else:
        print(f"That is {num}")