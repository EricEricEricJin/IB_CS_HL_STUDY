def binary_search(ordered_data, target):
    # ordered_data: ordered from small to big
    # return: the index of the target in the list
    low = 0

    high = len(ordered_data) - 1

    while high >= low:
        mid = int((low + high) / 2)
        if ordered_data[mid] == target:
            return mid
        elif ordered_data[mid] > target:
            high = mid - 1
        else:
            low = mid + 1
    return -1

    
