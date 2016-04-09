// Generated code for Python source for module 'urllib3.exceptions'
// created by Nuitka version 0.5.20

// This code is in part copyright 2016 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

// The _module_urllib3$exceptions is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_urllib3$exceptions;
PyDictObject *moduledict_urllib3$exceptions;

// The module constants used
extern PyObject *const_str_plain_TimeoutError;
extern PyObject *const_str_digest_e97d412e3d3cfc92797a4434364dfe97;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_str_digest_caae7e70acce199048d0f76529b5d906;
extern PyObject *const_str_digest_d23d849ab02a6235eb0652ac312b2323;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_digest_02d7a9258b08750dd91ed5e916d12d0c;
extern PyObject *const_str_digest_4221c6866c41e5ab7b77b09bf6885351;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_str_plain___reduce__;
extern PyObject *const_tuple_4e5661b66775469145a3b4097a93b81e_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_LocationValueError;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341;
extern PyObject *const_str_digest_c85fd95998d676bb8b296c5552d11916;
extern PyObject *const_str_digest_4a013d92765c001c3fb877382f8b0d98;
extern PyObject *const_str_digest_d3e96f948eaa41c53caaae3833d57481;
extern PyObject *const_str_digest_1ac943b4741094a8fa467ee81285da04;
extern PyObject *const_str_digest_664d83eb41f8cfe3a1092e98f7d92027;
extern PyObject *const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72;
extern PyObject *const_str_digest_18a413fa4e7663b93b8950f08b00fb5d;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_LocationParseError;
extern PyObject *const_str_digest_0af1d92cbf25f8a036fda6803e038903;
extern PyObject *const_str_digest_d455563e1ef951148bac32f5cc949a27;
extern PyObject *const_str_digest_cb9b95f47cda8f2821509d84e8d824e3;
extern PyObject *const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2;
extern PyObject *const_str_plain_SecurityWarning;
static PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
extern PyObject *const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
extern PyObject *const_str_digest_3cba0a880d63b7b310fd43504b18c057;
extern PyObject *const_str_digest_0beacf6afb33b121e9545510332129fc;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_HostChangedError;
static PyObject *const_str_digest_51699f0bcdb12a9fe4e7e7f2c4da18cb;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_InsecureRequestWarning;
extern PyObject *const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple;
extern PyObject *const_str_digest_d54edb257b1240e069427ea15807c309;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_digest_1841b6b2ce0a167ae67629f6be182242;
extern PyObject *const_str_plain_SNIMissingWarning;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_HeaderParsingError;
extern PyObject *const_str_digest_906ad4a0fc873be8c0c812f03902dc29;
extern PyObject *const_str_digest_1b17e5345caa893d267645d5296f52b9;
extern PyObject *const_str_plain_ProxyError;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
extern PyObject *const_str_digest_3ecac7959fca6b094793e5853872d936;
static PyObject *const_str_plain_DependencyWarning;
extern PyObject *const_str_plain_EmptyPoolError;
extern PyObject *const_str_digest_f23f32cee9faa00b4a74b12aefddc51b;
extern PyObject *const_str_digest_85322d4279b2ac8026a5921e77f32165;
extern PyObject *const_str_digest_f2b3a878770698eea89e367a42f8081d;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_e6bf3288f7cb1387598878e66172f8b9;
extern PyObject *const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain_HTTPWarning;
extern PyObject *const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10;
extern PyObject *const_str_plain_SystemTimeWarning;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_ResponseNotChunked;
extern PyObject *const_str_plain_retries;
extern PyObject *const_str_plain_TimeoutStateError;
extern PyObject *const_str_plain_PoolError;
extern PyObject *const_str_digest_8e8ee501a73b92aaab075e946de662bf;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_digest_7cd1672c18c257a809407a1a63fa0e88;
extern PyObject *const_str_digest_b3cccf261f53b23aaf668796a6ebdda4;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_plain_RequestError;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_urllib3;
extern PyObject *const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde;
extern PyObject *const_str_digest_5cd5167a778e9ea5a19e045e34276deb;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_401d5766bd48277296aa1afc93f98bc4;
extern PyObject *const_str_digest_5ac3ff452137ae9d952f65688385427b;
extern PyObject *const_str_digest_0b3cbe0215684a287553275c21c89d2f;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_ResponseError;
extern PyObject *const_str_digest_2fd40a48b90d5dbc9586539edec8582e;
extern PyObject *const_str_plain_defects;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain_Unknown;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_digest_ffd5c59803af63cf2041e83ca8e66823;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9;
extern PyObject *const_str_plain_ClosedPoolError;
extern PyObject *const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_ProxySchemeUnknown;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_digest_6b2631bb00bf77812f4e433630f72b85;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_digest_aab7052c60d4b32517d511fe61caaef2;
extern PyObject *const_str_plain_unparsed_data;
extern PyObject *const_str_digest_52259094e9ef0d3b81149cff696bacc3;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_url;
extern PyObject *const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_digest_46584e2093371b92bd116a36f6fac20c;
extern PyObject *const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_DecodeError;
extern PyObject *const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple;
extern PyObject *const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_GENERIC_ERROR;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_InsecurePlatformWarning;
static PyObject *const_str_digest_50f562faa7eed1b409bdd05c97fc14f2;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c8562bbff9d721153deb2fdd066393d0 = UNSTREAM_STRING( &constant_bin[ 183714 ], 18, 0 );
    const_str_digest_51699f0bcdb12a9fe4e7e7f2c4da18cb = UNSTREAM_STRING( &constant_bin[ 716668 ], 54, 0 );
    const_str_plain_DependencyWarning = UNSTREAM_STRING( &constant_bin[ 716722 ], 17, 1 );
    const_str_digest_50f562faa7eed1b409bdd05c97fc14f2 = UNSTREAM_STRING( &constant_bin[ 716739 ], 99, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a20ede271bbc2dad4c5a5565340a021c;
static PyCodeObject *codeobj_ce48d4f0c87149e9e569b9ed5c098efc;
static PyCodeObject *codeobj_a528c26a37236caffd446214b4d0347f;
static PyCodeObject *codeobj_8ba21c9e0191291922d75f727bdd9793;
static PyCodeObject *codeobj_1738a95a6afd690440a6c93efca165aa;
static PyCodeObject *codeobj_08d3e65f3dbf2deb4ba1230b8fd79335;
static PyCodeObject *codeobj_730163d3d06a37aedc96ca0b9b6ae488;
static PyCodeObject *codeobj_53a81977e5b96872c4ca1e2d13cca471;
static PyCodeObject *codeobj_b625749bafcbd2b032558aada585cd75;
static PyCodeObject *codeobj_19f878e9f8cd0d50e8725de4bbe4a90b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_51699f0bcdb12a9fe4e7e7f2c4da18cb;
    codeobj_a20ede271bbc2dad4c5a5565340a021c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce48d4f0c87149e9e569b9ed5c098efc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 28, const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a528c26a37236caffd446214b4d0347f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 73, const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8ba21c9e0191291922d75f727bdd9793 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 85, const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1738a95a6afd690440a6c93efca165aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 140, const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_08d3e65f3dbf2deb4ba1230b8fd79335 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 200, const_tuple_str_plain_self_str_plain_scheme_str_plain_message_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_730163d3d06a37aedc96ca0b9b6ae488 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 207, const_tuple_77dc0fb361a835683c8e9a68cc070a8e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_53a81977e5b96872c4ca1e2d13cca471 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 21, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b625749bafcbd2b032558aada585cd75 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 32, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_19f878e9f8cd0d50e8725de4bbe4a90b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exceptions, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_HTTPError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_1__bases, PyObject *&closure_urllib3$exceptions_class_creation_1__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_1__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_1__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_HTTPWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_2__bases, PyObject *&closure_urllib3$exceptions_class_creation_2__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_2__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_2__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_PoolError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_3__bases, PyObject *&closure_urllib3$exceptions_class_creation_3__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_3__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_3__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_RequestError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_4__bases, PyObject *&closure_urllib3$exceptions_class_creation_4__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_4__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_4__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_SSLError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_5__bases, PyObject *&closure_urllib3$exceptions_class_creation_5__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_5__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_5__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_ProxyError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_6__bases, PyObject *&closure_urllib3$exceptions_class_creation_6__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_6__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_6__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_DecodeError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_7__bases, PyObject *&closure_urllib3$exceptions_class_creation_7__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_7__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_7__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_ProtocolError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_8__bases, PyObject *&closure_urllib3$exceptions_class_creation_8__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_8__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_8__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_MaxRetryError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_9__bases, PyObject *&closure_urllib3$exceptions_class_creation_9__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_9__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_9__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_HostChangedError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_10__bases, PyObject *&closure_urllib3$exceptions_class_creation_10__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_10__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_10__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_11_TimeoutStateError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_11__bases, PyObject *&closure_urllib3$exceptions_class_creation_11__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_11__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_11__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_12_TimeoutError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_12__bases, PyObject *&closure_urllib3$exceptions_class_creation_12__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_12__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_12__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_13_ReadTimeoutError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_13__bases, PyObject *&closure_urllib3$exceptions_class_creation_13__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_13__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_13__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_14_ConnectTimeoutError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_14__bases, PyObject *&closure_urllib3$exceptions_class_creation_14__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_14__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_14__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_15_NewConnectionError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_15__bases, PyObject *&closure_urllib3$exceptions_class_creation_15__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_15__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_15__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_16_EmptyPoolError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_16__bases, PyObject *&closure_urllib3$exceptions_class_creation_16__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_16__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_16__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_17_ClosedPoolError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_17__bases, PyObject *&closure_urllib3$exceptions_class_creation_17__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_17__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_17__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_18_LocationValueError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_18__bases, PyObject *&closure_urllib3$exceptions_class_creation_18__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_18__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_18__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_19_LocationParseError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_19__bases, PyObject *&closure_urllib3$exceptions_class_creation_19__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_19__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_19__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_20_ResponseError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_20__bases, PyObject *&closure_urllib3$exceptions_class_creation_20__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_20__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_20__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_21_SecurityWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_21__bases, PyObject *&closure_urllib3$exceptions_class_creation_21__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_21__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_21__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_22_SubjectAltNameWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_22__bases, PyObject *&closure_urllib3$exceptions_class_creation_22__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_22__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_22__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_23_InsecureRequestWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_23__bases, PyObject *&closure_urllib3$exceptions_class_creation_23__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_23__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_23__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_24_SystemTimeWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_24__bases, PyObject *&closure_urllib3$exceptions_class_creation_24__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_24__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_24__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_25_InsecurePlatformWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_25__bases, PyObject *&closure_urllib3$exceptions_class_creation_25__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_25__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_25__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_26_SNIMissingWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_26__bases, PyObject *&closure_urllib3$exceptions_class_creation_26__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_26__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_26__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_27_DependencyWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_27__bases, PyObject *&closure_urllib3$exceptions_class_creation_27__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_27__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_27__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_28_ResponseNotChunked_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_28__bases, PyObject *&closure_urllib3$exceptions_class_creation_28__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_28__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_28__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_29_ProxySchemeUnknown_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_29__bases, PyObject *&closure_urllib3$exceptions_class_creation_29__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_29__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_29__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_30_HeaderParsingError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_30__bases, PyObject *&closure_urllib3$exceptions_class_creation_30__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_30__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_30__prepared );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_HostChangedError_of_urllib3$exceptions( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_19_LocationParseError_of_urllib3$exceptions(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_29_ProxySchemeUnknown_of_urllib3$exceptions(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_30_HeaderParsingError_of_urllib3$exceptions(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_PoolError_of_urllib3$exceptions(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_RequestError_of_urllib3$exceptions(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_9_MaxRetryError_of_urllib3$exceptions( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2___reduce___of_class_3_PoolError_of_urllib3$exceptions(  );


static PyObject *MAKE_FUNCTION_function_2___reduce___of_class_4_RequestError_of_urllib3$exceptions(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_HTTPError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_1__bases, PyObject *&closure_urllib3$exceptions_class_creation_1__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_1__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_1__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_664d83eb41f8cfe3a1092e98f7d92027;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_HTTPError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_HTTPError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_1__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_HTTPError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_HTTPError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_HTTPWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_2__bases, PyObject *&closure_urllib3$exceptions_class_creation_2__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_2__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_2__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_2__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c85fd95998d676bb8b296c5552d11916;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_HTTPWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_2__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_HTTPWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_2__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_2_HTTPWarning_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_2_HTTPWarning_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_PoolError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_3__bases, PyObject *&closure_urllib3$exceptions_class_creation_3__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_3__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_3__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___reduce__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_3__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_401d5766bd48277296aa1afc93f98bc4;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_PoolError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_3_PoolError_of_urllib3$exceptions(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_2___reduce___of_class_3_PoolError_of_urllib3$exceptions(  );
    assert( var___reduce__ == NULL );
    var___reduce__ = tmp_assign_source_5;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_3__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_PoolError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_3__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___reduce__, var___reduce__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_3__class_decl_dict;

    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_6;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_3_PoolError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var___reduce__ );
    var___reduce__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var___reduce__ );
    var___reduce__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_3_PoolError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_3_PoolError_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_message = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a20ede271bbc2dad4c5a5565340a021c, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_assattr_name_1 = par_pool;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pool, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_pool;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_message;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_pool )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pool,
                    par_pool
                );

                assert( res == 0 );
            }

            if ( par_message )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    par_message
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_3_PoolError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_3_PoolError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_2___reduce___of_class_3_PoolError_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_53a81977e5b96872c4ca1e2d13cca471, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_1 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2___reduce___of_class_3_PoolError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2___reduce___of_class_3_PoolError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_4_RequestError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_4__bases, PyObject *&closure_urllib3$exceptions_class_creation_4__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_4__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_4__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___reduce__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_4__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_1ac943b4741094a8fa467ee81285da04;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_RequestError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_4_RequestError_of_urllib3$exceptions(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_2___reduce___of_class_4_RequestError_of_urllib3$exceptions(  );
    assert( var___reduce__ == NULL );
    var___reduce__ = tmp_assign_source_5;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_4__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_RequestError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_4__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___reduce__, var___reduce__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_4__class_decl_dict;

    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_6;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_4_RequestError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var___reduce__ );
    var___reduce__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var___reduce__ );
    var___reduce__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_4_RequestError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_4_RequestError_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_message = python_pars[ 3 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ce48d4f0c87149e9e569b9ed5c098efc, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_assattr_name_1 = par_url;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_url, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_pool;

    tmp_args_element_name_3 = par_message;

    frame_function->f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_pool )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pool,
                    par_pool
                );

                assert( res == 0 );
            }

            if ( par_url )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_url,
                    par_url
                );

                assert( res == 0 );
            }

            if ( par_message )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    par_message
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_4_RequestError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_4_RequestError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_2___reduce___of_class_4_RequestError_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b625749bafcbd2b032558aada585cd75, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_1 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2___reduce___of_class_4_RequestError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2___reduce___of_class_4_RequestError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_5_SSLError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_5__bases, PyObject *&closure_urllib3$exceptions_class_creation_5__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_5__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_5__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_5__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_0af1d92cbf25f8a036fda6803e038903;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_SSLError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_5__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SSLError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_5__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_5__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_5_SSLError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_5_SSLError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_6_ProxyError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_6__bases, PyObject *&closure_urllib3$exceptions_class_creation_6__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_6__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_6__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_6__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_7cd1672c18c257a809407a1a63fa0e88;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ProxyError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_6__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ProxyError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_6__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_6__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_6_ProxyError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_6_ProxyError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_7_DecodeError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_7__bases, PyObject *&closure_urllib3$exceptions_class_creation_7__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_7__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_7__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_7__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_0b3cbe0215684a287553275c21c89d2f;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_DecodeError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_7__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_DecodeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_7__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_7__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_7_DecodeError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_7_DecodeError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_8_ProtocolError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_8__bases, PyObject *&closure_urllib3$exceptions_class_creation_8__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_8__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_8__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_8__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d54edb257b1240e069427ea15807c309;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ProtocolError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_8__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ProtocolError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_8__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_8__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_8_ProtocolError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_8_ProtocolError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_9_MaxRetryError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_9__bases, PyObject *&closure_urllib3$exceptions_class_creation_9__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_9__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_9__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_9__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_MaxRetryError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_9_MaxRetryError_of_urllib3$exceptions( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_9__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_MaxRetryError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_9__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_9__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_5;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_9_MaxRetryError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_9_MaxRetryError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_9_MaxRetryError_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_reason = python_pars[ 3 ];
    PyObject *var_message = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a528c26a37236caffd446214b4d0347f, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_assattr_name_1 = par_reason;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_reason, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_8e8ee501a73b92aaab075e946de662bf;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_url;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_reason;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reason" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_pool;

    tmp_args_element_name_3 = par_url;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_message;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_pool )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pool,
                    par_pool
                );

                assert( res == 0 );
            }

            if ( par_url )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_url,
                    par_url
                );

                assert( res == 0 );
            }

            if ( par_reason )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_reason,
                    par_reason
                );

                assert( res == 0 );
            }

            if ( var_message )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    var_message
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_9_MaxRetryError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_reason );
    par_reason = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_reason );
    par_reason = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_9_MaxRetryError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_10_HostChangedError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_10__bases, PyObject *&closure_urllib3$exceptions_class_creation_10__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_10__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_10__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_10__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_3cba0a880d63b7b310fd43504b18c057;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_HostChangedError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_int_pos_3_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_10_HostChangedError_of_urllib3$exceptions( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_10__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_HostChangedError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_10__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_10__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_5;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_10_HostChangedError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_10_HostChangedError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_10_HostChangedError_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_retries = python_pars[ 3 ];
    PyObject *var_message = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8ba21c9e0191291922d75f727bdd9793, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_left_name_1 = const_str_digest_52259094e9ef0d3b81149cff696bacc3;
    tmp_right_name_1 = par_url;

    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = par_pool;

    tmp_args_element_name_3 = par_url;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_message;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_retries;

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_retries, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_pool )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pool,
                    par_pool
                );

                assert( res == 0 );
            }

            if ( par_url )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_url,
                    par_url
                );

                assert( res == 0 );
            }

            if ( par_retries )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_retries,
                    par_retries
                );

                assert( res == 0 );
            }

            if ( var_message )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    var_message
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_10_HostChangedError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_10_HostChangedError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_11_TimeoutStateError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_11__bases, PyObject *&closure_urllib3$exceptions_class_creation_11__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_11__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_11__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_11__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_caae7e70acce199048d0f76529b5d906;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_TimeoutStateError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_11__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_TimeoutStateError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_11__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_11__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_11_TimeoutStateError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_11_TimeoutStateError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_12_TimeoutError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_12__bases, PyObject *&closure_urllib3$exceptions_class_creation_12__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_12__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_12__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_12__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_TimeoutError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_12__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_TimeoutError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_12__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_12__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_12_TimeoutError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_12_TimeoutError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_13_ReadTimeoutError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_13__bases, PyObject *&closure_urllib3$exceptions_class_creation_13__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_13__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_13__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_13__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_906ad4a0fc873be8c0c812f03902dc29;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ReadTimeoutError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_13__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ReadTimeoutError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_13__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_13__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_13_ReadTimeoutError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_13_ReadTimeoutError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_14_ConnectTimeoutError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_14__bases, PyObject *&closure_urllib3$exceptions_class_creation_14__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_14__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_14__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_14__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d23d849ab02a6235eb0652ac312b2323;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ConnectTimeoutError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_14__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ConnectTimeoutError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_14__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_14__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_14_ConnectTimeoutError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_14_ConnectTimeoutError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_15_NewConnectionError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_15__bases, PyObject *&closure_urllib3$exceptions_class_creation_15__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_15__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_15__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_15__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_5cd5167a778e9ea5a19e045e34276deb;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_NewConnectionError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_15__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_NewConnectionError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_15__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_15__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_15_NewConnectionError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_15_NewConnectionError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_16_EmptyPoolError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_16__bases, PyObject *&closure_urllib3$exceptions_class_creation_16__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_16__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_16__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_16__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_1b17e5345caa893d267645d5296f52b9;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_EmptyPoolError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_16__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_EmptyPoolError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_16__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_16__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_16_EmptyPoolError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_16_EmptyPoolError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_17_ClosedPoolError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_17__bases, PyObject *&closure_urllib3$exceptions_class_creation_17__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_17__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_17__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_17__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_5ac3ff452137ae9d952f65688385427b;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ClosedPoolError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_17__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ClosedPoolError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_17__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_17__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_17_ClosedPoolError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_17_ClosedPoolError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_18_LocationValueError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_18__bases, PyObject *&closure_urllib3$exceptions_class_creation_18__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_18__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_18__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_18__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_LocationValueError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_18__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_LocationValueError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_18__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_18__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_18_LocationValueError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_18_LocationValueError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_19_LocationParseError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_19__bases, PyObject *&closure_urllib3$exceptions_class_creation_19__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_19__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_19__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_19__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_LocationParseError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_19_LocationParseError_of_urllib3$exceptions(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_19__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_LocationParseError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_19__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_19__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_5;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_19_LocationParseError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_19_LocationParseError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_19_LocationParseError_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_location = python_pars[ 1 ];
    PyObject *var_message = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1738a95a6afd690440a6c93efca165aa, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_left_name_1 = const_str_digest_cb9b95f47cda8f2821509d84e8d824e3;
    tmp_right_name_1 = par_location;

    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = var_message;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_location;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_location, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_location )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_location,
                    par_location
                );

                assert( res == 0 );
            }

            if ( var_message )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    var_message
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_19_LocationParseError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_location );
    par_location = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_location );
    par_location = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_19_LocationParseError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_20_ResponseError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_20__bases, PyObject *&closure_urllib3$exceptions_class_creation_20__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_20__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_20__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var_GENERIC_ERROR = NULL;
    PyObject *var_SPECIFIC_ERROR = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_20__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_4221c6866c41e5ab7b77b09bf6885351;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ResponseError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72;
    assert( var_GENERIC_ERROR == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_GENERIC_ERROR = tmp_assign_source_4;

    tmp_assign_source_5 = const_str_digest_b3cccf261f53b23aaf668796a6ebdda4;
    assert( var_SPECIFIC_ERROR == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_SPECIFIC_ERROR = tmp_assign_source_5;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_20__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ResponseError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_20__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_GENERIC_ERROR, var_GENERIC_ERROR );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_SPECIFIC_ERROR, var_SPECIFIC_ERROR );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_20__class_decl_dict;

    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_6;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_20_ResponseError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_GENERIC_ERROR );
    var_GENERIC_ERROR = NULL;

    Py_XDECREF( var_SPECIFIC_ERROR );
    var_SPECIFIC_ERROR = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_GENERIC_ERROR );
    var_GENERIC_ERROR = NULL;

    Py_XDECREF( var_SPECIFIC_ERROR );
    var_SPECIFIC_ERROR = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_20_ResponseError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_21_SecurityWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_21__bases, PyObject *&closure_urllib3$exceptions_class_creation_21__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_21__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_21__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_21__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_4a013d92765c001c3fb877382f8b0d98;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_SecurityWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_21__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SecurityWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_21__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_21__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_21_SecurityWarning_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_21_SecurityWarning_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_22_SubjectAltNameWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_22__bases, PyObject *&closure_urllib3$exceptions_class_creation_22__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_22__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_22__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_22__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d3e96f948eaa41c53caaae3833d57481;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_SubjectAltNameWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_22__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SubjectAltNameWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_22__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_22__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_22_SubjectAltNameWarning_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_22_SubjectAltNameWarning_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_23_InsecureRequestWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_23__bases, PyObject *&closure_urllib3$exceptions_class_creation_23__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_23__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_23__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_23__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_3ecac7959fca6b094793e5853872d936;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_InsecureRequestWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_23__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_InsecureRequestWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_23__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_23__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_23_InsecureRequestWarning_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_23_InsecureRequestWarning_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_24_SystemTimeWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_24__bases, PyObject *&closure_urllib3$exceptions_class_creation_24__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_24__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_24__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_24__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d455563e1ef951148bac32f5cc949a27;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_SystemTimeWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_24__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SystemTimeWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_24__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_24__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_24_SystemTimeWarning_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_24_SystemTimeWarning_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_25_InsecurePlatformWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_25__bases, PyObject *&closure_urllib3$exceptions_class_creation_25__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_25__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_25__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_25__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_85322d4279b2ac8026a5921e77f32165;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_InsecurePlatformWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_25__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_InsecurePlatformWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_25__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_25__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_25_InsecurePlatformWarning_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_25_InsecurePlatformWarning_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_26_SNIMissingWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_26__bases, PyObject *&closure_urllib3$exceptions_class_creation_26__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_26__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_26__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_26__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_0beacf6afb33b121e9545510332129fc;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_SNIMissingWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_26__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SNIMissingWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_26__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_26__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_26_SNIMissingWarning_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_26_SNIMissingWarning_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_27_DependencyWarning_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_27__bases, PyObject *&closure_urllib3$exceptions_class_creation_27__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_27__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_27__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_27__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_50f562faa7eed1b409bdd05c97fc14f2;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_DependencyWarning;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_27__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_DependencyWarning;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_27__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_27__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_27_DependencyWarning_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_27_DependencyWarning_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_28_ResponseNotChunked_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_28__bases, PyObject *&closure_urllib3$exceptions_class_creation_28__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_28__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_28__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_28__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ResponseNotChunked;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_28__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ResponseNotChunked;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_28__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_28__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_28_ResponseNotChunked_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_28_ResponseNotChunked_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_29_ProxySchemeUnknown_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_29__bases, PyObject *&closure_urllib3$exceptions_class_creation_29__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_29__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_29__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_29__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_ProxySchemeUnknown;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_29_ProxySchemeUnknown_of_urllib3$exceptions(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_29__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ProxySchemeUnknown;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_29__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_29__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_5;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_29_ProxySchemeUnknown_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_29_ProxySchemeUnknown_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_29_ProxySchemeUnknown_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *var_message = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_08d3e65f3dbf2deb4ba1230b8fd79335, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_left_name_1 = const_str_digest_ffd5c59803af63cf2041e83ca8e66823;
    tmp_right_name_1 = par_scheme;

    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxySchemeUnknown" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_message;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_scheme )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scheme,
                    par_scheme
                );

                assert( res == 0 );
            }

            if ( var_message )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    var_message
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_29_ProxySchemeUnknown_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_29_ProxySchemeUnknown_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_30_HeaderParsingError_of_urllib3$exceptions( PyObject **python_pars, PyObject *&closure_urllib3$exceptions_class_creation_30__bases, PyObject *&closure_urllib3$exceptions_class_creation_30__class_decl_dict, PyObject *&closure_urllib3$exceptions_class_creation_30__metaclass, PyObject *&closure_urllib3$exceptions_class_creation_30__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$exceptions_class_creation_30__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_6b2631bb00bf77812f4e433630f72b85;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_HeaderParsingError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_30_HeaderParsingError_of_urllib3$exceptions(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$exceptions_class_creation_30__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_HeaderParsingError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$exceptions_class_creation_30__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$exceptions_class_creation_30__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_5;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_30_HeaderParsingError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_30_HeaderParsingError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_30_HeaderParsingError_of_urllib3$exceptions( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_defects = python_pars[ 1 ];
    PyObject *par_unparsed_data = python_pars[ 2 ];
    PyObject *var_message = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_object_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_730163d3d06a37aedc96ca0b9b6ae488, module_urllib3$exceptions );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_left_name_1 = const_str_digest_46584e2093371b92bd116a36f6fac20c;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_or_left_value_1 = par_defects;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_or_right_value_1 = const_str_plain_Unknown;
    tmp_tuple_element_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_tuple_element_1 = tmp_or_left_value_1;
    or_end_1:;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_unparsed_data;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HeaderParsingError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_message;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_defects )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defects,
                    par_defects
                );

                assert( res == 0 );
            }

            if ( par_unparsed_data )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_unparsed_data,
                    par_unparsed_data
                );

                assert( res == 0 );
            }

            if ( var_message )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_message,
                    var_message
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_30_HeaderParsingError_of_urllib3$exceptions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_defects );
    par_defects = NULL;

    Py_XDECREF( par_unparsed_data );
    par_unparsed_data = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_defects );
    par_defects = NULL;

    Py_XDECREF( par_unparsed_data );
    par_unparsed_data = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_30_HeaderParsingError_of_urllib3$exceptions );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_HostChangedError_of_urllib3$exceptions( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_10_HostChangedError_of_urllib3$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_18a413fa4e7663b93b8950f08b00fb5d,
#endif
        codeobj_8ba21c9e0191291922d75f727bdd9793,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_19_LocationParseError_of_urllib3$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_19_LocationParseError_of_urllib3$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_e6bf3288f7cb1387598878e66172f8b9,
#endif
        codeobj_1738a95a6afd690440a6c93efca165aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_29_ProxySchemeUnknown_of_urllib3$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_29_ProxySchemeUnknown_of_urllib3$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_f2b3a878770698eea89e367a42f8081d,
#endif
        codeobj_08d3e65f3dbf2deb4ba1230b8fd79335,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_30_HeaderParsingError_of_urllib3$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_30_HeaderParsingError_of_urllib3$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_e97d412e3d3cfc92797a4434364dfe97,
#endif
        codeobj_730163d3d06a37aedc96ca0b9b6ae488,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_PoolError_of_urllib3$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_3_PoolError_of_urllib3$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_2fd40a48b90d5dbc9586539edec8582e,
#endif
        codeobj_a20ede271bbc2dad4c5a5565340a021c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_RequestError_of_urllib3$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_4_RequestError_of_urllib3$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_02d7a9258b08750dd91ed5e916d12d0c,
#endif
        codeobj_ce48d4f0c87149e9e569b9ed5c098efc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_9_MaxRetryError_of_urllib3$exceptions( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_9_MaxRetryError_of_urllib3$exceptions,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_1841b6b2ce0a167ae67629f6be182242,
#endif
        codeobj_a528c26a37236caffd446214b4d0347f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___reduce___of_class_3_PoolError_of_urllib3$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2___reduce___of_class_3_PoolError_of_urllib3$exceptions,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 330
        const_str_digest_f23f32cee9faa00b4a74b12aefddc51b,
#endif
        codeobj_53a81977e5b96872c4ca1e2d13cca471,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___reduce___of_class_4_RequestError_of_urllib3$exceptions(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2___reduce___of_class_4_RequestError_of_urllib3$exceptions,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 330
        const_str_digest_aab7052c60d4b32517d511fe61caaef2,
#endif
        codeobj_b625749bafcbd2b032558aada585cd75,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$exceptions,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.exceptions",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( urllib3$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$exceptions );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION >= 350
    PyType_Ready( &Nuitka_Coroutine_Type );
    PyType_Ready( &Nuitka_CoroutineWrapper_Type );
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    createModuleConstants();
    createModuleCodeObjects();

    // puts( "in initurllib3$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$exceptions = Py_InitModule4(
        "urllib3.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$exceptions = PyModule_Create( &mdef_urllib3$exceptions );
#endif

    moduledict_urllib3$exceptions = (PyDictObject *)((PyModuleObject *)module_urllib3$exceptions)->md_dict;

    CHECK_OBJECT( module_urllib3$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c8562bbff9d721153deb2fdd066393d0, module_urllib3$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_urllib3$exceptions );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_urllib3$exceptions_class_creation_1__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_1__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_1__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_2__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_2__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_2__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_3__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_3__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_3__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_4__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_4__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_4__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_5__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_5__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_5__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_6__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_6__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_6__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_7__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_7__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_7__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_8__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_8__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_8__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_9__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_9__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_9__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_10__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_10__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_10__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_11__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_11__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_11__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_12__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_12__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_12__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_13__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_13__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_13__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_14__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_14__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_14__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_15__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_15__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_15__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_16__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_16__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_16__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_17__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_17__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_17__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_18__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_18__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_18__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_19__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_19__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_19__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_20__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_20__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_20__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_21__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_21__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_21__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_22__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_22__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_22__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_23__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_23__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_23__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_24__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_24__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_24__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_25__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_25__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_25__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_25__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_26__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_26__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_26__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_26__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_27__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_27__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_27__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_27__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_28__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_28__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_28__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_28__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_29__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_29__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_29__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_29__prepared = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_30__bases = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_30__class_decl_dict = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_30__metaclass = NULL;
    PyObject *tmp_urllib3$exceptions_class_creation_30__prepared = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
    PyObject *tmp_args_name_21;
    PyObject *tmp_args_name_22;
    PyObject *tmp_args_name_23;
    PyObject *tmp_args_name_24;
    PyObject *tmp_args_name_25;
    PyObject *tmp_args_name_26;
    PyObject *tmp_args_name_27;
    PyObject *tmp_args_name_28;
    PyObject *tmp_args_name_29;
    PyObject *tmp_args_name_30;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_bases_name_9;
    PyObject *tmp_bases_name_10;
    PyObject *tmp_bases_name_11;
    PyObject *tmp_bases_name_12;
    PyObject *tmp_bases_name_13;
    PyObject *tmp_bases_name_14;
    PyObject *tmp_bases_name_15;
    PyObject *tmp_bases_name_16;
    PyObject *tmp_bases_name_17;
    PyObject *tmp_bases_name_18;
    PyObject *tmp_bases_name_19;
    PyObject *tmp_bases_name_20;
    PyObject *tmp_bases_name_21;
    PyObject *tmp_bases_name_22;
    PyObject *tmp_bases_name_23;
    PyObject *tmp_bases_name_24;
    PyObject *tmp_bases_name_25;
    PyObject *tmp_bases_name_26;
    PyObject *tmp_bases_name_27;
    PyObject *tmp_bases_name_28;
    PyObject *tmp_bases_name_29;
    PyObject *tmp_bases_name_30;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    int tmp_cmp_In_14;
    int tmp_cmp_In_15;
    int tmp_cmp_In_16;
    int tmp_cmp_In_17;
    int tmp_cmp_In_18;
    int tmp_cmp_In_19;
    int tmp_cmp_In_20;
    int tmp_cmp_In_21;
    int tmp_cmp_In_22;
    int tmp_cmp_In_23;
    int tmp_cmp_In_24;
    int tmp_cmp_In_25;
    int tmp_cmp_In_26;
    int tmp_cmp_In_27;
    int tmp_cmp_In_28;
    int tmp_cmp_In_29;
    int tmp_cmp_In_30;
    int tmp_cmp_In_31;
    int tmp_cmp_In_32;
    int tmp_cmp_In_33;
    int tmp_cmp_In_34;
    int tmp_cmp_In_35;
    int tmp_cmp_In_36;
    int tmp_cmp_In_37;
    int tmp_cmp_In_38;
    int tmp_cmp_In_39;
    int tmp_cmp_In_40;
    int tmp_cmp_In_41;
    int tmp_cmp_In_42;
    int tmp_cmp_In_43;
    int tmp_cmp_In_44;
    int tmp_cmp_In_45;
    int tmp_cmp_In_46;
    int tmp_cmp_In_47;
    int tmp_cmp_In_48;
    int tmp_cmp_In_49;
    int tmp_cmp_In_50;
    int tmp_cmp_In_51;
    int tmp_cmp_In_52;
    int tmp_cmp_In_53;
    int tmp_cmp_In_54;
    int tmp_cmp_In_55;
    int tmp_cmp_In_56;
    int tmp_cmp_In_57;
    int tmp_cmp_In_58;
    int tmp_cmp_In_59;
    int tmp_cmp_In_60;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_left_25;
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
    PyObject *tmp_compare_left_30;
    PyObject *tmp_compare_left_31;
    PyObject *tmp_compare_left_32;
    PyObject *tmp_compare_left_33;
    PyObject *tmp_compare_left_34;
    PyObject *tmp_compare_left_35;
    PyObject *tmp_compare_left_36;
    PyObject *tmp_compare_left_37;
    PyObject *tmp_compare_left_38;
    PyObject *tmp_compare_left_39;
    PyObject *tmp_compare_left_40;
    PyObject *tmp_compare_left_41;
    PyObject *tmp_compare_left_42;
    PyObject *tmp_compare_left_43;
    PyObject *tmp_compare_left_44;
    PyObject *tmp_compare_left_45;
    PyObject *tmp_compare_left_46;
    PyObject *tmp_compare_left_47;
    PyObject *tmp_compare_left_48;
    PyObject *tmp_compare_left_49;
    PyObject *tmp_compare_left_50;
    PyObject *tmp_compare_left_51;
    PyObject *tmp_compare_left_52;
    PyObject *tmp_compare_left_53;
    PyObject *tmp_compare_left_54;
    PyObject *tmp_compare_left_55;
    PyObject *tmp_compare_left_56;
    PyObject *tmp_compare_left_57;
    PyObject *tmp_compare_left_58;
    PyObject *tmp_compare_left_59;
    PyObject *tmp_compare_left_60;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    PyObject *tmp_compare_right_25;
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
    PyObject *tmp_compare_right_30;
    PyObject *tmp_compare_right_31;
    PyObject *tmp_compare_right_32;
    PyObject *tmp_compare_right_33;
    PyObject *tmp_compare_right_34;
    PyObject *tmp_compare_right_35;
    PyObject *tmp_compare_right_36;
    PyObject *tmp_compare_right_37;
    PyObject *tmp_compare_right_38;
    PyObject *tmp_compare_right_39;
    PyObject *tmp_compare_right_40;
    PyObject *tmp_compare_right_41;
    PyObject *tmp_compare_right_42;
    PyObject *tmp_compare_right_43;
    PyObject *tmp_compare_right_44;
    PyObject *tmp_compare_right_45;
    PyObject *tmp_compare_right_46;
    PyObject *tmp_compare_right_47;
    PyObject *tmp_compare_right_48;
    PyObject *tmp_compare_right_49;
    PyObject *tmp_compare_right_50;
    PyObject *tmp_compare_right_51;
    PyObject *tmp_compare_right_52;
    PyObject *tmp_compare_right_53;
    PyObject *tmp_compare_right_54;
    PyObject *tmp_compare_right_55;
    PyObject *tmp_compare_right_56;
    PyObject *tmp_compare_right_57;
    PyObject *tmp_compare_right_58;
    PyObject *tmp_compare_right_59;
    PyObject *tmp_compare_right_60;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
    int tmp_cond_truth_27;
    int tmp_cond_truth_28;
    int tmp_cond_truth_29;
    int tmp_cond_truth_30;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
    PyObject *tmp_cond_value_27;
    PyObject *tmp_cond_value_28;
    PyObject *tmp_cond_value_29;
    PyObject *tmp_cond_value_30;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_dict_name_24;
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_dict_name_27;
    PyObject *tmp_dict_name_28;
    PyObject *tmp_dict_name_29;
    PyObject *tmp_dict_name_30;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_attr_11;
    PyObject *tmp_hasattr_attr_12;
    PyObject *tmp_hasattr_attr_13;
    PyObject *tmp_hasattr_attr_14;
    PyObject *tmp_hasattr_attr_15;
    PyObject *tmp_hasattr_attr_16;
    PyObject *tmp_hasattr_attr_17;
    PyObject *tmp_hasattr_attr_18;
    PyObject *tmp_hasattr_attr_19;
    PyObject *tmp_hasattr_attr_20;
    PyObject *tmp_hasattr_attr_21;
    PyObject *tmp_hasattr_attr_22;
    PyObject *tmp_hasattr_attr_23;
    PyObject *tmp_hasattr_attr_24;
    PyObject *tmp_hasattr_attr_25;
    PyObject *tmp_hasattr_attr_26;
    PyObject *tmp_hasattr_attr_27;
    PyObject *tmp_hasattr_attr_28;
    PyObject *tmp_hasattr_attr_29;
    PyObject *tmp_hasattr_attr_30;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_hasattr_source_11;
    PyObject *tmp_hasattr_source_12;
    PyObject *tmp_hasattr_source_13;
    PyObject *tmp_hasattr_source_14;
    PyObject *tmp_hasattr_source_15;
    PyObject *tmp_hasattr_source_16;
    PyObject *tmp_hasattr_source_17;
    PyObject *tmp_hasattr_source_18;
    PyObject *tmp_hasattr_source_19;
    PyObject *tmp_hasattr_source_20;
    PyObject *tmp_hasattr_source_21;
    PyObject *tmp_hasattr_source_22;
    PyObject *tmp_hasattr_source_23;
    PyObject *tmp_hasattr_source_24;
    PyObject *tmp_hasattr_source_25;
    PyObject *tmp_hasattr_source_26;
    PyObject *tmp_hasattr_source_27;
    PyObject *tmp_hasattr_source_28;
    PyObject *tmp_hasattr_source_29;
    PyObject *tmp_hasattr_source_30;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_key_name_22;
    PyObject *tmp_key_name_23;
    PyObject *tmp_key_name_24;
    PyObject *tmp_key_name_25;
    PyObject *tmp_key_name_26;
    PyObject *tmp_key_name_27;
    PyObject *tmp_key_name_28;
    PyObject *tmp_key_name_29;
    PyObject *tmp_key_name_30;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_kw_name_21;
    PyObject *tmp_kw_name_22;
    PyObject *tmp_kw_name_23;
    PyObject *tmp_kw_name_24;
    PyObject *tmp_kw_name_25;
    PyObject *tmp_kw_name_26;
    PyObject *tmp_kw_name_27;
    PyObject *tmp_kw_name_28;
    PyObject *tmp_kw_name_29;
    PyObject *tmp_kw_name_30;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_metaclass_name_8;
    PyObject *tmp_metaclass_name_9;
    PyObject *tmp_metaclass_name_10;
    PyObject *tmp_metaclass_name_11;
    PyObject *tmp_metaclass_name_12;
    PyObject *tmp_metaclass_name_13;
    PyObject *tmp_metaclass_name_14;
    PyObject *tmp_metaclass_name_15;
    PyObject *tmp_metaclass_name_16;
    PyObject *tmp_metaclass_name_17;
    PyObject *tmp_metaclass_name_18;
    PyObject *tmp_metaclass_name_19;
    PyObject *tmp_metaclass_name_20;
    PyObject *tmp_metaclass_name_21;
    PyObject *tmp_metaclass_name_22;
    PyObject *tmp_metaclass_name_23;
    PyObject *tmp_metaclass_name_24;
    PyObject *tmp_metaclass_name_25;
    PyObject *tmp_metaclass_name_26;
    PyObject *tmp_metaclass_name_27;
    PyObject *tmp_metaclass_name_28;
    PyObject *tmp_metaclass_name_29;
    PyObject *tmp_metaclass_name_30;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscribed_name_23;
    PyObject *tmp_subscribed_name_24;
    PyObject *tmp_subscribed_name_25;
    PyObject *tmp_subscribed_name_26;
    PyObject *tmp_subscribed_name_27;
    PyObject *tmp_subscribed_name_28;
    PyObject *tmp_subscribed_name_29;
    PyObject *tmp_subscribed_name_30;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
    PyObject *tmp_subscript_name_23;
    PyObject *tmp_subscript_name_24;
    PyObject *tmp_subscript_name_25;
    PyObject *tmp_subscript_name_26;
    PyObject *tmp_subscript_name_27;
    PyObject *tmp_subscript_name_28;
    PyObject *tmp_subscript_name_29;
    PyObject *tmp_subscript_name_30;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_tuple_element_41;
    PyObject *tmp_tuple_element_42;
    PyObject *tmp_tuple_element_43;
    PyObject *tmp_tuple_element_44;
    PyObject *tmp_tuple_element_45;
    PyObject *tmp_tuple_element_46;
    PyObject *tmp_tuple_element_47;
    PyObject *tmp_tuple_element_48;
    PyObject *tmp_tuple_element_49;
    PyObject *tmp_tuple_element_50;
    PyObject *tmp_tuple_element_51;
    PyObject *tmp_tuple_element_52;
    PyObject *tmp_tuple_element_53;
    PyObject *tmp_tuple_element_54;
    PyObject *tmp_tuple_element_55;
    PyObject *tmp_tuple_element_56;
    PyObject *tmp_tuple_element_57;
    PyObject *tmp_tuple_element_58;
    PyObject *tmp_tuple_element_59;
    PyObject *tmp_tuple_element_60;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyObject *tmp_type_arg_13;
    PyObject *tmp_type_arg_14;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_type_arg_16;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_type_arg_18;
    PyObject *tmp_type_arg_19;
    PyObject *tmp_type_arg_20;
    PyObject *tmp_type_arg_21;
    PyObject *tmp_type_arg_22;
    PyObject *tmp_type_arg_23;
    PyObject *tmp_type_arg_24;
    PyObject *tmp_type_arg_25;
    PyObject *tmp_type_arg_26;
    PyObject *tmp_type_arg_27;
    PyObject *tmp_type_arg_28;
    PyObject *tmp_type_arg_29;
    PyObject *tmp_type_arg_30;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_51699f0bcdb12a9fe4e7e7f2c4da18cb;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_urllib3;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_1 );
    assert( tmp_urllib3$exceptions_class_creation_1__bases == NULL );
    tmp_urllib3$exceptions_class_creation_1__bases = tmp_assign_source_6;

    tmp_assign_source_7 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_1__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_1__class_decl_dict = tmp_assign_source_7;

    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_19f878e9f8cd0d50e8725de4bbe4a90b, module_urllib3$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_urllib3$exceptions_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_urllib3$exceptions_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_urllib3$exceptions_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_urllib3$exceptions_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_urllib3$exceptions_class_creation_1__bases;

    tmp_assign_source_8 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 5;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_urllib3$exceptions_class_creation_1__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_1__metaclass = tmp_assign_source_8;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_urllib3$exceptions_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_urllib3$exceptions_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_1 = tmp_urllib3$exceptions_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_HTTPError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_urllib3$exceptions_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_urllib3$exceptions_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 5;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_9 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_urllib3$exceptions_class_creation_1__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_1__prepared = tmp_assign_source_9;

    tmp_assign_source_10 = impl_class_1_HTTPError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_1__bases, tmp_urllib3$exceptions_class_creation_1__class_decl_dict, tmp_urllib3$exceptions_class_creation_1__metaclass, tmp_urllib3$exceptions_class_creation_1__prepared );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_10 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_1__bases );
    tmp_urllib3$exceptions_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_1__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_1__metaclass );
    tmp_urllib3$exceptions_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_1__prepared );
    tmp_urllib3$exceptions_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_1__bases );
    tmp_urllib3$exceptions_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_1__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_1__metaclass );
    tmp_urllib3$exceptions_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_1__prepared );
    tmp_urllib3$exceptions_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_3 );
    assert( tmp_urllib3$exceptions_class_creation_2__bases == NULL );
    tmp_urllib3$exceptions_class_creation_2__bases = tmp_assign_source_11;

    tmp_assign_source_12 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_2__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_2__class_decl_dict = tmp_assign_source_12;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_urllib3$exceptions_class_creation_2__class_decl_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_2 = tmp_urllib3$exceptions_class_creation_2__class_decl_dict;

    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_urllib3$exceptions_class_creation_2__bases;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_2 = tmp_urllib3$exceptions_class_creation_2__bases;

    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_urllib3$exceptions_class_creation_2__bases;

    tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 10;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_urllib3$exceptions_class_creation_2__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_2__metaclass = tmp_assign_source_13;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_urllib3$exceptions_class_creation_2__class_decl_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_2__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_urllib3$exceptions_class_creation_2__metaclass;

    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_2 = tmp_urllib3$exceptions_class_creation_2__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_HTTPWarning;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_urllib3$exceptions_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_urllib3$exceptions_class_creation_2__class_decl_dict;

    frame_module->f_lineno = 10;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_14 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_urllib3$exceptions_class_creation_2__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_2__prepared = tmp_assign_source_14;

    tmp_assign_source_15 = impl_class_2_HTTPWarning_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_2__bases, tmp_urllib3$exceptions_class_creation_2__class_decl_dict, tmp_urllib3$exceptions_class_creation_2__metaclass, tmp_urllib3$exceptions_class_creation_2__prepared );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning, tmp_assign_source_15 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_2__bases );
    tmp_urllib3$exceptions_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_2__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_2__metaclass );
    tmp_urllib3$exceptions_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_2__prepared );
    tmp_urllib3$exceptions_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_2__bases );
    tmp_urllib3$exceptions_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_2__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_2__metaclass );
    tmp_urllib3$exceptions_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_2__prepared );
    tmp_urllib3$exceptions_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_16 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_5 );
    assert( tmp_urllib3$exceptions_class_creation_3__bases == NULL );
    tmp_urllib3$exceptions_class_creation_3__bases = tmp_assign_source_16;

    tmp_assign_source_17 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_3__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_3__class_decl_dict = tmp_assign_source_17;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_urllib3$exceptions_class_creation_3__class_decl_dict;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_3 = tmp_urllib3$exceptions_class_creation_3__class_decl_dict;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_3 = tmp_urllib3$exceptions_class_creation_3__bases;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_subscribed_name_3 = tmp_urllib3$exceptions_class_creation_3__bases;

    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_3 != NULL );
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_urllib3$exceptions_class_creation_3__bases;

    tmp_assign_source_18 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 15;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_urllib3$exceptions_class_creation_3__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_3__metaclass = tmp_assign_source_18;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_urllib3$exceptions_class_creation_3__class_decl_dict;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_3__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_urllib3$exceptions_class_creation_3__metaclass;

    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_3 = tmp_urllib3$exceptions_class_creation_3__metaclass;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_PoolError;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_urllib3$exceptions_class_creation_3__bases;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    tmp_kw_name_3 = tmp_urllib3$exceptions_class_creation_3__class_decl_dict;

    frame_module->f_lineno = 15;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_19 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_urllib3$exceptions_class_creation_3__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_3__prepared = tmp_assign_source_19;

    tmp_assign_source_20 = impl_class_3_PoolError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_3__bases, tmp_urllib3$exceptions_class_creation_3__class_decl_dict, tmp_urllib3$exceptions_class_creation_3__metaclass, tmp_urllib3$exceptions_class_creation_3__prepared );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError, tmp_assign_source_20 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_3__bases );
    tmp_urllib3$exceptions_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_3__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_3__metaclass );
    tmp_urllib3$exceptions_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_3__prepared );
    tmp_urllib3$exceptions_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_3__bases );
    tmp_urllib3$exceptions_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_3__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_3__metaclass );
    tmp_urllib3$exceptions_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_3__prepared );
    tmp_urllib3$exceptions_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_21 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 0, tmp_tuple_element_7 );
    assert( tmp_urllib3$exceptions_class_creation_4__bases == NULL );
    tmp_urllib3$exceptions_class_creation_4__bases = tmp_assign_source_21;

    tmp_assign_source_22 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_4__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_4__class_decl_dict = tmp_assign_source_22;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_urllib3$exceptions_class_creation_4__class_decl_dict;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_4 = tmp_urllib3$exceptions_class_creation_4__class_decl_dict;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_4 = tmp_urllib3$exceptions_class_creation_4__bases;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_subscribed_name_4 = tmp_urllib3$exceptions_class_creation_4__bases;

    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_4 != NULL );
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_urllib3$exceptions_class_creation_4__bases;

    tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 26;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_urllib3$exceptions_class_creation_4__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_4__metaclass = tmp_assign_source_23;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_urllib3$exceptions_class_creation_4__class_decl_dict;

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_4__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_urllib3$exceptions_class_creation_4__metaclass;

    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_4 = tmp_urllib3$exceptions_class_creation_4__metaclass;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_RequestError;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_urllib3$exceptions_class_creation_4__bases;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_kw_name_4 = tmp_urllib3$exceptions_class_creation_4__class_decl_dict;

    frame_module->f_lineno = 26;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_24 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_urllib3$exceptions_class_creation_4__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_4__prepared = tmp_assign_source_24;

    tmp_assign_source_25 = impl_class_4_RequestError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_4__bases, tmp_urllib3$exceptions_class_creation_4__class_decl_dict, tmp_urllib3$exceptions_class_creation_4__metaclass, tmp_urllib3$exceptions_class_creation_4__prepared );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError, tmp_assign_source_25 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_4__bases );
    tmp_urllib3$exceptions_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_4__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_4__metaclass );
    tmp_urllib3$exceptions_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_4__prepared );
    tmp_urllib3$exceptions_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_4__bases );
    tmp_urllib3$exceptions_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_4__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_4__metaclass );
    tmp_urllib3$exceptions_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_4__prepared );
    tmp_urllib3$exceptions_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_26 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_26, 0, tmp_tuple_element_9 );
    assert( tmp_urllib3$exceptions_class_creation_5__bases == NULL );
    tmp_urllib3$exceptions_class_creation_5__bases = tmp_assign_source_26;

    tmp_assign_source_27 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_5__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_5__class_decl_dict = tmp_assign_source_27;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_urllib3$exceptions_class_creation_5__class_decl_dict;

    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_9 == -1) );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_5 = tmp_urllib3$exceptions_class_creation_5__class_decl_dict;

    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_5 = tmp_urllib3$exceptions_class_creation_5__bases;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_subscribed_name_5 = tmp_urllib3$exceptions_class_creation_5__bases;

    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_5 != NULL );
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_urllib3$exceptions_class_creation_5__bases;

    tmp_assign_source_28 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_5 );

        exception_lineno = 37;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_5 );
    assert( tmp_urllib3$exceptions_class_creation_5__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_5__metaclass = tmp_assign_source_28;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_urllib3$exceptions_class_creation_5__class_decl_dict;

    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_5__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_urllib3$exceptions_class_creation_5__metaclass;

    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_5 = tmp_urllib3$exceptions_class_creation_5__metaclass;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain_SSLError;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_urllib3$exceptions_class_creation_5__bases;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    tmp_kw_name_5 = tmp_urllib3$exceptions_class_creation_5__class_decl_dict;

    frame_module->f_lineno = 37;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_29 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_urllib3$exceptions_class_creation_5__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_5__prepared = tmp_assign_source_29;

    tmp_assign_source_30 = impl_class_5_SSLError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_5__bases, tmp_urllib3$exceptions_class_creation_5__class_decl_dict, tmp_urllib3$exceptions_class_creation_5__metaclass, tmp_urllib3$exceptions_class_creation_5__prepared );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_30 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_5__bases );
    tmp_urllib3$exceptions_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_5__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_5__metaclass );
    tmp_urllib3$exceptions_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_5__prepared );
    tmp_urllib3$exceptions_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_5__bases );
    tmp_urllib3$exceptions_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_5__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_5__metaclass );
    tmp_urllib3$exceptions_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_5__prepared );
    tmp_urllib3$exceptions_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_31 = PyTuple_New( 1 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_11 );
    assert( tmp_urllib3$exceptions_class_creation_6__bases == NULL );
    tmp_urllib3$exceptions_class_creation_6__bases = tmp_assign_source_31;

    tmp_assign_source_32 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_6__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_6__class_decl_dict = tmp_assign_source_32;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_urllib3$exceptions_class_creation_6__class_decl_dict;

    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_11 == -1) );
    if ( tmp_cmp_In_11 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_6 = tmp_urllib3$exceptions_class_creation_6__class_decl_dict;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_6 = tmp_urllib3$exceptions_class_creation_6__bases;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_subscribed_name_6 = tmp_urllib3$exceptions_class_creation_6__bases;

    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_6 != NULL );
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_urllib3$exceptions_class_creation_6__bases;

    tmp_assign_source_33 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_6 );

        exception_lineno = 42;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_metaclass_name_6 );
    assert( tmp_urllib3$exceptions_class_creation_6__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_6__metaclass = tmp_assign_source_33;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_urllib3$exceptions_class_creation_6__class_decl_dict;

    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_12 == -1) );
    if ( tmp_cmp_In_12 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_6__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_urllib3$exceptions_class_creation_6__metaclass;

    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_6 = tmp_urllib3$exceptions_class_creation_6__metaclass;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    tmp_args_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_12 = const_str_plain_ProxyError;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_urllib3$exceptions_class_creation_6__bases;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_kw_name_6 = tmp_urllib3$exceptions_class_creation_6__class_decl_dict;

    frame_module->f_lineno = 42;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_34 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_urllib3$exceptions_class_creation_6__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_6__prepared = tmp_assign_source_34;

    tmp_assign_source_35 = impl_class_6_ProxyError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_6__bases, tmp_urllib3$exceptions_class_creation_6__class_decl_dict, tmp_urllib3$exceptions_class_creation_6__metaclass, tmp_urllib3$exceptions_class_creation_6__prepared );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_35 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_6__bases );
    tmp_urllib3$exceptions_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_6__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_6__metaclass );
    tmp_urllib3$exceptions_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_6__prepared );
    tmp_urllib3$exceptions_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_6__bases );
    tmp_urllib3$exceptions_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_6__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_6__metaclass );
    tmp_urllib3$exceptions_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_6__prepared );
    tmp_urllib3$exceptions_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_36 = PyTuple_New( 1 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_36, 0, tmp_tuple_element_13 );
    assert( tmp_urllib3$exceptions_class_creation_7__bases == NULL );
    tmp_urllib3$exceptions_class_creation_7__bases = tmp_assign_source_36;

    tmp_assign_source_37 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_7__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_7__class_decl_dict = tmp_assign_source_37;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_urllib3$exceptions_class_creation_7__class_decl_dict;

    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_13 == -1) );
    if ( tmp_cmp_In_13 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_7 = tmp_urllib3$exceptions_class_creation_7__class_decl_dict;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_7 = tmp_urllib3$exceptions_class_creation_7__bases;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_subscribed_name_7 = tmp_urllib3$exceptions_class_creation_7__bases;

    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_metaclass_name_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_7 != NULL );
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_bases_name_7 = tmp_urllib3$exceptions_class_creation_7__bases;

    tmp_assign_source_38 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_7 );

        exception_lineno = 47;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_metaclass_name_7 );
    assert( tmp_urllib3$exceptions_class_creation_7__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_7__metaclass = tmp_assign_source_38;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_urllib3$exceptions_class_creation_7__class_decl_dict;

    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    assert( !(tmp_cmp_In_14 == -1) );
    if ( tmp_cmp_In_14 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_7__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_urllib3$exceptions_class_creation_7__metaclass;

    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_source_name_7 = tmp_urllib3$exceptions_class_creation_7__metaclass;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain_DecodeError;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_urllib3$exceptions_class_creation_7__bases;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    tmp_kw_name_7 = tmp_urllib3$exceptions_class_creation_7__class_decl_dict;

    frame_module->f_lineno = 47;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_39 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_urllib3$exceptions_class_creation_7__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_7__prepared = tmp_assign_source_39;

    tmp_assign_source_40 = impl_class_7_DecodeError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_7__bases, tmp_urllib3$exceptions_class_creation_7__class_decl_dict, tmp_urllib3$exceptions_class_creation_7__metaclass, tmp_urllib3$exceptions_class_creation_7__prepared );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_DecodeError, tmp_assign_source_40 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_7__bases );
    tmp_urllib3$exceptions_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_7__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_7__metaclass );
    tmp_urllib3$exceptions_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_7__prepared );
    tmp_urllib3$exceptions_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_7__bases );
    tmp_urllib3$exceptions_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_7__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_7__metaclass );
    tmp_urllib3$exceptions_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_7__prepared );
    tmp_urllib3$exceptions_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_assign_source_41 = PyTuple_New( 1 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_41 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_41, 0, tmp_tuple_element_15 );
    assert( tmp_urllib3$exceptions_class_creation_8__bases == NULL );
    tmp_urllib3$exceptions_class_creation_8__bases = tmp_assign_source_41;

    tmp_assign_source_42 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_8__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_8__class_decl_dict = tmp_assign_source_42;

    tmp_compare_left_15 = const_str_plain_metaclass;
    tmp_compare_right_15 = tmp_urllib3$exceptions_class_creation_8__class_decl_dict;

    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    assert( !(tmp_cmp_In_15 == -1) );
    if ( tmp_cmp_In_15 == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dict_name_8 = tmp_urllib3$exceptions_class_creation_8__class_decl_dict;

    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_8 = tmp_urllib3$exceptions_class_creation_8__bases;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_subscribed_name_8 = tmp_urllib3$exceptions_class_creation_8__bases;

    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_metaclass_name_8 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_8 != NULL );
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_bases_name_8 = tmp_urllib3$exceptions_class_creation_8__bases;

    tmp_assign_source_43 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_8 );

        exception_lineno = 52;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_metaclass_name_8 );
    assert( tmp_urllib3$exceptions_class_creation_8__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_8__metaclass = tmp_assign_source_43;

    tmp_compare_left_16 = const_str_plain_metaclass;
    tmp_compare_right_16 = tmp_urllib3$exceptions_class_creation_8__class_decl_dict;

    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    assert( !(tmp_cmp_In_16 == -1) );
    if ( tmp_cmp_In_16 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_8__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_urllib3$exceptions_class_creation_8__metaclass;

    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_source_name_8 = tmp_urllib3$exceptions_class_creation_8__metaclass;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    tmp_args_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_ProtocolError;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_urllib3$exceptions_class_creation_8__bases;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
    tmp_kw_name_8 = tmp_urllib3$exceptions_class_creation_8__class_decl_dict;

    frame_module->f_lineno = 52;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_44 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_urllib3$exceptions_class_creation_8__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_8__prepared = tmp_assign_source_44;

    tmp_assign_source_45 = impl_class_8_ProtocolError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_8__bases, tmp_urllib3$exceptions_class_creation_8__class_decl_dict, tmp_urllib3$exceptions_class_creation_8__metaclass, tmp_urllib3$exceptions_class_creation_8__prepared );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_45 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_8__bases );
    tmp_urllib3$exceptions_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_8__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_8__metaclass );
    tmp_urllib3$exceptions_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_8__prepared );
    tmp_urllib3$exceptions_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_8__bases );
    tmp_urllib3$exceptions_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_8__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_8__metaclass );
    tmp_urllib3$exceptions_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_8__prepared );
    tmp_urllib3$exceptions_class_creation_8__prepared = NULL;

    tmp_assign_source_46 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_assign_source_46 == NULL ))
    {
        tmp_assign_source_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_assign_source_46 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_46 );
    // Tried code:
    tmp_assign_source_47 = PyTuple_New( 1 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_17 );
    assert( tmp_urllib3$exceptions_class_creation_9__bases == NULL );
    tmp_urllib3$exceptions_class_creation_9__bases = tmp_assign_source_47;

    tmp_assign_source_48 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_9__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_9__class_decl_dict = tmp_assign_source_48;

    tmp_compare_left_17 = const_str_plain_metaclass;
    tmp_compare_right_17 = tmp_urllib3$exceptions_class_creation_9__class_decl_dict;

    tmp_cmp_In_17 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    assert( !(tmp_cmp_In_17 == -1) );
    if ( tmp_cmp_In_17 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_9 = tmp_urllib3$exceptions_class_creation_9__class_decl_dict;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_cond_value_9 = tmp_urllib3$exceptions_class_creation_9__bases;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_subscribed_name_9 = tmp_urllib3$exceptions_class_creation_9__bases;

    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_metaclass_name_9 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_9 != NULL );
    Py_INCREF( tmp_metaclass_name_9 );
    condexpr_end_26:;
    condexpr_end_25:;
    tmp_bases_name_9 = tmp_urllib3$exceptions_class_creation_9__bases;

    tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_9 );

        exception_lineno = 63;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_metaclass_name_9 );
    assert( tmp_urllib3$exceptions_class_creation_9__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_9__metaclass = tmp_assign_source_49;

    tmp_compare_left_18 = const_str_plain_metaclass;
    tmp_compare_right_18 = tmp_urllib3$exceptions_class_creation_9__class_decl_dict;

    tmp_cmp_In_18 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    assert( !(tmp_cmp_In_18 == -1) );
    if ( tmp_cmp_In_18 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_9__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    branch_no_9:;
    tmp_hasattr_source_9 = tmp_urllib3$exceptions_class_creation_9__metaclass;

    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_source_name_9 = tmp_urllib3$exceptions_class_creation_9__metaclass;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_18 = const_str_plain_MaxRetryError;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = tmp_urllib3$exceptions_class_creation_9__bases;

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_18 );
    tmp_kw_name_9 = tmp_urllib3$exceptions_class_creation_9__class_decl_dict;

    frame_module->f_lineno = 63;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_50 = PyDict_New();
    condexpr_end_27:;
    assert( tmp_urllib3$exceptions_class_creation_9__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_9__prepared = tmp_assign_source_50;

    tmp_assign_source_51 = impl_class_9_MaxRetryError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_9__bases, tmp_urllib3$exceptions_class_creation_9__class_decl_dict, tmp_urllib3$exceptions_class_creation_9__metaclass, tmp_urllib3$exceptions_class_creation_9__prepared );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_51 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_9__bases );
    tmp_urllib3$exceptions_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_9__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_9__metaclass );
    tmp_urllib3$exceptions_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_9__prepared );
    tmp_urllib3$exceptions_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_9__bases );
    tmp_urllib3$exceptions_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_9__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_9__metaclass );
    tmp_urllib3$exceptions_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_9__prepared );
    tmp_urllib3$exceptions_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_assign_source_52 = PyTuple_New( 1 );
    tmp_tuple_element_19 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_19 == NULL ))
    {
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        goto try_except_handler_10;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_19 );
    assert( tmp_urllib3$exceptions_class_creation_10__bases == NULL );
    tmp_urllib3$exceptions_class_creation_10__bases = tmp_assign_source_52;

    tmp_assign_source_53 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_10__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_10__class_decl_dict = tmp_assign_source_53;

    tmp_compare_left_19 = const_str_plain_metaclass;
    tmp_compare_right_19 = tmp_urllib3$exceptions_class_creation_10__class_decl_dict;

    tmp_cmp_In_19 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    assert( !(tmp_cmp_In_19 == -1) );
    if ( tmp_cmp_In_19 == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_dict_name_10 = tmp_urllib3$exceptions_class_creation_10__class_decl_dict;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_cond_value_10 = tmp_urllib3$exceptions_class_creation_10__bases;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto condexpr_true_29;
    }
    else
    {
        goto condexpr_false_29;
    }
    condexpr_true_29:;
    tmp_subscribed_name_10 = tmp_urllib3$exceptions_class_creation_10__bases;

    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_metaclass_name_10 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_10 != NULL );
    Py_INCREF( tmp_metaclass_name_10 );
    condexpr_end_29:;
    condexpr_end_28:;
    tmp_bases_name_10 = tmp_urllib3$exceptions_class_creation_10__bases;

    tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_10 );

        exception_lineno = 82;
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_metaclass_name_10 );
    assert( tmp_urllib3$exceptions_class_creation_10__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_10__metaclass = tmp_assign_source_54;

    tmp_compare_left_20 = const_str_plain_metaclass;
    tmp_compare_right_20 = tmp_urllib3$exceptions_class_creation_10__class_decl_dict;

    tmp_cmp_In_20 = PySequence_Contains( tmp_compare_right_20, tmp_compare_left_20 );
    assert( !(tmp_cmp_In_20 == -1) );
    if ( tmp_cmp_In_20 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_10__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    branch_no_10:;
    tmp_hasattr_source_10 = tmp_urllib3$exceptions_class_creation_10__metaclass;

    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_30;
    }
    else
    {
        goto condexpr_false_30;
    }
    condexpr_true_30:;
    tmp_source_name_10 = tmp_urllib3$exceptions_class_creation_10__metaclass;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    tmp_args_name_10 = PyTuple_New( 2 );
    tmp_tuple_element_20 = const_str_plain_HostChangedError;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_urllib3$exceptions_class_creation_10__bases;

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_20 );
    tmp_kw_name_10 = tmp_urllib3$exceptions_class_creation_10__class_decl_dict;

    frame_module->f_lineno = 82;
    tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_assign_source_55 = PyDict_New();
    condexpr_end_30:;
    assert( tmp_urllib3$exceptions_class_creation_10__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_10__prepared = tmp_assign_source_55;

    tmp_assign_source_56 = impl_class_10_HostChangedError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_10__bases, tmp_urllib3$exceptions_class_creation_10__class_decl_dict, tmp_urllib3$exceptions_class_creation_10__metaclass, tmp_urllib3$exceptions_class_creation_10__prepared );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HostChangedError, tmp_assign_source_56 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_10__bases );
    tmp_urllib3$exceptions_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_10__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_10__metaclass );
    tmp_urllib3$exceptions_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_10__prepared );
    tmp_urllib3$exceptions_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_10__bases );
    tmp_urllib3$exceptions_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_10__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_10__metaclass );
    tmp_urllib3$exceptions_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_10__prepared );
    tmp_urllib3$exceptions_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_assign_source_57 = PyTuple_New( 1 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_57 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_57, 0, tmp_tuple_element_21 );
    assert( tmp_urllib3$exceptions_class_creation_11__bases == NULL );
    tmp_urllib3$exceptions_class_creation_11__bases = tmp_assign_source_57;

    tmp_assign_source_58 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_11__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_11__class_decl_dict = tmp_assign_source_58;

    tmp_compare_left_21 = const_str_plain_metaclass;
    tmp_compare_right_21 = tmp_urllib3$exceptions_class_creation_11__class_decl_dict;

    tmp_cmp_In_21 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    assert( !(tmp_cmp_In_21 == -1) );
    if ( tmp_cmp_In_21 == 1 )
    {
        goto condexpr_true_31;
    }
    else
    {
        goto condexpr_false_31;
    }
    condexpr_true_31:;
    tmp_dict_name_11 = tmp_urllib3$exceptions_class_creation_11__class_decl_dict;

    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_cond_value_11 = tmp_urllib3$exceptions_class_creation_11__bases;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_32;
    }
    else
    {
        goto condexpr_false_32;
    }
    condexpr_true_32:;
    tmp_subscribed_name_11 = tmp_urllib3$exceptions_class_creation_11__bases;

    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    tmp_metaclass_name_11 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_metaclass_name_11 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_11 != NULL );
    Py_INCREF( tmp_metaclass_name_11 );
    condexpr_end_32:;
    condexpr_end_31:;
    tmp_bases_name_11 = tmp_urllib3$exceptions_class_creation_11__bases;

    tmp_assign_source_59 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_11 );

        exception_lineno = 91;
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_metaclass_name_11 );
    assert( tmp_urllib3$exceptions_class_creation_11__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_11__metaclass = tmp_assign_source_59;

    tmp_compare_left_22 = const_str_plain_metaclass;
    tmp_compare_right_22 = tmp_urllib3$exceptions_class_creation_11__class_decl_dict;

    tmp_cmp_In_22 = PySequence_Contains( tmp_compare_right_22, tmp_compare_left_22 );
    assert( !(tmp_cmp_In_22 == -1) );
    if ( tmp_cmp_In_22 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_11__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    branch_no_11:;
    tmp_hasattr_source_11 = tmp_urllib3$exceptions_class_creation_11__metaclass;

    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_33;
    }
    else
    {
        goto condexpr_false_33;
    }
    condexpr_true_33:;
    tmp_source_name_11 = tmp_urllib3$exceptions_class_creation_11__metaclass;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    tmp_args_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_22 = const_str_plain_TimeoutStateError;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_urllib3$exceptions_class_creation_11__bases;

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_22 );
    tmp_kw_name_11 = tmp_urllib3$exceptions_class_creation_11__class_decl_dict;

    frame_module->f_lineno = 91;
    tmp_assign_source_60 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_assign_source_60 = PyDict_New();
    condexpr_end_33:;
    assert( tmp_urllib3$exceptions_class_creation_11__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_11__prepared = tmp_assign_source_60;

    tmp_assign_source_61 = impl_class_11_TimeoutStateError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_11__bases, tmp_urllib3$exceptions_class_creation_11__class_decl_dict, tmp_urllib3$exceptions_class_creation_11__metaclass, tmp_urllib3$exceptions_class_creation_11__prepared );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutStateError, tmp_assign_source_61 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_11__bases );
    tmp_urllib3$exceptions_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_11__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_11__metaclass );
    tmp_urllib3$exceptions_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_11__prepared );
    tmp_urllib3$exceptions_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_11__bases );
    tmp_urllib3$exceptions_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_11__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_11__metaclass );
    tmp_urllib3$exceptions_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_11__prepared );
    tmp_urllib3$exceptions_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_assign_source_62 = PyTuple_New( 1 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_62 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        goto try_except_handler_12;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_assign_source_62, 0, tmp_tuple_element_23 );
    assert( tmp_urllib3$exceptions_class_creation_12__bases == NULL );
    tmp_urllib3$exceptions_class_creation_12__bases = tmp_assign_source_62;

    tmp_assign_source_63 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_12__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_12__class_decl_dict = tmp_assign_source_63;

    tmp_compare_left_23 = const_str_plain_metaclass;
    tmp_compare_right_23 = tmp_urllib3$exceptions_class_creation_12__class_decl_dict;

    tmp_cmp_In_23 = PySequence_Contains( tmp_compare_right_23, tmp_compare_left_23 );
    assert( !(tmp_cmp_In_23 == -1) );
    if ( tmp_cmp_In_23 == 1 )
    {
        goto condexpr_true_34;
    }
    else
    {
        goto condexpr_false_34;
    }
    condexpr_true_34:;
    tmp_dict_name_12 = tmp_urllib3$exceptions_class_creation_12__class_decl_dict;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_cond_value_12 = tmp_urllib3$exceptions_class_creation_12__bases;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto condexpr_true_35;
    }
    else
    {
        goto condexpr_false_35;
    }
    condexpr_true_35:;
    tmp_subscribed_name_12 = tmp_urllib3$exceptions_class_creation_12__bases;

    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    tmp_metaclass_name_12 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    goto condexpr_end_35;
    condexpr_false_35:;
    tmp_metaclass_name_12 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_12 != NULL );
    Py_INCREF( tmp_metaclass_name_12 );
    condexpr_end_35:;
    condexpr_end_34:;
    tmp_bases_name_12 = tmp_urllib3$exceptions_class_creation_12__bases;

    tmp_assign_source_64 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_12 );

        exception_lineno = 96;
        goto try_except_handler_12;
    }
    Py_DECREF( tmp_metaclass_name_12 );
    assert( tmp_urllib3$exceptions_class_creation_12__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_12__metaclass = tmp_assign_source_64;

    tmp_compare_left_24 = const_str_plain_metaclass;
    tmp_compare_right_24 = tmp_urllib3$exceptions_class_creation_12__class_decl_dict;

    tmp_cmp_In_24 = PySequence_Contains( tmp_compare_right_24, tmp_compare_left_24 );
    assert( !(tmp_cmp_In_24 == -1) );
    if ( tmp_cmp_In_24 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_12__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    branch_no_12:;
    tmp_hasattr_source_12 = tmp_urllib3$exceptions_class_creation_12__metaclass;

    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_36;
    }
    else
    {
        goto condexpr_false_36;
    }
    condexpr_true_36:;
    tmp_source_name_12 = tmp_urllib3$exceptions_class_creation_12__metaclass;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    tmp_args_name_12 = PyTuple_New( 2 );
    tmp_tuple_element_24 = const_str_plain_TimeoutError;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = tmp_urllib3$exceptions_class_creation_12__bases;

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_24 );
    tmp_kw_name_12 = tmp_urllib3$exceptions_class_creation_12__class_decl_dict;

    frame_module->f_lineno = 96;
    tmp_assign_source_65 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    goto condexpr_end_36;
    condexpr_false_36:;
    tmp_assign_source_65 = PyDict_New();
    condexpr_end_36:;
    assert( tmp_urllib3$exceptions_class_creation_12__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_12__prepared = tmp_assign_source_65;

    tmp_assign_source_66 = impl_class_12_TimeoutError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_12__bases, tmp_urllib3$exceptions_class_creation_12__class_decl_dict, tmp_urllib3$exceptions_class_creation_12__metaclass, tmp_urllib3$exceptions_class_creation_12__prepared );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError, tmp_assign_source_66 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_12__bases );
    tmp_urllib3$exceptions_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_12__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_12__metaclass );
    tmp_urllib3$exceptions_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_12__prepared );
    tmp_urllib3$exceptions_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_12__bases );
    tmp_urllib3$exceptions_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_12__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_12__metaclass );
    tmp_urllib3$exceptions_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_12__prepared );
    tmp_urllib3$exceptions_class_creation_12__prepared = NULL;

    // Tried code:
    tmp_assign_source_67 = PyTuple_New( 2 );
    tmp_tuple_element_25 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError );

    if (unlikely( tmp_tuple_element_25 == NULL ))
    {
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError );
    }

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_67 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_assign_source_67, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_25 == NULL ))
    {
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_67 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_assign_source_67, 1, tmp_tuple_element_25 );
    assert( tmp_urllib3$exceptions_class_creation_13__bases == NULL );
    tmp_urllib3$exceptions_class_creation_13__bases = tmp_assign_source_67;

    tmp_assign_source_68 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_13__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_13__class_decl_dict = tmp_assign_source_68;

    tmp_compare_left_25 = const_str_plain_metaclass;
    tmp_compare_right_25 = tmp_urllib3$exceptions_class_creation_13__class_decl_dict;

    tmp_cmp_In_25 = PySequence_Contains( tmp_compare_right_25, tmp_compare_left_25 );
    assert( !(tmp_cmp_In_25 == -1) );
    if ( tmp_cmp_In_25 == 1 )
    {
        goto condexpr_true_37;
    }
    else
    {
        goto condexpr_false_37;
    }
    condexpr_true_37:;
    tmp_dict_name_13 = tmp_urllib3$exceptions_class_creation_13__class_decl_dict;

    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    goto condexpr_end_37;
    condexpr_false_37:;
    tmp_cond_value_13 = tmp_urllib3$exceptions_class_creation_13__bases;

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_38;
    }
    else
    {
        goto condexpr_false_38;
    }
    condexpr_true_38:;
    tmp_subscribed_name_13 = tmp_urllib3$exceptions_class_creation_13__bases;

    tmp_subscript_name_13 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    tmp_metaclass_name_13 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    goto condexpr_end_38;
    condexpr_false_38:;
    tmp_metaclass_name_13 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_13 != NULL );
    Py_INCREF( tmp_metaclass_name_13 );
    condexpr_end_38:;
    condexpr_end_37:;
    tmp_bases_name_13 = tmp_urllib3$exceptions_class_creation_13__bases;

    tmp_assign_source_69 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_13 );

        exception_lineno = 105;
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_metaclass_name_13 );
    assert( tmp_urllib3$exceptions_class_creation_13__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_13__metaclass = tmp_assign_source_69;

    tmp_compare_left_26 = const_str_plain_metaclass;
    tmp_compare_right_26 = tmp_urllib3$exceptions_class_creation_13__class_decl_dict;

    tmp_cmp_In_26 = PySequence_Contains( tmp_compare_right_26, tmp_compare_left_26 );
    assert( !(tmp_cmp_In_26 == -1) );
    if ( tmp_cmp_In_26 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_13__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    branch_no_13:;
    tmp_hasattr_source_13 = tmp_urllib3$exceptions_class_creation_13__metaclass;

    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_39;
    }
    else
    {
        goto condexpr_false_39;
    }
    condexpr_true_39:;
    tmp_source_name_13 = tmp_urllib3$exceptions_class_creation_13__metaclass;

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    tmp_args_name_13 = PyTuple_New( 2 );
    tmp_tuple_element_26 = const_str_plain_ReadTimeoutError;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = tmp_urllib3$exceptions_class_creation_13__bases;

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_26 );
    tmp_kw_name_13 = tmp_urllib3$exceptions_class_creation_13__class_decl_dict;

    frame_module->f_lineno = 105;
    tmp_assign_source_70 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    goto condexpr_end_39;
    condexpr_false_39:;
    tmp_assign_source_70 = PyDict_New();
    condexpr_end_39:;
    assert( tmp_urllib3$exceptions_class_creation_13__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_13__prepared = tmp_assign_source_70;

    tmp_assign_source_71 = impl_class_13_ReadTimeoutError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_13__bases, tmp_urllib3$exceptions_class_creation_13__class_decl_dict, tmp_urllib3$exceptions_class_creation_13__metaclass, tmp_urllib3$exceptions_class_creation_13__prepared );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_71 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_13__bases );
    tmp_urllib3$exceptions_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_13__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_13__metaclass );
    tmp_urllib3$exceptions_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_13__prepared );
    tmp_urllib3$exceptions_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_13__bases );
    tmp_urllib3$exceptions_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_13__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_13__metaclass );
    tmp_urllib3$exceptions_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_13__prepared );
    tmp_urllib3$exceptions_class_creation_13__prepared = NULL;

    // Tried code:
    tmp_assign_source_72 = PyTuple_New( 1 );
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError );
    }

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_72 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto try_except_handler_14;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_assign_source_72, 0, tmp_tuple_element_27 );
    assert( tmp_urllib3$exceptions_class_creation_14__bases == NULL );
    tmp_urllib3$exceptions_class_creation_14__bases = tmp_assign_source_72;

    tmp_assign_source_73 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_14__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_14__class_decl_dict = tmp_assign_source_73;

    tmp_compare_left_27 = const_str_plain_metaclass;
    tmp_compare_right_27 = tmp_urllib3$exceptions_class_creation_14__class_decl_dict;

    tmp_cmp_In_27 = PySequence_Contains( tmp_compare_right_27, tmp_compare_left_27 );
    assert( !(tmp_cmp_In_27 == -1) );
    if ( tmp_cmp_In_27 == 1 )
    {
        goto condexpr_true_40;
    }
    else
    {
        goto condexpr_false_40;
    }
    condexpr_true_40:;
    tmp_dict_name_14 = tmp_urllib3$exceptions_class_creation_14__class_decl_dict;

    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_14 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    goto condexpr_end_40;
    condexpr_false_40:;
    tmp_cond_value_14 = tmp_urllib3$exceptions_class_creation_14__bases;

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto condexpr_true_41;
    }
    else
    {
        goto condexpr_false_41;
    }
    condexpr_true_41:;
    tmp_subscribed_name_14 = tmp_urllib3$exceptions_class_creation_14__bases;

    tmp_subscript_name_14 = const_int_0;
    tmp_type_arg_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_type_arg_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    tmp_metaclass_name_14 = BUILTIN_TYPE1( tmp_type_arg_14 );
    Py_DECREF( tmp_type_arg_14 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    goto condexpr_end_41;
    condexpr_false_41:;
    tmp_metaclass_name_14 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_14 != NULL );
    Py_INCREF( tmp_metaclass_name_14 );
    condexpr_end_41:;
    condexpr_end_40:;
    tmp_bases_name_14 = tmp_urllib3$exceptions_class_creation_14__bases;

    tmp_assign_source_74 = SELECT_METACLASS( tmp_metaclass_name_14, tmp_bases_name_14 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_14 );

        exception_lineno = 112;
        goto try_except_handler_14;
    }
    Py_DECREF( tmp_metaclass_name_14 );
    assert( tmp_urllib3$exceptions_class_creation_14__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_14__metaclass = tmp_assign_source_74;

    tmp_compare_left_28 = const_str_plain_metaclass;
    tmp_compare_right_28 = tmp_urllib3$exceptions_class_creation_14__class_decl_dict;

    tmp_cmp_In_28 = PySequence_Contains( tmp_compare_right_28, tmp_compare_left_28 );
    assert( !(tmp_cmp_In_28 == -1) );
    if ( tmp_cmp_In_28 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_14__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    branch_no_14:;
    tmp_hasattr_source_14 = tmp_urllib3$exceptions_class_creation_14__metaclass;

    tmp_hasattr_attr_14 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_14, tmp_hasattr_attr_14 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_42;
    }
    else
    {
        goto condexpr_false_42;
    }
    condexpr_true_42:;
    tmp_source_name_14 = tmp_urllib3$exceptions_class_creation_14__metaclass;

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    tmp_args_name_14 = PyTuple_New( 2 );
    tmp_tuple_element_28 = const_str_plain_ConnectTimeoutError;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = tmp_urllib3$exceptions_class_creation_14__bases;

    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_28 );
    tmp_kw_name_14 = tmp_urllib3$exceptions_class_creation_14__class_decl_dict;

    frame_module->f_lineno = 112;
    tmp_assign_source_75 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    goto condexpr_end_42;
    condexpr_false_42:;
    tmp_assign_source_75 = PyDict_New();
    condexpr_end_42:;
    assert( tmp_urllib3$exceptions_class_creation_14__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_14__prepared = tmp_assign_source_75;

    tmp_assign_source_76 = impl_class_14_ConnectTimeoutError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_14__bases, tmp_urllib3$exceptions_class_creation_14__class_decl_dict, tmp_urllib3$exceptions_class_creation_14__metaclass, tmp_urllib3$exceptions_class_creation_14__prepared );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto try_except_handler_14;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_76 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_14__bases );
    tmp_urllib3$exceptions_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_14__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_14__metaclass );
    tmp_urllib3$exceptions_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_14__prepared );
    tmp_urllib3$exceptions_class_creation_14__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_14__bases );
    tmp_urllib3$exceptions_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_14__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_14__metaclass );
    tmp_urllib3$exceptions_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_14__prepared );
    tmp_urllib3$exceptions_class_creation_14__prepared = NULL;

    // Tried code:
    tmp_assign_source_77 = PyTuple_New( 2 );
    tmp_tuple_element_29 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_tuple_element_29 == NULL ))
    {
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_tuple_element_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_77 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto try_except_handler_15;
    }

    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_assign_source_77, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_29 == NULL ))
    {
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_77 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto try_except_handler_15;
    }

    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_assign_source_77, 1, tmp_tuple_element_29 );
    assert( tmp_urllib3$exceptions_class_creation_15__bases == NULL );
    tmp_urllib3$exceptions_class_creation_15__bases = tmp_assign_source_77;

    tmp_assign_source_78 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_15__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_15__class_decl_dict = tmp_assign_source_78;

    tmp_compare_left_29 = const_str_plain_metaclass;
    tmp_compare_right_29 = tmp_urllib3$exceptions_class_creation_15__class_decl_dict;

    tmp_cmp_In_29 = PySequence_Contains( tmp_compare_right_29, tmp_compare_left_29 );
    assert( !(tmp_cmp_In_29 == -1) );
    if ( tmp_cmp_In_29 == 1 )
    {
        goto condexpr_true_43;
    }
    else
    {
        goto condexpr_false_43;
    }
    condexpr_true_43:;
    tmp_dict_name_15 = tmp_urllib3$exceptions_class_creation_15__class_decl_dict;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_metaclass_name_15 = DICT_GET_ITEM( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    goto condexpr_end_43;
    condexpr_false_43:;
    tmp_cond_value_15 = tmp_urllib3$exceptions_class_creation_15__bases;

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto condexpr_true_44;
    }
    else
    {
        goto condexpr_false_44;
    }
    condexpr_true_44:;
    tmp_subscribed_name_15 = tmp_urllib3$exceptions_class_creation_15__bases;

    tmp_subscript_name_15 = const_int_0;
    tmp_type_arg_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_type_arg_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    tmp_metaclass_name_15 = BUILTIN_TYPE1( tmp_type_arg_15 );
    Py_DECREF( tmp_type_arg_15 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    goto condexpr_end_44;
    condexpr_false_44:;
    tmp_metaclass_name_15 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_15 != NULL );
    Py_INCREF( tmp_metaclass_name_15 );
    condexpr_end_44:;
    condexpr_end_43:;
    tmp_bases_name_15 = tmp_urllib3$exceptions_class_creation_15__bases;

    tmp_assign_source_79 = SELECT_METACLASS( tmp_metaclass_name_15, tmp_bases_name_15 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_15 );

        exception_lineno = 117;
        goto try_except_handler_15;
    }
    Py_DECREF( tmp_metaclass_name_15 );
    assert( tmp_urllib3$exceptions_class_creation_15__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_15__metaclass = tmp_assign_source_79;

    tmp_compare_left_30 = const_str_plain_metaclass;
    tmp_compare_right_30 = tmp_urllib3$exceptions_class_creation_15__class_decl_dict;

    tmp_cmp_In_30 = PySequence_Contains( tmp_compare_right_30, tmp_compare_left_30 );
    assert( !(tmp_cmp_In_30 == -1) );
    if ( tmp_cmp_In_30 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_15__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    branch_no_15:;
    tmp_hasattr_source_15 = tmp_urllib3$exceptions_class_creation_15__metaclass;

    tmp_hasattr_attr_15 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_15, tmp_hasattr_attr_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_45;
    }
    else
    {
        goto condexpr_false_45;
    }
    condexpr_true_45:;
    tmp_source_name_15 = tmp_urllib3$exceptions_class_creation_15__metaclass;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    tmp_args_name_15 = PyTuple_New( 2 );
    tmp_tuple_element_30 = const_str_plain_NewConnectionError;
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = tmp_urllib3$exceptions_class_creation_15__bases;

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_30 );
    tmp_kw_name_15 = tmp_urllib3$exceptions_class_creation_15__class_decl_dict;

    frame_module->f_lineno = 117;
    tmp_assign_source_80 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    goto condexpr_end_45;
    condexpr_false_45:;
    tmp_assign_source_80 = PyDict_New();
    condexpr_end_45:;
    assert( tmp_urllib3$exceptions_class_creation_15__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_15__prepared = tmp_assign_source_80;

    tmp_assign_source_81 = impl_class_15_NewConnectionError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_15__bases, tmp_urllib3$exceptions_class_creation_15__class_decl_dict, tmp_urllib3$exceptions_class_creation_15__metaclass, tmp_urllib3$exceptions_class_creation_15__prepared );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_15;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_81 );
    goto try_end_15;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_15__bases );
    tmp_urllib3$exceptions_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_15__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_15__metaclass );
    tmp_urllib3$exceptions_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_15__prepared );
    tmp_urllib3$exceptions_class_creation_15__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_15__bases );
    tmp_urllib3$exceptions_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_15__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_15__metaclass );
    tmp_urllib3$exceptions_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_15__prepared );
    tmp_urllib3$exceptions_class_creation_15__prepared = NULL;

    // Tried code:
    tmp_assign_source_82 = PyTuple_New( 1 );
    tmp_tuple_element_31 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_31 == NULL ))
    {
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_82 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto try_except_handler_16;
    }

    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_assign_source_82, 0, tmp_tuple_element_31 );
    assert( tmp_urllib3$exceptions_class_creation_16__bases == NULL );
    tmp_urllib3$exceptions_class_creation_16__bases = tmp_assign_source_82;

    tmp_assign_source_83 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_16__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_16__class_decl_dict = tmp_assign_source_83;

    tmp_compare_left_31 = const_str_plain_metaclass;
    tmp_compare_right_31 = tmp_urllib3$exceptions_class_creation_16__class_decl_dict;

    tmp_cmp_In_31 = PySequence_Contains( tmp_compare_right_31, tmp_compare_left_31 );
    assert( !(tmp_cmp_In_31 == -1) );
    if ( tmp_cmp_In_31 == 1 )
    {
        goto condexpr_true_46;
    }
    else
    {
        goto condexpr_false_46;
    }
    condexpr_true_46:;
    tmp_dict_name_16 = tmp_urllib3$exceptions_class_creation_16__class_decl_dict;

    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_metaclass_name_16 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    goto condexpr_end_46;
    condexpr_false_46:;
    tmp_cond_value_16 = tmp_urllib3$exceptions_class_creation_16__bases;

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto condexpr_true_47;
    }
    else
    {
        goto condexpr_false_47;
    }
    condexpr_true_47:;
    tmp_subscribed_name_16 = tmp_urllib3$exceptions_class_creation_16__bases;

    tmp_subscript_name_16 = const_int_0;
    tmp_type_arg_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_type_arg_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    tmp_metaclass_name_16 = BUILTIN_TYPE1( tmp_type_arg_16 );
    Py_DECREF( tmp_type_arg_16 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    goto condexpr_end_47;
    condexpr_false_47:;
    tmp_metaclass_name_16 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_16 != NULL );
    Py_INCREF( tmp_metaclass_name_16 );
    condexpr_end_47:;
    condexpr_end_46:;
    tmp_bases_name_16 = tmp_urllib3$exceptions_class_creation_16__bases;

    tmp_assign_source_84 = SELECT_METACLASS( tmp_metaclass_name_16, tmp_bases_name_16 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_16 );

        exception_lineno = 122;
        goto try_except_handler_16;
    }
    Py_DECREF( tmp_metaclass_name_16 );
    assert( tmp_urllib3$exceptions_class_creation_16__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_16__metaclass = tmp_assign_source_84;

    tmp_compare_left_32 = const_str_plain_metaclass;
    tmp_compare_right_32 = tmp_urllib3$exceptions_class_creation_16__class_decl_dict;

    tmp_cmp_In_32 = PySequence_Contains( tmp_compare_right_32, tmp_compare_left_32 );
    assert( !(tmp_cmp_In_32 == -1) );
    if ( tmp_cmp_In_32 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_16__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    branch_no_16:;
    tmp_hasattr_source_16 = tmp_urllib3$exceptions_class_creation_16__metaclass;

    tmp_hasattr_attr_16 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_16, tmp_hasattr_attr_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_48;
    }
    else
    {
        goto condexpr_false_48;
    }
    condexpr_true_48:;
    tmp_source_name_16 = tmp_urllib3$exceptions_class_creation_16__metaclass;

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    tmp_args_name_16 = PyTuple_New( 2 );
    tmp_tuple_element_32 = const_str_plain_EmptyPoolError;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = tmp_urllib3$exceptions_class_creation_16__bases;

    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_32 );
    tmp_kw_name_16 = tmp_urllib3$exceptions_class_creation_16__class_decl_dict;

    frame_module->f_lineno = 122;
    tmp_assign_source_85 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    goto condexpr_end_48;
    condexpr_false_48:;
    tmp_assign_source_85 = PyDict_New();
    condexpr_end_48:;
    assert( tmp_urllib3$exceptions_class_creation_16__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_16__prepared = tmp_assign_source_85;

    tmp_assign_source_86 = impl_class_16_EmptyPoolError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_16__bases, tmp_urllib3$exceptions_class_creation_16__class_decl_dict, tmp_urllib3$exceptions_class_creation_16__metaclass, tmp_urllib3$exceptions_class_creation_16__prepared );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_16;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_EmptyPoolError, tmp_assign_source_86 );
    goto try_end_16;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_16__bases );
    tmp_urllib3$exceptions_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_16__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_16__metaclass );
    tmp_urllib3$exceptions_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_16__prepared );
    tmp_urllib3$exceptions_class_creation_16__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_16__bases );
    tmp_urllib3$exceptions_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_16__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_16__metaclass );
    tmp_urllib3$exceptions_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_16__prepared );
    tmp_urllib3$exceptions_class_creation_16__prepared = NULL;

    // Tried code:
    tmp_assign_source_87 = PyTuple_New( 1 );
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_87 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_assign_source_87, 0, tmp_tuple_element_33 );
    assert( tmp_urllib3$exceptions_class_creation_17__bases == NULL );
    tmp_urllib3$exceptions_class_creation_17__bases = tmp_assign_source_87;

    tmp_assign_source_88 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_17__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_17__class_decl_dict = tmp_assign_source_88;

    tmp_compare_left_33 = const_str_plain_metaclass;
    tmp_compare_right_33 = tmp_urllib3$exceptions_class_creation_17__class_decl_dict;

    tmp_cmp_In_33 = PySequence_Contains( tmp_compare_right_33, tmp_compare_left_33 );
    assert( !(tmp_cmp_In_33 == -1) );
    if ( tmp_cmp_In_33 == 1 )
    {
        goto condexpr_true_49;
    }
    else
    {
        goto condexpr_false_49;
    }
    condexpr_true_49:;
    tmp_dict_name_17 = tmp_urllib3$exceptions_class_creation_17__class_decl_dict;

    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_17 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    goto condexpr_end_49;
    condexpr_false_49:;
    tmp_cond_value_17 = tmp_urllib3$exceptions_class_creation_17__bases;

    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_50;
    }
    else
    {
        goto condexpr_false_50;
    }
    condexpr_true_50:;
    tmp_subscribed_name_17 = tmp_urllib3$exceptions_class_creation_17__bases;

    tmp_subscript_name_17 = const_int_0;
    tmp_type_arg_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_type_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    tmp_metaclass_name_17 = BUILTIN_TYPE1( tmp_type_arg_17 );
    Py_DECREF( tmp_type_arg_17 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    goto condexpr_end_50;
    condexpr_false_50:;
    tmp_metaclass_name_17 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_17 != NULL );
    Py_INCREF( tmp_metaclass_name_17 );
    condexpr_end_50:;
    condexpr_end_49:;
    tmp_bases_name_17 = tmp_urllib3$exceptions_class_creation_17__bases;

    tmp_assign_source_89 = SELECT_METACLASS( tmp_metaclass_name_17, tmp_bases_name_17 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_17 );

        exception_lineno = 127;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_metaclass_name_17 );
    assert( tmp_urllib3$exceptions_class_creation_17__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_17__metaclass = tmp_assign_source_89;

    tmp_compare_left_34 = const_str_plain_metaclass;
    tmp_compare_right_34 = tmp_urllib3$exceptions_class_creation_17__class_decl_dict;

    tmp_cmp_In_34 = PySequence_Contains( tmp_compare_right_34, tmp_compare_left_34 );
    assert( !(tmp_cmp_In_34 == -1) );
    if ( tmp_cmp_In_34 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_17__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    branch_no_17:;
    tmp_hasattr_source_17 = tmp_urllib3$exceptions_class_creation_17__metaclass;

    tmp_hasattr_attr_17 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_17, tmp_hasattr_attr_17 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_51;
    }
    else
    {
        goto condexpr_false_51;
    }
    condexpr_true_51:;
    tmp_source_name_17 = tmp_urllib3$exceptions_class_creation_17__metaclass;

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    tmp_args_name_17 = PyTuple_New( 2 );
    tmp_tuple_element_34 = const_str_plain_ClosedPoolError;
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = tmp_urllib3$exceptions_class_creation_17__bases;

    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_34 );
    tmp_kw_name_17 = tmp_urllib3$exceptions_class_creation_17__class_decl_dict;

    frame_module->f_lineno = 127;
    tmp_assign_source_90 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    goto condexpr_end_51;
    condexpr_false_51:;
    tmp_assign_source_90 = PyDict_New();
    condexpr_end_51:;
    assert( tmp_urllib3$exceptions_class_creation_17__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_17__prepared = tmp_assign_source_90;

    tmp_assign_source_91 = impl_class_17_ClosedPoolError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_17__bases, tmp_urllib3$exceptions_class_creation_17__class_decl_dict, tmp_urllib3$exceptions_class_creation_17__metaclass, tmp_urllib3$exceptions_class_creation_17__prepared );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_17;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ClosedPoolError, tmp_assign_source_91 );
    goto try_end_17;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_17__bases );
    tmp_urllib3$exceptions_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_17__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_17__metaclass );
    tmp_urllib3$exceptions_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_17__prepared );
    tmp_urllib3$exceptions_class_creation_17__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_17__bases );
    tmp_urllib3$exceptions_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_17__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_17__metaclass );
    tmp_urllib3$exceptions_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_17__prepared );
    tmp_urllib3$exceptions_class_creation_17__prepared = NULL;

    // Tried code:
    tmp_assign_source_92 = PyTuple_New( 2 );
    tmp_tuple_element_35 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_assign_source_92, 0, tmp_tuple_element_35 );
    tmp_tuple_element_35 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_35 == NULL ))
    {
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_35 == NULL )
    {
        Py_DECREF( tmp_assign_source_92 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto try_except_handler_18;
    }

    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_assign_source_92, 1, tmp_tuple_element_35 );
    assert( tmp_urllib3$exceptions_class_creation_18__bases == NULL );
    tmp_urllib3$exceptions_class_creation_18__bases = tmp_assign_source_92;

    tmp_assign_source_93 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_18__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_18__class_decl_dict = tmp_assign_source_93;

    tmp_compare_left_35 = const_str_plain_metaclass;
    tmp_compare_right_35 = tmp_urllib3$exceptions_class_creation_18__class_decl_dict;

    tmp_cmp_In_35 = PySequence_Contains( tmp_compare_right_35, tmp_compare_left_35 );
    assert( !(tmp_cmp_In_35 == -1) );
    if ( tmp_cmp_In_35 == 1 )
    {
        goto condexpr_true_52;
    }
    else
    {
        goto condexpr_false_52;
    }
    condexpr_true_52:;
    tmp_dict_name_18 = tmp_urllib3$exceptions_class_creation_18__class_decl_dict;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_metaclass_name_18 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    goto condexpr_end_52;
    condexpr_false_52:;
    tmp_cond_value_18 = tmp_urllib3$exceptions_class_creation_18__bases;

    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto condexpr_true_53;
    }
    else
    {
        goto condexpr_false_53;
    }
    condexpr_true_53:;
    tmp_subscribed_name_18 = tmp_urllib3$exceptions_class_creation_18__bases;

    tmp_subscript_name_18 = const_int_0;
    tmp_type_arg_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_type_arg_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    tmp_metaclass_name_18 = BUILTIN_TYPE1( tmp_type_arg_18 );
    Py_DECREF( tmp_type_arg_18 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    goto condexpr_end_53;
    condexpr_false_53:;
    tmp_metaclass_name_18 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_18 != NULL );
    Py_INCREF( tmp_metaclass_name_18 );
    condexpr_end_53:;
    condexpr_end_52:;
    tmp_bases_name_18 = tmp_urllib3$exceptions_class_creation_18__bases;

    tmp_assign_source_94 = SELECT_METACLASS( tmp_metaclass_name_18, tmp_bases_name_18 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_18 );

        exception_lineno = 132;
        goto try_except_handler_18;
    }
    Py_DECREF( tmp_metaclass_name_18 );
    assert( tmp_urllib3$exceptions_class_creation_18__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_18__metaclass = tmp_assign_source_94;

    tmp_compare_left_36 = const_str_plain_metaclass;
    tmp_compare_right_36 = tmp_urllib3$exceptions_class_creation_18__class_decl_dict;

    tmp_cmp_In_36 = PySequence_Contains( tmp_compare_right_36, tmp_compare_left_36 );
    assert( !(tmp_cmp_In_36 == -1) );
    if ( tmp_cmp_In_36 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_18__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    branch_no_18:;
    tmp_hasattr_source_18 = tmp_urllib3$exceptions_class_creation_18__metaclass;

    tmp_hasattr_attr_18 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_18, tmp_hasattr_attr_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_54;
    }
    else
    {
        goto condexpr_false_54;
    }
    condexpr_true_54:;
    tmp_source_name_18 = tmp_urllib3$exceptions_class_creation_18__metaclass;

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    tmp_args_name_18 = PyTuple_New( 2 );
    tmp_tuple_element_36 = const_str_plain_LocationValueError;
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_36 );
    tmp_tuple_element_36 = tmp_urllib3$exceptions_class_creation_18__bases;

    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_36 );
    tmp_kw_name_18 = tmp_urllib3$exceptions_class_creation_18__class_decl_dict;

    frame_module->f_lineno = 132;
    tmp_assign_source_95 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    goto condexpr_end_54;
    condexpr_false_54:;
    tmp_assign_source_95 = PyDict_New();
    condexpr_end_54:;
    assert( tmp_urllib3$exceptions_class_creation_18__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_18__prepared = tmp_assign_source_95;

    tmp_assign_source_96 = impl_class_18_LocationValueError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_18__bases, tmp_urllib3$exceptions_class_creation_18__class_decl_dict, tmp_urllib3$exceptions_class_creation_18__metaclass, tmp_urllib3$exceptions_class_creation_18__prepared );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_18;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_96 );
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_18__bases );
    tmp_urllib3$exceptions_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_18__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_18__metaclass );
    tmp_urllib3$exceptions_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_18__prepared );
    tmp_urllib3$exceptions_class_creation_18__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_18__bases );
    tmp_urllib3$exceptions_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_18__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_18__metaclass );
    tmp_urllib3$exceptions_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_18__prepared );
    tmp_urllib3$exceptions_class_creation_18__prepared = NULL;

    // Tried code:
    tmp_assign_source_97 = PyTuple_New( 1 );
    tmp_tuple_element_37 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationValueError );

    if (unlikely( tmp_tuple_element_37 == NULL ))
    {
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError );
    }

    if ( tmp_tuple_element_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_97 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocationValueError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        goto try_except_handler_19;
    }

    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_assign_source_97, 0, tmp_tuple_element_37 );
    assert( tmp_urllib3$exceptions_class_creation_19__bases == NULL );
    tmp_urllib3$exceptions_class_creation_19__bases = tmp_assign_source_97;

    tmp_assign_source_98 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_19__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_19__class_decl_dict = tmp_assign_source_98;

    tmp_compare_left_37 = const_str_plain_metaclass;
    tmp_compare_right_37 = tmp_urllib3$exceptions_class_creation_19__class_decl_dict;

    tmp_cmp_In_37 = PySequence_Contains( tmp_compare_right_37, tmp_compare_left_37 );
    assert( !(tmp_cmp_In_37 == -1) );
    if ( tmp_cmp_In_37 == 1 )
    {
        goto condexpr_true_55;
    }
    else
    {
        goto condexpr_false_55;
    }
    condexpr_true_55:;
    tmp_dict_name_19 = tmp_urllib3$exceptions_class_creation_19__class_decl_dict;

    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_metaclass_name_19 = DICT_GET_ITEM( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    goto condexpr_end_55;
    condexpr_false_55:;
    tmp_cond_value_19 = tmp_urllib3$exceptions_class_creation_19__bases;

    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_56;
    }
    else
    {
        goto condexpr_false_56;
    }
    condexpr_true_56:;
    tmp_subscribed_name_19 = tmp_urllib3$exceptions_class_creation_19__bases;

    tmp_subscript_name_19 = const_int_0;
    tmp_type_arg_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_type_arg_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    tmp_metaclass_name_19 = BUILTIN_TYPE1( tmp_type_arg_19 );
    Py_DECREF( tmp_type_arg_19 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    goto condexpr_end_56;
    condexpr_false_56:;
    tmp_metaclass_name_19 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_19 != NULL );
    Py_INCREF( tmp_metaclass_name_19 );
    condexpr_end_56:;
    condexpr_end_55:;
    tmp_bases_name_19 = tmp_urllib3$exceptions_class_creation_19__bases;

    tmp_assign_source_99 = SELECT_METACLASS( tmp_metaclass_name_19, tmp_bases_name_19 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_19 );

        exception_lineno = 137;
        goto try_except_handler_19;
    }
    Py_DECREF( tmp_metaclass_name_19 );
    assert( tmp_urllib3$exceptions_class_creation_19__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_19__metaclass = tmp_assign_source_99;

    tmp_compare_left_38 = const_str_plain_metaclass;
    tmp_compare_right_38 = tmp_urllib3$exceptions_class_creation_19__class_decl_dict;

    tmp_cmp_In_38 = PySequence_Contains( tmp_compare_right_38, tmp_compare_left_38 );
    assert( !(tmp_cmp_In_38 == -1) );
    if ( tmp_cmp_In_38 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_19__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    branch_no_19:;
    tmp_hasattr_source_19 = tmp_urllib3$exceptions_class_creation_19__metaclass;

    tmp_hasattr_attr_19 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_19, tmp_hasattr_attr_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_57;
    }
    else
    {
        goto condexpr_false_57;
    }
    condexpr_true_57:;
    tmp_source_name_19 = tmp_urllib3$exceptions_class_creation_19__metaclass;

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___prepare__ );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    tmp_args_name_19 = PyTuple_New( 2 );
    tmp_tuple_element_38 = const_str_plain_LocationParseError;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_38 );
    tmp_tuple_element_38 = tmp_urllib3$exceptions_class_creation_19__bases;

    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_38 );
    tmp_kw_name_19 = tmp_urllib3$exceptions_class_creation_19__class_decl_dict;

    frame_module->f_lineno = 137;
    tmp_assign_source_100 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_19 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    goto condexpr_end_57;
    condexpr_false_57:;
    tmp_assign_source_100 = PyDict_New();
    condexpr_end_57:;
    assert( tmp_urllib3$exceptions_class_creation_19__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_19__prepared = tmp_assign_source_100;

    tmp_assign_source_101 = impl_class_19_LocationParseError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_19__bases, tmp_urllib3$exceptions_class_creation_19__class_decl_dict, tmp_urllib3$exceptions_class_creation_19__metaclass, tmp_urllib3$exceptions_class_creation_19__prepared );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_19;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationParseError, tmp_assign_source_101 );
    goto try_end_19;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_19__bases );
    tmp_urllib3$exceptions_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_19__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_19__metaclass );
    tmp_urllib3$exceptions_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_19__prepared );
    tmp_urllib3$exceptions_class_creation_19__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_19__bases );
    tmp_urllib3$exceptions_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_19__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_19__metaclass );
    tmp_urllib3$exceptions_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_19__prepared );
    tmp_urllib3$exceptions_class_creation_19__prepared = NULL;

    // Tried code:
    tmp_assign_source_102 = PyTuple_New( 1 );
    tmp_tuple_element_39 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_39 == NULL ))
    {
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_102 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto try_except_handler_20;
    }

    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_assign_source_102, 0, tmp_tuple_element_39 );
    assert( tmp_urllib3$exceptions_class_creation_20__bases == NULL );
    tmp_urllib3$exceptions_class_creation_20__bases = tmp_assign_source_102;

    tmp_assign_source_103 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_20__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_20__class_decl_dict = tmp_assign_source_103;

    tmp_compare_left_39 = const_str_plain_metaclass;
    tmp_compare_right_39 = tmp_urllib3$exceptions_class_creation_20__class_decl_dict;

    tmp_cmp_In_39 = PySequence_Contains( tmp_compare_right_39, tmp_compare_left_39 );
    assert( !(tmp_cmp_In_39 == -1) );
    if ( tmp_cmp_In_39 == 1 )
    {
        goto condexpr_true_58;
    }
    else
    {
        goto condexpr_false_58;
    }
    condexpr_true_58:;
    tmp_dict_name_20 = tmp_urllib3$exceptions_class_creation_20__class_decl_dict;

    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_20 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    goto condexpr_end_58;
    condexpr_false_58:;
    tmp_cond_value_20 = tmp_urllib3$exceptions_class_creation_20__bases;

    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto condexpr_true_59;
    }
    else
    {
        goto condexpr_false_59;
    }
    condexpr_true_59:;
    tmp_subscribed_name_20 = tmp_urllib3$exceptions_class_creation_20__bases;

    tmp_subscript_name_20 = const_int_0;
    tmp_type_arg_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_type_arg_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    tmp_metaclass_name_20 = BUILTIN_TYPE1( tmp_type_arg_20 );
    Py_DECREF( tmp_type_arg_20 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    goto condexpr_end_59;
    condexpr_false_59:;
    tmp_metaclass_name_20 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_20 != NULL );
    Py_INCREF( tmp_metaclass_name_20 );
    condexpr_end_59:;
    condexpr_end_58:;
    tmp_bases_name_20 = tmp_urllib3$exceptions_class_creation_20__bases;

    tmp_assign_source_104 = SELECT_METACLASS( tmp_metaclass_name_20, tmp_bases_name_20 );
    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_20 );

        exception_lineno = 147;
        goto try_except_handler_20;
    }
    Py_DECREF( tmp_metaclass_name_20 );
    assert( tmp_urllib3$exceptions_class_creation_20__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_20__metaclass = tmp_assign_source_104;

    tmp_compare_left_40 = const_str_plain_metaclass;
    tmp_compare_right_40 = tmp_urllib3$exceptions_class_creation_20__class_decl_dict;

    tmp_cmp_In_40 = PySequence_Contains( tmp_compare_right_40, tmp_compare_left_40 );
    assert( !(tmp_cmp_In_40 == -1) );
    if ( tmp_cmp_In_40 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_20__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    branch_no_20:;
    tmp_hasattr_source_20 = tmp_urllib3$exceptions_class_creation_20__metaclass;

    tmp_hasattr_attr_20 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_20, tmp_hasattr_attr_20 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_60;
    }
    else
    {
        goto condexpr_false_60;
    }
    condexpr_true_60:;
    tmp_source_name_20 = tmp_urllib3$exceptions_class_creation_20__metaclass;

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___prepare__ );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    tmp_args_name_20 = PyTuple_New( 2 );
    tmp_tuple_element_40 = const_str_plain_ResponseError;
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = tmp_urllib3$exceptions_class_creation_20__bases;

    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_40 );
    tmp_kw_name_20 = tmp_urllib3$exceptions_class_creation_20__class_decl_dict;

    frame_module->f_lineno = 147;
    tmp_assign_source_105 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_name_20 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    goto condexpr_end_60;
    condexpr_false_60:;
    tmp_assign_source_105 = PyDict_New();
    condexpr_end_60:;
    assert( tmp_urllib3$exceptions_class_creation_20__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_20__prepared = tmp_assign_source_105;

    tmp_assign_source_106 = impl_class_20_ResponseError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_20__bases, tmp_urllib3$exceptions_class_creation_20__class_decl_dict, tmp_urllib3$exceptions_class_creation_20__metaclass, tmp_urllib3$exceptions_class_creation_20__prepared );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_20;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_106 );
    goto try_end_20;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_20__bases );
    tmp_urllib3$exceptions_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_20__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_20__metaclass );
    tmp_urllib3$exceptions_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_20__prepared );
    tmp_urllib3$exceptions_class_creation_20__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_20__bases );
    tmp_urllib3$exceptions_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_20__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_20__metaclass );
    tmp_urllib3$exceptions_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_20__prepared );
    tmp_urllib3$exceptions_class_creation_20__prepared = NULL;

    // Tried code:
    tmp_assign_source_107 = PyTuple_New( 1 );
    tmp_tuple_element_41 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_41 == NULL ))
    {
        tmp_tuple_element_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_41 == NULL )
    {
        Py_DECREF( tmp_assign_source_107 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto try_except_handler_21;
    }

    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_assign_source_107, 0, tmp_tuple_element_41 );
    assert( tmp_urllib3$exceptions_class_creation_21__bases == NULL );
    tmp_urllib3$exceptions_class_creation_21__bases = tmp_assign_source_107;

    tmp_assign_source_108 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_21__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_21__class_decl_dict = tmp_assign_source_108;

    tmp_compare_left_41 = const_str_plain_metaclass;
    tmp_compare_right_41 = tmp_urllib3$exceptions_class_creation_21__class_decl_dict;

    tmp_cmp_In_41 = PySequence_Contains( tmp_compare_right_41, tmp_compare_left_41 );
    assert( !(tmp_cmp_In_41 == -1) );
    if ( tmp_cmp_In_41 == 1 )
    {
        goto condexpr_true_61;
    }
    else
    {
        goto condexpr_false_61;
    }
    condexpr_true_61:;
    tmp_dict_name_21 = tmp_urllib3$exceptions_class_creation_21__class_decl_dict;

    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_metaclass_name_21 = DICT_GET_ITEM( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_metaclass_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    goto condexpr_end_61;
    condexpr_false_61:;
    tmp_cond_value_21 = tmp_urllib3$exceptions_class_creation_21__bases;

    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    if ( tmp_cond_truth_21 == 1 )
    {
        goto condexpr_true_62;
    }
    else
    {
        goto condexpr_false_62;
    }
    condexpr_true_62:;
    tmp_subscribed_name_21 = tmp_urllib3$exceptions_class_creation_21__bases;

    tmp_subscript_name_21 = const_int_0;
    tmp_type_arg_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_type_arg_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    tmp_metaclass_name_21 = BUILTIN_TYPE1( tmp_type_arg_21 );
    Py_DECREF( tmp_type_arg_21 );
    if ( tmp_metaclass_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    goto condexpr_end_62;
    condexpr_false_62:;
    tmp_metaclass_name_21 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_21 != NULL );
    Py_INCREF( tmp_metaclass_name_21 );
    condexpr_end_62:;
    condexpr_end_61:;
    tmp_bases_name_21 = tmp_urllib3$exceptions_class_creation_21__bases;

    tmp_assign_source_109 = SELECT_METACLASS( tmp_metaclass_name_21, tmp_bases_name_21 );
    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_21 );

        exception_lineno = 153;
        goto try_except_handler_21;
    }
    Py_DECREF( tmp_metaclass_name_21 );
    assert( tmp_urllib3$exceptions_class_creation_21__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_21__metaclass = tmp_assign_source_109;

    tmp_compare_left_42 = const_str_plain_metaclass;
    tmp_compare_right_42 = tmp_urllib3$exceptions_class_creation_21__class_decl_dict;

    tmp_cmp_In_42 = PySequence_Contains( tmp_compare_right_42, tmp_compare_left_42 );
    assert( !(tmp_cmp_In_42 == -1) );
    if ( tmp_cmp_In_42 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_21__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    branch_no_21:;
    tmp_hasattr_source_21 = tmp_urllib3$exceptions_class_creation_21__metaclass;

    tmp_hasattr_attr_21 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_21, tmp_hasattr_attr_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_63;
    }
    else
    {
        goto condexpr_false_63;
    }
    condexpr_true_63:;
    tmp_source_name_21 = tmp_urllib3$exceptions_class_creation_21__metaclass;

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___prepare__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    tmp_args_name_21 = PyTuple_New( 2 );
    tmp_tuple_element_42 = const_str_plain_SecurityWarning;
    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_args_name_21, 0, tmp_tuple_element_42 );
    tmp_tuple_element_42 = tmp_urllib3$exceptions_class_creation_21__bases;

    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_args_name_21, 1, tmp_tuple_element_42 );
    tmp_kw_name_21 = tmp_urllib3$exceptions_class_creation_21__class_decl_dict;

    frame_module->f_lineno = 153;
    tmp_assign_source_110 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_name_21 );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    goto condexpr_end_63;
    condexpr_false_63:;
    tmp_assign_source_110 = PyDict_New();
    condexpr_end_63:;
    assert( tmp_urllib3$exceptions_class_creation_21__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_21__prepared = tmp_assign_source_110;

    tmp_assign_source_111 = impl_class_21_SecurityWarning_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_21__bases, tmp_urllib3$exceptions_class_creation_21__class_decl_dict, tmp_urllib3$exceptions_class_creation_21__metaclass, tmp_urllib3$exceptions_class_creation_21__prepared );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_21;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning, tmp_assign_source_111 );
    goto try_end_21;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_21__bases );
    tmp_urllib3$exceptions_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_21__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_21__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_21__metaclass );
    tmp_urllib3$exceptions_class_creation_21__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_21__prepared );
    tmp_urllib3$exceptions_class_creation_21__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_21__bases );
    tmp_urllib3$exceptions_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_21__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_21__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_21__metaclass );
    tmp_urllib3$exceptions_class_creation_21__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_21__prepared );
    tmp_urllib3$exceptions_class_creation_21__prepared = NULL;

    // Tried code:
    tmp_assign_source_112 = PyTuple_New( 1 );
    tmp_tuple_element_43 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_43 == NULL ))
    {
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_43 == NULL )
    {
        Py_DECREF( tmp_assign_source_112 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        goto try_except_handler_22;
    }

    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_assign_source_112, 0, tmp_tuple_element_43 );
    assert( tmp_urllib3$exceptions_class_creation_22__bases == NULL );
    tmp_urllib3$exceptions_class_creation_22__bases = tmp_assign_source_112;

    tmp_assign_source_113 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_22__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_22__class_decl_dict = tmp_assign_source_113;

    tmp_compare_left_43 = const_str_plain_metaclass;
    tmp_compare_right_43 = tmp_urllib3$exceptions_class_creation_22__class_decl_dict;

    tmp_cmp_In_43 = PySequence_Contains( tmp_compare_right_43, tmp_compare_left_43 );
    assert( !(tmp_cmp_In_43 == -1) );
    if ( tmp_cmp_In_43 == 1 )
    {
        goto condexpr_true_64;
    }
    else
    {
        goto condexpr_false_64;
    }
    condexpr_true_64:;
    tmp_dict_name_22 = tmp_urllib3$exceptions_class_creation_22__class_decl_dict;

    tmp_key_name_22 = const_str_plain_metaclass;
    tmp_metaclass_name_22 = DICT_GET_ITEM( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_metaclass_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    goto condexpr_end_64;
    condexpr_false_64:;
    tmp_cond_value_22 = tmp_urllib3$exceptions_class_creation_22__bases;

    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    if ( tmp_cond_truth_22 == 1 )
    {
        goto condexpr_true_65;
    }
    else
    {
        goto condexpr_false_65;
    }
    condexpr_true_65:;
    tmp_subscribed_name_22 = tmp_urllib3$exceptions_class_creation_22__bases;

    tmp_subscript_name_22 = const_int_0;
    tmp_type_arg_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_type_arg_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    tmp_metaclass_name_22 = BUILTIN_TYPE1( tmp_type_arg_22 );
    Py_DECREF( tmp_type_arg_22 );
    if ( tmp_metaclass_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    goto condexpr_end_65;
    condexpr_false_65:;
    tmp_metaclass_name_22 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_22 != NULL );
    Py_INCREF( tmp_metaclass_name_22 );
    condexpr_end_65:;
    condexpr_end_64:;
    tmp_bases_name_22 = tmp_urllib3$exceptions_class_creation_22__bases;

    tmp_assign_source_114 = SELECT_METACLASS( tmp_metaclass_name_22, tmp_bases_name_22 );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_22 );

        exception_lineno = 158;
        goto try_except_handler_22;
    }
    Py_DECREF( tmp_metaclass_name_22 );
    assert( tmp_urllib3$exceptions_class_creation_22__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_22__metaclass = tmp_assign_source_114;

    tmp_compare_left_44 = const_str_plain_metaclass;
    tmp_compare_right_44 = tmp_urllib3$exceptions_class_creation_22__class_decl_dict;

    tmp_cmp_In_44 = PySequence_Contains( tmp_compare_right_44, tmp_compare_left_44 );
    assert( !(tmp_cmp_In_44 == -1) );
    if ( tmp_cmp_In_44 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_22__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    branch_no_22:;
    tmp_hasattr_source_22 = tmp_urllib3$exceptions_class_creation_22__metaclass;

    tmp_hasattr_attr_22 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_22, tmp_hasattr_attr_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_66;
    }
    else
    {
        goto condexpr_false_66;
    }
    condexpr_true_66:;
    tmp_source_name_22 = tmp_urllib3$exceptions_class_creation_22__metaclass;

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    tmp_args_name_22 = PyTuple_New( 2 );
    tmp_tuple_element_44 = const_str_plain_SubjectAltNameWarning;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_44 );
    tmp_tuple_element_44 = tmp_urllib3$exceptions_class_creation_22__bases;

    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_22, 1, tmp_tuple_element_44 );
    tmp_kw_name_22 = tmp_urllib3$exceptions_class_creation_22__class_decl_dict;

    frame_module->f_lineno = 158;
    tmp_assign_source_115 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_name_22 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    goto condexpr_end_66;
    condexpr_false_66:;
    tmp_assign_source_115 = PyDict_New();
    condexpr_end_66:;
    assert( tmp_urllib3$exceptions_class_creation_22__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_22__prepared = tmp_assign_source_115;

    tmp_assign_source_116 = impl_class_22_SubjectAltNameWarning_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_22__bases, tmp_urllib3$exceptions_class_creation_22__class_decl_dict, tmp_urllib3$exceptions_class_creation_22__metaclass, tmp_urllib3$exceptions_class_creation_22__prepared );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_22;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning, tmp_assign_source_116 );
    goto try_end_22;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_22__bases );
    tmp_urllib3$exceptions_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_22__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_22__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_22__metaclass );
    tmp_urllib3$exceptions_class_creation_22__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_22__prepared );
    tmp_urllib3$exceptions_class_creation_22__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_22__bases );
    tmp_urllib3$exceptions_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_22__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_22__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_22__metaclass );
    tmp_urllib3$exceptions_class_creation_22__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_22__prepared );
    tmp_urllib3$exceptions_class_creation_22__prepared = NULL;

    // Tried code:
    tmp_assign_source_117 = PyTuple_New( 1 );
    tmp_tuple_element_45 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_45 == NULL ))
    {
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_45 == NULL )
    {
        Py_DECREF( tmp_assign_source_117 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        goto try_except_handler_23;
    }

    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_assign_source_117, 0, tmp_tuple_element_45 );
    assert( tmp_urllib3$exceptions_class_creation_23__bases == NULL );
    tmp_urllib3$exceptions_class_creation_23__bases = tmp_assign_source_117;

    tmp_assign_source_118 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_23__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_23__class_decl_dict = tmp_assign_source_118;

    tmp_compare_left_45 = const_str_plain_metaclass;
    tmp_compare_right_45 = tmp_urllib3$exceptions_class_creation_23__class_decl_dict;

    tmp_cmp_In_45 = PySequence_Contains( tmp_compare_right_45, tmp_compare_left_45 );
    assert( !(tmp_cmp_In_45 == -1) );
    if ( tmp_cmp_In_45 == 1 )
    {
        goto condexpr_true_67;
    }
    else
    {
        goto condexpr_false_67;
    }
    condexpr_true_67:;
    tmp_dict_name_23 = tmp_urllib3$exceptions_class_creation_23__class_decl_dict;

    tmp_key_name_23 = const_str_plain_metaclass;
    tmp_metaclass_name_23 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_metaclass_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    goto condexpr_end_67;
    condexpr_false_67:;
    tmp_cond_value_23 = tmp_urllib3$exceptions_class_creation_23__bases;

    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    if ( tmp_cond_truth_23 == 1 )
    {
        goto condexpr_true_68;
    }
    else
    {
        goto condexpr_false_68;
    }
    condexpr_true_68:;
    tmp_subscribed_name_23 = tmp_urllib3$exceptions_class_creation_23__bases;

    tmp_subscript_name_23 = const_int_0;
    tmp_type_arg_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
    if ( tmp_type_arg_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    tmp_metaclass_name_23 = BUILTIN_TYPE1( tmp_type_arg_23 );
    Py_DECREF( tmp_type_arg_23 );
    if ( tmp_metaclass_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    goto condexpr_end_68;
    condexpr_false_68:;
    tmp_metaclass_name_23 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_23 != NULL );
    Py_INCREF( tmp_metaclass_name_23 );
    condexpr_end_68:;
    condexpr_end_67:;
    tmp_bases_name_23 = tmp_urllib3$exceptions_class_creation_23__bases;

    tmp_assign_source_119 = SELECT_METACLASS( tmp_metaclass_name_23, tmp_bases_name_23 );
    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_23 );

        exception_lineno = 163;
        goto try_except_handler_23;
    }
    Py_DECREF( tmp_metaclass_name_23 );
    assert( tmp_urllib3$exceptions_class_creation_23__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_23__metaclass = tmp_assign_source_119;

    tmp_compare_left_46 = const_str_plain_metaclass;
    tmp_compare_right_46 = tmp_urllib3$exceptions_class_creation_23__class_decl_dict;

    tmp_cmp_In_46 = PySequence_Contains( tmp_compare_right_46, tmp_compare_left_46 );
    assert( !(tmp_cmp_In_46 == -1) );
    if ( tmp_cmp_In_46 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_23__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    branch_no_23:;
    tmp_hasattr_source_23 = tmp_urllib3$exceptions_class_creation_23__metaclass;

    tmp_hasattr_attr_23 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_23, tmp_hasattr_attr_23 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_69;
    }
    else
    {
        goto condexpr_false_69;
    }
    condexpr_true_69:;
    tmp_source_name_23 = tmp_urllib3$exceptions_class_creation_23__metaclass;

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain___prepare__ );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    tmp_args_name_23 = PyTuple_New( 2 );
    tmp_tuple_element_46 = const_str_plain_InsecureRequestWarning;
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_23, 0, tmp_tuple_element_46 );
    tmp_tuple_element_46 = tmp_urllib3$exceptions_class_creation_23__bases;

    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_23, 1, tmp_tuple_element_46 );
    tmp_kw_name_23 = tmp_urllib3$exceptions_class_creation_23__class_decl_dict;

    frame_module->f_lineno = 163;
    tmp_assign_source_120 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_name_23 );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    goto condexpr_end_69;
    condexpr_false_69:;
    tmp_assign_source_120 = PyDict_New();
    condexpr_end_69:;
    assert( tmp_urllib3$exceptions_class_creation_23__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_23__prepared = tmp_assign_source_120;

    tmp_assign_source_121 = impl_class_23_InsecureRequestWarning_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_23__bases, tmp_urllib3$exceptions_class_creation_23__class_decl_dict, tmp_urllib3$exceptions_class_creation_23__metaclass, tmp_urllib3$exceptions_class_creation_23__prepared );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_23;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InsecureRequestWarning, tmp_assign_source_121 );
    goto try_end_23;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_23__bases );
    tmp_urllib3$exceptions_class_creation_23__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_23__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_23__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_23__metaclass );
    tmp_urllib3$exceptions_class_creation_23__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_23__prepared );
    tmp_urllib3$exceptions_class_creation_23__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_23__bases );
    tmp_urllib3$exceptions_class_creation_23__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_23__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_23__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_23__metaclass );
    tmp_urllib3$exceptions_class_creation_23__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_23__prepared );
    tmp_urllib3$exceptions_class_creation_23__prepared = NULL;

    // Tried code:
    tmp_assign_source_122 = PyTuple_New( 1 );
    tmp_tuple_element_47 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_47 == NULL ))
    {
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_47 == NULL )
    {
        Py_DECREF( tmp_assign_source_122 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto try_except_handler_24;
    }

    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_assign_source_122, 0, tmp_tuple_element_47 );
    assert( tmp_urllib3$exceptions_class_creation_24__bases == NULL );
    tmp_urllib3$exceptions_class_creation_24__bases = tmp_assign_source_122;

    tmp_assign_source_123 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_24__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_24__class_decl_dict = tmp_assign_source_123;

    tmp_compare_left_47 = const_str_plain_metaclass;
    tmp_compare_right_47 = tmp_urllib3$exceptions_class_creation_24__class_decl_dict;

    tmp_cmp_In_47 = PySequence_Contains( tmp_compare_right_47, tmp_compare_left_47 );
    assert( !(tmp_cmp_In_47 == -1) );
    if ( tmp_cmp_In_47 == 1 )
    {
        goto condexpr_true_70;
    }
    else
    {
        goto condexpr_false_70;
    }
    condexpr_true_70:;
    tmp_dict_name_24 = tmp_urllib3$exceptions_class_creation_24__class_decl_dict;

    tmp_key_name_24 = const_str_plain_metaclass;
    tmp_metaclass_name_24 = DICT_GET_ITEM( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_metaclass_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    goto condexpr_end_70;
    condexpr_false_70:;
    tmp_cond_value_24 = tmp_urllib3$exceptions_class_creation_24__bases;

    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    if ( tmp_cond_truth_24 == 1 )
    {
        goto condexpr_true_71;
    }
    else
    {
        goto condexpr_false_71;
    }
    condexpr_true_71:;
    tmp_subscribed_name_24 = tmp_urllib3$exceptions_class_creation_24__bases;

    tmp_subscript_name_24 = const_int_0;
    tmp_type_arg_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_24 );
    if ( tmp_type_arg_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    tmp_metaclass_name_24 = BUILTIN_TYPE1( tmp_type_arg_24 );
    Py_DECREF( tmp_type_arg_24 );
    if ( tmp_metaclass_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    goto condexpr_end_71;
    condexpr_false_71:;
    tmp_metaclass_name_24 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_24 != NULL );
    Py_INCREF( tmp_metaclass_name_24 );
    condexpr_end_71:;
    condexpr_end_70:;
    tmp_bases_name_24 = tmp_urllib3$exceptions_class_creation_24__bases;

    tmp_assign_source_124 = SELECT_METACLASS( tmp_metaclass_name_24, tmp_bases_name_24 );
    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_24 );

        exception_lineno = 168;
        goto try_except_handler_24;
    }
    Py_DECREF( tmp_metaclass_name_24 );
    assert( tmp_urllib3$exceptions_class_creation_24__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_24__metaclass = tmp_assign_source_124;

    tmp_compare_left_48 = const_str_plain_metaclass;
    tmp_compare_right_48 = tmp_urllib3$exceptions_class_creation_24__class_decl_dict;

    tmp_cmp_In_48 = PySequence_Contains( tmp_compare_right_48, tmp_compare_left_48 );
    assert( !(tmp_cmp_In_48 == -1) );
    if ( tmp_cmp_In_48 == 1 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_24__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    branch_no_24:;
    tmp_hasattr_source_24 = tmp_urllib3$exceptions_class_creation_24__metaclass;

    tmp_hasattr_attr_24 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_24, tmp_hasattr_attr_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_72;
    }
    else
    {
        goto condexpr_false_72;
    }
    condexpr_true_72:;
    tmp_source_name_24 = tmp_urllib3$exceptions_class_creation_24__metaclass;

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain___prepare__ );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    tmp_args_name_24 = PyTuple_New( 2 );
    tmp_tuple_element_48 = const_str_plain_SystemTimeWarning;
    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_48 );
    tmp_tuple_element_48 = tmp_urllib3$exceptions_class_creation_24__bases;

    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_args_name_24, 1, tmp_tuple_element_48 );
    tmp_kw_name_24 = tmp_urllib3$exceptions_class_creation_24__class_decl_dict;

    frame_module->f_lineno = 168;
    tmp_assign_source_125 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_24, tmp_kw_name_24 );
    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_name_24 );
    if ( tmp_assign_source_125 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    goto condexpr_end_72;
    condexpr_false_72:;
    tmp_assign_source_125 = PyDict_New();
    condexpr_end_72:;
    assert( tmp_urllib3$exceptions_class_creation_24__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_24__prepared = tmp_assign_source_125;

    tmp_assign_source_126 = impl_class_24_SystemTimeWarning_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_24__bases, tmp_urllib3$exceptions_class_creation_24__class_decl_dict, tmp_urllib3$exceptions_class_creation_24__metaclass, tmp_urllib3$exceptions_class_creation_24__prepared );
    if ( tmp_assign_source_126 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_24;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning, tmp_assign_source_126 );
    goto try_end_24;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_24__bases );
    tmp_urllib3$exceptions_class_creation_24__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_24__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_24__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_24__metaclass );
    tmp_urllib3$exceptions_class_creation_24__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_24__prepared );
    tmp_urllib3$exceptions_class_creation_24__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_24__bases );
    tmp_urllib3$exceptions_class_creation_24__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_24__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_24__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_24__metaclass );
    tmp_urllib3$exceptions_class_creation_24__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_24__prepared );
    tmp_urllib3$exceptions_class_creation_24__prepared = NULL;

    // Tried code:
    tmp_assign_source_127 = PyTuple_New( 1 );
    tmp_tuple_element_49 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_49 == NULL ))
    {
        tmp_tuple_element_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_49 == NULL )
    {
        Py_DECREF( tmp_assign_source_127 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto try_except_handler_25;
    }

    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_assign_source_127, 0, tmp_tuple_element_49 );
    assert( tmp_urllib3$exceptions_class_creation_25__bases == NULL );
    tmp_urllib3$exceptions_class_creation_25__bases = tmp_assign_source_127;

    tmp_assign_source_128 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_25__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_25__class_decl_dict = tmp_assign_source_128;

    tmp_compare_left_49 = const_str_plain_metaclass;
    tmp_compare_right_49 = tmp_urllib3$exceptions_class_creation_25__class_decl_dict;

    tmp_cmp_In_49 = PySequence_Contains( tmp_compare_right_49, tmp_compare_left_49 );
    assert( !(tmp_cmp_In_49 == -1) );
    if ( tmp_cmp_In_49 == 1 )
    {
        goto condexpr_true_73;
    }
    else
    {
        goto condexpr_false_73;
    }
    condexpr_true_73:;
    tmp_dict_name_25 = tmp_urllib3$exceptions_class_creation_25__class_decl_dict;

    tmp_key_name_25 = const_str_plain_metaclass;
    tmp_metaclass_name_25 = DICT_GET_ITEM( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_metaclass_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    goto condexpr_end_73;
    condexpr_false_73:;
    tmp_cond_value_25 = tmp_urllib3$exceptions_class_creation_25__bases;

    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_25 == 1 )
    {
        goto condexpr_true_74;
    }
    else
    {
        goto condexpr_false_74;
    }
    condexpr_true_74:;
    tmp_subscribed_name_25 = tmp_urllib3$exceptions_class_creation_25__bases;

    tmp_subscript_name_25 = const_int_0;
    tmp_type_arg_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_25, tmp_subscript_name_25 );
    if ( tmp_type_arg_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    tmp_metaclass_name_25 = BUILTIN_TYPE1( tmp_type_arg_25 );
    Py_DECREF( tmp_type_arg_25 );
    if ( tmp_metaclass_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    goto condexpr_end_74;
    condexpr_false_74:;
    tmp_metaclass_name_25 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_25 != NULL );
    Py_INCREF( tmp_metaclass_name_25 );
    condexpr_end_74:;
    condexpr_end_73:;
    tmp_bases_name_25 = tmp_urllib3$exceptions_class_creation_25__bases;

    tmp_assign_source_129 = SELECT_METACLASS( tmp_metaclass_name_25, tmp_bases_name_25 );
    if ( tmp_assign_source_129 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_25 );

        exception_lineno = 173;
        goto try_except_handler_25;
    }
    Py_DECREF( tmp_metaclass_name_25 );
    assert( tmp_urllib3$exceptions_class_creation_25__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_25__metaclass = tmp_assign_source_129;

    tmp_compare_left_50 = const_str_plain_metaclass;
    tmp_compare_right_50 = tmp_urllib3$exceptions_class_creation_25__class_decl_dict;

    tmp_cmp_In_50 = PySequence_Contains( tmp_compare_right_50, tmp_compare_left_50 );
    assert( !(tmp_cmp_In_50 == -1) );
    if ( tmp_cmp_In_50 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_25__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    branch_no_25:;
    tmp_hasattr_source_25 = tmp_urllib3$exceptions_class_creation_25__metaclass;

    tmp_hasattr_attr_25 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_25, tmp_hasattr_attr_25 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_75;
    }
    else
    {
        goto condexpr_false_75;
    }
    condexpr_true_75:;
    tmp_source_name_25 = tmp_urllib3$exceptions_class_creation_25__metaclass;

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain___prepare__ );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    tmp_args_name_25 = PyTuple_New( 2 );
    tmp_tuple_element_50 = const_str_plain_InsecurePlatformWarning;
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_25, 0, tmp_tuple_element_50 );
    tmp_tuple_element_50 = tmp_urllib3$exceptions_class_creation_25__bases;

    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_25, 1, tmp_tuple_element_50 );
    tmp_kw_name_25 = tmp_urllib3$exceptions_class_creation_25__class_decl_dict;

    frame_module->f_lineno = 173;
    tmp_assign_source_130 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_25, tmp_kw_name_25 );
    Py_DECREF( tmp_called_name_25 );
    Py_DECREF( tmp_args_name_25 );
    if ( tmp_assign_source_130 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    goto condexpr_end_75;
    condexpr_false_75:;
    tmp_assign_source_130 = PyDict_New();
    condexpr_end_75:;
    assert( tmp_urllib3$exceptions_class_creation_25__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_25__prepared = tmp_assign_source_130;

    tmp_assign_source_131 = impl_class_25_InsecurePlatformWarning_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_25__bases, tmp_urllib3$exceptions_class_creation_25__class_decl_dict, tmp_urllib3$exceptions_class_creation_25__metaclass, tmp_urllib3$exceptions_class_creation_25__prepared );
    if ( tmp_assign_source_131 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_25;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_131 );
    goto try_end_25;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_25__bases );
    tmp_urllib3$exceptions_class_creation_25__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_25__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_25__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_25__metaclass );
    tmp_urllib3$exceptions_class_creation_25__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_25__prepared );
    tmp_urllib3$exceptions_class_creation_25__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_25__bases );
    tmp_urllib3$exceptions_class_creation_25__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_25__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_25__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_25__metaclass );
    tmp_urllib3$exceptions_class_creation_25__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_25__prepared );
    tmp_urllib3$exceptions_class_creation_25__prepared = NULL;

    // Tried code:
    tmp_assign_source_132 = PyTuple_New( 1 );
    tmp_tuple_element_51 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_51 == NULL ))
    {
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_51 == NULL )
    {
        Py_DECREF( tmp_assign_source_132 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto try_except_handler_26;
    }

    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_assign_source_132, 0, tmp_tuple_element_51 );
    assert( tmp_urllib3$exceptions_class_creation_26__bases == NULL );
    tmp_urllib3$exceptions_class_creation_26__bases = tmp_assign_source_132;

    tmp_assign_source_133 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_26__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_26__class_decl_dict = tmp_assign_source_133;

    tmp_compare_left_51 = const_str_plain_metaclass;
    tmp_compare_right_51 = tmp_urllib3$exceptions_class_creation_26__class_decl_dict;

    tmp_cmp_In_51 = PySequence_Contains( tmp_compare_right_51, tmp_compare_left_51 );
    assert( !(tmp_cmp_In_51 == -1) );
    if ( tmp_cmp_In_51 == 1 )
    {
        goto condexpr_true_76;
    }
    else
    {
        goto condexpr_false_76;
    }
    condexpr_true_76:;
    tmp_dict_name_26 = tmp_urllib3$exceptions_class_creation_26__class_decl_dict;

    tmp_key_name_26 = const_str_plain_metaclass;
    tmp_metaclass_name_26 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_metaclass_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    goto condexpr_end_76;
    condexpr_false_76:;
    tmp_cond_value_26 = tmp_urllib3$exceptions_class_creation_26__bases;

    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    if ( tmp_cond_truth_26 == 1 )
    {
        goto condexpr_true_77;
    }
    else
    {
        goto condexpr_false_77;
    }
    condexpr_true_77:;
    tmp_subscribed_name_26 = tmp_urllib3$exceptions_class_creation_26__bases;

    tmp_subscript_name_26 = const_int_0;
    tmp_type_arg_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_26, tmp_subscript_name_26 );
    if ( tmp_type_arg_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    tmp_metaclass_name_26 = BUILTIN_TYPE1( tmp_type_arg_26 );
    Py_DECREF( tmp_type_arg_26 );
    if ( tmp_metaclass_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    goto condexpr_end_77;
    condexpr_false_77:;
    tmp_metaclass_name_26 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_26 != NULL );
    Py_INCREF( tmp_metaclass_name_26 );
    condexpr_end_77:;
    condexpr_end_76:;
    tmp_bases_name_26 = tmp_urllib3$exceptions_class_creation_26__bases;

    tmp_assign_source_134 = SELECT_METACLASS( tmp_metaclass_name_26, tmp_bases_name_26 );
    if ( tmp_assign_source_134 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_26 );

        exception_lineno = 178;
        goto try_except_handler_26;
    }
    Py_DECREF( tmp_metaclass_name_26 );
    assert( tmp_urllib3$exceptions_class_creation_26__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_26__metaclass = tmp_assign_source_134;

    tmp_compare_left_52 = const_str_plain_metaclass;
    tmp_compare_right_52 = tmp_urllib3$exceptions_class_creation_26__class_decl_dict;

    tmp_cmp_In_52 = PySequence_Contains( tmp_compare_right_52, tmp_compare_left_52 );
    assert( !(tmp_cmp_In_52 == -1) );
    if ( tmp_cmp_In_52 == 1 )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_26__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    branch_no_26:;
    tmp_hasattr_source_26 = tmp_urllib3$exceptions_class_creation_26__metaclass;

    tmp_hasattr_attr_26 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_26, tmp_hasattr_attr_26 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_78;
    }
    else
    {
        goto condexpr_false_78;
    }
    condexpr_true_78:;
    tmp_source_name_26 = tmp_urllib3$exceptions_class_creation_26__metaclass;

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain___prepare__ );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    tmp_args_name_26 = PyTuple_New( 2 );
    tmp_tuple_element_52 = const_str_plain_SNIMissingWarning;
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_26, 0, tmp_tuple_element_52 );
    tmp_tuple_element_52 = tmp_urllib3$exceptions_class_creation_26__bases;

    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_26, 1, tmp_tuple_element_52 );
    tmp_kw_name_26 = tmp_urllib3$exceptions_class_creation_26__class_decl_dict;

    frame_module->f_lineno = 178;
    tmp_assign_source_135 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_26, tmp_kw_name_26 );
    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_args_name_26 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    goto condexpr_end_78;
    condexpr_false_78:;
    tmp_assign_source_135 = PyDict_New();
    condexpr_end_78:;
    assert( tmp_urllib3$exceptions_class_creation_26__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_26__prepared = tmp_assign_source_135;

    tmp_assign_source_136 = impl_class_26_SNIMissingWarning_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_26__bases, tmp_urllib3$exceptions_class_creation_26__class_decl_dict, tmp_urllib3$exceptions_class_creation_26__metaclass, tmp_urllib3$exceptions_class_creation_26__prepared );
    if ( tmp_assign_source_136 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_26;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_136 );
    goto try_end_26;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_26__bases );
    tmp_urllib3$exceptions_class_creation_26__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_26__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_26__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_26__metaclass );
    tmp_urllib3$exceptions_class_creation_26__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_26__prepared );
    tmp_urllib3$exceptions_class_creation_26__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_26__bases );
    tmp_urllib3$exceptions_class_creation_26__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_26__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_26__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_26__metaclass );
    tmp_urllib3$exceptions_class_creation_26__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_26__prepared );
    tmp_urllib3$exceptions_class_creation_26__prepared = NULL;

    // Tried code:
    tmp_assign_source_137 = PyTuple_New( 1 );
    tmp_tuple_element_53 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_53 == NULL ))
    {
        tmp_tuple_element_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_53 == NULL )
    {
        Py_DECREF( tmp_assign_source_137 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        goto try_except_handler_27;
    }

    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_assign_source_137, 0, tmp_tuple_element_53 );
    assert( tmp_urllib3$exceptions_class_creation_27__bases == NULL );
    tmp_urllib3$exceptions_class_creation_27__bases = tmp_assign_source_137;

    tmp_assign_source_138 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_27__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_27__class_decl_dict = tmp_assign_source_138;

    tmp_compare_left_53 = const_str_plain_metaclass;
    tmp_compare_right_53 = tmp_urllib3$exceptions_class_creation_27__class_decl_dict;

    tmp_cmp_In_53 = PySequence_Contains( tmp_compare_right_53, tmp_compare_left_53 );
    assert( !(tmp_cmp_In_53 == -1) );
    if ( tmp_cmp_In_53 == 1 )
    {
        goto condexpr_true_79;
    }
    else
    {
        goto condexpr_false_79;
    }
    condexpr_true_79:;
    tmp_dict_name_27 = tmp_urllib3$exceptions_class_creation_27__class_decl_dict;

    tmp_key_name_27 = const_str_plain_metaclass;
    tmp_metaclass_name_27 = DICT_GET_ITEM( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_metaclass_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    goto condexpr_end_79;
    condexpr_false_79:;
    tmp_cond_value_27 = tmp_urllib3$exceptions_class_creation_27__bases;

    tmp_cond_truth_27 = CHECK_IF_TRUE( tmp_cond_value_27 );
    if ( tmp_cond_truth_27 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    if ( tmp_cond_truth_27 == 1 )
    {
        goto condexpr_true_80;
    }
    else
    {
        goto condexpr_false_80;
    }
    condexpr_true_80:;
    tmp_subscribed_name_27 = tmp_urllib3$exceptions_class_creation_27__bases;

    tmp_subscript_name_27 = const_int_0;
    tmp_type_arg_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
    if ( tmp_type_arg_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    tmp_metaclass_name_27 = BUILTIN_TYPE1( tmp_type_arg_27 );
    Py_DECREF( tmp_type_arg_27 );
    if ( tmp_metaclass_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    goto condexpr_end_80;
    condexpr_false_80:;
    tmp_metaclass_name_27 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_27 != NULL );
    Py_INCREF( tmp_metaclass_name_27 );
    condexpr_end_80:;
    condexpr_end_79:;
    tmp_bases_name_27 = tmp_urllib3$exceptions_class_creation_27__bases;

    tmp_assign_source_139 = SELECT_METACLASS( tmp_metaclass_name_27, tmp_bases_name_27 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_27 );

        exception_lineno = 183;
        goto try_except_handler_27;
    }
    Py_DECREF( tmp_metaclass_name_27 );
    assert( tmp_urllib3$exceptions_class_creation_27__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_27__metaclass = tmp_assign_source_139;

    tmp_compare_left_54 = const_str_plain_metaclass;
    tmp_compare_right_54 = tmp_urllib3$exceptions_class_creation_27__class_decl_dict;

    tmp_cmp_In_54 = PySequence_Contains( tmp_compare_right_54, tmp_compare_left_54 );
    assert( !(tmp_cmp_In_54 == -1) );
    if ( tmp_cmp_In_54 == 1 )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_27__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    branch_no_27:;
    tmp_hasattr_source_27 = tmp_urllib3$exceptions_class_creation_27__metaclass;

    tmp_hasattr_attr_27 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_27, tmp_hasattr_attr_27 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_81;
    }
    else
    {
        goto condexpr_false_81;
    }
    condexpr_true_81:;
    tmp_source_name_27 = tmp_urllib3$exceptions_class_creation_27__metaclass;

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain___prepare__ );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    tmp_args_name_27 = PyTuple_New( 2 );
    tmp_tuple_element_54 = const_str_plain_DependencyWarning;
    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_args_name_27, 0, tmp_tuple_element_54 );
    tmp_tuple_element_54 = tmp_urllib3$exceptions_class_creation_27__bases;

    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_args_name_27, 1, tmp_tuple_element_54 );
    tmp_kw_name_27 = tmp_urllib3$exceptions_class_creation_27__class_decl_dict;

    frame_module->f_lineno = 183;
    tmp_assign_source_140 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_27, tmp_kw_name_27 );
    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_name_27 );
    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    goto condexpr_end_81;
    condexpr_false_81:;
    tmp_assign_source_140 = PyDict_New();
    condexpr_end_81:;
    assert( tmp_urllib3$exceptions_class_creation_27__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_27__prepared = tmp_assign_source_140;

    tmp_assign_source_141 = impl_class_27_DependencyWarning_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_27__bases, tmp_urllib3$exceptions_class_creation_27__class_decl_dict, tmp_urllib3$exceptions_class_creation_27__metaclass, tmp_urllib3$exceptions_class_creation_27__prepared );
    if ( tmp_assign_source_141 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_27;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_DependencyWarning, tmp_assign_source_141 );
    goto try_end_27;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_27__bases );
    tmp_urllib3$exceptions_class_creation_27__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_27__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_27__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_27__metaclass );
    tmp_urllib3$exceptions_class_creation_27__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_27__prepared );
    tmp_urllib3$exceptions_class_creation_27__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_27__bases );
    tmp_urllib3$exceptions_class_creation_27__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_27__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_27__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_27__metaclass );
    tmp_urllib3$exceptions_class_creation_27__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_27__prepared );
    tmp_urllib3$exceptions_class_creation_27__prepared = NULL;

    // Tried code:
    tmp_assign_source_142 = PyTuple_New( 2 );
    tmp_tuple_element_55 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_tuple_element_55 == NULL ))
    {
        tmp_tuple_element_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_tuple_element_55 == NULL )
    {
        Py_DECREF( tmp_assign_source_142 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        goto try_except_handler_28;
    }

    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_assign_source_142, 0, tmp_tuple_element_55 );
    tmp_tuple_element_55 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_assign_source_142, 1, tmp_tuple_element_55 );
    assert( tmp_urllib3$exceptions_class_creation_28__bases == NULL );
    tmp_urllib3$exceptions_class_creation_28__bases = tmp_assign_source_142;

    tmp_assign_source_143 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_28__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_28__class_decl_dict = tmp_assign_source_143;

    tmp_compare_left_55 = const_str_plain_metaclass;
    tmp_compare_right_55 = tmp_urllib3$exceptions_class_creation_28__class_decl_dict;

    tmp_cmp_In_55 = PySequence_Contains( tmp_compare_right_55, tmp_compare_left_55 );
    assert( !(tmp_cmp_In_55 == -1) );
    if ( tmp_cmp_In_55 == 1 )
    {
        goto condexpr_true_82;
    }
    else
    {
        goto condexpr_false_82;
    }
    condexpr_true_82:;
    tmp_dict_name_28 = tmp_urllib3$exceptions_class_creation_28__class_decl_dict;

    tmp_key_name_28 = const_str_plain_metaclass;
    tmp_metaclass_name_28 = DICT_GET_ITEM( tmp_dict_name_28, tmp_key_name_28 );
    if ( tmp_metaclass_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    goto condexpr_end_82;
    condexpr_false_82:;
    tmp_cond_value_28 = tmp_urllib3$exceptions_class_creation_28__bases;

    tmp_cond_truth_28 = CHECK_IF_TRUE( tmp_cond_value_28 );
    if ( tmp_cond_truth_28 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_28 == 1 )
    {
        goto condexpr_true_83;
    }
    else
    {
        goto condexpr_false_83;
    }
    condexpr_true_83:;
    tmp_subscribed_name_28 = tmp_urllib3$exceptions_class_creation_28__bases;

    tmp_subscript_name_28 = const_int_0;
    tmp_type_arg_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_28, tmp_subscript_name_28 );
    if ( tmp_type_arg_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    tmp_metaclass_name_28 = BUILTIN_TYPE1( tmp_type_arg_28 );
    Py_DECREF( tmp_type_arg_28 );
    if ( tmp_metaclass_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    goto condexpr_end_83;
    condexpr_false_83:;
    tmp_metaclass_name_28 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_28 != NULL );
    Py_INCREF( tmp_metaclass_name_28 );
    condexpr_end_83:;
    condexpr_end_82:;
    tmp_bases_name_28 = tmp_urllib3$exceptions_class_creation_28__bases;

    tmp_assign_source_144 = SELECT_METACLASS( tmp_metaclass_name_28, tmp_bases_name_28 );
    if ( tmp_assign_source_144 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_28 );

        exception_lineno = 191;
        goto try_except_handler_28;
    }
    Py_DECREF( tmp_metaclass_name_28 );
    assert( tmp_urllib3$exceptions_class_creation_28__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_28__metaclass = tmp_assign_source_144;

    tmp_compare_left_56 = const_str_plain_metaclass;
    tmp_compare_right_56 = tmp_urllib3$exceptions_class_creation_28__class_decl_dict;

    tmp_cmp_In_56 = PySequence_Contains( tmp_compare_right_56, tmp_compare_left_56 );
    assert( !(tmp_cmp_In_56 == -1) );
    if ( tmp_cmp_In_56 == 1 )
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_28__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    branch_no_28:;
    tmp_hasattr_source_28 = tmp_urllib3$exceptions_class_creation_28__metaclass;

    tmp_hasattr_attr_28 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_28, tmp_hasattr_attr_28 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_84;
    }
    else
    {
        goto condexpr_false_84;
    }
    condexpr_true_84:;
    tmp_source_name_28 = tmp_urllib3$exceptions_class_creation_28__metaclass;

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain___prepare__ );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    tmp_args_name_28 = PyTuple_New( 2 );
    tmp_tuple_element_56 = const_str_plain_ResponseNotChunked;
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_28, 0, tmp_tuple_element_56 );
    tmp_tuple_element_56 = tmp_urllib3$exceptions_class_creation_28__bases;

    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_28, 1, tmp_tuple_element_56 );
    tmp_kw_name_28 = tmp_urllib3$exceptions_class_creation_28__class_decl_dict;

    frame_module->f_lineno = 191;
    tmp_assign_source_145 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_28, tmp_kw_name_28 );
    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_args_name_28 );
    if ( tmp_assign_source_145 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    goto condexpr_end_84;
    condexpr_false_84:;
    tmp_assign_source_145 = PyDict_New();
    condexpr_end_84:;
    assert( tmp_urllib3$exceptions_class_creation_28__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_28__prepared = tmp_assign_source_145;

    tmp_assign_source_146 = impl_class_28_ResponseNotChunked_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_28__bases, tmp_urllib3$exceptions_class_creation_28__class_decl_dict, tmp_urllib3$exceptions_class_creation_28__metaclass, tmp_urllib3$exceptions_class_creation_28__prepared );
    if ( tmp_assign_source_146 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_28;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ResponseNotChunked, tmp_assign_source_146 );
    goto try_end_28;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_28__bases );
    tmp_urllib3$exceptions_class_creation_28__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_28__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_28__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_28__metaclass );
    tmp_urllib3$exceptions_class_creation_28__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_28__prepared );
    tmp_urllib3$exceptions_class_creation_28__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_28__bases );
    tmp_urllib3$exceptions_class_creation_28__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_28__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_28__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_28__metaclass );
    tmp_urllib3$exceptions_class_creation_28__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_28__prepared );
    tmp_urllib3$exceptions_class_creation_28__prepared = NULL;

    tmp_assign_source_147 = PyTuple_New( 2 );
    tmp_tuple_element_57 = PyExc_AssertionError;
    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_assign_source_147, 0, tmp_tuple_element_57 );
    tmp_tuple_element_57 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_assign_source_147, 1, tmp_tuple_element_57 );
    assert( tmp_urllib3$exceptions_class_creation_29__bases == NULL );
    tmp_urllib3$exceptions_class_creation_29__bases = tmp_assign_source_147;

    tmp_assign_source_148 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_29__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_29__class_decl_dict = tmp_assign_source_148;

    // Tried code:
    tmp_compare_left_57 = const_str_plain_metaclass;
    tmp_compare_right_57 = tmp_urllib3$exceptions_class_creation_29__class_decl_dict;

    tmp_cmp_In_57 = PySequence_Contains( tmp_compare_right_57, tmp_compare_left_57 );
    assert( !(tmp_cmp_In_57 == -1) );
    if ( tmp_cmp_In_57 == 1 )
    {
        goto condexpr_true_85;
    }
    else
    {
        goto condexpr_false_85;
    }
    condexpr_true_85:;
    tmp_dict_name_29 = tmp_urllib3$exceptions_class_creation_29__class_decl_dict;

    tmp_key_name_29 = const_str_plain_metaclass;
    tmp_metaclass_name_29 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
    if ( tmp_metaclass_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    goto condexpr_end_85;
    condexpr_false_85:;
    tmp_cond_value_29 = tmp_urllib3$exceptions_class_creation_29__bases;

    tmp_cond_truth_29 = CHECK_IF_TRUE( tmp_cond_value_29 );
    if ( tmp_cond_truth_29 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    if ( tmp_cond_truth_29 == 1 )
    {
        goto condexpr_true_86;
    }
    else
    {
        goto condexpr_false_86;
    }
    condexpr_true_86:;
    tmp_subscribed_name_29 = tmp_urllib3$exceptions_class_creation_29__bases;

    tmp_subscript_name_29 = const_int_0;
    tmp_type_arg_29 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_29, tmp_subscript_name_29 );
    if ( tmp_type_arg_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    tmp_metaclass_name_29 = BUILTIN_TYPE1( tmp_type_arg_29 );
    Py_DECREF( tmp_type_arg_29 );
    if ( tmp_metaclass_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    goto condexpr_end_86;
    condexpr_false_86:;
    tmp_metaclass_name_29 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_29 != NULL );
    Py_INCREF( tmp_metaclass_name_29 );
    condexpr_end_86:;
    condexpr_end_85:;
    tmp_bases_name_29 = tmp_urllib3$exceptions_class_creation_29__bases;

    tmp_assign_source_149 = SELECT_METACLASS( tmp_metaclass_name_29, tmp_bases_name_29 );
    if ( tmp_assign_source_149 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_29 );

        exception_lineno = 196;
        goto try_except_handler_29;
    }
    Py_DECREF( tmp_metaclass_name_29 );
    assert( tmp_urllib3$exceptions_class_creation_29__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_29__metaclass = tmp_assign_source_149;

    tmp_compare_left_58 = const_str_plain_metaclass;
    tmp_compare_right_58 = tmp_urllib3$exceptions_class_creation_29__class_decl_dict;

    tmp_cmp_In_58 = PySequence_Contains( tmp_compare_right_58, tmp_compare_left_58 );
    assert( !(tmp_cmp_In_58 == -1) );
    if ( tmp_cmp_In_58 == 1 )
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_29__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    branch_no_29:;
    tmp_hasattr_source_29 = tmp_urllib3$exceptions_class_creation_29__metaclass;

    tmp_hasattr_attr_29 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_29, tmp_hasattr_attr_29 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_87;
    }
    else
    {
        goto condexpr_false_87;
    }
    condexpr_true_87:;
    tmp_source_name_29 = tmp_urllib3$exceptions_class_creation_29__metaclass;

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain___prepare__ );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    tmp_args_name_29 = PyTuple_New( 2 );
    tmp_tuple_element_58 = const_str_plain_ProxySchemeUnknown;
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_29, 0, tmp_tuple_element_58 );
    tmp_tuple_element_58 = tmp_urllib3$exceptions_class_creation_29__bases;

    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_29, 1, tmp_tuple_element_58 );
    tmp_kw_name_29 = tmp_urllib3$exceptions_class_creation_29__class_decl_dict;

    frame_module->f_lineno = 196;
    tmp_assign_source_150 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_29, tmp_kw_name_29 );
    Py_DECREF( tmp_called_name_29 );
    Py_DECREF( tmp_args_name_29 );
    if ( tmp_assign_source_150 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    goto condexpr_end_87;
    condexpr_false_87:;
    tmp_assign_source_150 = PyDict_New();
    condexpr_end_87:;
    assert( tmp_urllib3$exceptions_class_creation_29__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_29__prepared = tmp_assign_source_150;

    tmp_assign_source_151 = impl_class_29_ProxySchemeUnknown_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_29__bases, tmp_urllib3$exceptions_class_creation_29__class_decl_dict, tmp_urllib3$exceptions_class_creation_29__metaclass, tmp_urllib3$exceptions_class_creation_29__prepared );
    if ( tmp_assign_source_151 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_29;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown, tmp_assign_source_151 );
    goto try_end_29;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_29__bases );
    tmp_urllib3$exceptions_class_creation_29__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_29__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_29__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_29__metaclass );
    tmp_urllib3$exceptions_class_creation_29__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_29__prepared );
    tmp_urllib3$exceptions_class_creation_29__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_29__bases );
    tmp_urllib3$exceptions_class_creation_29__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_29__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_29__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_29__metaclass );
    tmp_urllib3$exceptions_class_creation_29__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_29__prepared );
    tmp_urllib3$exceptions_class_creation_29__prepared = NULL;

    // Tried code:
    tmp_assign_source_152 = PyTuple_New( 1 );
    tmp_tuple_element_59 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_59 == NULL ))
    {
        tmp_tuple_element_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_59 == NULL )
    {
        Py_DECREF( tmp_assign_source_152 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        goto try_except_handler_30;
    }

    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_assign_source_152, 0, tmp_tuple_element_59 );
    assert( tmp_urllib3$exceptions_class_creation_30__bases == NULL );
    tmp_urllib3$exceptions_class_creation_30__bases = tmp_assign_source_152;

    tmp_assign_source_153 = PyDict_New();
    assert( tmp_urllib3$exceptions_class_creation_30__class_decl_dict == NULL );
    tmp_urllib3$exceptions_class_creation_30__class_decl_dict = tmp_assign_source_153;

    tmp_compare_left_59 = const_str_plain_metaclass;
    tmp_compare_right_59 = tmp_urllib3$exceptions_class_creation_30__class_decl_dict;

    tmp_cmp_In_59 = PySequence_Contains( tmp_compare_right_59, tmp_compare_left_59 );
    assert( !(tmp_cmp_In_59 == -1) );
    if ( tmp_cmp_In_59 == 1 )
    {
        goto condexpr_true_88;
    }
    else
    {
        goto condexpr_false_88;
    }
    condexpr_true_88:;
    tmp_dict_name_30 = tmp_urllib3$exceptions_class_creation_30__class_decl_dict;

    tmp_key_name_30 = const_str_plain_metaclass;
    tmp_metaclass_name_30 = DICT_GET_ITEM( tmp_dict_name_30, tmp_key_name_30 );
    if ( tmp_metaclass_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    goto condexpr_end_88;
    condexpr_false_88:;
    tmp_cond_value_30 = tmp_urllib3$exceptions_class_creation_30__bases;

    tmp_cond_truth_30 = CHECK_IF_TRUE( tmp_cond_value_30 );
    if ( tmp_cond_truth_30 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    if ( tmp_cond_truth_30 == 1 )
    {
        goto condexpr_true_89;
    }
    else
    {
        goto condexpr_false_89;
    }
    condexpr_true_89:;
    tmp_subscribed_name_30 = tmp_urllib3$exceptions_class_creation_30__bases;

    tmp_subscript_name_30 = const_int_0;
    tmp_type_arg_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_30, tmp_subscript_name_30 );
    if ( tmp_type_arg_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    tmp_metaclass_name_30 = BUILTIN_TYPE1( tmp_type_arg_30 );
    Py_DECREF( tmp_type_arg_30 );
    if ( tmp_metaclass_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    goto condexpr_end_89;
    condexpr_false_89:;
    tmp_metaclass_name_30 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_30 != NULL );
    Py_INCREF( tmp_metaclass_name_30 );
    condexpr_end_89:;
    condexpr_end_88:;
    tmp_bases_name_30 = tmp_urllib3$exceptions_class_creation_30__bases;

    tmp_assign_source_154 = SELECT_METACLASS( tmp_metaclass_name_30, tmp_bases_name_30 );
    if ( tmp_assign_source_154 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_30 );

        exception_lineno = 205;
        goto try_except_handler_30;
    }
    Py_DECREF( tmp_metaclass_name_30 );
    assert( tmp_urllib3$exceptions_class_creation_30__metaclass == NULL );
    tmp_urllib3$exceptions_class_creation_30__metaclass = tmp_assign_source_154;

    tmp_compare_left_60 = const_str_plain_metaclass;
    tmp_compare_right_60 = tmp_urllib3$exceptions_class_creation_30__class_decl_dict;

    tmp_cmp_In_60 = PySequence_Contains( tmp_compare_right_60, tmp_compare_left_60 );
    assert( !(tmp_cmp_In_60 == -1) );
    if ( tmp_cmp_In_60 == 1 )
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    tmp_dictdel_dict = tmp_urllib3$exceptions_class_creation_30__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    branch_no_30:;
    tmp_hasattr_source_30 = tmp_urllib3$exceptions_class_creation_30__metaclass;

    tmp_hasattr_attr_30 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_30, tmp_hasattr_attr_30 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_90;
    }
    else
    {
        goto condexpr_false_90;
    }
    condexpr_true_90:;
    tmp_source_name_30 = tmp_urllib3$exceptions_class_creation_30__metaclass;

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain___prepare__ );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    tmp_args_name_30 = PyTuple_New( 2 );
    tmp_tuple_element_60 = const_str_plain_HeaderParsingError;
    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_args_name_30, 0, tmp_tuple_element_60 );
    tmp_tuple_element_60 = tmp_urllib3$exceptions_class_creation_30__bases;

    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_args_name_30, 1, tmp_tuple_element_60 );
    tmp_kw_name_30 = tmp_urllib3$exceptions_class_creation_30__class_decl_dict;

    frame_module->f_lineno = 205;
    tmp_assign_source_155 = CALL_FUNCTION( tmp_called_name_30, tmp_args_name_30, tmp_kw_name_30 );
    Py_DECREF( tmp_called_name_30 );
    Py_DECREF( tmp_args_name_30 );
    if ( tmp_assign_source_155 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    goto condexpr_end_90;
    condexpr_false_90:;
    tmp_assign_source_155 = PyDict_New();
    condexpr_end_90:;
    assert( tmp_urllib3$exceptions_class_creation_30__prepared == NULL );
    tmp_urllib3$exceptions_class_creation_30__prepared = tmp_assign_source_155;

    tmp_assign_source_156 = impl_class_30_HeaderParsingError_of_urllib3$exceptions( NULL, tmp_urllib3$exceptions_class_creation_30__bases, tmp_urllib3$exceptions_class_creation_30__class_decl_dict, tmp_urllib3$exceptions_class_creation_30__metaclass, tmp_urllib3$exceptions_class_creation_30__prepared );
    if ( tmp_assign_source_156 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto try_except_handler_30;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HeaderParsingError, tmp_assign_source_156 );
    goto try_end_30;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_30__bases );
    tmp_urllib3$exceptions_class_creation_30__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_30__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_30__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_30__metaclass );
    tmp_urllib3$exceptions_class_creation_30__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_30__prepared );
    tmp_urllib3$exceptions_class_creation_30__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_module, exception_lineno );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_urllib3$exceptions_class_creation_30__bases );
    tmp_urllib3$exceptions_class_creation_30__bases = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_30__class_decl_dict );
    tmp_urllib3$exceptions_class_creation_30__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_30__metaclass );
    tmp_urllib3$exceptions_class_creation_30__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$exceptions_class_creation_30__prepared );
    tmp_urllib3$exceptions_class_creation_30__prepared = NULL;


    return MOD_RETURN_VALUE( module_urllib3$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
