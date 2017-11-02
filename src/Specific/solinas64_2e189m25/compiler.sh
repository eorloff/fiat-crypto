#!/bin/sh
set -eu

gcc -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Dmodulus_limbs='4' -Dmodulus_bytes_val='47.25' -Dlimb_t=uint64_t -Dlimb_weight_gaps_array='{48,47,47,47}' -Dmodulus_array='{0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7}' -Dq_mpz='(1_mpz<<189) - 25' "$@"
