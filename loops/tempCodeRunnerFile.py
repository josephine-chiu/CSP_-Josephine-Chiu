import random

num = 1
rand = random.randint(1, 20) 
while num < 21:
    if num == rand:
        print(f"Goose!")
        break #tells the loop to be done
    else:
        print("Duck")
    print(num)