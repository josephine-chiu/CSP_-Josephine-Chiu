def user(word):
    answer = input(f"Tell me a {word}:\n")
    return answer

name = user("name")
verb = user("verb")
place = user("place")

print(f"{name} was {verb} and somehow got to {place}. \n")