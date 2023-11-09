### Version incomplète du TP0 sur la programmation linéaire en dimension 2.

# Rappel :
# F : la fonction f = p*x + q*y + r, donnée sous forme [p,q,r]
# C : les contraintes u*x + v*y <= w , données sous forme de liste de listes [u,v,w]

### Les fonctions: 

### make_pairs (pour faire des paires)
### intersection: intersection de deux droites données par des equations ux + vy = w.
### test_inside: teste si un point satisfait toutes les contraintes (avec une petite tolérance)
### prog_lin_2: trouve le max de F = px + qy + r sous les contraintes C, c'est la fonction qu'il faudra appeler 
### (avec les bonnes données) pour résoudre un problème


### Prend une liste L et retourne la liste de toutes les paires de membres de L.
### (Existe déjà dans une librairie Python, mais bon, elle est facile à coder, donc la voici.)

def make_pairs( L ):
    N = len(L)
    pairs = []
    for ind_1 in range( N-1 ):
        for ind_2 in range( ind_1 + 1 , N ):
            pairs.append( ( L[ind_1 ] , L[ind_2] ) )
    return pairs

### Prend deux droites données par des triplets et retourne leur intersection (si elle existe)
### ou None si elle n'existe pas (ou que les droites sont confondues)

def intersection( D0 , D1 ):
    u,v,w = D0
    a,b,c = D1
    D0_txt = "{}x + {}y = {}".format(u,v,w)
    D1_txt = "{}x + {}y = {}".format(a,b,c)
    print("Droites "+D0_txt+" et "+D1_txt+" : ", end = '')# ajoutez un print de la solution après l'avoir trouvée.
    ###
    
    ### A COMPLETER VOUS-MEMES, AVEC LA SOLUTION DE L'EXERCICE II.2.9 (voir polycopié)
    if(a* v - b * u == 0):
        return None
    x = (c * v - b * w )/ (a* v - b * u)
    y = (a * w - c * u)/ (a * v - b * u)
    res = [x,y]
    print("X: "+ str(x)  + "Y: " + str(y))
    return res
    

### Fonction qui prend un point (x,y) et une liste de contraintes (chacune donnée par un triplet [u,v,w])
### et qui vérifie si le point satisfait toutes les contraintes, c'est-à-dire qu'elle rend True si c'est le cas et False sinon.
### Tol est une tolérence pour éviter que des erreurs d'arrondis fassent accepter une solution erronnée ou en refuser une bonne.

def test_inside( pt , Contr , Tol = 0.0001 ):
    
    #####  A COMPLETER VOUS-MEMES
    for i in range(len(Contr)):
        if(( Contr[i][0] * pt[0] ) + (Contr[i][1] * pt[1]) > (Contr[i][2] +  Tol)):
            return False
    return True


# Fonction qui remet tout ensemble.
# Rappel :
# F : la fonction f = p*x + q*y + r, donnée sous forme [p,q,r]
# C : les contraintes u*x + v*y <= w , données sous forme de liste de listes [u,v,w]
def prog_lin_2( F , C ):
    PC = make_pairs( C )
    P_inter = []
    for D1,D2 in PC:
        pt = intersection( D1 , D2 )
        if pt != None:
            P_inter.append(pt)
    Good_pts = []
    Good_val = []
    for Pt in P_inter:
        inside = test_inside( Pt , C )
        if inside:
            Good_pts.append(Pt)
            Good_val.append( F[0]*Pt[0] + F[1]*Pt[1] + F[2] )
    if Good_pts == []:
        print("Le polyhèdre des valeurs admissibles est vide")
        return None
    max_val = max( Good_val )
    max_index = Good_val.index(max_val)
    F_txt = "{}x + {}y + {}".format(F[0],F[1],F[2])
    txt = "La fonction {} prendra la valeur maximum de {} au point {}".format(F_txt,max_val , Good_pts[max_index] )
    print()
    print(txt)
    return Good_pts[max_index], max_val
    
### Exercice de glace 

### max
def DataTest():
    F = [8,9,0]
    C = [[2,5,12],[10,10,45],[50,5,150],[5,50,150],[-1,0,0],[0,-1,0]]
    prog_lin_2(F,C)



###min
def DataTest2():
    F = [-8,-9,0]
    C = [[2,5,12],[10,10,45],[50,5,150],[5,50,150],[-1,0,0],[0,-1,0]]
    prog_lin_2(F,C)



def DefiTP():
    F = [313,205,-10]
    G = [-4,-3,-25]
    C = [[1,2,14],[10,10,100],[20,10,190],[4,0,37],[0,1,6],[-4,1,4],[-5,-5,-10],[-25,-15,-40],[-1,0,0],[0,-1,0]]
    prog_lin_2(F, C)

DefiTP()