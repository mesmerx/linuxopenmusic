// Generated code for Python source for module 'pip._vendor.requests.packages.chardet.charsetprober'
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

// The _module_pip$_vendor$requests$packages$chardet$charsetprober is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests$packages$chardet$charsetprober;
PyDictObject *moduledict_pip$_vendor$requests$packages$chardet$charsetprober;

// The module constants used
extern PyObject *const_str_plain_filter_without_english_letters;
extern PyObject *const_bytes_digest_809dc873a952db29517e931db92b9f36;
extern PyObject *const_str_digest_9514cd9de70ec5ab00b90cedb8906b68;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_str_plain_constants_tuple;
extern PyObject *const_bytes_chr_32;
extern PyObject *const_str_plain_constants;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain__mState;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_8390254c5edee10f24b91b86c805863c;
extern PyObject *const_str_plain_get_charset_name;
extern PyObject *const_str_digest_cb07f2b74671dfe7e54610aea090ddc4;
extern PyObject *const_int_0;
extern PyObject *const_bytes_digest_e2ab328fb9b7a5426f83cf310025a63f;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_CharSetProber;
extern PyObject *const_str_digest_bea83a9d5361fcbb9b98d9a9a4698d32;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_eDetecting;
static PyObject *const_str_digest_54e434fceb2f25ca0d073c54670c76c1;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_aBuf;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_digest_70ca23c973c1a0de004c414967a80408;
extern PyObject *const_tuple_str_plain_self_str_plain_aBuf_tuple;
extern PyObject *const_str_digest_844bc64cf153564bb2f6c18692dce9e8;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_charsetprober;
extern PyObject *const_str_plain_filter_with_english_letters;
extern PyObject *const_str_plain_filter_high_bit_only;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_digest_c02219dfa7812e7f75ecc62348854d2d;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_feed;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_3f2cd01d68aea2af9a8754bded3275a2;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_get_state;
extern PyObject *const_str_digest_107260837257a24dd33ded2c68b97b85;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_digest_2d71a7f05db41d54bc0977e7c5a9d755;
extern PyObject *const_str_digest_515cde36df26fd6f7b9906b26534476f;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8390254c5edee10f24b91b86c805863c = UNSTREAM_STRING( &constant_bin[ 458358 ], 51, 0 );
    const_str_digest_54e434fceb2f25ca0d073c54670c76c1 = UNSTREAM_STRING( &constant_bin[ 458409 ], 87, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests$packages$chardet$charsetprober( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b0ac9b07846af5ec4793986f9aaecec6;
static PyCodeObject *codeobj_b1762570deca5765f0bdcfd9a0d85951;
static PyCodeObject *codeobj_74b3c2667f6ef545f8143c03b8ff3b1d;
static PyCodeObject *codeobj_eb7785029e5275aac0d2f328f33f741e;
static PyCodeObject *codeobj_a174b03d3bcba790267df377451ea4f7;
static PyCodeObject *codeobj_ed829f1c604705cb0cfd70234e55d6ae;
static PyCodeObject *codeobj_7c3c8a2d03f3f7057273ab76f1ae58da;
static PyCodeObject *codeobj_8d116b09b6d45335782386a7896763cd;
static PyCodeObject *codeobj_8e9e7597d76ca79463ae19f81ae352e8;
static PyCodeObject *codeobj_1fcc95d22f570e21fec4e8dd8b5ef16c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_54e434fceb2f25ca0d073c54670c76c1;
    codeobj_b0ac9b07846af5ec4793986f9aaecec6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 34, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b1762570deca5765f0bdcfd9a0d85951 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_charsetprober, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_74b3c2667f6ef545f8143c03b8ff3b1d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 43, const_tuple_str_plain_self_str_plain_aBuf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb7785029e5275aac0d2f328f33f741e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_high_bit_only, 52, const_tuple_str_plain_self_str_plain_aBuf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a174b03d3bcba790267df377451ea4f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_with_english_letters, 60, const_tuple_str_plain_self_str_plain_aBuf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed829f1c604705cb0cfd70234e55d6ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_without_english_letters, 56, const_tuple_str_plain_self_str_plain_aBuf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7c3c8a2d03f3f7057273ab76f1ae58da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_charset_name, 40, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8d116b09b6d45335782386a7896763cd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_confidence, 49, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8e9e7597d76ca79463ae19f81ae352e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_state, 46, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1fcc95d22f570e21fec4e8dd8b5ef16c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 37, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( PyObject **python_pars, PyObject *&closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases, PyObject *&closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict, PyObject *&closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass, PyObject *&closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


static PyObject *MAKE_FUNCTION_function_2_reset_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


static PyObject *MAKE_FUNCTION_function_3_get_charset_name_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


static PyObject *MAKE_FUNCTION_function_4_feed_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


static PyObject *MAKE_FUNCTION_function_5_get_state_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


static PyObject *MAKE_FUNCTION_function_6_get_confidence_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


static PyObject *MAKE_FUNCTION_function_7_filter_high_bit_only_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


static PyObject *MAKE_FUNCTION_function_8_filter_without_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


static PyObject *MAKE_FUNCTION_function_9_filter_with_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( PyObject **python_pars, PyObject *&closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases, PyObject *&closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict, PyObject *&closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass, PyObject *&closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared )
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
    PyObject *var___init__ = NULL;
    PyObject *var_reset = NULL;
    PyObject *var_get_charset_name = NULL;
    PyObject *var_feed = NULL;
    PyObject *var_get_state = NULL;
    PyObject *var_get_confidence = NULL;
    PyObject *var_filter_high_bit_only = NULL;
    PyObject *var_filter_without_english_letters = NULL;
    PyObject *var_filter_with_english_letters = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8390254c5edee10f24b91b86c805863c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_CharSetProber;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2_reset_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var_reset == NULL );
    var_reset = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3_get_charset_name_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var_get_charset_name == NULL );
    var_get_charset_name = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4_feed_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var_feed == NULL );
    var_feed = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_5_get_state_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var_get_state == NULL );
    var_get_state = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_6_get_confidence_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var_get_confidence == NULL );
    var_get_confidence = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_7_filter_high_bit_only_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var_filter_high_bit_only == NULL );
    var_filter_high_bit_only = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_8_filter_without_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var_filter_without_english_letters == NULL );
    var_filter_without_english_letters = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_9_filter_with_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  );
    assert( var_filter_with_english_letters == NULL );
    var_filter_with_english_letters = tmp_assign_source_11;

    // Tried code:
    tmp_called_name_1 = closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_CharSetProber;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_reset, var_reset );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_get_charset_name, var_get_charset_name );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_feed, var_feed );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_get_state, var_get_state );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_get_confidence, var_get_confidence );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_filter_high_bit_only, var_filter_high_bit_only );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_filter_without_english_letters, var_filter_without_english_letters );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_filter_with_english_letters, var_filter_with_english_letters );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict;

    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_12;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
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

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_reset );
    var_reset = NULL;

    Py_XDECREF( var_get_charset_name );
    var_get_charset_name = NULL;

    Py_XDECREF( var_feed );
    var_feed = NULL;

    Py_XDECREF( var_get_state );
    var_get_state = NULL;

    Py_XDECREF( var_get_confidence );
    var_get_confidence = NULL;

    Py_XDECREF( var_filter_high_bit_only );
    var_filter_high_bit_only = NULL;

    Py_XDECREF( var_filter_without_english_letters );
    var_filter_without_english_letters = NULL;

    Py_XDECREF( var_filter_with_english_letters );
    var_filter_with_english_letters = NULL;

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

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_reset );
    var_reset = NULL;

    Py_XDECREF( var_get_charset_name );
    var_get_charset_name = NULL;

    Py_XDECREF( var_feed );
    var_feed = NULL;

    Py_XDECREF( var_get_state );
    var_get_state = NULL;

    Py_XDECREF( var_get_confidence );
    var_get_confidence = NULL;

    Py_XDECREF( var_filter_high_bit_only );
    var_filter_high_bit_only = NULL;

    Py_XDECREF( var_filter_without_english_letters );
    var_filter_without_english_letters = NULL;

    Py_XDECREF( var_filter_with_english_letters );
    var_filter_with_english_letters = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
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


static PyObject *impl_function_1___init___of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_2_reset_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1fcc95d22f570e21fec4e8dd8b5ef16c, module_pip$_vendor$requests$packages$chardet$charsetprober );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_constants );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_constants );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "constants" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eDetecting );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__mState, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
    NUITKA_CANNOT_GET_HERE( function_2_reset_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
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
    NUITKA_CANNOT_GET_HERE( function_2_reset_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
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


static PyObject *impl_function_3_get_charset_name_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_get_charset_name_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_get_charset_name_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_4_feed_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aBuf = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_feed_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_aBuf );
    Py_DECREF( par_aBuf );
    par_aBuf = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_aBuf );
    Py_DECREF( par_aBuf );
    par_aBuf = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_feed_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_5_get_state_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8e9e7597d76ca79463ae19f81ae352e8, module_pip$_vendor$requests$packages$chardet$charsetprober );
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

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mState );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
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
    NUITKA_CANNOT_GET_HERE( function_5_get_state_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
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
    NUITKA_CANNOT_GET_HERE( function_5_get_state_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
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


static PyObject *impl_function_6_get_confidence_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_float_0_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_get_confidence_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_get_confidence_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_7_filter_high_bit_only_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aBuf = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_eb7785029e5275aac0d2f328f33f741e, module_pip$_vendor$requests$packages$chardet$charsetprober );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sub );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_bytes_digest_809dc873a952db29517e931db92b9f36;
    tmp_args_element_name_2 = const_bytes_chr_32;
    tmp_args_element_name_3 = par_aBuf;

    frame_function->f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_aBuf;
        par_aBuf = tmp_assign_source_1;
        Py_XDECREF( old );
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

            if ( par_aBuf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_aBuf,
                    par_aBuf
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

    tmp_return_value = par_aBuf;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_7_filter_high_bit_only_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_aBuf );
    par_aBuf = NULL;

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

    Py_XDECREF( par_aBuf );
    par_aBuf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7_filter_high_bit_only_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
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


static PyObject *impl_function_8_filter_without_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aBuf = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ed829f1c604705cb0cfd70234e55d6ae, module_pip$_vendor$requests$packages$chardet$charsetprober );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sub );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_bytes_digest_e2ab328fb9b7a5426f83cf310025a63f;
    tmp_args_element_name_2 = const_bytes_chr_32;
    tmp_args_element_name_3 = par_aBuf;

    frame_function->f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_aBuf;
        par_aBuf = tmp_assign_source_1;
        Py_XDECREF( old );
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

            if ( par_aBuf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_aBuf,
                    par_aBuf
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

    tmp_return_value = par_aBuf;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_8_filter_without_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_aBuf );
    par_aBuf = NULL;

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

    Py_XDECREF( par_aBuf );
    par_aBuf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_filter_without_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
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


static PyObject *impl_function_9_filter_with_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aBuf = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_aBuf;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_9_filter_with_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_aBuf );
    par_aBuf = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_9_filter_with_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_bea83a9d5361fcbb9b98d9a9a4698d32,
#endif
        codeobj_b0ac9b07846af5ec4793986f9aaecec6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_reset_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_reset_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain_reset,
#if PYTHON_VERSION >= 330
        const_str_digest_107260837257a24dd33ded2c68b97b85,
#endif
        codeobj_1fcc95d22f570e21fec4e8dd8b5ef16c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_charset_name_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_get_charset_name_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain_get_charset_name,
#if PYTHON_VERSION >= 330
        const_str_digest_cb07f2b74671dfe7e54610aea090ddc4,
#endif
        codeobj_7c3c8a2d03f3f7057273ab76f1ae58da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_feed_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_feed_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain_feed,
#if PYTHON_VERSION >= 330
        const_str_digest_70ca23c973c1a0de004c414967a80408,
#endif
        codeobj_74b3c2667f6ef545f8143c03b8ff3b1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_get_state_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_get_state_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain_get_state,
#if PYTHON_VERSION >= 330
        const_str_digest_c02219dfa7812e7f75ecc62348854d2d,
#endif
        codeobj_8e9e7597d76ca79463ae19f81ae352e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_get_confidence_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6_get_confidence_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 330
        const_str_digest_9514cd9de70ec5ab00b90cedb8906b68,
#endif
        codeobj_8d116b09b6d45335782386a7896763cd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_filter_high_bit_only_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7_filter_high_bit_only_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain_filter_high_bit_only,
#if PYTHON_VERSION >= 330
        const_str_digest_2d71a7f05db41d54bc0977e7c5a9d755,
#endif
        codeobj_eb7785029e5275aac0d2f328f33f741e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_filter_without_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_filter_without_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain_filter_without_english_letters,
#if PYTHON_VERSION >= 330
        const_str_digest_844bc64cf153564bb2f6c18692dce9e8,
#endif
        codeobj_ed829f1c604705cb0cfd70234e55d6ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_filter_with_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_9_filter_with_english_letters_of_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober,
        const_str_plain_filter_with_english_letters,
#if PYTHON_VERSION >= 330
        const_str_digest_3f2cd01d68aea2af9a8754bded3275a2,
#endif
        codeobj_a174b03d3bcba790267df377451ea4f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests$packages$chardet$charsetprober,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests$packages$chardet$charsetprober =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests.packages.chardet.charsetprober",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$charsetprober )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$chardet$charsetprober );
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

    // puts( "in initpip$_vendor$requests$packages$chardet$charsetprober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests$packages$chardet$charsetprober = Py_InitModule4(
        "pip._vendor.requests.packages.chardet.charsetprober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests$packages$chardet$charsetprober = PyModule_Create( &mdef_pip$_vendor$requests$packages$chardet$charsetprober );
#endif

    moduledict_pip$_vendor$requests$packages$chardet$charsetprober = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$charsetprober)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests$packages$chardet$charsetprober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8390254c5edee10f24b91b86c805863c, module_pip$_vendor$requests$packages$chardet$charsetprober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests$packages$chardet$charsetprober );

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
    PyObject *tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases = NULL;
    PyObject *tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass = NULL;
    PyObject *tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared = NULL;
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
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_metaclass_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_54e434fceb2f25ca0d073c54670c76c1;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_515cde36df26fd6f7b9906b26534476f;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_b1762570deca5765f0bdcfd9a0d85951, module_pip$_vendor$requests$packages$chardet$charsetprober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$charsetprober)->md_dict;
    frame_module->f_lineno = 29;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_constants_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_constants );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_constants, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$charsetprober)->md_dict;
    frame_module->f_lineno = 30;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6 );
    tmp_assign_source_7 = const_tuple_empty;
    assert( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_7 );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = PyDict_New();
    assert( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict == NULL );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict = tmp_assign_source_8;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict;

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
    tmp_dict_name_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
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
    tmp_subscribed_name_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases;

    tmp_assign_source_9 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 33;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass == NULL );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass = tmp_assign_source_9;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
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
    tmp_source_name_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_CharSetProber;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 33;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_10 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared == NULL );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared = tmp_assign_source_10;

    tmp_assign_source_11 = impl_class_1_CharSetProber_of_pip$_vendor$requests$packages$chardet$charsetprober( NULL, tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases, tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict, tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass, tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_11 );
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

    Py_XDECREF( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared = NULL;

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
    Py_XDECREF( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared );
    tmp_pip$_vendor$requests$packages$chardet$charsetprober_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$chardet$charsetprober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
