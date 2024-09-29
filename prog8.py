num=int(input("Enter the number: "))

flag=0
for i in range (2,num):
    if num%i==0:
        print(f'{num} is not a prime number')
        break
    else:
        flag=1

if flag==1:
    print("{num} is a prime number")