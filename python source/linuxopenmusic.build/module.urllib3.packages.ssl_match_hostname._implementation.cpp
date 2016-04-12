// Generated code for Python source for module 'urllib3.packages.ssl_match_hostname._implementation'
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

// The _module_urllib3$packages$ssl_match_hostname$_implementation is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_urllib3$packages$ssl_match_hostname$_implementation;
PyDictObject *moduledict_urllib3$packages$ssl_match_hostname$_implementation;

// The module constants used
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_digest_2827a02148585180db385ecab4334673;
extern PyObject *const_str_plain_CertificateError;
extern PyObject *const_str_plain_dnsnames;
extern PyObject *const_dict_empty;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3;
extern PyObject *const_str_plain_san;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_commonName;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_9d2ee80bc8b6b38510f1287d710300dd;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_digest_e56abf9379492360b5ea0226e2912c30;
extern PyObject *const_str_plain_match_hostname;
extern PyObject *const_tuple_str_plain_subject_tuple_empty_tuple;
extern PyObject *const_str_plain__implementation;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_repr;
extern PyObject *const_str_digest_cb4b3ec76f0e04caf09490892f20768f;
extern PyObject *const_str_digest_5445f5c70d719d755f5eecf9a5301ba4;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_max_wildcards;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_digest_bf444768bd6e1671ab2a507b3ebb9a78;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_digest_67325c16e6049950668b4d54af8157ef;
extern PyObject *const_str_plain_IGNORECASE;
extern PyObject *const_str_plain_DNS;
extern PyObject *const_str_plain_frag;
extern PyObject *const_tuple_2093a7623858190feac335b978220df2_tuple;
extern PyObject *const_str_plain_parts;
extern PyObject *const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_str_plain__dnsname_match;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_93d15f13bc4ddb17dc6e54285f512f62;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_7f16e889db0fb151bb4cfd210e3e2b32;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_digest_c8d28aa411cf9a88d9aed194157300dd;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain___version__;
extern PyObject *const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple;
extern PyObject *const_str_plain_subject;
extern PyObject *const_str_digest_b8ae32441dc7540b307e3e1dd1d9ff26;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_str_digest_3f122124238c5ee400de97226dfddd9b;
extern PyObject *const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple;
extern PyObject *const_str_digest_3b35d51050a71678e6a91f8af50bcd6c;
extern PyObject *const_str_digest_fb892dfe9960a90623b6c1bcadc2b2f7;
extern PyObject *const_str_plain_dn;
extern PyObject *const_tuple_str_plain_subjectAltName_tuple_empty_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_pats;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_34010180ec3d1d62f2ebeeab9067d2f5_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_subjectAltName;
extern PyObject *const_str_digest_b8a3e24bd480f9d749e7f38794d9a804;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_digest_aeede64b344ecdb207d5ada8087218b6;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_remainder;
extern PyObject *const_str_plain_leftmost;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_digest_a0db21d4919b03bd7d8ccb97e7a49f28;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_wildcards;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_pat;
extern PyObject *const_str_plain_escape;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_9d2ee80bc8b6b38510f1287d710300dd = UNSTREAM_STRING( &constant_bin[ 194846 ], 51, 0 );
    const_str_digest_7f16e889db0fb151bb4cfd210e3e2b32 = UNSTREAM_STRING( &constant_bin[ 740844 ], 87, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$ssl_match_hostname$_implementation( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4f374be2cea54a33a37a4b4793090553;
static PyCodeObject *codeobj_ac95a8c4674da6d3c72850cb413cee6c;
static PyCodeObject *codeobj_541dc1c590fa547ac52ae26e32dfe77d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7f16e889db0fb151bb4cfd210e3e2b32;
    codeobj_4f374be2cea54a33a37a4b4793090553 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dnsname_match, 14, const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ac95a8c4674da6d3c72850cb413cee6c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__implementation, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_541dc1c590fa547ac52ae26e32dfe77d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_match_hostname, 67, const_tuple_34010180ec3d1d62f2ebeeab9067d2f5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CertificateError_of_urllib3$packages$ssl_match_hostname$_implementation( PyObject **python_pars, PyObject *&closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases, PyObject *&closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict, PyObject *&closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass, PyObject *&closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared );


static PyObject *MAKE_FUNCTION_function_1__dnsname_match_of_urllib3$packages$ssl_match_hostname$_implementation( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_match_hostname_of_urllib3$packages$ssl_match_hostname$_implementation(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CertificateError_of_urllib3$packages$ssl_match_hostname$_implementation( PyObject **python_pars, PyObject *&closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases, PyObject *&closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict, PyObject *&closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass, PyObject *&closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_9d2ee80bc8b6b38510f1287d710300dd;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_CertificateError;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_CertificateError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_CertificateError_of_urllib3$packages$ssl_match_hostname$_implementation );
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
    NUITKA_CANNOT_GET_HERE( class_1_CertificateError_of_urllib3$packages$ssl_match_hostname$_implementation );
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


static PyObject *impl_function_1__dnsname_match_of_urllib3$packages$ssl_match_hostname$_implementation( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dn = python_pars[ 0 ];
    PyObject *par_hostname = python_pars[ 1 ];
    PyObject *par_max_wildcards = python_pars[ 2 ];
    PyObject *var_pats = NULL;
    PyObject *var_parts = NULL;
    PyObject *var_leftmost = NULL;
    PyObject *var_remainder = NULL;
    PyObject *var_wildcards = NULL;
    PyObject *var_frag = NULL;
    PyObject *var_pat = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_pats == NULL );
    var_pats = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4f374be2cea54a33a37a4b4793090553, module_urllib3$packages$ssl_match_hostname$_implementation );
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
    tmp_cond_value_1 = par_dn;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
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
    tmp_source_name_1 = par_dn;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 25;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    assert( var_parts == NULL );
    var_parts = tmp_assign_source_2;

    tmp_subscribed_name_1 = var_parts;

    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    assert( var_leftmost == NULL );
    var_leftmost = tmp_assign_source_3;

    tmp_subscribed_name_2 = var_parts;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    assert( var_remainder == NULL );
    var_remainder = tmp_assign_source_4;

    tmp_source_name_2 = var_leftmost;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_count );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 29;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_chr_42_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    assert( var_wildcards == NULL );
    var_wildcards = tmp_assign_source_5;

    tmp_compare_left_1 = var_wildcards;

    tmp_compare_right_1 = par_max_wildcards;

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_a0db21d4919b03bd7d8ccb97e7a49f28;
    tmp_operand_name_1 = par_dn;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 36;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_cond_value_2 = var_wildcards;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wildcards" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_dn;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_lower );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 40;
    tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_hostname;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_lower );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 40;
    tmp_compexpr_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_compare_left_2 = var_leftmost;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_chr_42;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_5 = var_pats;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 48;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_6 = var_leftmost;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_startswith );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 49;
    tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple, 0 ) );

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 49;
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
    tmp_source_name_7 = par_hostname;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_startswith );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 49;
    tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple, 0 ) );

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_3 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_8 = var_pats;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_escape );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_leftmost;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_10 = var_pats;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_escape );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_leftmost;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_source_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_replace );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 57;
    tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_2093a7623858190feac335b978220df2_tuple, 0 ) );

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_5:;
    branch_end_4:;
    tmp_iter_arg_1 = var_remainder;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "remainder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 60;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_frag;
        var_frag = tmp_assign_source_8;
        Py_INCREF( var_frag );
        Py_XDECREF( old );
    }

    tmp_source_name_13 = var_pats;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto try_except_handler_2;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_append );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto try_except_handler_2;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_escape );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 61;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_frag;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "frag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 61;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_compile );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = const_str_digest_c8d28aa411cf9a88d9aed194157300dd;
    tmp_source_name_16 = const_str_digest_e56abf9379492360b5ea0226e2912c30;
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_join );
    assert( tmp_called_name_17 != NULL );
    tmp_args_element_name_9 = var_pats;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_str_digest_bf444768bd6e1671ab2a507b3ebb9a78;
    tmp_args_element_name_8 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_IGNORECASE );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_10 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    assert( var_pat == NULL );
    var_pat = tmp_assign_source_9;

    tmp_source_name_18 = var_pat;

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_match );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = par_hostname;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
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
            if ( par_dn )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dn,
                    par_dn
                );

                assert( res == 0 );
            }

            if ( par_hostname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hostname,
                    par_hostname
                );

                assert( res == 0 );
            }

            if ( par_max_wildcards )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_max_wildcards,
                    par_max_wildcards
                );

                assert( res == 0 );
            }

            if ( var_pats )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pats,
                    var_pats
                );

                assert( res == 0 );
            }

            if ( var_parts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parts,
                    var_parts
                );

                assert( res == 0 );
            }

            if ( var_leftmost )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_leftmost,
                    var_leftmost
                );

                assert( res == 0 );
            }

            if ( var_remainder )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_remainder,
                    var_remainder
                );

                assert( res == 0 );
            }

            if ( var_wildcards )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wildcards,
                    var_wildcards
                );

                assert( res == 0 );
            }

            if ( var_frag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_frag,
                    var_frag
                );

                assert( res == 0 );
            }

            if ( var_pat )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pat,
                    var_pat
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
    NUITKA_CANNOT_GET_HERE( function_1__dnsname_match_of_urllib3$packages$ssl_match_hostname$_implementation );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_dn );
    par_dn = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_max_wildcards );
    par_max_wildcards = NULL;

    Py_XDECREF( var_pats );
    var_pats = NULL;

    Py_XDECREF( var_parts );
    var_parts = NULL;

    Py_XDECREF( var_leftmost );
    var_leftmost = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

    Py_XDECREF( var_wildcards );
    var_wildcards = NULL;

    Py_XDECREF( var_frag );
    var_frag = NULL;

    Py_XDECREF( var_pat );
    var_pat = NULL;

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

    Py_XDECREF( par_dn );
    par_dn = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_max_wildcards );
    par_max_wildcards = NULL;

    Py_XDECREF( var_pats );
    var_pats = NULL;

    Py_XDECREF( var_parts );
    var_parts = NULL;

    Py_XDECREF( var_leftmost );
    var_leftmost = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

    Py_XDECREF( var_wildcards );
    var_wildcards = NULL;

    Py_XDECREF( var_frag );
    var_frag = NULL;

    Py_XDECREF( var_pat );
    var_pat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1__dnsname_match_of_urllib3$packages$ssl_match_hostname$_implementation );
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


static PyObject *impl_function_2_match_hostname_of_urllib3$packages$ssl_match_hostname$_implementation( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_hostname = python_pars[ 1 ];
    PyObject *var_dnsnames = NULL;
    PyObject *var_san = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *var_sub = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Gt_1;
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
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_541dc1c590fa547ac52ae26e32dfe77d, module_urllib3$packages$ssl_match_hostname$_implementation );
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
    tmp_cond_value_1 = par_cert;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
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
    tmp_make_exception_arg_1 = const_str_digest_aeede64b344ecdb207d5ada8087218b6;
    frame_function->f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 76;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_dnsnames == NULL );
    var_dnsnames = tmp_assign_source_1;

    tmp_source_name_1 = par_cert;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 78;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_subjectAltName_tuple_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    assert( var_san == NULL );
    var_san = tmp_assign_source_2;

    tmp_iter_arg_1 = var_san;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 79;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        exception_lineno = 79;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_7 == NULL )
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


        exception_lineno = 79;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_8;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_9;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = var_key;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        goto try_except_handler_2;
    }

    tmp_compare_right_1 = const_str_plain_DNS;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dnsname_match );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dnsname_match" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_value;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_hostname;

    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 81;
        goto try_except_handler_2;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_3:;
    tmp_source_name_2 = var_dnsnames;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_value;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    tmp_cond_value_3 = var_dnsnames;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = par_cert;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 87;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_subject_tuple_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_10;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 87;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_sub;
        var_sub = tmp_assign_source_12;
        Py_INCREF( var_sub );
        Py_XDECREF( old );
    }

    tmp_iter_arg_4 = var_sub;

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_3__for_iterator;
        tmp_for_loop_3__for_iterator = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 88;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_5 = tmp_for_loop_3__iter_value;

    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_16 == NULL )
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


        exception_lineno = 88;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_17 == NULL )
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


        exception_lineno = 88;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                goto try_except_handler_6;
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

        goto try_except_handler_6;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_18;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_19;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_compare_left_2 = var_key;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto try_except_handler_5;
    }

    tmp_compare_right_2 = const_str_plain_commonName;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_5;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dnsname_match );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dnsname_match" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = var_value;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto try_except_handler_5;
    }

    tmp_args_element_name_5 = par_hostname;

    frame_function->f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto try_except_handler_5;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 92;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_5;
    branch_no_6:;
    tmp_source_name_4 = var_dnsnames;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto try_except_handler_5;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_5;
    }
    tmp_args_element_name_6 = var_value;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto try_except_handler_5;
    }

    frame_function->f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_5;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    goto try_return_handler_4;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_4:;
    tmp_len_arg_1 = var_dnsnames;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_3b35d51050a71678e6a91f8af50bcd6c;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_hostname;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_8 != NULL );
    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_9 = LOOKUP_BUILTIN( const_str_plain_repr );
    assert( tmp_args_element_name_9 != NULL );
    tmp_args_element_name_10 = var_dnsnames;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 98;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_len_arg_2 = var_dnsnames;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_pos_1;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_digest_2827a02148585180db385ecab4334673;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_hostname;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_subscribed_name_1 = var_dnsnames;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
    tmp_args_element_name_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 102;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_8;
    branch_no_8:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 104;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple, 0 ) );

    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 104;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_8:;
    branch_end_7:;

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
            if ( par_cert )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cert,
                    par_cert
                );

                assert( res == 0 );
            }

            if ( par_hostname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hostname,
                    par_hostname
                );

                assert( res == 0 );
            }

            if ( var_dnsnames )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dnsnames,
                    var_dnsnames
                );

                assert( res == 0 );
            }

            if ( var_san )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_san,
                    var_san
                );

                assert( res == 0 );
            }

            if ( var_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key,
                    var_key
                );

                assert( res == 0 );
            }

            if ( var_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    var_value
                );

                assert( res == 0 );
            }

            if ( var_sub )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sub,
                    var_sub
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
    NUITKA_CANNOT_GET_HERE( function_2_match_hostname_of_urllib3$packages$ssl_match_hostname$_implementation );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( var_dnsnames );
    var_dnsnames = NULL;

    Py_XDECREF( var_san );
    var_san = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( var_dnsnames );
    var_dnsnames = NULL;

    Py_XDECREF( var_san );
    var_san = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_match_hostname_of_urllib3$packages$ssl_match_hostname$_implementation );
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



static PyObject *MAKE_FUNCTION_function_1__dnsname_match_of_urllib3$packages$ssl_match_hostname$_implementation( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1__dnsname_match_of_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_plain__dnsname_match,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f374be2cea54a33a37a4b4793090553,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_digest_67325c16e6049950668b4d54af8157ef
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_match_hostname_of_urllib3$packages$ssl_match_hostname$_implementation(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_match_hostname_of_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_plain_match_hostname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_541dc1c590fa547ac52ae26e32dfe77d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_digest_cb4b3ec76f0e04caf09490892f20768f
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$ssl_match_hostname$_implementation =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.packages.ssl_match_hostname._implementation",   /* m_name */
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

MOD_INIT_DECL( urllib3$packages$ssl_match_hostname$_implementation )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$packages$ssl_match_hostname$_implementation );
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

    // puts( "in initurllib3$packages$ssl_match_hostname$_implementation" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$ssl_match_hostname$_implementation = Py_InitModule4(
        "urllib3.packages.ssl_match_hostname._implementation",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$packages$ssl_match_hostname$_implementation = PyModule_Create( &mdef_urllib3$packages$ssl_match_hostname$_implementation );
#endif

    moduledict_urllib3$packages$ssl_match_hostname$_implementation = (PyDictObject *)((PyModuleObject *)module_urllib3$packages$ssl_match_hostname$_implementation)->md_dict;

    CHECK_OBJECT( module_urllib3$packages$ssl_match_hostname$_implementation );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9d2ee80bc8b6b38510f1287d710300dd, module_urllib3$packages$ssl_match_hostname$_implementation );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_urllib3$packages$ssl_match_hostname$_implementation );

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
    PyObject *tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases = NULL;
    PyObject *tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass = NULL;
    PyObject *tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared = NULL;
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
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_b8ae32441dc7540b307e3e1dd1d9ff26;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7f16e889db0fb151bb4cfd210e3e2b32;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_5445f5c70d719d755f5eecf9a5301ba4;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_ac95a8c4674da6d3c72850cb413cee6c, module_urllib3$packages$ssl_match_hostname$_implementation );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_urllib3$packages$ssl_match_hostname$_implementation)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_fb892dfe9960a90623b6c1bcadc2b2f7;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    tmp_assign_source_7 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    assert( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases == NULL );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = PyDict_New();
    assert( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict == NULL );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict = tmp_assign_source_8;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict;

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
    tmp_dict_name_1 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
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
    tmp_subscribed_name_1 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases;

    tmp_assign_source_9 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 10;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass == NULL );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass = tmp_assign_source_9;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict;

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
    tmp_dictdel_dict = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
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
    tmp_source_name_1 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_CertificateError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 10;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_10 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared == NULL );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared = tmp_assign_source_10;

    tmp_assign_source_11 = impl_class_1_CertificateError_of_urllib3$packages$ssl_match_hostname$_implementation( NULL, tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases, tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict, tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass, tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError, tmp_assign_source_11 );
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

    Py_XDECREF( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
    Py_XDECREF( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared );
    tmp_urllib3$packages$ssl_match_hostname$_implementation_class_creation_1__prepared = NULL;

    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_12 = MAKE_FUNCTION_function_1__dnsname_match_of_urllib3$packages$ssl_match_hostname$_implementation( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_function_2_match_hostname_of_urllib3$packages$ssl_match_hostname$_implementation(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_match_hostname, tmp_assign_source_13 );

    return MOD_RETURN_VALUE( module_urllib3$packages$ssl_match_hostname$_implementation );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
