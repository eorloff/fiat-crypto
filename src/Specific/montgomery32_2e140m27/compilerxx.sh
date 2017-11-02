#!/bin/sh
set -eu

g++ -fno-peephole2 `#GCC BUG 81300` -march=native -mtune=native -std=gnu++11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -fno-strict-aliasing -Dmodulus_limbs='5' -Dmodulus_bytes_val='32' -Dlimb_t=uint32_t -Dlimb_weight_gaps_array='{32,32,32,32,32}' -Dmodulus_array='{0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe5}' -Dq_mpz='(1_mpz<<140) - 27' "$@"
