#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    # Write your code here
    pass

if __name__ == '__main__':
    n = int(input().strip())
    array = list(map(int, input().strip().split(' ')))
    frequency = [0] * 100
    max_value = 0
    for number in array:
        frequency[number] += 1
    for i in range(1, 100):
        max_value = max(max_value, frequency[i] + frequency[i - 1])
    print(max_value)
