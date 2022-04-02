# TODO: Make changes and add necessary functions for fast computation.
# Avoid for loops
# Check if Numpy can be used: yes importing libraries is allowed. This changes everything.

def solve():
    x = input().split()
    return x

if __name__ == '__main__':
    T = int(input())
    for caseIndex in range(1, T + 1):
        print(f'Case #{caseIndex}: {solve()}')
        #print ('Case #{}: {}'.format(caseIndex, solve()))
