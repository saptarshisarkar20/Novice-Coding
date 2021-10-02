def sum_of_arr(n):
    arr=[]
    i=0
    sum=0
    while(n):
       inp=int(input()) 
       arr.append(inp)
       i=i+1
       n=n-1
    
    for a in arr:
        sum=sum+a
    print (sum)

inp=int(input())
sum_of_arr(inp)
