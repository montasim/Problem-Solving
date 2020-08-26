str1 = input()
str2 = input()

res = "" 
for i in str1: 
    if i in str2 and not i in res: 
        res += i 
          

print ((len(str1) + len(str2)) - len(res)) 