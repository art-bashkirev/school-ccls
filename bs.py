## 1
x = (3*(289**2024)) + (81*(49**121)) - (9 * (16 ** 81)) - 6011
n=[]
while x > 0:
    n.append(x % 31)
    x //= 31
n = [i if i <= 17 else 0 for i in n]
print(sum(n))
 
## 10
x = 3*3125**8 + 2*625**7 - 4*625**6 + 3*125**5 - 5*25**4 - 2025
n=[]
while x > 0:
    n = [x % 25] + n
    x //= 25
print(n.count(0))
print(n)
 
## 5
x = 5001
while True:
    p = 7**100 - x
    n = []
    while p > 0:
        n = [p % 7] + n
        p //= 7
    if n.count(0) == 5:
        print(x)
        break
    x += 1
## 6
for x in range(2030, 0, -1):
    p = 7**91 + 7**160 - x
    n = []
    while p > 0:
        n = [p % 7] + n
        p //= 7
    if n.count(0) == 70:
        print(x)
        break
## 7
for x in range(1, 2031):
    p = 6**260 + 6**160 + 6**60 - x
    n = []
    while p > 0:
        n = [p % 6] + n
        p //= 6
    if n.count(0) == 202:
        print(x)
        break