#!/bin/sh
set -eu

g++ -march=native -mtune=native -std=gnu++11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='10' -Dmodulus_bytes_val='22.2' -Dlimb_t=uint32_t -Dlimb_weight_gaps_array='{23,22,22,22,22,23,22,22,22,22}' -Dmodulus_array='{0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8b}' -Dq_mpz='(1_mpz<<222) - 117' "$@"
