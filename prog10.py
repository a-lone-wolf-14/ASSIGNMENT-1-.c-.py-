num=int(input("Enter the number: "))

num_list=[]
i=0
j=1
l=0
new_num=0

while num>0:
    rem=num%10
    num_list.append(rem)
    num=num//10
    i+=1

k=len(num_list)

while j<=len(num_list):
    new_num+=(10**(k-1))*(num_list[l])
    k-=1
    j+=1
    l+=1

print(f'Reversed number: {new_num}')