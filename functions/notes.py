# Josephine Chiu, Function Notes for Python

#function is an action stored in a key word

number = int(input("Can I get anumber\n"))

def add():
    numOne = int(input("Give me a number:\n"))
    numTwo = int(input("Give me a number:\n"))
    print(numOne+numTwo)
add() # if you put add() six times, 16 will print six times10
add()
add()

def add(numOne, numTwo): #parameters go in the parentheiss seperated by commas

    print(numOne+numTwo)

number = int(input("Can I get anumber\n"))
add(int(input("Tell me a number\n")), number) #arguments are given when the function is called AND must match the number of parameters

add(2,4)

add(7,21)

#strings
def user(word):
    return input(f"Tell me a {word}:\n")

name = user("name")
verb = user("verb")
place = user("place")

print(f"{name} was {verb} and somehow got to {place}. \n")