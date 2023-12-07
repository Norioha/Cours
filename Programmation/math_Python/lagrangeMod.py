
def remove_zeros(p):
    m = len(p)
    n = 1
    while n <= m and p[-n] == 0:
        n += 1
    return p[:m-n+1]


def pol_string(p):
    s = ''
    for l, k in enumerate(p):
        if k != 0:
            if k < 0:
                s += ' '
            elif l > 0 and k > 0:
                s += ' + '
            if l == 0:
                s += str(k)
            else:
                if k != 1:
                    s += str(k)+'*'
                if l == 1:
                    s += 'x '
                if l > 1:
                    s += 'x^' + str(l)
    return s


def bachetBe(n, m):
    t = []

    l1 = [n, 0, 1, 0]  # r, q, x, y
    t.append(l1)

    l2 = [m, 0, 0, 1]
    t.append(l2)

    while t[-1][0] != 0:
        r = t[-2][0] % t[-1][0] # calcul du reste
        q = t[-2][0] // t[-1][0] # quotien
        x = t[-2][2] - q * t[-1][2]
        y = t[-2][3] - q * t[-1][3]
        l = [r, q, x, y]
        t.append(l)

    q = t[-2][1]
    x = t[- 2][2]
    y = t[- 2][3]
    r = t[- 2][0]
    return q, x, y, r


def inverse_modulaire(a, m):
    q, x, y, pgcd = bachetBe(a, m)
    if pgcd != 1:
        return False
    inverse = x % m  # Assure que l'inverse est positif
    return inverse

def addition(a,b,p):
    m = max(len(a),len(b))
    s0 = [0 for k in range(m)]
    for k in range(m):
        if (k<len(a)):
            s0[k] += (a[k])%p
        if (k<len(b)):
            s0[k] += (b[k])%p
    for k in range (len(s0)):
        s0[k] = s0[k] %p
    return remove_zeros(s0)

def multiplication(a,b,p): 
    prod = [0]*((len(a) + len(b) -1)%p)
    for k in range(len(a)):
       for l in range(len(b)):
            prod[k+l] +=  (a[k]*b[l])%p 
    return prod
   

def lagrange_mod(pts,p):
    L=[0]
    for j,pt0 in enumerate(pts):
        li= [1]
        for k,pt in enumerate(pts):
            if k!=j :
                quo = (inverse_modulaire(pt0[0]-pt[0],p))
                if quo==0 :
                    raise TypeError("Deux points avec les memes coordonnées")
                else:
                    fac1 = [((-1)*pt[0]*quo)%p , (1*quo)%p ]
                    li = multiplication(li, fac1,p)
        li = multiplication([pt0[1]],li,p)
        L= addition(li,L,p)
    return L
    





