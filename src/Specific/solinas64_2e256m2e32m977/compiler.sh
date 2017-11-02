#!/bin/sh
set -eu

gcc -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='5' -Dmodulus_bytes_val='51.2' -Dlimb_t=uint64_t -Dlimb_weight_gaps_array='{52,51,51,51,51}' -Dmodulus_array='{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0x2f}' -Dq_mpz='(1_mpz<<256) - (1_mpz<<32) - 977 ' "$@"
