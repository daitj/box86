#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x86emu.h"
#include "emu/x86emu_private.h"
#include "callback.h"
#include "librarian.h"
#include "box86context.h"
#include "emu/x86emu_private.h"
#include "myalign.h"

const char* libsmName = "libSM.so.6";
#define LIBNAME libsm

#if 0
#define SUPER()
    GO(BZ2_bzCompressInit, iFpiii_t)

typedef struct libsm_my_s {
    // functions
    #define GO(A, B)    B   A;
    SUPER()
    #undef GO
} libsm_my_t;

void* getSMMy(library_t* lib)
{
    libsm_my_t* my = (libsm_my_t*)calloc(1, sizeof(libsm_my_t));
    #define GO(A, W) my->A = (W)dlsym(lib->priv.w.lib, #A);
    SUPER()
    #undef GO
    return my;
}
#undef SUPER

void freeSMMy(void* lib)
{
    libsm_my_t *my = (libsm_my_t *)lib;
}

#define CUSTOM_INIT \
    lib->priv.w.p2 = getSMMy(lib);

#define CUSTOM_FINI \
    freeSMMy(lib->priv.w.p2); \
    free(lib->priv.w.p2);
#endif

#include "wrappedlib_init.h"
