#ifndef CORDIC_H
#define CORDIC_H


// R-Types Instructions

// rs1 rs2
#define CORMUL(x, y) ({ \
    int result; \
    asm volatile ( \
        "cormul   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "r" (y) \
    ); \
    result; \
})
#define CORDIV(x, y) ({ \
    int result; \
    asm volatile ( \
        "cordiv   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "r" (y) \
    ); \
    result; \
})
// rs1
#define CORCOS(x) ({ \
    int result; \
    asm volatile ( \
        "corcos   %0, %1\n\t" \
        : "=r" (result) \
        : "r" (x) \
    ); \
    result; \
})
#define CORSIN(x) ({ \
    int result; \
    asm volatile ( \
        "corsin   %0, %1\n\t" \
        : "=r" (result) \
        : "r" (x) \
    ); \
    result; \
})
#define CORTAN(x) ({ \
    int result; \
    asm volatile ( \
        "cortan   %0, %1\n\t" \
        : "=r" (result) \
        : "r" (x) \
    ); \
    result; \
})
#define CORACOS(x) ({ \
    int result; \
    asm volatile ( \
        "coracos   %0, %1\n\t" \
        : "=r" (result) \
        : "r" (x) \
    ); \
    result; \
})
#define CORASIN(x) ({ \
    int result; \
    asm volatile ( \
        "corasin   %0, %1\n\t" \
        : "=r" (result) \
        : "r" (x) \
    ); \
    result; \
})
#define CORATAN(x) ({ \
    int result; \
    asm volatile ( \
        "coratan   %0, %1\n\t" \
        : "=r" (result) \
        : "r" (x) \
    ); \
    result; \
})

// I-Types

#define CORMULI(x, y) ({ \
    int result; \
    asm volatile ( \
        "cormuli   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "i" (y) \
    ); \
    result; \
})
#define CORDIVI ({ \
    int result; \
    asm volatile ( \
        "cordivi   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "i" (y) \
    ); \
    result; \
})
#define CORCOSI(x, y) ({ \
    int result; \
    asm volatile ( \
        "corcosi   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "i" (y) \
    ); \
    result; \
})
#define CORSINI(x, y) ({ \
    int result; \
    asm volatile ( \
        "corsini   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "i" (y) \
    ); \
    result; \
})
#define CORTANI(x, y) ({ \
    int result; \
    asm volatile ( \
        "coratani   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "i" (y) \
    ); \
    result; \
})
#define CORACOSI(x, y) ({ \
    int result; \
    asm volatile ( \
        "coracosi   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "i" (y) \
    ); \
    result; \
})
#define CORASINI(x, y) ({ \
    int result; \
    asm volatile ( \
        "corasini   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "i" (y) \
    ); \
    result; \
})
#define CORATANI(x, y) ({ \
    int result; \
    asm volatile ( \
        "coratani   %0, %1, %2\n\t" \
        : "=r" (result) \
        : "r" (x), "i" (y) \
    ); \
    result; \
})



#endif
