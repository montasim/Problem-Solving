# !/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    positive = 0
    negative = 0
    zero = 0
    for i in arr:
        if i > 0:
            positive += 1
    print('%.6f' %float(positive / n))

    for i in arr:
        if i < 0:
            negative += 1
    print('%.6f' %float(negative / n))

    for i in arr:
        if i == 0:
            zero += 1
    print('%.6f' %float(zero / n))


if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
