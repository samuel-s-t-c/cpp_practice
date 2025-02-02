#define DOUBLE
#include "combine.h"

void inner4(vec_ptr u, vec_ptr v, data_t *dest)
{
  long i = 0;
  long length = vec_length(u);
  data_t *udata = get_vec_start(u);
  data_t *vdata = get_vec_start(v);
  data_t sum = (data_t) 0;

  if (i > (length - 5)) {
    for (i = 0; i < (length/6 - 5); i+=6) {
      sum = sum + udata[i] * vdata[i];
      sum = sum + udata[i+1] * vdata[i+1];
      sum = sum + udata[i+2] * vdata[i+2];
      sum = sum + udata[i+3] * vdata[i+3];
      sum = sum + udata[i+4] * vdata[i+4];
      sum = sum + udata[i+5] * vdata[i+5];
    }

    for (i = (length/6 - 5); i < (2*length/6 - 5); i+=6) {
      sum = sum + udata[i] * vdata[i];
      sum = sum + udata[i+1] * vdata[i+1];
      sum = sum + udata[i+2] * vdata[i+2];
      sum = sum + udata[i+3] * vdata[i+3];
      sum = sum + udata[i+4] * vdata[i+4];
      sum = sum + udata[i+5] * vdata[i+5];
    }

    for (i = (2*length/6 - 5); i < (3*length/6 - 5); i+=6) {
      sum = sum + udata[i] * vdata[i];
      sum = sum + udata[i+1] * vdata[i+1];
      sum = sum + udata[i+2] * vdata[i+2];
      sum = sum + udata[i+3] * vdata[i+3];
      sum = sum + udata[i+4] * vdata[i+4];
      sum = sum + udata[i+5] * vdata[i+5];
    }

    for (i = (3*length/6 - 5); i < (4*length/6 - 5); i+=6) {
      sum = sum + udata[i] * vdata[i];
      sum = sum + udata[i+1] * vdata[i+1];
      sum = sum + udata[i+2] * vdata[i+2];
      sum = sum + udata[i+3] * vdata[i+3];
      sum = sum + udata[i+4] * vdata[i+4];
      sum = sum + udata[i+5] * vdata[i+5];
    }

    for (i = (4*length/6 - 5); i < (5*length/6 - 5); i+=6) {
      sum = sum + udata[i] * vdata[i];
      sum = sum + udata[i+1] * vdata[i+1];
      sum = sum + udata[i+2] * vdata[i+2];
      sum = sum + udata[i+3] * vdata[i+3];
      sum = sum + udata[i+4] * vdata[i+4];
      sum = sum + udata[i+5] * vdata[i+5];
    }

    for (i = (5*length/6 - 5); i < (length - 5); i+=6) {
      sum = sum + udata[i] * vdata[i];
      sum = sum + udata[i+1] * vdata[i+1];
      sum = sum + udata[i+2] * vdata[i+2];
      sum = sum + udata[i+3] * vdata[i+3];
      sum = sum + udata[i+4] * vdata[i+4];
      sum = sum + udata[i+5] * vdata[i+5];
    }
  }

  for (;i < length; i++) {
    sum = sum + udata[i] * vdata[i];
  }

  *dest = sum;
}
