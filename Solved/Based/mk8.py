l = input().split()
P=""
for i in l:
    c = chr(64*int(i[0])+8*int(i[1])+1*int(i[2]))
    P=P+c
print(P)