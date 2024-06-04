import random

target=random.randint(1,100)
while True:
    userChoice=input("Guess the target or Quit:")
    if(userChoice=="Quit"):
        break
    
    userChoice=int(userChoice)
    if(userChoice==target):
        print("Success: Correct Guess!!")
        break
    elif(userChoice<target):
        print("Your number is too small.Take a bigger Guess.....")
    else:
        print("Your number is too big. Take a smaller Guess.....")


print("______________Game Over_______________")