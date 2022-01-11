/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package app */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */




/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt32 GoInt;
typedef GoUint32 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_32_bit_pointer_matching_GoInt[sizeof(void*)==32/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


/* Return type for SingleStar */
struct SingleStar_return {
	GoFloat32 r0;
	GoInt32 r1;
};
extern __declspec(dllexport) struct SingleStar_return SingleStar(GoInt dataLen, GoSlice a, GoSlice b, GoSlice c);

/* Return type for DoubleStars */
struct DoubleStars_return {
	GoFloat32 r0;
	GoInt32 r1;
};
extern __declspec(dllexport) struct DoubleStars_return DoubleStars(GoInt dataLen, GoSlice a, GoSlice b, GoSlice c);

/* Return type for ThreeStars */
struct ThreeStars_return {
	GoFloat32 r0;
	GoInt32 r1;
};
extern __declspec(dllexport) struct ThreeStars_return ThreeStars(GoInt dataLen, GoSlice a, GoSlice b, GoSlice c);
extern __declspec(dllexport) GoSlice FindFx(GoInt dataLen, GoSlice a, GoSlice b, GoSlice c);

#ifdef __cplusplus
}
#endif
