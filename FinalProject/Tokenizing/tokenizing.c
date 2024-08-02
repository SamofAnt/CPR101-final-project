//
// Created by Anton Samofalov on 2024-07-26.
//

#include "tokenizing.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Tokenize words
int tokenizeWords(char * str){
    char * token;
    const char * delim = " .,!?;:";
    int i;

    token = strtok(str,delim);
    for (i = 0; token != NULL; ++i) {
        printf("Word: %s\n", token);
        token = strtok(NULL, delim);
    }

    return i;
}
//Tokenize phrases
int tokenizePhrases(char* str){
    char * token;
    const char * delim = ",;:.";
    int i;
    token = strtok(str,delim);
    for (i = 0; token != NULL; ++i) {
        printf("Word: %s\n", token);
        token = strtok(NULL, delim);
    }
   return i;
}

//Tokenize sentences
int tokenizeSentences(char* str){
    char * token;
    const char * delim = ".?!";
    int i;

    token = strtok(str,delim);
    for (i = 0; token != NULL; ++i) {
        printf("Word: %s\n", token);
        token = strtok(NULL, delim);
    }
    return i;
}