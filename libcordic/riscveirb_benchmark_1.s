.section .text
.globl _start

_start:
    # Initialisation
    li t0, 6            # Charger la valeur 6 dans le registre t0
    li t1, 10           # Charger la valeur 10 dans le registre t1

    # Addition
    add t2, t0, t1      # Additionner t0 et t1, stocker le résultat dans t2

    # Stockage du résultat dans la mémoire
    sw t2, 0(x0)        # Stocker la valeur de t2 à l'adresse 0

loop:
    j loop              # Boucler indéfiniment sur cette instruction

# Fin du programme