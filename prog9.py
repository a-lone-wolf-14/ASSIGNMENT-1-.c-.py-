num=int(input("Enter the number: "))
sum=0

while num>0:
    rem=num%10
    sum+=rem
    num=num//10

print(f'Sum: {sum}')