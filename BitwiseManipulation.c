/*
Assignment:  Laboratory Assignment 13 "Bitwise Manipulation"
Filename:    BitwiseManipulation.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_bits(char *bitstring, int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (bitstring[i] == '1') {
            count++;
        }
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <bitstring1> <bitstring2>\n", argv[0]);
        return 1;
    }
    
    char *bitstring1 = argv[1];
    char *bitstring2 = argv[2];
    int length1 = strlen(bitstring1);
    int length2 = strlen(bitstring2);
    
    if (length1 != length2) {
        printf("Error: bitstrings must be of equal length.\n");
        return 1;
    }
    
    char *and_result = (char*)malloc(length1 + 1);
    char *or_result = (char*)malloc(length1 + 1);
    char *xor_result = (char*)malloc(length1 + 1);
    
    for (int i = 0; i < length1; i++) {
        and_result[i] = (bitstring1[i] == '1' && bitstring2[i] == '1') ? '1' : '0';
        or_result[i] = (bitstring1[i] == '1' || bitstring2[i] == '1') ? '1' : '0';
        xor_result[i] = (bitstring1[i] != bitstring2[i]) ? '1' : '0';
    }
    
    and_result[length1] = '\0';
    or_result[length1] = '\0';
    xor_result[length1] = '\0';
    
    printf("AND: ");
    for (int i = 0; i < length1; i += 8) {
        for (int j = 0; j < 8; j++) {
            printf("%c", and_result[i + j]);
        }
        printf(" ");
    }
    printf("(%d)\n", count_bits(and_result, length1));
    
    printf("OR : ");
    for (int i = 0; i < length1; i += 8) {
        for (int j = 0; j < 8; j++) {
            printf("%c", or_result[i + j]);
        }
        printf(" ");
    }
    printf("(%d)\n", count_bits(or_result, length1));
    
    printf("XOR: ");
    for (int i = 0; i < length1; i += 8) {
        for (int j = 0; j < 8; j++) {
            printf("%c", xor_result[i + j]);
        }
        printf(" ");
    }
    printf("(%d)\n", count_bits(xor_result, length1));
    
    free(and_result);
    free(or_result);
    free(xor_result);
    
    return 0;
}