p=int(input("Enter the Principal Amount: "))
r=int(input("Enter the Rate of Interest (per annum): "))
t=int(input("Enter the Interest Time (in years): "))

si=(p*r*t)/100

print(f'Simple Interest: {si}')
print(f'Final Amount: {si+p}')