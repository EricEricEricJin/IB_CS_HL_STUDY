from random import randint

if __name__ == "__main__":
    die_1_nums = []
    die_2_nums = []
    name_list = []

    for i in range(3):
        die_1_nums.append(randint(1, 6))
        die_2_nums.append(randint(1, 6))
        name_list.append(input("player " + str(i + 1) + ", please input your name: "))

    num_max = die_1_nums[0]
    name_max = name_list[0]
    tie = False

    for i in range(1, 3):
        if die_1_nums[i] > num_max:
            num_max = die_1_nums[i]
            name_max = name_list[i]
            tie = False
        elif die_1_nums[i] == num_max:
            tie = True
    
    if tie:
        die_sum_nums = [die_1_nums[i] + die_2_nums[i] for i in range(3)]
        num_max = die_sum_nums[0]
        name_max = name_list[0]
        tie = False

        for i in range(1, 3):
            if die_sum_nums[i] > num_max:
                num_max = die_sum_nums[i]
                name_max = name_list[i]
                tie = False
            elif die_sum_nums[i] == num_max:
                tie = True

        if tie:
            for i in range(3):
                if (die_1_nums[i] == die_2_nums[i]):
                    print(name_list[i], "win.")
                    break
            else:
                print("no winner.")
        else:
            print(name_max, "win.")
    else:
        print(name_max, "win.")