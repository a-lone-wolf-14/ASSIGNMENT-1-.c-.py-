g1=int(input("Enter the number of people of age below 12 (12 excluded): "))
g2=int(input("Enter the number of people of age below 18 and above 12 (12 included but 18 excluded): "))
g3=int(input("Enter the number of people of age below 60 and above 18 (18 included but 60 excluded): "))
g4=int(input("Enter the number of people of age above 60 (60 included): "))

amt_g1=g1*5
amt_g2=g2*10
amt_g3=g3*20
amt_g4=g4*15

t_amt=amt_g1+amt_g2+amt_g3+amt_g4

print(f'Total Amount: {t_amt}')