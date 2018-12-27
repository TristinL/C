//Tristin Lehman
//11-30-16
//Byte manipulation

#include<stdio.h>

// Bitwise AND "&" (Anding operator)							Bitwise OR operator '|' (inclusive) 	'|' (Exclusive)			Bitwise Ones Complement '~'					Bitwise Left Shift '<<'
// 01 = 0,	10 = 0,		11 = 1, 	00 = 0, In the binary system																	b1 -> ~b1									00000011 -> 00000110
//																																	0		1

int main(){
	unsigned int word1 = 77u , word2 = 150u, word3 = 210u;
	
	printf("%i	", word1 & word2);
	printf("%i	", word1 & word1);
	printf("%i	", word1 & word2 & word3);
	printf("%i\n", word1 & 1);
	
	return 0;
}
