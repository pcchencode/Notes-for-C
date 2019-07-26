# Binary Search, this is a simple test
import numpy as np

def BinarySearch(a):
    sortdata = np.sort(a)
    low = 0 
    high = len(sortdata) - 1 # 因為python向量初始值的index=0，所以high要用向量長度扣掉1。
    find = 0
    
    while low <= high:
        middle = int((low+high)/2)
        if search < sortdata[middle]:
            high = middle - 1 
        elif search > sortdata[middle]:
            low = middle + 1
        elif search == sortdata[middle]:
            find = 1
            break
            
    return find


data = [43,5,1,2,54,6,7,4,82]
search = int(input("Please enter your searching number: ")) # it will wait for users' inputs :)
# python 的 input 會把輸入用成string，所以要轉換成numeric
#search = 82
#BinarySearch(data)

if BinarySearch(data) == 0:
    print("cant find it :(")
    
elif BinarySearch(data) == 1 :
    print("find it:)")

    
    

