/*  =========================================================================
    czmq - generated layer of public API

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of CZMQ, the high-level C binding for 0MQ:       
    http://czmq.zeromq.org.                                            
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef CZMQ_LIBRARY_H_INCLUDED
#define CZMQ_LIBRARY_H_INCLUDED

//  Set up environment for the application
#include "czmq_prelude.h"

//  External dependencies
#include <zmq.h>

//  CZMQ version macros for compile-time API detection
#define CZMQ_VERSION_MAJOR 3
#define CZMQ_VERSION_MINOR 0
#define CZMQ_VERSION_PATCH 3

#define CZMQ_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define CZMQ_VERSION \
    CZMQ_MAKE_VERSION(CZMQ_VERSION_MAJOR, CZMQ_VERSION_MINOR, CZMQ_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined CZMQ_STATIC
#       define CZMQ_EXPORT
#   elif defined CZMQ_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define CZMQ_EXPORT __declspec(dllexport)
#       else
#           define CZMQ_EXPORT
#       endif
#   elif defined CZMQ_EXPORTS
#       define CZMQ_EXPORT __declspec(dllexport)
#   else
#       define CZMQ_EXPORT __declspec(dllimport)
#   endif
#else
#   define CZMQ_EXPORT
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _zactor_t zactor_t;
#define ZACTOR_T_DEFINED
typedef struct _zarmour_t zarmour_t;
#define ZARMOUR_T_DEFINED
typedef struct _zcert_t zcert_t;
#define ZCERT_T_DEFINED
typedef struct _zcertstore_t zcertstore_t;
#define ZCERTSTORE_T_DEFINED
typedef struct _zchunk_t zchunk_t;
#define ZCHUNK_T_DEFINED
typedef struct _zclock_t zclock_t;
#define ZCLOCK_T_DEFINED
typedef struct _zconfig_t zconfig_t;
#define ZCONFIG_T_DEFINED
typedef struct _zdigest_t zdigest_t;
#define ZDIGEST_T_DEFINED
typedef struct _zdir_t zdir_t;
#define ZDIR_T_DEFINED
typedef struct _zdir_patch_t zdir_patch_t;
#define ZDIR_PATCH_T_DEFINED
typedef struct _zfile_t zfile_t;
#define ZFILE_T_DEFINED
typedef struct _zframe_t zframe_t;
#define ZFRAME_T_DEFINED
typedef struct _zhash_t zhash_t;
#define ZHASH_T_DEFINED
typedef struct _zhashx_t zhashx_t;
#define ZHASHX_T_DEFINED
typedef struct _ziflist_t ziflist_t;
#define ZIFLIST_T_DEFINED
typedef struct _zlist_t zlist_t;
#define ZLIST_T_DEFINED
typedef struct _zlistx_t zlistx_t;
#define ZLISTX_T_DEFINED
typedef struct _zloop_t zloop_t;
#define ZLOOP_T_DEFINED
typedef struct _zmsg_t zmsg_t;
#define ZMSG_T_DEFINED
typedef struct _zpoller_t zpoller_t;
#define ZPOLLER_T_DEFINED
typedef struct _zsock_t zsock_t;
#define ZSOCK_T_DEFINED
typedef struct _zstr_t zstr_t;
#define ZSTR_T_DEFINED
typedef struct _zuuid_t zuuid_t;
#define ZUUID_T_DEFINED
typedef struct _zauth_t zauth_t;
#define ZAUTH_T_DEFINED
typedef struct _zbeacon_t zbeacon_t;
#define ZBEACON_T_DEFINED
typedef struct _zgossip_t zgossip_t;
#define ZGOSSIP_T_DEFINED
typedef struct _zmonitor_t zmonitor_t;
#define ZMONITOR_T_DEFINED
typedef struct _zproxy_t zproxy_t;
#define ZPROXY_T_DEFINED
typedef struct _zrex_t zrex_t;
#define ZREX_T_DEFINED
typedef struct _zsys_t zsys_t;
#define ZSYS_T_DEFINED
typedef struct _zauth_v2_t zauth_v2_t;
#define ZAUTH_V2_T_DEFINED
typedef struct _zbeacon_v2_t zbeacon_v2_t;
#define ZBEACON_V2_T_DEFINED
typedef struct _zctx_t zctx_t;
#define ZCTX_T_DEFINED
typedef struct _zmonitor_v2_t zmonitor_v2_t;
#define ZMONITOR_V2_T_DEFINED
typedef struct _zmutex_t zmutex_t;
#define ZMUTEX_T_DEFINED
typedef struct _zproxy_v2_t zproxy_v2_t;
#define ZPROXY_V2_T_DEFINED
typedef struct _zsocket_t zsocket_t;
#define ZSOCKET_T_DEFINED
typedef struct _zsockopt_t zsockopt_t;
#define ZSOCKOPT_T_DEFINED
typedef struct _zthread_t zthread_t;
#define ZTHREAD_T_DEFINED
//  Draft classes are by default not built in stable releases
#ifdef CZMQ_BUILD_DRAFT_API
typedef struct _zproc_t zproc_t;
#define ZPROC_T_DEFINED
typedef struct _ztimerset_t ztimerset_t;
#define ZTIMERSET_T_DEFINED
typedef struct _ztrie_t ztrie_t;
#define ZTRIE_T_DEFINED
#endif // CZMQ_BUILD_DRAFT_API


//  Public classes, each with its own header file
#include "zactor.h"
#include "zarmour.h"
#include "zcert.h"
#include "zcertstore.h"
#include "zchunk.h"
#include "zclock.h"
#include "zconfig.h"
#include "zdigest.h"
#include "zdir.h"
#include "zdir_patch.h"
#include "zfile.h"
#include "zframe.h"
#include "zhash.h"
#include "zhashx.h"
#include "ziflist.h"
#include "zlist.h"
#include "zlistx.h"
#include "zloop.h"
#include "zmsg.h"
#include "zpoller.h"
#include "zsock.h"
#include "zstr.h"
#include "zuuid.h"
#include "zauth.h"
#include "zbeacon.h"
#include "zgossip.h"
#include "zmonitor.h"
#include "zproxy.h"
#include "zrex.h"
#include "zsys.h"
#include "zauth_v2.h"
#include "zbeacon_v2.h"
#include "zctx.h"
#include "zmonitor_v2.h"
#include "zmutex.h"
#include "zproxy_v2.h"
#include "zsocket.h"
#include "zsockopt.h"
#include "zthread.h"
#ifdef CZMQ_BUILD_DRAFT_API
#include "zproc.h"
#include "ztimerset.h"
#include "ztrie.h"
#endif // CZMQ_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
