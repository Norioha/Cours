
def chiffrement_cesar(message, decalage):
    message_chiffre = ""
    for caractere in message:
        if caractere.isalpha():  # Vérifie si le caractère est une lettre
            # Applique le décalage au caractère en respectant la casse
            base = ord('A') if caractere.isupper() else ord('a')
            code_caractere = ord(caractere) - base
            nouveau_code = (code_caractere + decalage) % 26
            nouveau_caractere = chr(base + nouveau_code)
            message_chiffre += nouveau_caractere
        else:
            message_chiffre += caractere  # Conserve les caractères spéciaux et espaces
    return message_chiffre


def dechiffrement_cesar(message_chiffre):
    for decalage in range(26):  # Essaie tous les décalages possibles
        message_dechiffre = ""
        for caractere in message_chiffre:
            if caractere.isalpha():
                base = ord('A') if caractere.isupper() else ord('a')
                code_caractere = ord(caractere) - base
                nouveau_code = (code_caractere - decalage) % 26  # Décalage inverse
                nouveau_caractere = chr(base + nouveau_code)
                message_dechiffre += nouveau_caractere
            else:
                message_dechiffre += caractere
        print(f"Essai avec décalage {decalage}: {message_dechiffre}")

# Exemple d'utilisation
message_a_chiffrer = "Secret!"
decalage = 10

message_chiffre = chiffrement_cesar(message_a_chiffrer, decalage)
print("Message chiffré:", message_chiffre)

# Message chiffré à déchiffrer (utilisez le résultat de chiffrement_cesar)


dechiffrement_cesar(message_chiffre)
