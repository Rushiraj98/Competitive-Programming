def solve():
    x,y = input().split()
    factors=[]

    for i in range(y):
        if y%i==0:
            factors.append(i)
    
    






    return x

if __name__ == '__main__':
    T = int(input())
    for caseIndex in range(T):
        print(solve())