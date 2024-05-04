if __name__ == '__main__':
    
 arr=[]
 arr_all=[]
 n=int(input())
 for _ in range(n):
    order,*numbers=input().split()
    if order=="insert":
        arr.insert(int(numbers[0]),int(numbers[1]))
    elif order=="remove":
        arr.remove(int(numbers[0]))
    elif order=="append":
        arr.append(int(numbers[0]))
    elif order=="sort":
        arr.sort()
    elif order=="pop":
        arr.pop()
    elif order=="reverse":
        arr.reverse()
    elif order=="print":
        
        arr_all.append(arr.copy())
 for my_list in arr_all:
        print(my_list)
        
    
