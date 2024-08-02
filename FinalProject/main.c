//
// Created by Anton Samofalov on 2024-07-26.
//

#include "Converting/converting.h"
#include "Fundamentals/fundamentals.h"
#include "Manipulating/manipulating.h"
#include "Tokenizing/tokenizing.h"
#include <stdio.h>

int main(void){

    char str[] = "Hello, how are you? I am fine.";
    printf("Tokenizing Words:\n");
    tokenizeWords(str);
    return 0;
}