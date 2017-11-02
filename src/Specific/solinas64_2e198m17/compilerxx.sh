#!/bin/sh
set -eu

g++ -march=native -mtune=native -std=gnu++11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='4' -Dmodulus_bytes_val='49.5' -Dlimb_t=uint64_t -Dlimb_weight_gaps_array='{50,49,50,49}' -Dmodulus_array='{0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef}' -Dq_mpz='(1_mpz<<198) - 17' "$@"
