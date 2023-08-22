/*
Assignment:  Laboratory Assignment 07 "Coin Struct"
Filename:    coin.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "coin.h"


Coin InitCoin(int seed) {
	srand(seed);
	Coin coin;
	coin.heads = 0;
	coin.flips = 0;
	coin.isHeads = 1;
	return coin;
}

Coin Flip(Coin coin) {
	coin.isHeads = rand() % 2;
	coin.flips++;
	if (coin.isHeads) {
		coin.heads++;
	}
	return coin;
}

int NumFlips(Coin coin) {
    return coin.flips;
}

int NumHeads(Coin coin) {
    return coin.heads;
}

int NumTails(Coin coin) {
    return coin.flips - coin.heads;
}

bool IsHeads(Coin coin) {
    return coin.isHeads;
}









