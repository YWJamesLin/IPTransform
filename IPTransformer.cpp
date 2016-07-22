#include "IPTransformer.h"
#include <string.h>
#include <stdio.h>

int IPTransformer::IPCheck (char* in, int strLength) {
  int check = 1, dotcount = 0;
  for (i = 0; i < strLength; ++ i) {
    if (in[i] == '.') {
      ++ dotcount;
    }
  }
  if (dotcount != 3) {
    check = 0;
  }
  return check;
}

int IPTransformer::IPRangeCheck (int i) {
  return i < 256 && i > -1;
}

void IPTransformer::IPStrToInt (int* out, char* in, int strLength) {
  int tmp = 0, count = 0;
  for(i = 0; i < strLength; ++ i) {
    if (in[i] != '.') {
      tmp *= 10;
      tmp += in[i] - 48;
    } else {
      out[count] = tmp;
      tmp = 0;
      ++ count;
    }
  }
  out[count] = tmp;
}

void IPTransformer::IPIntToStr (char* out, int* in) {
  sprintf (out, "%d.%d.%d.%d", in[0], in[1], in[2], in[3]);
}
