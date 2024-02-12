#!/bin/bash

CC=riscv32-unknown-elf-gcc
CFLAGS="-nostartfiles -Ttext 0 "
SOURCES=main.c
TARGET=main
BIN_TARGET=${TARGET}.bin

# Compiler le programme et générer le binaire
${CC} ${CFLAGS} -o ${TARGET} ${SOURCES}

# Dump du contenu du fichier main
/opt/riscv/bin/riscv32-unknown-elf-objdump -d ${TARGET} > "${TARGET}.dump"

# Convertir le fichier main en fichier binaire
riscv32-unknown-elf-objcopy -O binary ${TARGET} ${BIN_TARGET}

# Afficher le contenu binaire avec od
# od -t x4 "${TARGET}.bin"

# Afficher le contenu binaire avec hexdump et sauvegarder dans un fichier hex
hexdump -v -e '"0x" /4 "%08x" ",\n"' "${TARGET}.bin" > "${TARGET}.hex"

# Afficher le contenu du fichier hex
#cat "${TARGET}.hex"


# Nettoyer les fichiers intermédiaires
rm -f ${TARGET}
rm -f ${BIN_TARGET}
