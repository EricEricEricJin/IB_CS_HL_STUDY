# Assume that no two players have same age.

age_list = []
name_list = []

for i in range(5):
    name = input("Player " + str(i + 1) + ", please input your name: ")
    while True:
        try:
            age = int(input("Player " + str(i + 1) + ", please input your age: "))
            if age < 0:
                raise(Exception)
            else:
                break
        except:
            print("Your input age is invalid.")

    age_list.append(age)
    name_list.append(name)

age_max = age_list[0]
age_min = age_list[0]

name_max = name_list[0]
name_min = name_list[0]

for i in range(1, 5):
    if age_list[i] > age_max:
        age_max = age_list[i]
        name_max = name_list[i]
    elif age_list[i] < age_min:
        age_min = age_list[i]
        name_min = name_list[i]

print(name_max, "is the oldest in the group, age", age_max)
print(name_min, "is the youngest in the group, age", age_min)