#include "ap_fixed.h"

typedef float DTYPE;
typedef float REAL_OP_DATA_TYPE; // Data type for the output
typedef float IMAG_OP_DATA_TYPE; // Data type for the output
typedef float TABLE_DATA_TYPE; // Data type for the table
#define SIZE 1024 		/* SIZE OF DFT */
void dft(DTYPE real_sample[1024], DTYPE imag_sample[1024],DTYPE real_op[1024], DTYPE imag_op[1024]);

