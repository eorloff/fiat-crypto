#!/bin/sh
set -eu

g++ -march=native -mtune=native -std=gnu++11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='8' -Dmodulus_bytes_val='48' -Dlimb_t=uint64_t -Dlimb_weight_gaps_array='{48,48,48,48,48,48,48,48}' -Dmodulus_array='{0xb0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff}' -Dq_mpz='(1_mpz<<384) - 79*(1_mpz<<376) - 1' "$@"
