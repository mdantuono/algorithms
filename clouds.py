#!/bin/python3

import math
import os
import random
import re
import sys

class City:
    def __init__(self, location, population, clouds):
        self.location = location
        self.population = population
        self.clouds = clouds

# Complete the maximumPeople function below.
def maximumPeople(p, x, y, r):
    # Return the maximum number of people that will be in a sunny town after removing exactly one cloud.
    # initialize max pop variable and cities list
    maxPop = 0
    greatestPop = 0
    cities = list()
    citiesWithOneCloud = list()
    # return total population if theres only one cloud
    if m == 1:
        for i in p:
            maxPop += i
        return maxPop
    else:
        # loops through the cities
        for i in range(n - 1):
            newCity = City(x[i], p[i], 0)
            cities.append(newCity)
            # loops through the clouds
            for j in range(m - 1):
                # if cloud does touch a city, add to clouds value of city
                if cities[i].location = y[j] or cities[i].location = y[j] + r[j] or cities[i].location >= y[j] - r[j] and cities[i].location <= y[j]:
                    cities[i].clouds += 1
            if cities[i].clouds == 0:
                    maxPop += cities[i].population
        for city in cities:
            if city.clouds == 1:
                citiesWithOneCloud.append(city)
        for city in citiesWithOneCloud:
            if city.population > greatestPop:
                greatestPop = city.population
        maxPop += greatestPop
        return maxPop


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = list(map(int, input().rstrip().split()))

    x = list(map(int, input().rstrip().split()))

    m = int(input())

    y = list(map(int, input().rstrip().split()))

    r = list(map(int, input().rstrip().split()))

    result = maximumPeople(p, x, y, r)

    fptr.write(str(result) + '\n')

    fptr.close()
