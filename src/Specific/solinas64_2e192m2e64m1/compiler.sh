#!/bin/sh
set -eu

gcc -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='4' -Dmodulus_bytes_val='48' -Dlimb_t=uint64_t -Dlimb_weight_gaps_array='{48,48,48,48}' -Dmodulus_array='{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff}' -Dq_mpz='(1_mpz<<192) - (1_mpz<<64) - 1' "$@"
