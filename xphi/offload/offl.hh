#ifndef __OFFL8DEC2013__
#define __OFFL8DEC2013__

/*
 * initialize v[0..len-1] to mic device number/ -1 if on host
 */
__declspec(target(mic)) void dummy(double *v, long len);

/*
 * does nothing 
 */
__declspec(target(mic)) void dummyx(double *v, long len);

/*
 * fst[i] = i*n/nmic
 * array section v[fst[i]..fst[i+1]-1] is allocated on mic device #i
 */
void alloc_micmem(double *v, long n, int nmic);

/*
 * fst[i] = i*n/nmic
 * array section v[fst[i]..fst[i+1]-1] is freed on mic device #i
 */
void free_micmem(double *v, long n, int nmic);

/*
 * xfer v[0..n-1]
 * nmic = num of mic devices
 * xfer direction = in 
 *
 * memory on mics is neither allocated not freed
 */
void xfer_in(double *v, long n, int nmic);
/*
 * xfer direction = out
 */
void xfer_out(double *v, long n, int nmic);
/*
 * xfer direction = in and out
 */
void xfer_inout(double *v, long n, int nmic);
#endif

