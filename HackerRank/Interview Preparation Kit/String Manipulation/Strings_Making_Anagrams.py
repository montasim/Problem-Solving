str1 = "fcrxzwscanmligyxyvym"
str2 = "jxwtrhvujlmrpdoqbisbwhmgpmeoke"

res = "" 
for i in str1: 
    if i in str2 and not i in res: 
        res += i 

str1 = str1.replace(res, "")
str2 = str2.replace(res, "")

print(len(str1) + len(str2))
