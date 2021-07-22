#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"

int main(void) {
    Matrix* M = Matrix_Alcoation();
    Matrix_Fill(M);
    Matrix_print(M);
    Matrix_delete(M);
}