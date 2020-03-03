from binary_search import binary_search
if __name__ == "__main__":
    test_list = eval(input("Input your data list: "))
    target = float(input("Input your target: "))
    print("Index:", binary_search(test_list, target))