## Projet CORDIC Toolchain
Ce repo à pour but de faciliter l'implémentation d'instruction CORDIC dans la toolchain, mais surtout d'accompgner le rapport `rapport.pdf`.

- /libcordic : condient des fichiers de test (asm, C) et des script shell regroupant les commandes pout l'obtention des .hex
- encoding.out.h : fichier générer par /riscv-opcodes après modification de /riscv-opcodes/rv_i et execution du makefile (`make`). Je fourni le fichier pour vérifier que la génération ne comporte pas d'erreur.
- riscv-opc.c : fichier à modifier dans votre toolchain
- riscv-opc.h : fichier à modifier dans votre toolchain
## Compilation de la toolchain

Pour compiler la toolchain avec les nouvelles instructions, suivez les étapes suivantes :

1. Clonez le dépôt [riscv-gnu-toolchain](https://github.com/riscv-collab/riscv-gnu-toolchain) et [riscv-opcodes](https://github.com/riscv/riscv-opcodes).
2. Suivez les instructions du README pour installer une première fois la toolchain (riscv-gnu-toolchain).
3. Modifiez le fichier `rv_i` (~/riscv-opcodes/rv_i) avec les nouvelles instructions.
4. Exécutez la commande `make` dans le répertoire ~/riscv-opcodes.
5. Modifiez les fichiers `riscv-opc.h` (riscv-gnu-toolchain/binutils/include/opcode/riscv-opc.h) et `riscv-opc.c`  (riscv-gnu-toolchain/binutils/opcodes/riscv-opc.c) avec les nouvelles instructions et leurs MATCH et MASK.

Pour plus de détails consultez : [tuto](https://pcotret.gitlab.io/riscv-custom/sw_toolchain.html#adding-a-custom-instruction-in-the-cross-compiler)

Après ces étapes, vous pourrez recompiler la toolchain avec les nouvelles instructions.
`cd ~/riscv-gnu-toolchain`
`sudo make clean`
`sudo make`
ATTENTION : > 1h

## Test de la toolchain

Utilisez le script `stohex.sh` pour générer les fichiers hexadécimaux à partir des fichiers assembleurs. 
Utilisez le script `ctohex.sh` pour générer les fichiers hexadécimaux à partir des fichiers C. 
Exemple : `./stohex.sh testcordic1.s` ou `./ctohex.sh test_add.c`
