import random
import string
while(True):
    print("---------Welcome to the Password Creator----")
    print("1.Password containing alphabets(uppercase and lowercase included) only")
    print("2.A numeric pin")
    print("3.Password with alphabets,numbers and special characters")
    print("4.Password with alphabets and numbers only")
    print("5.Password with lowercase alphabers only")
    print("6.Password with uppercase alphabets only")
    print("7.Password with special characters only")
    print("8.Exit")
    c=int(input("Enter choice of password:"))
    print("Please note that the minimum password length is 8 characters")
    plen=int(input("Enter password length(Enter any length if exiting):"))
    if c==1:
        ca=string.ascii_letters
        p=''.join(random.choice(ca) for i in range(plen))
        print("Alphabet password with length",plen,"is:",p)
        ch=input("Press Enter")

    elif c==2:
        ca="1234567890"
        p=''.join(random.choice(ca) for i in range(plen))
        print("Numeric Pin of length ",plen,"is:",p)
        ch=input("Press Enter")
        

    elif c==3:
        ca=string.printable
        p=''.join(random.choice(ca) for i in range(plen))
        print("Password with alphabets,numbers and special characters of length",plen,"is:",p)
        ch=input("Press Enter")

    elif c==4:
        ca=string.digits+string.ascii_letters
        p=''.join(random.choice(ca) for i in range(plen))
        print("Password with alphanumeric characters of length",plen,"is:",p)   
        ch=input("Press Enter")

    elif c==5:
        ca=string.ascii_lowercase
        p=''.join(random.choice(ca) for i in range(plen))
        print("Password with lowercase characters only of length",plen,"is:",p)
        ch=input("Press Enter")

    elif c==6:
        ca=string.ascii_uppercase
        p=''.join(random.choice(ca) for i in range(plen))
        print("Password with uppercase characters only of length",plen,"is:",p)
        ch=input("Press Enter")
    elif c==7:
        ca=string.punctuation
        p=''.join(random.choice(ca) for i in range(plen))
        ch=input("Press Enter")
    elif c==8:
        print("Thank you for using this generator!")
        a=input("Press Enter to exit")
        exit()
    
    else:
        print("Incorrect option input please input one of the options from the menu.")
