/*
Assignment:  Laboratory Assignment 07 "Coin Struct"
Filename:    coin.c/coin.h/main.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>
#include "coin.h"
#include "coin.c"
int CountHeads(Coin coin, int goal) {

	while(NumHeads(coin) < goal) {
		coin = Flip(coin);

	}
		return NumFlips(coin);

	}
// This function creates a coin object and calls the method for testing
int main() {
Coin coin = InitCoin(15); // Create a coin object with seed value 15
int numHeads = 20;  // Desire 20 heads
int numFlips = CountHeads(coin, numHeads); // Should return 40 using coin object with seed value 15
printf("Total number of flips for 20 heads: %d\n", numFlips);
    coin = InitCoin(15);
numHeads = 100;  // Desire 100 heads
numFlips = CountHeads(coin, numHeads); // Should return 194 using coin object with seed value 15
printf("Total number of flips for 1000 heads: %d\n", numFlips);
return 0;
}