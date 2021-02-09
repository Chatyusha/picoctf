def ex_euclid(x, y):
    c0, c1 = x, y
    a0, a1 = 1, 0
    b0, b1 = 0, 1

    while c1 != 0:
        m = c0 % c1
        q = c0 // c1

        c0, c1 = c1, m
        a0, a1 = a1, (a0 - q * a1)
        b0, b1 = b1, (b0 - q * b1)

    return c0, a0, b0

def pq_n(p,q):
    return p*q

def np_p(q,n):
    return n // q

def pq_phy(p,q):
    return (p-1) * (q-1)

def pqe_d(q,p,e):
    return ex_euclid(pq_phy(p,q),e)

def men_c(m,e,n):
    return m ** e % n

def pcen_m(p,c,e,n):
    q = n // p
    d = pqe_d(p,q,e)[2]
    type(d)
    return (c ** d) % n

