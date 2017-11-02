#!/bin/sh
set -eu

g++ -march=native -mtune=native -std=gnu++11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='8' -Dmodulus_bytes_val='28.25' -Dlimb_t=uint32_t -Dlimb_weight_gaps_array='{29,28,28,28,29,28,28,28}' -Dmodulus_array='{0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb}' -Dq_mpz='(1_mpz<<226) - 5' "$@"
