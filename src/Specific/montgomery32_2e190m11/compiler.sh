#!/bin/sh
set -eu

gcc -fno-peephole2 `#GCC BUG 81300` -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Wno-incompatible-pointer-types -fno-strict-aliasing -Dmodulus_limbs='6' -Dmodulus_bytes_val='32' -Dlimb_t=uint32_t -Dlimb_weight_gaps_array='{32,32,32,32,32,32}' -Dmodulus_array='{0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf5}' -Dq_mpz='(1_mpz<<190) - 11' "$@"
