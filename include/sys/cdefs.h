#pragma once
#if defined(__ANDROID__)
#include_next <sys/cdefs.h>
#else
#ifndef __APPLE__
#include "../../bionic/libc/include/sys/cdefs.h"
#endif
#include_next <sys/cdefs.h>
#ifdef __BIONIC__
#undef __BIONIC__
#endif
#endif