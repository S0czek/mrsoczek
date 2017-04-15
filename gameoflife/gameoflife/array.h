#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include <stdio.h>

void deleteMatrix(char** ptab, int n);
char **createMatrix(int n, int m);
char atMatrix(char** ptab, int n, int m);
char** insertToMatrix(char** ptab, int n, int m, char wartosc);
char** fillMatrix(char **ptab, int n, int m, char wartosc);
char** resizeMatrix(char **ptab, int n, int m);

#endif
