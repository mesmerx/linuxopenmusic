// Generated code for Python source for module 'pip._vendor.requests.packages.urllib3.util.retry'
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

// The _module_pip$_vendor$requests$packages$urllib3$util$retry is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests$packages$urllib3$util$retry;
PyDictObject *moduledict_pip$_vendor$requests$packages$urllib3$util$retry;

// The module constants used
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_digest_be3c2e7a479fa0076df719ca5a930f72;
extern PyObject *const_tuple_true_none_tuple;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_int_pos_120;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_unknown;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_backoff_factor;
extern PyObject *const_str_plain_total;
static PyObject *const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple;
extern PyObject *const_str_plain_PUT;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_digest_54874c179a81b955e41d4fd1580cddd0;
extern PyObject *const_str_plain_GET;
static PyObject *const_str_digest_f27eafd9c7b931c70af36c03335c22a1;
extern PyObject *const_str_plain_get_redirect_location;
extern PyObject *const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_tuple_str_plain_self_str_plain_method_str_plain_status_code_tuple;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain__observed_errors;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_digest_297455e155b6c9736d87529e14591c5d;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_digest_00aff75c087fe7f80636ea13a09e3e82;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_196388050fe41430203b557a8cabdd29_tuple;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_digest_b0594eafa05dc6a6810bb2c7c291548b;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_digest_1a26958e024af6adaa6eba6c2b96236e;
extern PyObject *const_str_plain_is_exhausted;
extern PyObject *const_tuple_cc2174ed3c80049225594c5bf0dc5573_tuple;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_method_whitelist;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple;
static PyObject *const_tuple_str_digest_81021860786bd5739afaf014be70c76f_tuple;
extern PyObject *const_str_plain__stacktrace;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
extern PyObject *const_str_digest_d3c5cf2f2d706173f393307c5fa372aa;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_4291b42c0261755daa9f58af16f24a8c;
extern PyObject *const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9;
extern PyObject *const_str_digest_71eab128675491d65630d610b6d7a98e;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_status_code;
extern PyObject *const_str_plain_BACKOFF_MAX;
extern PyObject *const_tuple_str_plain_self_str_plain_err_tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_retries;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_digest_bd0ff88830ed4b618d1a259e8973092a;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_digest_fc514c378d42c4c0744f71a520936e98;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_digest_4ab4549b763ec56a33a68f0da0a025a6;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_digest_ca693a71271df261e783dd0ecf309ae0;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_TRACE;
extern PyObject *const_str_plain_frozenset;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_backoff_value_tuple;
extern PyObject *const_str_plain_DEFAULT;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_new_retries;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_DEFAULT_METHOD_WHITELIST;
extern PyObject *const_str_digest_7fb2c7a5424e28db1a201939b12c8399;
extern PyObject *const_str_plain_retry;
static PyObject *const_str_digest_6f78b6ef35033bfcc91660d2d16bdcc7;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_digest_55857326d6523e3f76c12c271f391764;
extern PyObject *const_str_plain_DELETE;
extern PyObject *const_tuple_str_plain_self_str_plain_retry_counts_tuple;
extern PyObject *const_str_plain_increment;
extern PyObject *const_str_plain_get_backoff_time;
extern PyObject *const_str_plain_ResponseError;
extern PyObject *const_str_digest_4506185023298da4a69876975fb76211;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_cause;
extern PyObject *const_str_plain__is_connection_error;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain__is_read_error;
extern PyObject *const_str_digest_93b5718dbdad50e34931a5c649b12b14;
extern PyObject *const_str_plain_retry_counts;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_digest_e80b9085df081452c8caeed4571c51b7;
extern PyObject *const_str_plain_status_forcelist;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_int_pos_1;
extern PyObject *const_list_ba42ffc828ddfcf79c24367abe35499c_list;
extern PyObject *const_str_plain_OPTIONS;
extern PyObject *const_str_digest_88f59c54076602dcb96ff841f9705fcc;
extern PyObject *const_str_plain_new_retry;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_tuple_str_plain_six_tuple;
static PyObject *const_str_digest_81021860786bd5739afaf014be70c76f;
extern PyObject *const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_backoff;
extern PyObject *const_str_plain_is_forced_retry;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain__pool;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_digest_7e60379875538acb6d47a09b3bcd7fdf;
extern PyObject *const_str_plain_backoff_value;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_format;
extern PyObject *const_tuple_str_plain_self_str_plain_backoff_tuple;
extern PyObject *const_str_plain_GENERIC_ERROR;
extern PyObject *const_str_digest_adf0407d4b5f2535bca90601d487b350;
extern PyObject *const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
extern PyObject *const_str_plain_reraise;
extern PyObject *const_str_plain_raise_on_redirect;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 1, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 2, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 3, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 4, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 5, const_str_plain_method_whitelist ); Py_INCREF( const_str_plain_method_whitelist );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 6, const_str_plain_status_forcelist ); Py_INCREF( const_str_plain_status_forcelist );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 7, const_str_plain_backoff_factor ); Py_INCREF( const_str_plain_backoff_factor );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 8, const_str_plain_raise_on_redirect ); Py_INCREF( const_str_plain_raise_on_redirect );
    PyTuple_SET_ITEM( const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 9, const_str_plain__observed_errors ); Py_INCREF( const_str_plain__observed_errors );
    const_str_digest_f27eafd9c7b931c70af36c03335c22a1 = UNSTREAM_STRING( &constant_bin[ 483637 ], 3250, 0 );
    const_tuple_str_digest_81021860786bd5739afaf014be70c76f_tuple = PyTuple_New( 1 );
    const_str_digest_81021860786bd5739afaf014be70c76f = UNSTREAM_STRING( &constant_bin[ 486887 ], 48, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_81021860786bd5739afaf014be70c76f_tuple, 0, const_str_digest_81021860786bd5739afaf014be70c76f ); Py_INCREF( const_str_digest_81021860786bd5739afaf014be70c76f );
    const_str_digest_6f78b6ef35033bfcc91660d2d16bdcc7 = UNSTREAM_STRING( &constant_bin[ 486935 ], 84, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests$packages$urllib3$util$retry( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a397aa8e6f1c2c0b940fc17e75cf329e;
static PyCodeObject *codeobj_d2b2f75c0e98727f09bff18de7495499;
static PyCodeObject *codeobj_73b1af2cd3414db1acd4242754b28d36;
static PyCodeObject *codeobj_90cef65cd9bf6d0fa6385b874d497247;
static PyCodeObject *codeobj_0820ea529a634ef30d2fa0becdcb7e93;
static PyCodeObject *codeobj_ae154503942649b5b00097ea0365734b;
static PyCodeObject *codeobj_24193031a64b4a041992df6bd410a517;
static PyCodeObject *codeobj_3f776d1e7be3a004545742ac24c4161d;
static PyCodeObject *codeobj_48354135b204bfc2228591b9494940f0;
static PyCodeObject *codeobj_26079465894c72056aa8b2782468b02c;
static PyCodeObject *codeobj_2f08cf44c5aa37070b86941fb89bc771;
static PyCodeObject *codeobj_c8936ede72c6244d93b499e782714511;
static PyCodeObject *codeobj_c6dd67ecad0c838f999afd3f7954329f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6f78b6ef35033bfcc91660d2d16bdcc7;
    codeobj_a397aa8e6f1c2c0b940fc17e75cf329e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Retry, 18, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d2b2f75c0e98727f09bff18de7495499 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 113, const_tuple_f1dfbf06b4d03b216c756abf83b9bc28_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_73b1af2cd3414db1acd4242754b28d36 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 279, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_90cef65cd9bf6d0fa6385b874d497247 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_connection_error, 181, const_tuple_str_plain_self_str_plain_err_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0820ea529a634ef30d2fa0becdcb7e93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_read_error, 187, const_tuple_str_plain_self_str_plain_err_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ae154503942649b5b00097ea0365734b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_int, 145, const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24193031a64b4a041992df6bd410a517 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_backoff_time, 159, const_tuple_str_plain_self_str_plain_backoff_value_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f776d1e7be3a004545742ac24c4161d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_increment, 210, const_tuple_196388050fe41430203b557a8cabdd29_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_48354135b204bfc2228591b9494940f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_exhausted, 201, const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_26079465894c72056aa8b2782468b02c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_forced_retry, 193, const_tuple_str_plain_self_str_plain_method_str_plain_status_code_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2f08cf44c5aa37070b86941fb89bc771 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 132, const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_c8936ede72c6244d93b499e782714511 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_retry, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c6dd67ecad0c838f999afd3f7954329f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sleep, 170, const_tuple_str_plain_self_str_plain_backoff_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( PyObject **python_pars, PyObject *&closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases, PyObject *&closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict, PyObject *&closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass, PyObject *&closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared );


NUITKA_CROSS_MODULE PyObject *impl_function_5_complex_call_helper_star_dict_of___internal__( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_10_increment_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_11___repr___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_new_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );


static PyObject *MAKE_FUNCTION_function_3_from_int_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_get_backoff_time_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );


static PyObject *MAKE_FUNCTION_function_5_sleep_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );


static PyObject *MAKE_FUNCTION_function_6__is_connection_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );


static PyObject *MAKE_FUNCTION_function_7__is_read_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );


static PyObject *MAKE_FUNCTION_function_8_is_forced_retry_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );


static PyObject *MAKE_FUNCTION_function_9_is_exhausted_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( PyObject **python_pars, PyObject *&closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases, PyObject *&closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict, PyObject *&closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass, PyObject *&closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared )
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
    PyObject *var_DEFAULT_METHOD_WHITELIST = NULL;
    PyObject *var_BACKOFF_MAX = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_new = NULL;
    PyObject *var_from_int = NULL;
    PyObject *var_get_backoff_time = NULL;
    PyObject *var_sleep = NULL;
    PyObject *var__is_connection_error = NULL;
    PyObject *var__is_read_error = NULL;
    PyObject *var_is_forced_retry = NULL;
    PyObject *var_is_exhausted = NULL;
    PyObject *var_increment = NULL;
    PyObject *var___repr__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_81021860786bd5739afaf014be70c76f;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_f27eafd9c7b931c70af36c03335c22a1;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_Retry;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a397aa8e6f1c2c0b940fc17e75cf329e, module_pip$_vendor$requests$packages$urllib3$util$retry );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_frozenset );
    assert( tmp_called_name_1 != NULL );
    tmp_call_arg_element_1 = LIST_COPY( const_list_ba42ffc828ddfcf79c24367abe35499c_list );
    frame_function->f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    assert( var_DEFAULT_METHOD_WHITELIST == NULL );
    var_DEFAULT_METHOD_WHITELIST = tmp_assign_source_4;

    tmp_assign_source_5 = const_int_pos_120;
    assert( var_BACKOFF_MAX == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_BACKOFF_MAX = tmp_assign_source_5;

    tmp_defaults_1 = PyTuple_New( 9 );
    tmp_tuple_element_1 = const_int_pos_10;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_DEFAULT_METHOD_WHITELIST;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_True;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 7, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 8, tmp_tuple_element_1 );
    tmp_assign_source_6 = MAKE_FUNCTION_function_1___init___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( tmp_defaults_1 );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_2_new_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );
    assert( var_new == NULL );
    var_new = tmp_assign_source_7;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_2 != NULL );
    tmp_defaults_2 = const_tuple_true_none_tuple;
    tmp_args_element_name_1 = MAKE_FUNCTION_function_3_from_int_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    frame_function->f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    assert( var_from_int == NULL );
    var_from_int = tmp_assign_source_8;


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


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___doc__, var___doc__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_DEFAULT_METHOD_WHITELIST, var_DEFAULT_METHOD_WHITELIST );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_BACKOFF_MAX, var_BACKOFF_MAX );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___init__, var___init__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_new, var_new );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_from_int, var_from_int );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_get_backoff_time, var_get_backoff_time );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_sleep, var_sleep );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain__is_connection_error, var__is_connection_error );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain__is_read_error, var__is_read_error );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_is_forced_retry, var_is_forced_retry );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_is_exhausted, var_is_exhausted );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_increment, var_increment );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___repr__, var___repr__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
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

    tmp_assign_source_9 = MAKE_FUNCTION_function_4_get_backoff_time_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );
    assert( var_get_backoff_time == NULL );
    var_get_backoff_time = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_5_sleep_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );
    assert( var_sleep == NULL );
    var_sleep = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_6__is_connection_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );
    assert( var__is_connection_error == NULL );
    var__is_connection_error = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_function_7__is_read_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );
    assert( var__is_read_error == NULL );
    var__is_read_error = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_function_8_is_forced_retry_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );
    assert( var_is_forced_retry == NULL );
    var_is_forced_retry = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_function_9_is_exhausted_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );
    assert( var_is_exhausted == NULL );
    var_is_exhausted = tmp_assign_source_14;

    tmp_defaults_3 = const_tuple_none_none_none_none_none_none_tuple;
    tmp_assign_source_15 = MAKE_FUNCTION_function_10_increment_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    assert( var_increment == NULL );
    var_increment = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_function_11___repr___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  );
    assert( var___repr__ == NULL );
    var___repr__ = tmp_assign_source_16;

    tmp_called_name_3 = closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_Retry;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_DEFAULT_METHOD_WHITELIST, var_DEFAULT_METHOD_WHITELIST );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_BACKOFF_MAX, var_BACKOFF_MAX );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_new, var_new );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_from_int, var_from_int );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_get_backoff_time, var_get_backoff_time );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_sleep, var_sleep );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain__is_connection_error, var__is_connection_error );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain__is_read_error, var__is_read_error );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_is_forced_retry, var_is_forced_retry );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_is_exhausted, var_is_exhausted );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain_increment, var_increment );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_2, const_str_plain___repr__, var___repr__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_2 );
    tmp_kw_name_1 = closure_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict;

    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_17;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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

    Py_XDECREF( var_DEFAULT_METHOD_WHITELIST );
    var_DEFAULT_METHOD_WHITELIST = NULL;

    Py_XDECREF( var_BACKOFF_MAX );
    var_BACKOFF_MAX = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_new );
    var_new = NULL;

    Py_XDECREF( var_from_int );
    var_from_int = NULL;

    Py_XDECREF( var_get_backoff_time );
    var_get_backoff_time = NULL;

    Py_XDECREF( var_sleep );
    var_sleep = NULL;

    Py_XDECREF( var__is_connection_error );
    var__is_connection_error = NULL;

    Py_XDECREF( var__is_read_error );
    var__is_read_error = NULL;

    Py_XDECREF( var_is_forced_retry );
    var_is_forced_retry = NULL;

    Py_XDECREF( var_is_exhausted );
    var_is_exhausted = NULL;

    Py_XDECREF( var_increment );
    var_increment = NULL;

    Py_XDECREF( var___repr__ );
    var___repr__ = NULL;

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

    Py_XDECREF( var_DEFAULT_METHOD_WHITELIST );
    var_DEFAULT_METHOD_WHITELIST = NULL;

    Py_XDECREF( var_BACKOFF_MAX );
    var_BACKOFF_MAX = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_new );
    var_new = NULL;

    Py_XDECREF( var_from_int );
    var_from_int = NULL;

    Py_XDECREF( var_get_backoff_time );
    var_get_backoff_time = NULL;

    Py_XDECREF( var_sleep );
    var_sleep = NULL;

    Py_XDECREF( var__is_connection_error );
    var__is_connection_error = NULL;

    Py_XDECREF( var__is_read_error );
    var__is_read_error = NULL;

    Py_XDECREF( var_is_forced_retry );
    var_is_forced_retry = NULL;

    Py_XDECREF( var_is_exhausted );
    var_is_exhausted = NULL;

    Py_XDECREF( var_increment );
    var_increment = NULL;

    Py_XDECREF( var___repr__ );
    var___repr__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_1___init___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_total = python_pars[ 1 ];
    PyObject *par_connect = python_pars[ 2 ];
    PyObject *par_read = python_pars[ 3 ];
    PyObject *par_redirect = python_pars[ 4 ];
    PyObject *par_method_whitelist = python_pars[ 5 ];
    PyObject *par_status_forcelist = python_pars[ 6 ];
    PyObject *par_backoff_factor = python_pars[ 7 ];
    PyObject *par_raise_on_redirect = python_pars[ 8 ];
    PyObject *par__observed_errors = python_pars[ 9 ];
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
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d2b2f75c0e98727f09bff18de7495499, module_pip$_vendor$requests$packages$urllib3$util$retry );
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
    tmp_assattr_name_1 = par_total;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_total, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_connect;

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_connect, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_read;

    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_read, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_redirect;

    tmp_compexpr_right_1 = Py_False;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_2 = par_total;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "total" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = Py_False;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = const_int_0;
    {
        PyObject *old = par_redirect;
        par_redirect = tmp_assign_source_1;
        Py_INCREF( par_redirect );
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = par_raise_on_redirect;
        assert( old != NULL );
        par_raise_on_redirect = tmp_assign_source_2;
        Py_INCREF( par_raise_on_redirect );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_4 = par_redirect;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_redirect, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = par_status_forcelist;

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
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
    tmp_or_right_value_2 = PySet_New( NULL );
    tmp_assattr_name_5 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_assattr_name_5 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_status_forcelist, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = par_method_whitelist;

    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_method_whitelist, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = par_backoff_factor;

    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_backoff_factor, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = par_raise_on_redirect;

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "raise_on_redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_raise_on_redirect, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = par__observed_errors;

    tmp_assattr_target_9 = par_self;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__observed_errors, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
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

            if ( par_total )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_total,
                    par_total
                );

                assert( res == 0 );
            }

            if ( par_connect )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_connect,
                    par_connect
                );

                assert( res == 0 );
            }

            if ( par_read )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_read,
                    par_read
                );

                assert( res == 0 );
            }

            if ( par_redirect )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_redirect,
                    par_redirect
                );

                assert( res == 0 );
            }

            if ( par_method_whitelist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method_whitelist,
                    par_method_whitelist
                );

                assert( res == 0 );
            }

            if ( par_status_forcelist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_status_forcelist,
                    par_status_forcelist
                );

                assert( res == 0 );
            }

            if ( par_backoff_factor )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_backoff_factor,
                    par_backoff_factor
                );

                assert( res == 0 );
            }

            if ( par_raise_on_redirect )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_raise_on_redirect,
                    par_raise_on_redirect
                );

                assert( res == 0 );
            }

            if ( par__observed_errors )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__observed_errors,
                    par__observed_errors
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_total );
    par_total = NULL;

    Py_XDECREF( par_connect );
    par_connect = NULL;

    Py_XDECREF( par_read );
    par_read = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_method_whitelist );
    par_method_whitelist = NULL;

    Py_XDECREF( par_status_forcelist );
    par_status_forcelist = NULL;

    Py_XDECREF( par_backoff_factor );
    par_backoff_factor = NULL;

    Py_XDECREF( par_raise_on_redirect );
    par_raise_on_redirect = NULL;

    Py_XDECREF( par__observed_errors );
    par__observed_errors = NULL;

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

    Py_XDECREF( par_total );
    par_total = NULL;

    Py_XDECREF( par_connect );
    par_connect = NULL;

    Py_XDECREF( par_read );
    par_read = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_method_whitelist );
    par_method_whitelist = NULL;

    Py_XDECREF( par_status_forcelist );
    par_status_forcelist = NULL;

    Py_XDECREF( par_backoff_factor );
    par_backoff_factor = NULL;

    Py_XDECREF( par_raise_on_redirect );
    par_raise_on_redirect = NULL;

    Py_XDECREF( par__observed_errors );
    par__observed_errors = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_2_new_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *var_params = NULL;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2f08cf44c5aa37070b86941fb89bc771, module_pip$_vendor$requests$packages$urllib3$util$retry );
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
    tmp_assign_source_1 = _PyDict_NewPresized( 9 );
    tmp_dict_key_1 = const_str_plain_total;
    tmp_source_name_1 = par_self;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_connect;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_read;
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

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_redirect;
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

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_method_whitelist;
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

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_method_whitelist );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_plain_status_forcelist;
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

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_status_forcelist );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_backoff_factor;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_backoff_factor );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_raise_on_redirect;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_raise_on_redirect );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    tmp_dict_key_9 = const_str_plain__observed_errors;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__observed_errors );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( var_params == NULL );
    var_params = tmp_assign_source_1;

    tmp_source_name_10 = var_params;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_update );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_kw;

    frame_function->f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
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
    tmp_type_arg_1 = par_self;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = var_params;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl_function_5_complex_call_helper_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
                );

                assert( res == 0 );
            }

            if ( var_params )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_params,
                    var_params
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
    NUITKA_CANNOT_GET_HERE( function_2_new_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

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

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_new_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_3_from_int_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_retries = python_pars[ 1 ];
    PyObject *par_redirect = python_pars[ 2 ];
    PyObject *par_default = python_pars[ 3 ];
    PyObject *var_new_retries = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ae154503942649b5b00097ea0365734b, module_pip$_vendor$requests$packages$urllib3$util$retry );
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
    tmp_compare_left_1 = par_retries;

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
    tmp_compare_left_2 = par_default;

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_1 = par_default;

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_assign_source_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_source_name_1 = par_cls;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DEFAULT );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    condexpr_end_1:;
    {
        PyObject *old = par_retries;
        par_retries = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_isinstance_inst_1 = par_retries;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
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
    tmp_return_value = par_retries;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_bool_arg_1 = par_redirect;

    tmp_and_left_value_1 = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_and_right_value_1 = Py_None;
    tmp_assign_source_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_assign_source_2 = tmp_and_left_value_1;
    and_end_1:;
    {
        PyObject *old = par_redirect;
        assert( old != NULL );
        par_redirect = tmp_assign_source_2;
        Py_INCREF( par_redirect );
        Py_DECREF( old );
    }

    tmp_called_name_1 = par_cls;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_retries;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_redirect;
    tmp_dict_value_1 = par_redirect;

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 155;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    assert( var_new_retries == NULL );
    var_new_retries = tmp_assign_source_3;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_debug );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_retries;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_new_retries;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_new_retries;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
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

            if ( par_redirect )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_redirect,
                    par_redirect
                );

                assert( res == 0 );
            }

            if ( par_default )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default,
                    par_default
                );

                assert( res == 0 );
            }

            if ( var_new_retries )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new_retries,
                    var_new_retries
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
    NUITKA_CANNOT_GET_HERE( function_3_from_int_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_new_retries );
    var_new_retries = NULL;

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

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_new_retries );
    var_new_retries = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_from_int_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_4_get_backoff_time_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_backoff_value = NULL;
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
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_24193031a64b4a041992df6bd410a517, module_pip$_vendor$requests$packages$urllib3$util$retry );
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

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__observed_errors );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_backoff_factor );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_int_pos_2;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__observed_errors );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    assert( var_backoff_value == NULL );
    var_backoff_value = tmp_assign_source_1;

    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_BACKOFF_MAX );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_backoff_value;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "backoff_value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( var_backoff_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_backoff_value,
                    var_backoff_value
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
    NUITKA_CANNOT_GET_HERE( function_4_get_backoff_time_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_backoff_value );
    var_backoff_value = NULL;

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

    Py_XDECREF( var_backoff_value );
    var_backoff_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_get_backoff_time_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_5_sleep_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_backoff = NULL;
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
    PyObject *tmp_called_name_2;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c6dd67ecad0c838f999afd3f7954329f, module_pip$_vendor$requests$packages$urllib3$util$retry );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_backoff_time );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 176;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    assert( var_backoff == NULL );
    var_backoff = tmp_assign_source_1;

    tmp_compare_left_1 = var_backoff;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sleep );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_backoff;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "backoff" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
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

            if ( var_backoff )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_backoff,
                    var_backoff
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
    NUITKA_CANNOT_GET_HERE( function_5_sleep_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_backoff );
    var_backoff = NULL;

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

    Py_XDECREF( var_backoff );
    var_backoff = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_sleep_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_6__is_connection_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_err = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_90cef65cd9bf6d0fa6385b874d497247, module_pip$_vendor$requests$packages$urllib3$util$retry );
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
    tmp_isinstance_inst_1 = par_err;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_err )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_err,
                    par_err
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
    NUITKA_CANNOT_GET_HERE( function_6__is_connection_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6__is_connection_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_7__is_read_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_err = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0820ea529a634ef30d2fa0becdcb7e93, module_pip$_vendor$requests$packages$urllib3$util$retry );
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
    tmp_isinstance_inst_1 = par_err;

    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_err )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_err,
                    par_err
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
    NUITKA_CANNOT_GET_HERE( function_7__is_read_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7__is_read_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_8_is_forced_retry_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_status_code = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_26079465894c72056aa8b2782468b02c, module_pip$_vendor$requests$packages$urllib3$util$retry );
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

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_method_whitelist );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_2 = par_method;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_upper );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 196;
    tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_method_whitelist );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 196;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_status_forcelist );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_compexpr_left_2 = par_status_code;

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_status_forcelist );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_2 );
    tmp_return_value = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_return_value = tmp_and_left_value_2;
    and_end_2:;
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

            if ( par_method )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method,
                    par_method
                );

                assert( res == 0 );
            }

            if ( par_status_code )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_status_code,
                    par_status_code
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
    NUITKA_CANNOT_GET_HERE( function_8_is_forced_retry_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_status_code );
    par_status_code = NULL;

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

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_status_code );
    par_status_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_is_forced_retry_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_9_is_exhausted_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_retry_counts = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_48354135b204bfc2228591b9494940f0, module_pip$_vendor$requests$packages$urllib3$util$retry );
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
    tmp_assign_source_1 = PyTuple_New( 4 );
    tmp_source_name_1 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
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

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 2, tmp_tuple_element_1 );
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

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 3, tmp_tuple_element_1 );
    assert( var_retry_counts == NULL );
    var_retry_counts = tmp_assign_source_1;

    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_filter );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = Py_None;
    tmp_args_element_name_2 = var_retry_counts;

    frame_function->f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_retry_counts;
        assert( old != NULL );
        var_retry_counts = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_cond_value_1 = var_retry_counts;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_3 = var_retry_counts;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_counts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( var_retry_counts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_retry_counts,
                    var_retry_counts
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
    NUITKA_CANNOT_GET_HERE( function_9_is_exhausted_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_retry_counts );
    var_retry_counts = NULL;

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

    Py_XDECREF( var_retry_counts );
    var_retry_counts = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_9_is_exhausted_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_10_increment_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_response = python_pars[ 3 ];
    PyObject *par_error = python_pars[ 4 ];
    PyObject *par__pool = python_pars[ 5 ];
    PyObject *par__stacktrace = python_pars[ 6 ];
    PyObject *var_total = NULL;
    PyObject *var__observed_errors = NULL;
    PyObject *var_connect = NULL;
    PyObject *var_read = NULL;
    PyObject *var_redirect = NULL;
    PyObject *var_cause = NULL;
    PyObject *var_new_retry = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
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
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3f776d1e7be3a004545742ac24c4161d, module_pip$_vendor$requests$packages$urllib3$util$retry );
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

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_False;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_and_right_value_1 = par_error;

    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reraise );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_type_arg_1 = par_error;

    if ( tmp_type_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_error;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par__stacktrace;

    frame_function->f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 224;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_total );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    assert( var_total == NULL );
    var_total = tmp_assign_source_1;

    tmp_compare_left_1 = var_total;

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = var_total;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "total" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_2 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    var_total = tmp_assign_source_2;

    branch_no_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__observed_errors );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        goto frame_exception_exit_1;
    }
    assert( var__observed_errors == NULL );
    var__observed_errors = tmp_assign_source_3;

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_connect );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    assert( var_connect == NULL );
    var_connect = tmp_assign_source_4;

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_read );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    assert( var_read == NULL );
    var_read = tmp_assign_source_5;

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_redirect );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto frame_exception_exit_1;
    }
    assert( var_redirect == NULL );
    var_redirect = tmp_assign_source_6;

    tmp_assign_source_7 = const_str_plain_unknown;
    assert( var_cause == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_cause = tmp_assign_source_7;

    tmp_and_left_value_2 = par_error;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__is_connection_error );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_error;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 236;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_and_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compare_left_2 = var_connect;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_False;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_reraise );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_type_arg_2 = par_error;

    if ( tmp_type_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_error;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par__stacktrace;

    frame_function->f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 239;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_3 = var_connect;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_2 = var_connect;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_8 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    var_connect = tmp_assign_source_8;

    branch_no_5:;
    branch_end_4:;
    tmp_left_name_3 = var__observed_errors;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_observed_errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_9 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    var__observed_errors = tmp_assign_source_9;

    goto branch_end_3;
    branch_no_3:;
    tmp_and_left_value_3 = par_error;

    if ( tmp_and_left_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__is_read_error );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_error;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 244;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_and_right_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compare_left_4 = var_read;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_False;
    tmp_is_2 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_2 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_reraise );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_type_arg_3 = par_error;

    if ( tmp_type_arg_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = BUILTIN_TYPE1( tmp_type_arg_3 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = par_error;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = par__stacktrace;

    frame_function->f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 247;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_5 = var_read;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_left_name_4 = var_read;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_10 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    var_read = tmp_assign_source_10;

    branch_no_8:;
    branch_end_7:;
    tmp_left_name_5 = var__observed_errors;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_observed_errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_11 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto frame_exception_exit_1;
    }
    var__observed_errors = tmp_assign_source_11;

    goto branch_end_6;
    branch_no_6:;
    tmp_and_left_value_4 = par_response;

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_source_name_12 = par_response;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_get_redirect_location );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 252;
    tmp_and_right_value_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_cond_value_4 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_6 = var_redirect;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_6 = var_redirect;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_12 = tmp_left_name_6;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    var_redirect = tmp_assign_source_12;

    branch_no_10:;
    tmp_assign_source_13 = const_str_digest_93b5718dbdad50e34931a5c649b12b14;
    {
        PyObject *old = var_cause;
        var_cause = tmp_assign_source_13;
        Py_INCREF( var_cause );
        Py_XDECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    tmp_left_name_7 = var__observed_errors;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_observed_errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_14 = tmp_left_name_7;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        goto frame_exception_exit_1;
    }
    var__observed_errors = tmp_assign_source_14;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_GENERIC_ERROR );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cause;
        var_cause = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_and_left_value_5 = par_response;

    if ( tmp_and_left_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_source_name_14 = par_response;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_status );
    if ( tmp_and_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    Py_INCREF( tmp_and_left_value_5 );
    tmp_cond_value_5 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_SPECIFIC_ERROR );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_format );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_status_code;
    tmp_source_name_17 = par_response;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_status );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 265;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 265;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cause;
        var_cause = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    branch_no_11:;
    branch_end_9:;
    branch_end_6:;
    branch_end_3:;
    tmp_source_name_18 = par_self;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_new );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 5 );
    tmp_dict_key_2 = const_str_plain_total;
    tmp_dict_value_2 = var_total;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "total" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_connect;
    tmp_dict_value_3 = var_connect;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_read;
    tmp_dict_value_4 = var_read;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_redirect;
    tmp_dict_value_5 = var_redirect;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_plain__observed_errors;
    tmp_dict_value_6 = var__observed_errors;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_observed_errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 270;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        goto frame_exception_exit_1;
    }
    assert( var_new_retry == NULL );
    var_new_retry = tmp_assign_source_17;

    tmp_source_name_19 = var_new_retry;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_is_exhausted );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 272;
    tmp_cond_value_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    Py_DECREF( tmp_called_name_9 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 272;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MaxRetryError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = par__pool;

    tmp_args_element_name_13 = par_url;

    tmp_or_left_value_1 = par_error;

    if ( tmp_or_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
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
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = var_cause;

    if ( tmp_args_element_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cause" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_args_element_name_14 = tmp_or_left_value_1;
    or_end_1:;
    frame_function->f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 273;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_12:;
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_debug );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_left_name_8 = const_str_digest_adf0407d4b5f2535bca90601d487b350;
    tmp_right_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_url;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_new_retry;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_right_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_1 );
    tmp_args_element_name_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 275;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 275;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_new_retry;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_method )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method,
                    par_method
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

            if ( par_response )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_response,
                    par_response
                );

                assert( res == 0 );
            }

            if ( par_error )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_error,
                    par_error
                );

                assert( res == 0 );
            }

            if ( par__pool )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__pool,
                    par__pool
                );

                assert( res == 0 );
            }

            if ( par__stacktrace )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__stacktrace,
                    par__stacktrace
                );

                assert( res == 0 );
            }

            if ( var_total )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_total,
                    var_total
                );

                assert( res == 0 );
            }

            if ( var__observed_errors )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__observed_errors,
                    var__observed_errors
                );

                assert( res == 0 );
            }

            if ( var_connect )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_connect,
                    var_connect
                );

                assert( res == 0 );
            }

            if ( var_read )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_read,
                    var_read
                );

                assert( res == 0 );
            }

            if ( var_redirect )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_redirect,
                    var_redirect
                );

                assert( res == 0 );
            }

            if ( var_cause )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cause,
                    var_cause
                );

                assert( res == 0 );
            }

            if ( var_new_retry )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new_retry,
                    var_new_retry
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
    NUITKA_CANNOT_GET_HERE( function_10_increment_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)par__pool );
    Py_DECREF( par__pool );
    par__pool = NULL;

    CHECK_OBJECT( (PyObject *)par__stacktrace );
    Py_DECREF( par__stacktrace );
    par__stacktrace = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var__observed_errors );
    var__observed_errors = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_redirect );
    var_redirect = NULL;

    Py_XDECREF( var_cause );
    var_cause = NULL;

    Py_XDECREF( var_new_retry );
    var_new_retry = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( par_error );
    par_error = NULL;

    Py_XDECREF( par__pool );
    par__pool = NULL;

    Py_XDECREF( par__stacktrace );
    par__stacktrace = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var__observed_errors );
    var__observed_errors = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_redirect );
    var_redirect = NULL;

    Py_XDECREF( var_cause );
    var_cause = NULL;

    Py_XDECREF( var_new_retry );
    var_new_retry = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_10_increment_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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


static PyObject *impl_function_11___repr___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_arg_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_73b1af2cd3414db1acd4242754b28d36, module_pip$_vendor$requests$packages$urllib3$util$retry );
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
    tmp_source_name_1 = const_str_digest_bd0ff88830ed4b618d1a259e8973092a;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_cls;
    tmp_type_arg_1 = par_self;

    tmp_dict_value_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_dict_value_1 != NULL );
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_self;
    tmp_dict_value_2 = par_self;

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 282;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
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
    NUITKA_CANNOT_GET_HERE( function_11___repr___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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
    NUITKA_CANNOT_GET_HERE( function_11___repr___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry );
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



static PyObject *MAKE_FUNCTION_function_10_increment_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_10_increment_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain_increment,
#if PYTHON_VERSION >= 330
        const_str_digest_d3c5cf2f2d706173f393307c5fa372aa,
#endif
        codeobj_3f776d1e7be3a004545742ac24c4161d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_digest_55857326d6523e3f76c12c271f391764
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11___repr___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_11___repr___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        const_str_digest_4291b42c0261755daa9f58af16f24a8c,
#endif
        codeobj_73b1af2cd3414db1acd4242754b28d36,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_297455e155b6c9736d87529e14591c5d,
#endif
        codeobj_d2b2f75c0e98727f09bff18de7495499,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_new_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_new_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        const_str_digest_ca693a71271df261e783dd0ecf309ae0,
#endif
        codeobj_2f08cf44c5aa37070b86941fb89bc771,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_from_int_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_from_int_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain_from_int,
#if PYTHON_VERSION >= 330
        const_str_digest_00aff75c087fe7f80636ea13a09e3e82,
#endif
        codeobj_ae154503942649b5b00097ea0365734b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_digest_54874c179a81b955e41d4fd1580cddd0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_backoff_time_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_get_backoff_time_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain_get_backoff_time,
#if PYTHON_VERSION >= 330
        const_str_digest_e80b9085df081452c8caeed4571c51b7,
#endif
        codeobj_24193031a64b4a041992df6bd410a517,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_digest_fc514c378d42c4c0744f71a520936e98
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_sleep_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_sleep_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain_sleep,
#if PYTHON_VERSION >= 330
        const_str_digest_b0594eafa05dc6a6810bb2c7c291548b,
#endif
        codeobj_c6dd67ecad0c838f999afd3f7954329f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_digest_71eab128675491d65630d610b6d7a98e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__is_connection_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6__is_connection_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain__is_connection_error,
#if PYTHON_VERSION >= 330
        const_str_digest_7e60379875538acb6d47a09b3bcd7fdf,
#endif
        codeobj_90cef65cd9bf6d0fa6385b874d497247,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_digest_7fb2c7a5424e28db1a201939b12c8399
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__is_read_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7__is_read_error_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain__is_read_error,
#if PYTHON_VERSION >= 330
        const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9,
#endif
        codeobj_0820ea529a634ef30d2fa0becdcb7e93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_digest_be3c2e7a479fa0076df719ca5a930f72
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_is_forced_retry_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_is_forced_retry_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain_is_forced_retry,
#if PYTHON_VERSION >= 330
        const_str_digest_4ab4549b763ec56a33a68f0da0a025a6,
#endif
        codeobj_26079465894c72056aa8b2782468b02c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_digest_1a26958e024af6adaa6eba6c2b96236e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_is_exhausted_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_9_is_exhausted_of_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_plain_is_exhausted,
#if PYTHON_VERSION >= 330
        const_str_digest_4506185023298da4a69876975fb76211,
#endif
        codeobj_48354135b204bfc2228591b9494940f0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$urllib3$util$retry,
        const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests$packages$urllib3$util$retry =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests.packages.urllib3.util.retry",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util$retry )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$urllib3$util$retry );
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

    // puts( "in initpip$_vendor$requests$packages$urllib3$util$retry" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests$packages$urllib3$util$retry = Py_InitModule4(
        "pip._vendor.requests.packages.urllib3.util.retry",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests$packages$urllib3$util$retry = PyModule_Create( &mdef_pip$_vendor$requests$packages$urllib3$util$retry );
#endif

    moduledict_pip$_vendor$requests$packages$urllib3$util$retry = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests$packages$urllib3$util$retry );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_81021860786bd5739afaf014be70c76f, module_pip$_vendor$requests$packages$urllib3$util$retry );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests$packages$urllib3$util$retry );

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
    PyObject *tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases = NULL;
    PyObject *tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass = NULL;
    PyObject *tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_metaclass_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6f78b6ef35033bfcc91660d2d16bdcc7;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_88f59c54076602dcb96ff841f9705fcc;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_c8936ede72c6244d93b499e782714511, module_pip$_vendor$requests$packages$urllib3$util$retry );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_time, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_3, tmp_import_globals_3, const_tuple_cc2174ed3c80049225594c5bf0dc5573_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ConnectTimeoutError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_4, tmp_import_globals_4, const_tuple_cc2174ed3c80049225594c5bf0dc5573_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_MaxRetryError );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_5, tmp_import_globals_5, const_tuple_cc2174ed3c80049225594c5bf0dc5573_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ProtocolError );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_6, tmp_import_globals_6, const_tuple_cc2174ed3c80049225594c5bf0dc5573_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ReadTimeoutError );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_7, tmp_import_globals_7, const_tuple_cc2174ed3c80049225594c5bf0dc5573_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ResponseError );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util$retry)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_packages, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_six_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_13 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 15;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_81021860786bd5739afaf014be70c76f_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_14 );
    tmp_assign_source_15 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_1 );
    assert( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases == NULL );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases = tmp_assign_source_15;

    tmp_assign_source_16 = PyDict_New();
    assert( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict == NULL );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict = tmp_assign_source_16;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict;

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
    tmp_dict_name_1 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
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
    tmp_subscribed_name_1 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases;

    tmp_assign_source_17 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 18;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass == NULL );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass = tmp_assign_source_17;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
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
    tmp_source_name_2 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_Retry;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 18;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_18 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared == NULL );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared = tmp_assign_source_18;

    tmp_assign_source_19 = impl_class_1_Retry_of_pip$_vendor$requests$packages$urllib3$util$retry( NULL, tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases, tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict, tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass, tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_19 );
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

    Py_XDECREF( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared );
    tmp_pip$_vendor$requests$packages$urllib3$util$retry_class_creation_1__prepared = NULL;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 286;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_DEFAULT, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 286;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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

    return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$urllib3$util$retry );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
