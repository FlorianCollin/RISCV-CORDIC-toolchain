## Instructions CORDIC

Consultez les captures d'écran du rapport pour voir les nouvelles instructions CORDIC ajoutées, telles que corcos, corsin, cormul, etc.

## Compilation de la toolchain

Pour compiler la toolchain avec les nouvelles instructions, suivez les étapes suivantes :

1. Clonez le dépôt [riscv-gnu-toolchain](https://github.com/riscv-collab/riscv-gnu-toolchain) et [riscv-opcodes](https://github.com/riscv/riscv-opcodes).
2. Suivez les instructions du README pour installer une première fois la toolchain.
3. Modifiez le fichier `rv_i` (~/riscv-opcodes/rv_i) avec les nouvelles instructions.
4. Exécutez la commande `make` dans le répertoire ~/riscv-opcodes.
5. Modifiez les fichiers `riscv-opc.h` (riscv-gnu-toolchain/binutils/include/opcode/riscv-opc.h) et `riscv-opc.c`  (riscv-gnu-toolchain/binutils/opcodes/riscv-opc.c) avec les nouvelles instructions et leurs MATCH et MASK.

Après ces étapes, vous pourrez recompiler la toolchain avec les nouvelles instructions.

1.`cd ~/riscv-gnu-toolchain`
2.`sudo make clean`
3.`sudo make`

ATTENTION : > 1h

## Test de la toolchain

Utilisez le script `stohex.sh` pour générer les fichiers hexadécimaux à partir des fichiers assembleurs. 
Utilisez le script `ctohex.sh` pour générer les fichiers hexadécimaux à partir des fichiers C. 
Exemple : `./stohex.sh testcordic1.s` ou `./ctohex.sh test_add.c`
