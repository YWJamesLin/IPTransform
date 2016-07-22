#include "IPTransformer.h"
#include <string.h>
#include <stdio.h>

int IPTransformer::IPCheck (char* in) {
  int check = 1, dotcount = 0;
  while (in[i] != '\0') {
    if (in[i] == '.') {
      ++ dotcount;
    }
    ++ i;
  }
  if (dotcount != 3) {
    check = 0;
  }
  return check;
}

int IPTransformer::IPRangeCheck (int i) {
  return i < 256 && i > -1;
}

void IPTransformer::IPStrToInt (int* out, char* in) {
  int tmp = 0, count = 0, i = 0;
  while (in[i] != '\0') {
    if (in[i] != '.') {
      tmp *= 10;
      tmp += in[i] - 48;
    } else {
      out[count] = tmp;
      tmp = 0;
      ++ count;
    }
    ++ i;
  }
  out[count] = tmp;
}

void IPTransformer::IPIntToStr (char* out, int* in) {
  sprintf (out, "%d.%d.%d.%d", in[0], in[1], in[2], in[3]);
}
