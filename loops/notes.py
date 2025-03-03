# Josephine Chiu, Loops Notes for Python

# 1. What is a loop? 
    # A section of code that is going to repeat

# 2. What are the two types of loops?
    # While loop
x = 0
while x < 10:
    print("Hello", x)
    x +=1
    # for Loop
nums = [3,5,7,2,8]
for nums in nums:
    print(nums)

# 3. What is iteration
    # When we repeatedly do something 

# 4. What are lists?
    # A bunch of values in the same variable
siblings = ["Alex", "Katie", "Andrew", "Vienna", "Tori", "Treyson", "Jeff", "Hailey"] #use brackets for lists & strings must have quotation marks & each value is seperated by a comma
# print one item from the list
print(siblings[3])
# change an item in a list
siblings[7] = "Jake"
print(siblings)
#remove an item from the list
siblings.pop(5)
# proper 
print(siblings)

# 5. How do you make lists in python? (always have the variable as plural cuz they're lists)
    #use brackets for lists & strings must have quotation marks 
    # each value is seperated by a comma

# 6. How do you make for loops in python?
    #  proper list printing for a loop 
for sibling in siblings:
    print(f"{nums}. {sibling}, Larose")
    nums+=1
# use range instead of list
for nums in range(1, 11, 2): #start is 1, stop is 11, and it's counting by 2!!
    print(nums)

# 7. How do you make while loops in python 
    # #start is 1, stop is 21, and it's counting by 1!!
import random

num = 1
rand = random.randint(1, 20) 
while num < 21:
    if num == rand:
        print(f"Goose!")
        break #tells the loop to be done
    else:
        print("Duck")
    num += 1

# continue tells the loop to stop that iteraiton and start again