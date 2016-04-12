// Generated code for Python source for module 'urllib3.util.ssl_'
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

// The _module_urllib3$util$ssl_ is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_urllib3$util$ssl_;
PyDictObject *moduledict_urllib3$util$ssl_;

// The module constants used
extern PyObject *const_tuple_int_pos_3_int_pos_2_tuple;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_digest_7c46323d1955d9b4a74a964a21041d91;
extern PyObject *const_tuple_str_plain_HAS_SNI_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_load_cert_chain;
extern PyObject *const_str_plain_create_default_context;
extern PyObject *const_str_plain_unhexlify;
extern PyObject *const_tuple_str_plain_self_str_plain_cipher_suite_tuple;
static PyObject *const_tuple_9473549b7ba644563513e7e61e0dc810_tuple;
extern PyObject *const_str_plain_hashfunc;
static PyObject *const_str_digest_bfe263face1f2a45312e2eacbf7b6e43;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_OP_NO_SSLv2;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_hmac;
extern PyObject *const_str_digest_90dcfb0c5b2e395585c44f2c6f8db8bf;
extern PyObject *const_str_digest_f2ba34680fb338cc7c2e32fdb7c1301a;
extern PyObject *const_str_plain_HAS_SNI;
extern PyObject *const_str_plain_encode;
extern PyObject *const_tuple_str_plain_self_str_plain_protocol_version_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_resolve_cert_reqs;
extern PyObject *const_str_plain_protocol;
extern PyObject *const_str_plain_HASHFUNC_MAP;
extern PyObject *const_str_digest_69e25692dfd1b01029aea21de378705a;
extern PyObject *const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple;
extern PyObject *const_str_plain_IS_PYOPENSSL;
extern PyObject *const_str_plain_hexlify;
static PyObject *const_str_plain_server_side;
extern PyObject *const_str_plain_ssl_;
extern PyObject *const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple;
extern PyObject *const_str_plain_ciphers;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_candidate;
extern PyObject *const_int_pos_16777216;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_load_verify_locations;
extern PyObject *const_str_plain_ssl_version;
extern PyObject *const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple;
extern PyObject *const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_none_false_tuple;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_hashlib;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_plain_bytearray;
extern PyObject *const_str_plain_SNIMissingWarning;
extern PyObject *const_tuple_str_chr_58_str_empty_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple;
extern PyObject *const_str_plain_create_urllib3_context;
extern PyObject *const_int_pos_131072;
extern PyObject *const_str_plain_protocol_version;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_digest_1e4f35ebb0482ef8f0f24ba4e0927107;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_set_ciphers;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_assert_fingerprint;
extern PyObject *const_str_plain_ssl_context;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
extern PyObject *const_str_plain_verify_mode;
extern PyObject *const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_OP_NO_SSLv3;
extern PyObject *const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_digest_6ffcf66c5c876dcb3dc480220c734062;
extern PyObject *const_str_plain_cert_digest;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_resolve_ssl_version;
extern PyObject *const_str_digest_7e022d086a052671147967e3e56cd0cb;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_capath;
extern PyObject *const_int_0;
extern PyObject *const_str_plain__const_compare_digest_backport;
extern PyObject *const_tuple_int_pos_16777216_int_pos_33554432_tuple;
extern PyObject *const_str_plain_server_hostname;
extern PyObject *const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1;
extern PyObject *const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple;
extern PyObject *const_tuple_int_pos_2_int_pos_7_tuple;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_DEFAULT_CIPHERS;
extern PyObject *const_str_plain_cert_reqs;
extern PyObject *const_tuple_none_none_none_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_digest_716aea1eaac37029978ba81ff09f5824;
extern PyObject *const_str_plain_CERT_;
extern PyObject *const_str_plain_supports_set_ciphers;
extern PyObject *const_int_pos_64;
extern PyObject *const_int_pos_33554432;
extern PyObject *const_str_digest_e3db3ee12166b00e30746ab96478c070;
extern PyObject *const_str_plain_digest_length;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_CERT_NONE;
static PyObject *const_str_digest_b100075a6026372a849bdb9abd69ebcf;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_PROTOCOL_SSLv23;
extern PyObject *const_str_plain_cipher_suite;
extern PyObject *const_str_plain_fingerprint;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_digest_c6e5c4394838f24a74fcd724137f89e0;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_str_plain_wrap_socket;
extern PyObject *const_str_plain_cafile;
extern PyObject *const_str_plain_ENOENT;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_ca_certs;
extern PyObject *const_str_plain_ssl_wrap_socket;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_digest;
extern PyObject *const_str_plain_compare_digest;
extern PyObject *const_str_plain_PROTOCOL_;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple;
extern PyObject *const_str_plain_fingerprint_bytes;
extern PyObject *const_tuple_str_plain_candidate_str_plain_res_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_OP_NO_COMPRESSION;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple;
extern PyObject *const_str_plain__const_compare_digest;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_md5;
extern PyObject *const_str_digest_935dace93363545d379a5e2ed3994f38;
extern PyObject *const_int_pos_40;
extern PyObject *const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple;
extern PyObject *const_str_plain_keyfile;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_digest_a0adb01dd8d355d29039a847a354795c;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple;
extern PyObject *const_str_plain_sha256;
extern PyObject *const_str_plain_check_hostname;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_certfile;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_cfe37f37cc27af3b9adae240209b8322;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_str_plain_SSLContext_tuple;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple;
extern PyObject *const_str_plain_InsecurePlatformWarning;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_9473549b7ba644563513e7e61e0dc810_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 1, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 2, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    const_str_plain_server_side = UNSTREAM_STRING( &constant_bin[ 745082 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 3, const_str_plain_server_side ); Py_INCREF( const_str_plain_server_side );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_bfe263face1f2a45312e2eacbf7b6e43 = UNSTREAM_STRING( &constant_bin[ 745093 ], 386, 0 );
    const_str_digest_6efba4feba5d3ac1fc26ca13b212a604 = UNSTREAM_STRING( &constant_bin[ 195518 ], 17, 0 );
    const_str_digest_b100075a6026372a849bdb9abd69ebcf = UNSTREAM_STRING( &constant_bin[ 745479 ], 313, 0 );
    const_str_digest_cfe37f37cc27af3b9adae240209b8322 = UNSTREAM_STRING( &constant_bin[ 745792 ], 53, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$ssl_( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bfe3f4854904a71342978809bc6cc4a1;
static PyCodeObject *codeobj_f986502b44bc9294bad75c793675d3e1;
static PyCodeObject *codeobj_0fbc2ff22544821092df8157ea51f727;
static PyCodeObject *codeobj_f0c99f344c5dd7d01f5acdba5c0029ac;
static PyCodeObject *codeobj_a95bbb8fc6b111cd2f40f92943e5efeb;
static PyCodeObject *codeobj_79d9616d34069481495bd9d24e897895;
static PyCodeObject *codeobj_657b9841737a93d7971257addcf02db9;
static PyCodeObject *codeobj_ca5f805fddc29605a9353b53f2598dbc;
static PyCodeObject *codeobj_c69efdb3d59ee243ed8c0af02e869c56;
static PyCodeObject *codeobj_3853fb5b224c90b0bfc0f829485df628;
static PyCodeObject *codeobj_357abed35f593efce2d93ac998ba5c47;
static PyCodeObject *codeobj_814155574bfdd99cd40408e68e0ec5f7;
static PyCodeObject *codeobj_cc875a3bb3042a9c13938bc598c5654a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_cfe37f37cc27af3b9adae240209b8322;
    codeobj_bfe3f4854904a71342978809bc6cc4a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SSLContext, 80, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f986502b44bc9294bad75c793675d3e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 84, const_tuple_str_plain_self_str_plain_protocol_version_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0fbc2ff22544821092df8157ea51f727 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__const_compare_digest_backport, 25, const_tuple_80d4b37eb5ab99a2e278f3d98716711a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f0c99f344c5dd7d01f5acdba5c0029ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_assert_fingerprint, 138, const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a95bbb8fc6b111cd2f40f92943e5efeb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_urllib3_context, 204, const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79d9616d34069481495bd9d24e897895 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_cert_chain, 95, const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_657b9841737a93d7971257addcf02db9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_verify_locations, 99, const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ca5f805fddc29605a9353b53f2598dbc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_cert_reqs, 165, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c69efdb3d59ee243ed8c0af02e869c56 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_ssl_version, 188, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3853fb5b224c90b0bfc0f829485df628 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_ciphers, 105, const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_357abed35f593efce2d93ac998ba5c47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ssl_, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_814155574bfdd99cd40408e68e0ec5f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ssl_wrap_socket, 267, const_tuple_ed3c5309b7f3237bcf9ef5448d4a419f_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cc875a3bb3042a9c13938bc598c5654a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_socket, 114, const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SSLContext_of_urllib3$util$ssl_( PyObject **python_pars, PyObject *&closure_urllib3$util$ssl__class_creation_1__bases, PyObject *&closure_urllib3$util$ssl__class_creation_1__class_decl_dict, PyObject *&closure_urllib3$util$ssl__class_creation_1__metaclass, PyObject *&closure_urllib3$util$ssl__class_creation_1__prepared );


NUITKA_CROSS_MODULE PyObject *impl_function_7_complex_call_helper_pos_keywords_star_dict_of___internal__( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl_function_4_complex_call_helper_pos_star_dict_of___internal__( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SSLContext_of_urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_1__const_compare_digest_backport_of_urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_2_assert_fingerprint_of_urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_2_load_cert_chain_of_class_1_SSLContext_of_urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_3_load_verify_locations_of_class_1_SSLContext_of_urllib3$util$ssl_( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_resolve_cert_reqs_of_urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_4_resolve_ssl_version_of_urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_4_set_ciphers_of_class_1_SSLContext_of_urllib3$util$ssl_(  );


static PyObject *MAKE_FUNCTION_function_5_create_urllib3_context_of_urllib3$util$ssl_( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_wrap_socket_of_class_1_SSLContext_of_urllib3$util$ssl_( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_ssl_wrap_socket_of_urllib3$util$ssl_( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1__const_compare_digest_backport_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *var_l = NULL;
    PyObject *var_r = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0fbc2ff22544821092df8157ea51f727, module_urllib3$util$ssl_ );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_1 != NULL );
    tmp_len_arg_1 = par_a;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_b;

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_1;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_2 != NULL );
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_bytearray );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_3 = par_a;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_bytearray );
    assert( tmp_called_name_4 != NULL );
    tmp_args_element_name_5 = par_b;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 33;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 33;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 33;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_7;
        Py_INCREF( var_l );
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_8;
        Py_INCREF( var_r );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_2 = var_result;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto try_except_handler_2;
    }

    tmp_left_name_3 = var_l;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "l" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto try_except_handler_2;
    }

    tmp_right_name_3 = var_r;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto try_except_handler_2;
    }

    tmp_right_name_2 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_9 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_2;
    }
    var_result = tmp_assign_source_9;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compexpr_left_1 = var_result;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );

                assert( res == 0 );
            }

            if ( par_b )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_b,
                    par_b
                );

                assert( res == 0 );
            }

            if ( var_result )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_result,
                    var_result
                );

                assert( res == 0 );
            }

            if ( var_l )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_l,
                    var_l
                );

                assert( res == 0 );
            }

            if ( var_r )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_r,
                    var_r
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
    NUITKA_CANNOT_GET_HERE( function_1__const_compare_digest_backport_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1__const_compare_digest_backport_of_urllib3$util$ssl_ );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_1_SSLContext_of_urllib3$util$ssl_( PyObject **python_pars, PyObject *&closure_urllib3$util$ssl__class_creation_1__bases, PyObject *&closure_urllib3$util$ssl__class_creation_1__class_decl_dict, PyObject *&closure_urllib3$util$ssl__class_creation_1__metaclass, PyObject *&closure_urllib3$util$ssl__class_creation_1__prepared )
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
    PyObject *var___qualname__ = NULL;
    PyObject *var_supports_set_ciphers = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_load_cert_chain = NULL;
    PyObject *var_load_verify_locations = NULL;
    PyObject *var_set_ciphers = NULL;
    PyObject *var_wrap_socket = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
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
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$util$ssl__class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_SSLContext;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bfe3f4854904a71342978809bc6cc4a1, module_urllib3$util$ssl_ );
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
    // Tried code:
    tmp_source_name_1 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_1 == NULL )
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_source_name_1 == NULL ))
        {
            tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_source_name_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            goto try_except_handler_2;
        }

    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_4;

    tmp_compexpr_left_1 = const_tuple_int_pos_2_int_pos_7_tuple;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    tmp_assign_source_5 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_5;

    tmp_cond_value_1 = tmp_comparison_chain_1__comparison_result;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    branch_no_1:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    tmp_compexpr_right_2 = const_tuple_int_pos_3_tuple;
    tmp_outline_return_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_SSLContext_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_SSLContext_of_urllib3$util$ssl_ );
    return NULL;
    outline_result_1:;
    tmp_or_left_value_1 = tmp_outline_return_value_1;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 82;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_compexpr_left_3 = const_tuple_int_pos_3_int_pos_2_tuple;
    tmp_source_name_2 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_2 == NULL )
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_source_name_2 == NULL ))
        {
            tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_source_name_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            goto frame_exception_exit_1;
        }

    }

    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_3 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_supports_set_ciphers == NULL );
    var_supports_set_ciphers = tmp_assign_source_3;


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

            tmp_frame_locals = locals_dict;
            Py_INCREF( locals_dict );
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___class__, var___class__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_supports_set_ciphers, var_supports_set_ciphers );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___init__, var___init__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_load_cert_chain, var_load_cert_chain );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_load_verify_locations, var_load_verify_locations );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_set_ciphers, var_set_ciphers );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_wrap_socket, var_wrap_socket );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                goto frame_exception_exit_1;
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

    tmp_assign_source_6 = MAKE_FUNCTION_function_1___init___of_class_1_SSLContext_of_urllib3$util$ssl_(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_2_load_cert_chain_of_class_1_SSLContext_of_urllib3$util$ssl_(  );
    assert( var_load_cert_chain == NULL );
    var_load_cert_chain = tmp_assign_source_7;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_function_3_load_verify_locations_of_class_1_SSLContext_of_urllib3$util$ssl_( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var_load_verify_locations == NULL );
    var_load_verify_locations = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_4_set_ciphers_of_class_1_SSLContext_of_urllib3$util$ssl_(  );
    assert( var_set_ciphers == NULL );
    var_set_ciphers = tmp_assign_source_9;

    tmp_defaults_2 = const_tuple_none_false_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_5_wrap_socket_of_class_1_SSLContext_of_urllib3$util$ssl_( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_wrap_socket == NULL );
    var_wrap_socket = tmp_assign_source_10;

    tmp_called_name_1 = closure_urllib3$util$ssl__class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SSLContext;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$util$ssl__class_creation_1__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_supports_set_ciphers, var_supports_set_ciphers );

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_load_cert_chain, var_load_cert_chain );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_load_verify_locations, var_load_verify_locations );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_set_ciphers, var_set_ciphers );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_wrap_socket, var_wrap_socket );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_11;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_SSLContext_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_supports_set_ciphers );
    var_supports_set_ciphers = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_load_cert_chain );
    var_load_cert_chain = NULL;

    Py_XDECREF( var_load_verify_locations );
    var_load_verify_locations = NULL;

    Py_XDECREF( var_set_ciphers );
    var_set_ciphers = NULL;

    Py_XDECREF( var_wrap_socket );
    var_wrap_socket = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_supports_set_ciphers );
    var_supports_set_ciphers = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_load_cert_chain );
    var_load_cert_chain = NULL;

    Py_XDECREF( var_load_verify_locations );
    var_load_verify_locations = NULL;

    Py_XDECREF( var_set_ciphers );
    var_set_ciphers = NULL;

    Py_XDECREF( var_wrap_socket );
    var_wrap_socket = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_SSLContext_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_1___init___of_class_1_SSLContext_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_protocol_version = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f986502b44bc9294bad75c793675d3e1, module_urllib3$util$ssl_ );
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
    tmp_assattr_name_1 = par_protocol_version;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_protocol, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_check_hostname, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CERT_NONE );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_verify_mode, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_assattr_name_4 = Py_None;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ca_certs, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = const_int_0;
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_options, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_certfile, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_keyfile, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_ciphers, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
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

            if ( par_protocol_version )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_protocol_version,
                    par_protocol_version
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_SSLContext_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_protocol_version );
    par_protocol_version = NULL;

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

    Py_XDECREF( par_protocol_version );
    par_protocol_version = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_SSLContext_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_2_load_cert_chain_of_class_1_SSLContext_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_certfile = python_pars[ 1 ];
    PyObject *par_keyfile = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_79d9616d34069481495bd9d24e897895, module_urllib3$util$ssl_ );
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
    tmp_assattr_name_1 = par_certfile;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_certfile, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_keyfile;

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_keyfile, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
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

            if ( par_certfile )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_certfile,
                    par_certfile
                );

                assert( res == 0 );
            }

            if ( par_keyfile )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keyfile,
                    par_keyfile
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
    NUITKA_CANNOT_GET_HERE( function_2_load_cert_chain_of_class_1_SSLContext_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_certfile );
    par_certfile = NULL;

    Py_XDECREF( par_keyfile );
    par_keyfile = NULL;

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

    Py_XDECREF( par_certfile );
    par_certfile = NULL;

    Py_XDECREF( par_keyfile );
    par_keyfile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_load_cert_chain_of_class_1_SSLContext_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_3_load_verify_locations_of_class_1_SSLContext_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cafile = python_pars[ 1 ];
    PyObject *par_capath = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_657b9841737a93d7971257addcf02db9, module_urllib3$util$ssl_ );
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
    tmp_assattr_name_1 = par_cafile;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ca_certs, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_capath;

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 103;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 103;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;

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

            if ( par_cafile )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cafile,
                    par_cafile
                );

                assert( res == 0 );
            }

            if ( par_capath )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_capath,
                    par_capath
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
    NUITKA_CANNOT_GET_HERE( function_3_load_verify_locations_of_class_1_SSLContext_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_cafile );
    par_cafile = NULL;

    Py_XDECREF( par_capath );
    par_capath = NULL;

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

    Py_XDECREF( par_cafile );
    par_cafile = NULL;

    Py_XDECREF( par_capath );
    par_capath = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_load_verify_locations_of_class_1_SSLContext_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_4_set_ciphers_of_class_1_SSLContext_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher_suite = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3853fb5b224c90b0bfc0f829485df628, module_urllib3$util$ssl_ );
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
    tmp_source_name_1 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_supports_set_ciphers );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_7e022d086a052671147967e3e56cd0cb;
    frame_function->f_lineno = 107;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 108;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = par_cipher_suite;

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ciphers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
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

            if ( par_cipher_suite )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cipher_suite,
                    par_cipher_suite
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
    NUITKA_CANNOT_GET_HERE( function_4_set_ciphers_of_class_1_SSLContext_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_cipher_suite );
    par_cipher_suite = NULL;

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

    Py_XDECREF( par_cipher_suite );
    par_cipher_suite = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_set_ciphers_of_class_1_SSLContext_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_5_wrap_socket_of_class_1_SSLContext_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_socket = python_pars[ 1 ];
    PyObject *par_server_hostname = python_pars[ 2 ];
    PyObject *par_server_side = python_pars[ 3 ];
    PyObject *var_kwargs = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cc875a3bb3042a9c13938bc598c5654a, module_urllib3$util$ssl_ );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_b100075a6026372a849bdb9abd69ebcf;
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InsecurePlatformWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = _PyDict_NewPresized( 6 );
    tmp_dict_key_1 = const_str_plain_keyfile;
    tmp_source_name_2 = par_self;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keyfile );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_certfile;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_certfile );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_ca_certs;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ca_certs );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_cert_reqs;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_verify_mode );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_ssl_version;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_protocol );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_plain_server_side;
    tmp_dict_value_6 = par_server_side;

    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_supports_set_ciphers );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_socket );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrap_socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_socket;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_7 = const_str_plain_ciphers;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ciphers );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    tmp_dircall_arg4_1 = var_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl_function_7_complex_call_helper_pos_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket );

    if (unlikely( tmp_dircall_arg1_2 == NULL ))
    {
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_socket );
    }

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrap_socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_socket;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = var_kwargs;

    if ( tmp_dircall_arg3_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg3_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
        tmp_return_value = impl_function_4_complex_call_helper_pos_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

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

            if ( par_socket )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_socket,
                    par_socket
                );

                assert( res == 0 );
            }

            if ( par_server_hostname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_server_hostname,
                    par_server_hostname
                );

                assert( res == 0 );
            }

            if ( par_server_side )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_server_side,
                    par_server_side
                );

                assert( res == 0 );
            }

            if ( var_kwargs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kwargs,
                    var_kwargs
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
    NUITKA_CANNOT_GET_HERE( function_5_wrap_socket_of_class_1_SSLContext_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( par_server_side );
    par_server_side = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

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

    Py_XDECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( par_server_side );
    par_server_side = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_wrap_socket_of_class_1_SSLContext_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_2_assert_fingerprint_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_fingerprint = python_pars[ 1 ];
    PyObject *var_digest_length = NULL;
    PyObject *var_hashfunc = NULL;
    PyObject *var_fingerprint_bytes = NULL;
    PyObject *var_cert_digest = NULL;
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f0c99f344c5dd7d01f5acdba5c0029ac, module_urllib3$util$ssl_ );
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
    tmp_source_name_2 = par_fingerprint;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 148;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_chr_58_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 148;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_fingerprint;
        par_fingerprint = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = par_fingerprint;

    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    assert( var_digest_length == NULL );
    var_digest_length = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HASHFUNC_MAP" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_digest_length;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "digest_length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    assert( var_hashfunc == NULL );
    var_hashfunc = tmp_assign_source_3;

    tmp_cond_value_1 = var_hashfunc;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_3 = par_fingerprint;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fingerprint" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 153;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unhexlify );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unhexlify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_fingerprint;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fingerprint" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_encode );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 156;
    tmp_args_element_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    assert( var_fingerprint_bytes == NULL );
    var_fingerprint_bytes = tmp_assign_source_4;

    tmp_called_name_9 = var_hashfunc;

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hashfunc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_cert;

    frame_function->f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_digest );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 158;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    assert( var_cert_digest == NULL );
    var_cert_digest = tmp_assign_source_5;

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_const_compare_digest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_cert_digest;

    tmp_args_element_name_7 = var_fingerprint_bytes;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fingerprint_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
    assert( tmp_called_name_12 != NULL );
    tmp_args_element_name_9 = par_fingerprint;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fingerprint" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hexlify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_cert_digest;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_digest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 162;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;

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
            if ( par_cert )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert,
                    par_cert
                );

                assert( res == 0 );
            }

            if ( par_fingerprint )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fingerprint,
                    par_fingerprint
                );

                assert( res == 0 );
            }

            if ( var_digest_length )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_digest_length,
                    var_digest_length
                );

                assert( res == 0 );
            }

            if ( var_hashfunc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hashfunc,
                    var_hashfunc
                );

                assert( res == 0 );
            }

            if ( var_fingerprint_bytes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fingerprint_bytes,
                    var_fingerprint_bytes
                );

                assert( res == 0 );
            }

            if ( var_cert_digest )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert_digest,
                    var_cert_digest
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
    NUITKA_CANNOT_GET_HERE( function_2_assert_fingerprint_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_fingerprint );
    par_fingerprint = NULL;

    Py_XDECREF( var_digest_length );
    var_digest_length = NULL;

    Py_XDECREF( var_hashfunc );
    var_hashfunc = NULL;

    Py_XDECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    Py_XDECREF( var_cert_digest );
    var_cert_digest = NULL;

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

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_fingerprint );
    par_fingerprint = NULL;

    Py_XDECREF( var_digest_length );
    var_digest_length = NULL;

    Py_XDECREF( var_hashfunc );
    var_hashfunc = NULL;

    Py_XDECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    Py_XDECREF( var_cert_digest );
    var_cert_digest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_assert_fingerprint_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_3_resolve_cert_reqs_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ca5f805fddc29605a9353b53f2598dbc, module_urllib3$util$ssl_ );
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
    tmp_compare_left_1 = par_candidate;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_NONE );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CERT_NONE );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CERT_NONE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_candidate;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "candidate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = par_candidate;

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "candidate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_2 = var_res;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_getattr_target_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_2 == NULL ))
    {
        tmp_getattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_plain_CERT_;
    tmp_right_name_1 = par_candidate;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "candidate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_getattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    Py_DECREF( tmp_getattr_attr_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_res;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_return_value = par_candidate;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "candidate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
            if ( par_candidate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_candidate,
                    par_candidate
                );

                assert( res == 0 );
            }

            if ( var_res )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_res,
                    var_res
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
    NUITKA_CANNOT_GET_HERE( function_3_resolve_cert_reqs_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_resolve_cert_reqs_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_4_resolve_ssl_version_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c69efdb3d59ee243ed8c0af02e869c56, module_urllib3$util$ssl_ );
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
    tmp_compare_left_1 = par_candidate;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23 );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23 );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PROTOCOL_SSLv23" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_candidate;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "candidate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = par_candidate;

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "candidate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_2 = var_res;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_getattr_target_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_2 == NULL ))
    {
        tmp_getattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_plain_PROTOCOL_;
    tmp_right_name_1 = par_candidate;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "candidate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_getattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    Py_DECREF( tmp_getattr_attr_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_res;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_return_value = par_candidate;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "candidate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
            if ( par_candidate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_candidate,
                    par_candidate
                );

                assert( res == 0 );
            }

            if ( var_res )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_res,
                    var_res
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
    NUITKA_CANNOT_GET_HERE( function_4_resolve_ssl_version_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( par_candidate );
    par_candidate = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_resolve_ssl_version_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_5_create_urllib3_context_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ssl_version = python_pars[ 0 ];
    PyObject *par_cert_reqs = python_pars[ 1 ];
    PyObject *par_options = python_pars[ 2 ];
    PyObject *par_ciphers = python_pars[ 3 ];
    PyObject *var_context = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a95bbb8fc6b111cd2f40f92943e5efeb, module_urllib3$util$ssl_ );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLContext );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLContext" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = par_ssl_version;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PROTOCOL_SSLv23 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_args_element_name_1 = tmp_or_left_value_1;
    or_end_1:;
    frame_function->f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    assert( var_context == NULL );
    var_context = tmp_assign_source_1;

    tmp_compare_left_1 = par_cert_reqs;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CERT_REQUIRED );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = par_cert_reqs;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_reqs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_assign_source_2 );
    condexpr_end_1:;
    {
        PyObject *old = par_cert_reqs;
        par_cert_reqs = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = par_options;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_XDECREF( par_options );
    par_options = NULL;

    tmp_left_name_1 = const_int_0;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OP_NO_SSLv2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_options;
        par_options = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = par_options;

    tmp_right_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );

    if (unlikely( tmp_right_name_2 == NULL ))
    {
        tmp_right_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );
    }

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OP_NO_SSLv3" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_4 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    par_options = tmp_assign_source_4;

    tmp_left_name_3 = par_options;

    tmp_right_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );

    if (unlikely( tmp_right_name_3 == NULL ))
    {
        tmp_right_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );
    }

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OP_NO_COMPRESSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_5 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    par_options = tmp_assign_source_5;

    branch_no_1:;
    tmp_source_name_3 = var_context;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_options );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_6;

    // Tried code:
    tmp_left_name_4 = tmp_inplace_assign_attr_1__start;

    tmp_right_name_4 = par_options;

    if ( tmp_right_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto try_except_handler_2;
    }

    tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_7;

    // Tried code:
    tmp_compare_left_3 = tmp_inplace_assign_attr_1__start;

    tmp_compare_right_3 = tmp_inplace_assign_attr_1__end;

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    tmp_assattr_target_1 = var_context;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_options, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto try_except_handler_3;
    }
    branch_no_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_getattr_target_1 = var_context;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_supports_set_ciphers;
    tmp_getattr_default_1 = Py_True;
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = var_context;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_set_ciphers );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = par_ciphers;

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_or_right_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );

    if (unlikely( tmp_or_right_value_2 == NULL ))
    {
        tmp_or_right_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );
    }

    if ( tmp_or_right_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_CIPHERS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_args_element_name_2 = tmp_or_left_value_2;
    or_end_2:;
    frame_function->f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_assattr_name_2 = par_cert_reqs;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_reqs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = var_context;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_verify_mode, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_2 = var_context;

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain_check_hostname;
    tmp_getattr_default_2 = Py_None;
    tmp_compare_left_4 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_3 = Py_False;
    tmp_assattr_target_3 = var_context;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_check_hostname, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_return_value = var_context;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
            if ( par_ssl_version )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ssl_version,
                    par_ssl_version
                );

                assert( res == 0 );
            }

            if ( par_cert_reqs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert_reqs,
                    par_cert_reqs
                );

                assert( res == 0 );
            }

            if ( par_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_options,
                    par_options
                );

                assert( res == 0 );
            }

            if ( par_ciphers )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ciphers,
                    par_ciphers
                );

                assert( res == 0 );
            }

            if ( var_context )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_context,
                    var_context
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
    NUITKA_CANNOT_GET_HERE( function_5_create_urllib3_context_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_create_urllib3_context_of_urllib3$util$ssl_ );
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


static PyObject *impl_function_6_ssl_wrap_socket_of_urllib3$util$ssl_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_keyfile = python_pars[ 1 ];
    PyObject *par_certfile = python_pars[ 2 ];
    PyObject *par_cert_reqs = python_pars[ 3 ];
    PyObject *par_ca_certs = python_pars[ 4 ];
    PyObject *par_server_hostname = python_pars[ 5 ];
    PyObject *par_ssl_version = python_pars[ 6 ];
    PyObject *par_ciphers = python_pars[ 7 ];
    PyObject *par_ssl_context = python_pars[ 8 ];
    PyObject *par_ca_cert_dir = python_pars[ 9 ];
    PyObject *var_context = NULL;
    PyObject *var_e = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = par_ssl_context;

    assert( var_context == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_context = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_814155574bfdd99cd40408e68e0ec5f7, module_urllib3$util$ssl_ );
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
    tmp_compare_left_1 = var_context;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "create_urllib3_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ssl_version;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_cert_reqs;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_ciphers;
    tmp_dict_value_1 = par_ciphers;

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 291;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_context;
        var_context = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_or_left_value_1 = par_ca_certs;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
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
    tmp_or_right_value_1 = par_ca_cert_dir;

    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_source_name_1 = var_context;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_load_verify_locations );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_ca_certs;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ca_certs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_ca_cert_dir;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ca_cert_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 295;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 297;
        goto try_except_handler_4;
    }

    tmp_args_element_name_3 = var_e;

    frame_function->f_lineno = 297;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 297;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_urllib3$util$ssl_ );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_OSError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_4 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_4;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_2 = var_e;

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_errno );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        goto try_except_handler_5;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "errno" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 301;
        goto try_except_handler_5;
    }

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ENOENT );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 301;
        goto try_except_handler_5;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 301;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = var_e;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        goto try_except_handler_5;
    }

    frame_function->f_lineno = 302;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 302;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_5;
    branch_no_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_urllib3$util$ssl_ );
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_3;
    branch_end_4:;
    branch_end_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_urllib3$util$ssl_ );
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    branch_no_2:;
    tmp_cond_value_2 = par_certfile;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_4 = var_context;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_load_cert_chain );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_certfile;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "certfile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_keyfile;

    frame_function->f_lineno = 306;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_cond_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

    if (unlikely( tmp_cond_value_3 == NULL ))
    {
        tmp_cond_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
    }

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HAS_SNI" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_5 = var_context;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_wrap_socket );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_sock;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_server_hostname;
    tmp_dict_value_2 = par_server_hostname;

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 308;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_7:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_warn );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_digest_bfe263face1f2a45312e2eacbf7b6e43;
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SNIMissingWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 318;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = var_context;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 320;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_wrap_socket );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_sock;

    frame_function->f_lineno = 320;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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
            if ( par_sock )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sock,
                    par_sock
                );

                assert( res == 0 );
            }

            if ( par_keyfile )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keyfile,
                    par_keyfile
                );

                assert( res == 0 );
            }

            if ( par_certfile )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_certfile,
                    par_certfile
                );

                assert( res == 0 );
            }

            if ( par_cert_reqs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert_reqs,
                    par_cert_reqs
                );

                assert( res == 0 );
            }

            if ( par_ca_certs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ca_certs,
                    par_ca_certs
                );

                assert( res == 0 );
            }

            if ( par_server_hostname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_server_hostname,
                    par_server_hostname
                );

                assert( res == 0 );
            }

            if ( par_ssl_version )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ssl_version,
                    par_ssl_version
                );

                assert( res == 0 );
            }

            if ( par_ciphers )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ciphers,
                    par_ciphers
                );

                assert( res == 0 );
            }

            if ( par_ssl_context )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ssl_context,
                    par_ssl_context
                );

                assert( res == 0 );
            }

            if ( par_ca_cert_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ca_cert_dir,
                    par_ca_cert_dir
                );

                assert( res == 0 );
            }

            if ( var_context )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_context,
                    var_context
                );

                assert( res == 0 );
            }

            if ( var_e )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_e,
                    var_e
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
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_urllib3$util$ssl_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_sock );
    par_sock = NULL;

    Py_XDECREF( par_keyfile );
    par_keyfile = NULL;

    Py_XDECREF( par_certfile );
    par_certfile = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_ca_certs );
    par_ca_certs = NULL;

    Py_XDECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( par_ssl_context );
    par_ssl_context = NULL;

    Py_XDECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_sock );
    par_sock = NULL;

    Py_XDECREF( par_keyfile );
    par_keyfile = NULL;

    Py_XDECREF( par_certfile );
    par_certfile = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_ca_certs );
    par_ca_certs = NULL;

    Py_XDECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    Py_XDECREF( par_ssl_context );
    par_ssl_context = NULL;

    Py_XDECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_ssl_wrap_socket_of_urllib3$util$ssl_ );
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



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SSLContext_of_urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_SSLContext_of_urllib3$util$ssl_,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_6ffcf66c5c876dcb3dc480220c734062,
#endif
        codeobj_f986502b44bc9294bad75c793675d3e1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__const_compare_digest_backport_of_urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1__const_compare_digest_backport_of_urllib3$util$ssl_,
        const_str_plain__const_compare_digest_backport,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0fbc2ff22544821092df8157ea51f727,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_assert_fingerprint_of_urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_assert_fingerprint_of_urllib3$util$ssl_,
        const_str_plain_assert_fingerprint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f0c99f344c5dd7d01f5acdba5c0029ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_935dace93363545d379a5e2ed3994f38
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_load_cert_chain_of_class_1_SSLContext_of_urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_load_cert_chain_of_class_1_SSLContext_of_urllib3$util$ssl_,
        const_str_plain_load_cert_chain,
#if PYTHON_VERSION >= 330
        const_str_digest_69e25692dfd1b01029aea21de378705a,
#endif
        codeobj_79d9616d34069481495bd9d24e897895,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_load_verify_locations_of_class_1_SSLContext_of_urllib3$util$ssl_( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_load_verify_locations_of_class_1_SSLContext_of_urllib3$util$ssl_,
        const_str_plain_load_verify_locations,
#if PYTHON_VERSION >= 330
        const_str_digest_f2ba34680fb338cc7c2e32fdb7c1301a,
#endif
        codeobj_657b9841737a93d7971257addcf02db9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_resolve_cert_reqs_of_urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_resolve_cert_reqs_of_urllib3$util$ssl_,
        const_str_plain_resolve_cert_reqs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ca5f805fddc29605a9353b53f2598dbc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_e3db3ee12166b00e30746ab96478c070
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_resolve_ssl_version_of_urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_resolve_ssl_version_of_urllib3$util$ssl_,
        const_str_plain_resolve_ssl_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c69efdb3d59ee243ed8c0af02e869c56,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_set_ciphers_of_class_1_SSLContext_of_urllib3$util$ssl_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_set_ciphers_of_class_1_SSLContext_of_urllib3$util$ssl_,
        const_str_plain_set_ciphers,
#if PYTHON_VERSION >= 330
        const_str_digest_1e4f35ebb0482ef8f0f24ba4e0927107,
#endif
        codeobj_3853fb5b224c90b0bfc0f829485df628,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_create_urllib3_context_of_urllib3$util$ssl_( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_create_urllib3_context_of_urllib3$util$ssl_,
        const_str_plain_create_urllib3_context,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a95bbb8fc6b111cd2f40f92943e5efeb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_c6e5c4394838f24a74fcd724137f89e0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_wrap_socket_of_class_1_SSLContext_of_urllib3$util$ssl_( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_wrap_socket_of_class_1_SSLContext_of_urllib3$util$ssl_,
        const_str_plain_wrap_socket,
#if PYTHON_VERSION >= 330
        const_str_digest_90dcfb0c5b2e395585c44f2c6f8db8bf,
#endif
        codeobj_cc875a3bb3042a9c13938bc598c5654a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_ssl_wrap_socket_of_urllib3$util$ssl_( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6_ssl_wrap_socket_of_urllib3$util$ssl_,
        const_str_plain_ssl_wrap_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_814155574bfdd99cd40408e68e0ec5f7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_a0adb01dd8d355d29039a847a354795c
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$ssl_ =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.ssl_",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$ssl_ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$ssl_ );
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

    // puts( "in initurllib3$util$ssl_" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$ssl_ = Py_InitModule4(
        "urllib3.util.ssl_",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$util$ssl_ = PyModule_Create( &mdef_urllib3$util$ssl_ );
#endif

    moduledict_urllib3$util$ssl_ = (PyDictObject *)((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;

    CHECK_OBJECT( module_urllib3$util$ssl_ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_6efba4feba5d3ac1fc26ca13b212a604, module_urllib3$util$ssl_ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_urllib3$util$ssl_ );

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
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_urllib3$util$ssl__class_creation_1__bases = NULL;
    PyObject *tmp_urllib3$util$ssl__class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_urllib3$util$ssl__class_creation_1__metaclass = NULL;
    PyObject *tmp_urllib3$util$ssl__class_creation_1__prepared = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_metaclass_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_cfe37f37cc27af3b9adae240209b8322;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_357abed35f593efce2d93ac998ba5c47, module_urllib3$util$ssl_ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_errno, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_hmac, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_binascii, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_hexlify );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_binascii, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_unhexlify );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_hashlib, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_md5 );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_hashlib, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_sha1 );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_hashlib, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_sha256 );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_9, tmp_import_globals_9, const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SSLError );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_10, tmp_import_globals_10, const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_InsecurePlatformWarning );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_15 );
    tmp_import_globals_11 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_11, tmp_import_globals_11, const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SNIMissingWarning );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_16 );
    tmp_assign_source_17 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_17 );
    tmp_assign_source_18 = Py_False;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_18 );
    tmp_assign_source_19 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_default_context, tmp_assign_source_19 );
    tmp_assign_source_20 = Py_False;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_PYOPENSSL, tmp_assign_source_20 );
    tmp_assign_source_21 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_int_pos_32;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5 );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_md5 );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "md5" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_21, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_int_pos_40;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1 );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1 );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sha1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_21, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_int_pos_64;
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256 );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha256 );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sha256" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_21, tmp_dict_key_3, tmp_dict_value_3 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_function_1__const_compare_digest_backport_of_urllib3$util$ssl_(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport, tmp_assign_source_22 );
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hmac" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_compare_digest;
    tmp_getattr_default_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );

    if (unlikely( tmp_getattr_default_1 == NULL ))
    {
        tmp_getattr_default_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );
    }

    if ( tmp_getattr_default_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_const_compare_digest_backport" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest, tmp_assign_source_23 );
    // Tried code:
    tmp_import_globals_12 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 43;
    tmp_assign_source_24 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_12, tmp_import_globals_12, Py_None, const_int_0 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_24 );
    tmp_import_globals_13 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 44;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_13, tmp_import_globals_13, const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_wrap_socket );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket, tmp_assign_source_25 );
    tmp_import_globals_14 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 44;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_14, tmp_import_globals_14, const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_CERT_NONE );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_NONE, tmp_assign_source_26 );
    tmp_import_globals_15 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 44;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_15, tmp_import_globals_15, const_tuple_f6a01fdcad2a4358443ea98eee1471b3_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_PROTOCOL_SSLv23 );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_27 );
    tmp_import_globals_16 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 45;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_HAS_SNI_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_HAS_SNI );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_28 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_module, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_no_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_import_globals_17 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_17, tmp_import_globals_17, const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_3;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_OP_NO_SSLv2 );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_29 );
    tmp_import_globals_18 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_18, tmp_import_globals_18, const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_3;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_OP_NO_SSLv3 );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_30 );
    tmp_import_globals_19 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_19, tmp_import_globals_19, const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_3;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_OP_NO_COMPRESSION );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_31 );
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

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_module, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_iter_arg_1 = const_tuple_int_pos_16777216_int_pos_33554432_tuple;
    tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_32 != NULL );
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_32;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_33 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 53;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_33;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_34 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 53;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_34;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_5;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    tmp_assign_source_35 = tmp_tuple_unpack_1__element_1;

    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_35 );
    tmp_assign_source_36 = tmp_tuple_unpack_1__element_2;

    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_36 );
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_37 = const_int_pos_131072;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_37 );
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    tmp_assign_source_38 = const_str_digest_716aea1eaac37029978ba81ff09f5824;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS, tmp_assign_source_38 );
    // Tried code:
    tmp_import_globals_20 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 76;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_ssl, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_plain_SSLContext_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_6;
    }
    tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_SSLContext );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_39 );
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

    // Preserve existing published exception.
    exception_preserved_type_3 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != -1 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_module, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_ImportError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_import_globals_21 = ((PyModuleObject *)module_urllib3$util$ssl_)->md_dict;
    frame_module->f_lineno = 78;
    tmp_assign_source_40 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_21, tmp_import_globals_21, Py_None, const_int_0 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_40 );
    tmp_assign_source_41 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_41, 0, tmp_tuple_element_1 );
    assert( tmp_urllib3$util$ssl__class_creation_1__bases == NULL );
    tmp_urllib3$util$ssl__class_creation_1__bases = tmp_assign_source_41;

    tmp_assign_source_42 = PyDict_New();
    assert( tmp_urllib3$util$ssl__class_creation_1__class_decl_dict == NULL );
    tmp_urllib3$util$ssl__class_creation_1__class_decl_dict = tmp_assign_source_42;

    // Tried code:
    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
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
    tmp_dict_name_1 = tmp_urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_urllib3$util$ssl__class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
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
    tmp_subscribed_name_1 = tmp_urllib3$util$ssl__class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_urllib3$util$ssl__class_creation_1__bases;

    tmp_assign_source_43 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 80;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_urllib3$util$ssl__class_creation_1__metaclass == NULL );
    tmp_urllib3$util$ssl__class_creation_1__metaclass = tmp_assign_source_43;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_urllib3$util$ssl__class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
    }
    branch_no_4:;
    tmp_hasattr_source_1 = tmp_urllib3$util$ssl__class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
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
    tmp_source_name_1 = tmp_urllib3$util$ssl__class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_SSLContext;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_urllib3$util$ssl__class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_urllib3$util$ssl__class_creation_1__class_decl_dict;

    frame_module->f_lineno = 80;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_44 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_urllib3$util$ssl__class_creation_1__prepared == NULL );
    tmp_urllib3$util$ssl__class_creation_1__prepared = tmp_assign_source_44;

    tmp_assign_source_45 = impl_class_1_SSLContext_of_urllib3$util$ssl_( NULL, tmp_urllib3$util$ssl__class_creation_1__bases, tmp_urllib3$util$ssl__class_creation_1__class_decl_dict, tmp_urllib3$util$ssl__class_creation_1__metaclass, tmp_urllib3$util$ssl__class_creation_1__prepared );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_45 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_urllib3$util$ssl__class_creation_1__bases );
    tmp_urllib3$util$ssl__class_creation_1__bases = NULL;

    Py_XDECREF( tmp_urllib3$util$ssl__class_creation_1__class_decl_dict );
    tmp_urllib3$util$ssl__class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$util$ssl__class_creation_1__metaclass );
    tmp_urllib3$util$ssl__class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$util$ssl__class_creation_1__prepared );
    tmp_urllib3$util$ssl__class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_urllib3$util$ssl__class_creation_1__bases );
    tmp_urllib3$util$ssl__class_creation_1__bases = NULL;

    Py_XDECREF( tmp_urllib3$util$ssl__class_creation_1__class_decl_dict );
    tmp_urllib3$util$ssl__class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$util$ssl__class_creation_1__metaclass );
    tmp_urllib3$util$ssl__class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$util$ssl__class_creation_1__prepared );
    tmp_urllib3$util$ssl__class_creation_1__prepared = NULL;

    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_7;
    branch_end_3:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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
    tmp_assign_source_46 = MAKE_FUNCTION_function_2_assert_fingerprint_of_urllib3$util$ssl_(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_46 );
    tmp_assign_source_47 = MAKE_FUNCTION_function_3_resolve_cert_reqs_of_urllib3$util$ssl_(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_47 );
    tmp_assign_source_48 = MAKE_FUNCTION_function_4_resolve_ssl_version_of_urllib3$util$ssl_(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_48 );
    tmp_defaults_1 = const_tuple_none_none_none_none_tuple;
    tmp_assign_source_49 = MAKE_FUNCTION_function_5_create_urllib3_context_of_urllib3$util$ssl_( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context, tmp_assign_source_49 );
    tmp_defaults_2 = const_tuple_none_none_none_none_none_none_none_none_none_tuple;
    tmp_assign_source_50 = MAKE_FUNCTION_function_6_ssl_wrap_socket_of_urllib3$util$ssl_( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_50 );

    return MOD_RETURN_VALUE( module_urllib3$util$ssl_ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
