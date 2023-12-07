import lagrangeMod

# Série 8
# Ex1


def ExponentiaionRapide(a, x, n):
    r = 1
    b = a % n
    e = x
    while (e > 0):
        if e % 2 == 1:
            r = (r * b) % n
        b = (b*b) % n
        e = e // 2
    return r


# Ex2
# Cela est dû au petit théorème de Fermat, qui stipule que si p est un nombre premier et a est un entier non divisible par p, alors a^(p-1) ≡ 1 (mod p). Dans votre cas, n n’est pas un nombre premier, mais il se trouve que 55 = 5 * 11, et 21 = 5*4 + 1 = 11*2 - 1, donc le théorème s’applique dans ce cas précis.
#

def Ex2(max):
    for i in range(max):
        print(" test avec " + str(i) + " :  r : " +
            str(ExponentiaionRapide(i, 21, 55)))
### P,q : nombre premier 
### e = clé publique 
### M = message à chiffrer 
def Ex3(p,q,e,M):
    # Ex3
    n = p * q  # le produit des premiers
    phi_n = (p - 1) * (q - 1)  # fonction d'euler

    e = 7  # clé publique co-prime avec phi_n


    # calcul de la clé privée d
    d = lagrangeMod.inverse_modulaire(e, phi_n)

    # vérification que e et d sont des inverses modulaire
    assert (e * d) % phi_n == 1

    # chiffrement d'un message M


    C = ExponentiaionRapide(M, e, n)  # le message chiffré

    # Déchiffrement du message déchiffré
    M_dec = ExponentiaionRapide(C, d, n)

    print("clé privée d : " + str(d))
    print("Message chiffrée : " + str(C))
    print("M Déchiffrer :" + str(M_dec))


Ex3(5,11,21,7)