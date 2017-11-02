#!/bin/sh
set -eu

gcc -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='3' -Dmodulus_bytes_val='50' -Dlimb_t=uint64_t -Dlimb_weight_gaps_array='{50,50,50}' -Dmodulus_array='{0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd}' -Dq_mpz='(1_mpz<<150) - 3' "$@"
