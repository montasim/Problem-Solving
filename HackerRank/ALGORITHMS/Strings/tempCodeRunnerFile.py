minimun = arr.remove(min(arr))
    maximum = arr.remove(max(arr))

    minimunSum = 0
    maximumSum = 0

    for i in range(0, len(minimun)):
        minimunSum = minimunSum + arr[i]

    for i in range(0, len(maximum)):
        maximumSum = maximumSum + arr[i]

    print(minimunSum)
    print(maximumSum)