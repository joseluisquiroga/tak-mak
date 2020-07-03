
/*
Pseudo Random Number Generator

C++ implementation of the MT19937 pseudo random number generator by Takuji Nishimura and Makoto Matsumoto.

You can take this README as Example usage:

cp README.md README.cpp
g++ -o tt README.cpp tak_mak.cpp
./tt
rm README.cpp tt

*/

#include <stdio.h>
#include "tak_mak.hh"

int main(void)
{
	tak_mak gg(123);
    for(long ii = 0; ii < 1000; ii++) {
		long val = gg.gen_rand_int32_ie(1, 500);
		printf("%ld ", val);
    }
    return 0;
}

