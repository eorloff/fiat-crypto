static void femul(uint64_t out[9], const uint64_t in1[9], const uint64_t in2[9]) {
  { const uint64_t x18 = in1[8];
  { const uint64_t x19 = in1[7];
  { const uint64_t x17 = in1[6];
  { const uint64_t x15 = in1[5];
  { const uint64_t x13 = in1[4];
  { const uint64_t x11 = in1[3];
  { const uint64_t x9 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x34 = in2[8];
  { const uint64_t x35 = in2[7];
  { const uint64_t x33 = in2[6];
  { const uint64_t x31 = in2[5];
  { const uint64_t x29 = in2[4];
  { const uint64_t x27 = in2[3];
  { const uint64_t x25 = in2[2];
  { const uint64_t x23 = in2[1];
  { const uint64_t x21 = in2[0];
  { uint128_t x36 = (((uint128_t)x5 * x34) + ((0x2 * ((uint128_t)x7 * x35)) + (((uint128_t)x9 * x33) + (((uint128_t)x11 * x31) + ((0x2 * ((uint128_t)x13 * x29)) + (((uint128_t)x15 * x27) + (((uint128_t)x17 * x25) + ((0x2 * ((uint128_t)x19 * x23)) + ((uint128_t)x18 * x21)))))))));
  { uint128_t x37 = ((((uint128_t)x5 * x35) + (((uint128_t)x7 * x33) + (((uint128_t)x9 * x31) + (((uint128_t)x11 * x29) + (((uint128_t)x13 * x27) + (((uint128_t)x15 * x25) + (((uint128_t)x17 * x23) + ((uint128_t)x19 * x21)))))))) + (0x11 * ((uint128_t)x18 * x34)));
  { uint128_t x38 = ((((uint128_t)x5 * x33) + ((0x2 * ((uint128_t)x7 * x31)) + ((0x2 * ((uint128_t)x9 * x29)) + (((uint128_t)x11 * x27) + ((0x2 * ((uint128_t)x13 * x25)) + ((0x2 * ((uint128_t)x15 * x23)) + ((uint128_t)x17 * x21))))))) + (0x11 * ((0x2 * ((uint128_t)x19 * x34)) + (0x2 * ((uint128_t)x18 * x35)))));
  { uint128_t x39 = ((((uint128_t)x5 * x31) + ((0x2 * ((uint128_t)x7 * x29)) + (((uint128_t)x9 * x27) + (((uint128_t)x11 * x25) + ((0x2 * ((uint128_t)x13 * x23)) + ((uint128_t)x15 * x21)))))) + (0x11 * (((uint128_t)x17 * x34) + ((0x2 * ((uint128_t)x19 * x35)) + ((uint128_t)x18 * x33)))));
  { uint128_t x40 = ((((uint128_t)x5 * x29) + (((uint128_t)x7 * x27) + (((uint128_t)x9 * x25) + (((uint128_t)x11 * x23) + ((uint128_t)x13 * x21))))) + (0x11 * (((uint128_t)x15 * x34) + (((uint128_t)x17 * x35) + (((uint128_t)x19 * x33) + ((uint128_t)x18 * x31))))));
  { uint128_t x41 = ((((uint128_t)x5 * x27) + ((0x2 * ((uint128_t)x7 * x25)) + ((0x2 * ((uint128_t)x9 * x23)) + ((uint128_t)x11 * x21)))) + (0x11 * ((0x2 * ((uint128_t)x13 * x34)) + ((0x2 * ((uint128_t)x15 * x35)) + (((uint128_t)x17 * x33) + ((0x2 * ((uint128_t)x19 * x31)) + (0x2 * ((uint128_t)x18 * x29))))))));
  { uint128_t x42 = ((((uint128_t)x5 * x25) + ((0x2 * ((uint128_t)x7 * x23)) + ((uint128_t)x9 * x21))) + (0x11 * (((uint128_t)x11 * x34) + ((0x2 * ((uint128_t)x13 * x35)) + (((uint128_t)x15 * x33) + (((uint128_t)x17 * x31) + ((0x2 * ((uint128_t)x19 * x29)) + ((uint128_t)x18 * x27))))))));
  { uint128_t x43 = ((((uint128_t)x5 * x23) + ((uint128_t)x7 * x21)) + (0x11 * (((uint128_t)x9 * x34) + (((uint128_t)x11 * x35) + (((uint128_t)x13 * x33) + (((uint128_t)x15 * x31) + (((uint128_t)x17 * x29) + (((uint128_t)x19 * x27) + ((uint128_t)x18 * x25)))))))));
  { uint128_t x44 = (((uint128_t)x5 * x21) + (0x11 * ((0x2 * ((uint128_t)x7 * x34)) + ((0x2 * ((uint128_t)x9 * x35)) + (((uint128_t)x11 * x33) + ((0x2 * ((uint128_t)x13 * x31)) + ((0x2 * ((uint128_t)x15 * x29)) + (((uint128_t)x17 * x27) + ((0x2 * ((uint128_t)x19 * x25)) + (0x2 * ((uint128_t)x18 * x23)))))))))));
  { uint64_t x45 = (uint64_t) (x44 >> 0x32);
  { uint64_t x46 = ((uint64_t)x44 & 0x3ffffffffffff);
  { uint128_t x47 = (x45 + x43);
  { uint64_t x48 = (uint64_t) (x47 >> 0x31);
  { uint64_t x49 = ((uint64_t)x47 & 0x1ffffffffffff);
  { uint128_t x50 = (x48 + x42);
  { uint64_t x51 = (uint64_t) (x50 >> 0x31);
  { uint64_t x52 = ((uint64_t)x50 & 0x1ffffffffffff);
  { uint128_t x53 = (x51 + x41);
  { uint64_t x54 = (uint64_t) (x53 >> 0x32);
  { uint64_t x55 = ((uint64_t)x53 & 0x3ffffffffffff);
  { uint128_t x56 = (x54 + x40);
  { uint64_t x57 = (uint64_t) (x56 >> 0x31);
  { uint64_t x58 = ((uint64_t)x56 & 0x1ffffffffffff);
  { uint128_t x59 = (x57 + x39);
  { uint64_t x60 = (uint64_t) (x59 >> 0x31);
  { uint64_t x61 = ((uint64_t)x59 & 0x1ffffffffffff);
  { uint128_t x62 = (x60 + x38);
  { uint64_t x63 = (uint64_t) (x62 >> 0x32);
  { uint64_t x64 = ((uint64_t)x62 & 0x3ffffffffffff);
  { uint128_t x65 = (x63 + x37);
  { uint64_t x66 = (uint64_t) (x65 >> 0x31);
  { uint64_t x67 = ((uint64_t)x65 & 0x1ffffffffffff);
  { uint128_t x68 = (x66 + x36);
  { uint64_t x69 = (uint64_t) (x68 >> 0x31);
  { uint64_t x70 = ((uint64_t)x68 & 0x1ffffffffffff);
  { uint64_t x71 = (x46 + (0x11 * x69));
  { uint64_t x72 = (x71 >> 0x32);
  { uint64_t x73 = (x71 & 0x3ffffffffffff);
  { uint64_t x74 = (x72 + x49);
  { uint64_t x75 = (x74 >> 0x31);
  { uint64_t x76 = (x74 & 0x1ffffffffffff);
  out[0] = x73;
  out[1] = x76;
  out[2] = (x75 + x52);
  out[3] = x55;
  out[4] = x58;
  out[5] = x61;
  out[6] = x64;
  out[7] = x67;
  out[8] = x70;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
