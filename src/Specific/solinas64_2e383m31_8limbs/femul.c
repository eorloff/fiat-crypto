static void femul(uint64_t out[8], const uint64_t in1[8], const uint64_t in2[8]) {
  { const uint64_t x16 = in1[7];
  { const uint64_t x17 = in1[6];
  { const uint64_t x15 = in1[5];
  { const uint64_t x13 = in1[4];
  { const uint64_t x11 = in1[3];
  { const uint64_t x9 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x30 = in2[7];
  { const uint64_t x31 = in2[6];
  { const uint64_t x29 = in2[5];
  { const uint64_t x27 = in2[4];
  { const uint64_t x25 = in2[3];
  { const uint64_t x23 = in2[2];
  { const uint64_t x21 = in2[1];
  { const uint64_t x19 = in2[0];
  { uint128_t x32 = (((uint128_t)x5 * x30) + (((uint128_t)x7 * x31) + (((uint128_t)x9 * x29) + (((uint128_t)x11 * x27) + (((uint128_t)x13 * x25) + (((uint128_t)x15 * x23) + (((uint128_t)x17 * x21) + ((uint128_t)x16 * x19))))))));
  { uint128_t x33 = ((((uint128_t)x5 * x31) + (((uint128_t)x7 * x29) + (((uint128_t)x9 * x27) + (((uint128_t)x11 * x25) + (((uint128_t)x13 * x23) + (((uint128_t)x15 * x21) + ((uint128_t)x17 * x19))))))) + (0x1f * (0x2 * ((uint128_t)x16 * x30))));
  { uint128_t x34 = ((((uint128_t)x5 * x29) + (((uint128_t)x7 * x27) + (((uint128_t)x9 * x25) + (((uint128_t)x11 * x23) + (((uint128_t)x13 * x21) + ((uint128_t)x15 * x19)))))) + (0x1f * ((0x2 * ((uint128_t)x17 * x30)) + (0x2 * ((uint128_t)x16 * x31)))));
  { uint128_t x35 = ((((uint128_t)x5 * x27) + (((uint128_t)x7 * x25) + (((uint128_t)x9 * x23) + (((uint128_t)x11 * x21) + ((uint128_t)x13 * x19))))) + (0x1f * ((0x2 * ((uint128_t)x15 * x30)) + ((0x2 * ((uint128_t)x17 * x31)) + (0x2 * ((uint128_t)x16 * x29))))));
  { uint128_t x36 = ((((uint128_t)x5 * x25) + (((uint128_t)x7 * x23) + (((uint128_t)x9 * x21) + ((uint128_t)x11 * x19)))) + (0x1f * ((0x2 * ((uint128_t)x13 * x30)) + ((0x2 * ((uint128_t)x15 * x31)) + ((0x2 * ((uint128_t)x17 * x29)) + (0x2 * ((uint128_t)x16 * x27)))))));
  { uint128_t x37 = ((((uint128_t)x5 * x23) + (((uint128_t)x7 * x21) + ((uint128_t)x9 * x19))) + (0x1f * ((0x2 * ((uint128_t)x11 * x30)) + ((0x2 * ((uint128_t)x13 * x31)) + ((0x2 * ((uint128_t)x15 * x29)) + ((0x2 * ((uint128_t)x17 * x27)) + (0x2 * ((uint128_t)x16 * x25))))))));
  { uint128_t x38 = ((((uint128_t)x5 * x21) + ((uint128_t)x7 * x19)) + (0x1f * ((0x2 * ((uint128_t)x9 * x30)) + ((0x2 * ((uint128_t)x11 * x31)) + ((0x2 * ((uint128_t)x13 * x29)) + ((0x2 * ((uint128_t)x15 * x27)) + ((0x2 * ((uint128_t)x17 * x25)) + (0x2 * ((uint128_t)x16 * x23)))))))));
  { uint128_t x39 = (((uint128_t)x5 * x19) + (0x1f * ((0x2 * ((uint128_t)x7 * x30)) + ((0x2 * ((uint128_t)x9 * x31)) + ((0x2 * ((uint128_t)x11 * x29)) + ((0x2 * ((uint128_t)x13 * x27)) + ((0x2 * ((uint128_t)x15 * x25)) + ((0x2 * ((uint128_t)x17 * x23)) + (0x2 * ((uint128_t)x16 * x21))))))))));
  { uint64_t x40 = (uint64_t) (x39 >> 0x30);
  { uint64_t x41 = ((uint64_t)x39 & 0xffffffffffff);
  { uint128_t x42 = (x40 + x38);
  { uint64_t x43 = (uint64_t) (x42 >> 0x30);
  { uint64_t x44 = ((uint64_t)x42 & 0xffffffffffff);
  { uint128_t x45 = (x43 + x37);
  { uint64_t x46 = (uint64_t) (x45 >> 0x30);
  { uint64_t x47 = ((uint64_t)x45 & 0xffffffffffff);
  { uint128_t x48 = (x46 + x36);
  { uint64_t x49 = (uint64_t) (x48 >> 0x30);
  { uint64_t x50 = ((uint64_t)x48 & 0xffffffffffff);
  { uint128_t x51 = (x49 + x35);
  { uint64_t x52 = (uint64_t) (x51 >> 0x30);
  { uint64_t x53 = ((uint64_t)x51 & 0xffffffffffff);
  { uint128_t x54 = (x52 + x34);
  { uint64_t x55 = (uint64_t) (x54 >> 0x30);
  { uint64_t x56 = ((uint64_t)x54 & 0xffffffffffff);
  { uint128_t x57 = (x55 + x33);
  { uint64_t x58 = (uint64_t) (x57 >> 0x30);
  { uint64_t x59 = ((uint64_t)x57 & 0xffffffffffff);
  { uint128_t x60 = (x58 + x32);
  { uint64_t x61 = (uint64_t) (x60 >> 0x2f);
  { uint64_t x62 = ((uint64_t)x60 & 0x7fffffffffff);
  { uint64_t x63 = (x41 + (0x1f * x61));
  { uint64_t x64 = (x63 >> 0x30);
  { uint64_t x65 = (x63 & 0xffffffffffff);
  { uint64_t x66 = (x64 + x44);
  { uint64_t x67 = (x66 >> 0x30);
  { uint64_t x68 = (x66 & 0xffffffffffff);
  out[0] = x65;
  out[1] = x68;
  out[2] = (x67 + x47);
  out[3] = x50;
  out[4] = x53;
  out[5] = x56;
  out[6] = x59;
  out[7] = x62;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
