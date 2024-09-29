grade=int(input("Enter the numeric grade: "))

if grade>100 or grade==0:
    print(f'{grade} grade not supported')
elif grade>=90 and grade<=100:
    print('Alphabetical grade: O')
elif grade>=80 and grade<90:
    print('Alphabetical grade: A')
elif grade>=70 and grade<80:
    print('Alphabetical grade: B')
elif grade>=60 and grade<70:
    print('Alphabetical grade: C')
elif grade>=50 and grade<60:
    print('Alphabetical grade: D')
elif grade>=40 and grade<50:
    print('Alphabetical grade: E')
else:
    print('Alphabetical grade: F')