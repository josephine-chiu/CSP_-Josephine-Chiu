# Josephine Chiu, Old Enough Practice for Python

print("Hello! Welcome to my program that will sort you into a category based on your age!\n")

age = int(input("How old are you?\n")) 
age = 16 #you need to assign "age" or other variables so the program knows what's the limit. also, the program doesn't run if you don't assign the varaible...so yeah

if age >=14:
    print("Unfortunately, you can't vote, you can't drive, and you can't get a learners permit. HOWEVER, you can go to school though, so you know, yay.\n")

elif age ==15:
    print("You're special!! You can't vote, but you can drive if you get a learners permit which you're old enough to get. Also, you can go to school so you know, yay.\n")

elif age ==16:
    print("You are not old enough to vote, you are old enough to drive, you are old enough to get a learners permit, and you are old enough to go to school.\n")

else:
    print("You are FINALLY old enough to vote, you are old enough to drive, you are old enough to get a learners permit, and you are old enough to go to school! Hooray!\n")
