char=input("Enter the character: ")

char_str=[]
for i in char:
    char_str.append(i)

if len(char_str)>1:
    print(f'{char} is not supported')
elif char_str[0] in 'aeiou':
    print(f'{char} is a vowel')
else:
    print(f'{char} is a consonant')