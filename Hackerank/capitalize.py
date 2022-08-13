import math
import os
import random
import re
import sys

def solve(s):
    for i in s.split():
        s = s.replace(i,i.capitalize())
    return s