# Petites fonctions pour manipuler des polynômes (avec coefficients en float).
# Attention: le Polynôme 3x^2 + 2x + 1 est codé comme [1,2,3]



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


def addition(a, b):
    m = max(len(a), len(b))
    s0 = [0 for k in range(m)]
    for k in range(m):
        if (k < len(a)):
            s0[k] += a[k]
        if (k < len(b)):
            s0[k] += b[k]
    return remove_zeros(s0)


def multiplication(a, b,p):
    prod = [0]*(len(a) + len(b) - 1)
    for k in range(len(a)):
        for l in range(len(b)):
            prod[k+l] += a[k]*b[l]
    return prod


def soustraction(a, b):
    return addition(a, multiplication(b, [-1]))


# Evaluation avec méthode de Horner
def pol_eval(pol, x):
    n = len(pol)-1
    value = pol[n]
    for k in range(n, 0, -1):
        value = value*x + pol[k-1]
    return value

def LaGrange(l1):
    lx = [0]
    for i in range(len(l1)):
        l = [l1[i][1]]
        for j in range(len(l1)):
            if j != i:
                l = multiplication(
                    l, [-l1[j][0] / (l1[i][0] - l1[j][0]), 1 / (l1[i][0] - l1[j][0])])
        lx = addition(lx, l)
    return lx





l1 = [[0, 1], [2, 5], [4, 12], [8, 15],[11,0],[12,1]]
p = 13
l2 = [[0,10],[1,0],[-2,3],[-5,0]]

#print(pol_eval(LaGrange(l1),13))
#print(pol_string(LaGrange(l3)))
#print("\n")

#print(pol_eval(LaGrange(l1),p))

