#ifndef ASMMULT13DEC2013
#define ASMMULT13DEC2013

/*
 * c[0..63]: outer product of a[0..7] and b[0..8] in skew order.
 * a, b, c, must be 64 byte aligned.
 */
void asm8x1x8(double *a, double *b, double *c);

/*
 * a[]: 8x12 matrix in column major order.
 * b[]: 12x8 matrix in row major order.
 * c[0..63]: outer product of a[] and b[] in skew order.
 * a, b, c, must be 64 byte aligned.
 */
void asm8x12x8(double *a, double *b, double *c);

/*
 * a[]: 8x24 matrix in column major order.
 * b[]: 24x8 matrix in row major order.
 * c[0..63]: outer product of a[] and b[] in skew order.
 * a, b, c, must be 64 byte aligned.
 */
void asm8x24x8(double *a, double *b, double *c);

/*
 * a[]: 8x36 matrix in column major order.
 * b[]: 36x8 matrix in row major order.
 * c[0..63]: outer product of a[] and b[] in skew order.
 * a, b, c, must be 64 byte aligned.
 */
void asm8x36x8(double *a, double *b, double *c);

/*
 * a[]: 8x48 matrix in column major order.
 * b[]: 48x8 matrix in row major order.
 * c[0..63]: outer product of a[] and b[] in skew order.
 * a, b, c, must be 64 byte aligned.
 */
void asm8x48x8(double *a, double *b, double *c);

#endif

