def fastpowmod(a,n,d):
    if n==0:
        return 1;
    if n==1:
        return a % d;
    if n%2==1:
        ret = fastpowmod(a,n//2,d)
        ret = ret * (ret % d)
        ret = a * (ret % d)
        return ret%d
    if n%2==0:
        ret = fastpowmod(a,n//2,d)
        ret = ret * (ret % d)
        return ret%d
    return -1

print(fastpowmod(69,37,77))
