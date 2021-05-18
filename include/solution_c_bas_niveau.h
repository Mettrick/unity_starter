#ifndef SIMULATEUR_SOLUTION_C_BAS_NIVEAU_H
#define SIMULATEUR_SOLUTION_C_BAS_NIVEAU_H

#include <stdint.h>

size_t strlen(const char* cs);
char* strcpy(char* s, const char* ct);
char* strreverse(char *s);
char* longtodec(unsigned int l, char* s);
char* hexstr(uint32_t l, char* s, uint8_t bits);

#endif //SIMULATEUR_SOLUTION_C_BAS_NIVEAU_H
