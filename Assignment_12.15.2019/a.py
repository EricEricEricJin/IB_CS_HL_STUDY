import random

# DECLEAR die: INT, no args  return the number of the die
def die():
    return 1 + int(random.random() * 6)

# DECLEAR coin: BOOL, no args  True means Head and False means tails
def coin():
    if random.random() < 0.5:
        return True
    else:
        return False

if __name__ == "__main__":
    # DECLEAR p1_name: STRING  player 1's name
    p1_name = str(input("Player 1, please input your name\n"))
    # DECLEAR p2_name: STRING  player 2's name
    p2_name = str(input("Player 2, please input your name\n"))
    
    # DECLEAR p1_value: undefined type  player 2's value
    p1_value = die()
    # DECLEAR p2_value: undefined type  player 1's value
    p2_value = die()

    if p1_value > p2_value:
        print(p1_name, " wins with a value of ", p1_value)
        exit()
    elif p2_value > p1_value:
        print(p2_name, " wins with a value of ", p2_value)
        exit()
    
    p1_value = coin()
    p2_value = coin()

    if p1_value != p2_value:
        if p1_value == True:
            print(p1_name + " wins by flipping a coin to Heads.")
        else:
            print(p2_name + " wins by flipping a coin to Heads.")
        exit()

    p1_value = die()
    p2_value = die()

    if p2_value % 2 != p1_value % 2:
        if p1_value % 2 == 1:
            print(p1_name + " wins by rolling an odd number.")
        else:
            print(p2_name + " wins by rolling an odd number.")
        exit()

    while True:
        try:
            p1_value = int(input(p1_name + ", please input your age.\n"))
            if p1_value >= 0:
                break 
            print("Sorry, this is not a valid age!")
        except Exception:
            print("Sorry, this is not a number!")

    while True:
        try:
            p2_value = int(input(p2_name + ", please input your age.\n"))
            if p2_value >= 0:
                break 
            print("Sorry, this is not a valid age!")
        except Exception:
            print("Sorry, this is not a number!")
   
    if p1_value > p2_value:
        print(p1_name, " is ", p1_value, " years old and therefor wins this game.")
    elif p2_value > p1_value:
        print(p2_name, " is ", p2_value, " years old and therefor wins this game.")
    else:
        print("SORRY! NO WINNER.")