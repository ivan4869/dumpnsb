#ifndef DECOMPILER_H_
#define DECOMPILER_H_
#include "iv_util.h"

typedef unsigned short bcode_t;
typedef struct{
  unsigned tick;
  bcode_t code;
  unsigned short cnt;
}instruct_t;

#endif
