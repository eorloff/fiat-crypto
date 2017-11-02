#!/bin/sh
set -eu

g++ -march=native -mtune=native -std=gnu++11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='9' -Dmodulus_bytes_val='27' -Dlimb_t=uint32_t -Dlimb_weight_gaps_array='{27,27,27,27,27,27,27,27,27}' -Dmodulus_array='{0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7}' -Dq_mpz='(1_mpz<<243) - 9' "$@"
