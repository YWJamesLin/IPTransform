#include "IPTransformer.h"
#include <string.h>
#include <stdio.h>

int IPTransformer::IPCheck (char* in) {
  i = 0, check = 1, count = 0;
  while (in[i] != '\0') {
    if (in[i] == '.') {
      ++ count;
    }
    ++ i;
  }
  if (count != 3) {
    check = 0;
  }
  return check;
}

int IPTransformer::IPRangeCheck (int in) {
  return in < 256 && in > -1;
}

void IPTransformer::IPStrToInt (int* out, char* in) {
  i = 0, count = 0, tmp = 0;
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
