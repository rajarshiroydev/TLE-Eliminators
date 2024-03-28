import math

n = int(input())
while n > 0:
    s = input()
    original = s
    if(len(s) <= 3):
        print("NO")
    else:
        temp = s[0]
        s[0] = s[1]
        s[1] = temp

        temp = s[-1]
        s[-1] = s[-2]
        s[-2] = temp

        if(original == s):
            print("NO")
        else:
            rev = s[::-1]
            if(s == rev):
                print("YES")
            else:
                print("NO")
    n -= 1
