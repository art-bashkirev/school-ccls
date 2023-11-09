def spec_sub(num):
    s = str(num)
    ab = int(s[0] + s[1])
    cd = int(s[2] + s[3])
    return ab - cd

a = []
for i in range(1000, 10000):
    if len(set(str(i))) == len(str(i)) and sum(list(map(int, str(i)))) == spec_sub(i):
        a.append(i)

print(a)
