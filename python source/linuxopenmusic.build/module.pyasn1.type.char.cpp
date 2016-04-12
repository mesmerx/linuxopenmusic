// Generated code for Python source for module 'pyasn1.type.char'
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

// The _module_pyasn1$type$char is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pyasn1$type$char;
PyDictObject *moduledict_pyasn1$type$char;

// The module constants used
static PyObject *const_str_plain_ISO646String;
static PyObject *const_str_digest_83ae06115b86af4ffcf2d075dbeabc4b;
extern PyObject *const_int_pos_12;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___package__;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_VideotexString;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_char;
extern PyObject *const_int_pos_22;
extern PyObject *const_int_pos_26;
extern PyObject *const_str_plain_tagImplicitly;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_univ_str_plain_tag_tuple;
extern PyObject *const_str_plain_univ;
extern PyObject *const_str_plain_NumericString;
extern PyObject *const_str_plain_tagSet;
extern PyObject *const_str_plain_UniversalString;
extern PyObject *const_str_plain_GraphicString;
extern PyObject *const_str_plain_tagFormatSimple;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_BMPString;
static PyObject *const_str_plain_T61String;
extern PyObject *const_str_digest_fe2123f8a6a4c2d83daf45621dede669;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_21;
extern PyObject *const_int_pos_18;
extern PyObject *const_str_digest_b737658f4b2da5ff2ae42c0fba5b6033;
static PyObject *const_int_pos_19;
extern PyObject *const_str_plain_GeneralString;
extern PyObject *const_str_plain_PrintableString;
extern PyObject *const_str_plain_VisibleString;
extern PyObject *const_int_pos_28;
extern PyObject *const_int_pos_25;
extern PyObject *const_int_pos_27;
extern PyObject *const_str_plain_Tag;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_IA5String;
extern PyObject *const_str_plain_OctetString;
extern PyObject *const_str_plain_TeletexString;
extern PyObject *const_str_plain_UTF8String;
extern PyObject *const_str_plain_tagClassUniversal;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_ISO646String = UNSTREAM_STRING( &constant_bin[ 610632 ], 12, 1 );
    const_str_digest_83ae06115b86af4ffcf2d075dbeabc4b = UNSTREAM_STRING( &constant_bin[ 610644 ], 52, 0 );
    const_tuple_str_plain_univ_str_plain_tag_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_univ_str_plain_tag_tuple, 0, const_str_plain_univ ); Py_INCREF( const_str_plain_univ );
    PyTuple_SET_ITEM( const_tuple_str_plain_univ_str_plain_tag_tuple, 1, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    const_str_plain_T61String = UNSTREAM_STRING( &constant_bin[ 610696 ], 9, 1 );
    const_int_pos_19 = PyLong_FromUnsignedLong( 19ul );
    const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7 = UNSTREAM_STRING( &constant_bin[ 610705 ], 16, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$type$char( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a213baa4373fe329ea2563fa35b9cb8c;
static PyCodeObject *codeobj_42a04953dafbbb8a98fa1bd0ac698300;
static PyCodeObject *codeobj_1452f60cee38879323bd768ba072fbea;
static PyCodeObject *codeobj_63b1b5ef4047b316ab6bbbd497be22f4;
static PyCodeObject *codeobj_ef3e5e2e6121ca811d04d5f893e223d1;
static PyCodeObject *codeobj_bfa6aeca41de047efdca3758478928b1;
static PyCodeObject *codeobj_10e612d1795820464253c81d921d06a3;
static PyCodeObject *codeobj_1a2831f7f133ad10541ca412967200cd;
static PyCodeObject *codeobj_9e718be5c2382347dac73a8e2f03fdc5;
static PyCodeObject *codeobj_1b304cf0f4517087cbb0e1e74ee5a4a8;
static PyCodeObject *codeobj_f3d55596a9a981178d6ca320048b96c0;
static PyCodeObject *codeobj_04c3bd4945646b32f686bc0b352c269f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_83ae06115b86af4ffcf2d075dbeabc4b;
    codeobj_a213baa4373fe329ea2563fa35b9cb8c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BMPString, 54, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_42a04953dafbbb8a98fa1bd0ac698300 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GeneralString, 43, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1452f60cee38879323bd768ba072fbea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GraphicString, 31, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_63b1b5ef4047b316ab6bbbd497be22f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_IA5String, 26, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ef3e5e2e6121ca811d04d5f893e223d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_NumericString, 4, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_bfa6aeca41de047efdca3758478928b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PrintableString, 9, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_10e612d1795820464253c81d921d06a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TeletexString, 14, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1a2831f7f133ad10541ca412967200cd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UTF8String, 60, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9e718be5c2382347dac73a8e2f03fdc5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UniversalString, 48, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1b304cf0f4517087cbb0e1e74ee5a4a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_VideotexString, 21, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f3d55596a9a981178d6ca320048b96c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_VisibleString, 36, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_04c3bd4945646b32f686bc0b352c269f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_char, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NumericString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_1__bases, PyObject *&closure_pyasn1$type$char_class_creation_1__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_1__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_1__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_PrintableString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_2__bases, PyObject *&closure_pyasn1$type$char_class_creation_2__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_2__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_2__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_TeletexString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_3__bases, PyObject *&closure_pyasn1$type$char_class_creation_3__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_3__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_3__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_T61String_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_4__bases, PyObject *&closure_pyasn1$type$char_class_creation_4__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_4__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_4__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_VideotexString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_5__bases, PyObject *&closure_pyasn1$type$char_class_creation_5__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_5__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_5__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_IA5String_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_6__bases, PyObject *&closure_pyasn1$type$char_class_creation_6__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_6__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_6__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_GraphicString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_7__bases, PyObject *&closure_pyasn1$type$char_class_creation_7__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_7__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_7__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_VisibleString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_8__bases, PyObject *&closure_pyasn1$type$char_class_creation_8__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_8__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_8__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_ISO646String_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_9__bases, PyObject *&closure_pyasn1$type$char_class_creation_9__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_9__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_9__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_GeneralString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_10__bases, PyObject *&closure_pyasn1$type$char_class_creation_10__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_10__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_10__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_11_UniversalString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_11__bases, PyObject *&closure_pyasn1$type$char_class_creation_11__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_11__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_11__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_12_BMPString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_12__bases, PyObject *&closure_pyasn1$type$char_class_creation_12__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_12__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_12__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_class_13_UTF8String_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_13__bases, PyObject *&closure_pyasn1$type$char_class_creation_13__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_13__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_13__prepared );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NumericString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_1__bases, PyObject *&closure_pyasn1$type$char_class_creation_1__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_1__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_1__prepared )
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
    PyObject *var_tagSet = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_NumericString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ef3e5e2e6121ca811d04d5f893e223d1, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 5;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 6;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 6;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 6;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_18;
    frame_function->f_lineno = 6;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 6;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 4;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;
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

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_NumericString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_1__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_1__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_1_NumericString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_NumericString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_2_PrintableString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_2__bases, PyObject *&closure_pyasn1$type$char_class_creation_2__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_2__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_2__prepared )
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
    PyObject *var_tagSet = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_2__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_PrintableString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bfa6aeca41de047efdca3758478928b1, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 10;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_19;
    frame_function->f_lineno = 11;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 11;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 9;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;
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

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_2__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_PrintableString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_2__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_2__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_2_PrintableString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_2_PrintableString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_3_TeletexString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_3__bases, PyObject *&closure_pyasn1$type$char_class_creation_3__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_3__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_3__prepared )
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
    PyObject *var_tagSet = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_3__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_TeletexString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_10e612d1795820464253c81d921d06a3, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_20;
    frame_function->f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 14;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;
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

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_3__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_TeletexString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_3__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_3__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_3_TeletexString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_3_TeletexString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_4_T61String_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_4__bases, PyObject *&closure_pyasn1$type$char_class_creation_4__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_4__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_4__prepared )
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
    tmp_set_locals = closure_pyasn1$type$char_class_creation_4__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_T61String;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = closure_pyasn1$type$char_class_creation_4__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_T61String;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_4__bases;

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
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_4__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_4_T61String_of_pyasn1$type$char );
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
    NUITKA_CANNOT_GET_HERE( class_4_T61String_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_5_VideotexString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_5__bases, PyObject *&closure_pyasn1$type$char_class_creation_5__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_5__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_5__prepared )
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
    PyObject *var_tagSet = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_5__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_VideotexString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1b304cf0f4517087cbb0e1e74ee5a4a8, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_21;
    frame_function->f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 21;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
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

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_5__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_VideotexString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_5__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_5__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_5_VideotexString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_5_VideotexString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_6_IA5String_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_6__bases, PyObject *&closure_pyasn1$type$char_class_creation_6__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_6__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_6__prepared )
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
    PyObject *var_tagSet = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_6__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_IA5String;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_63b1b5ef4047b316ab6bbbd497be22f4, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_22;
    frame_function->f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 26;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
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

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_6__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_IA5String;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_6__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_6__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_6_IA5String_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_6_IA5String_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_7_GraphicString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_7__bases, PyObject *&closure_pyasn1$type$char_class_creation_7__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_7__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_7__prepared )
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
    PyObject *var_tagSet = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_7__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_GraphicString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1452f60cee38879323bd768ba072fbea, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_25;
    frame_function->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 31;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
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

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_7__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_GraphicString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_7__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_7__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_7_GraphicString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_7_GraphicString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_8_VisibleString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_8__bases, PyObject *&closure_pyasn1$type$char_class_creation_8__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_8__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_8__prepared )
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
    PyObject *var_tagSet = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_8__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_VisibleString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f3d55596a9a981178d6ca320048b96c0, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_26;
    frame_function->f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 36;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
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

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_8__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_VisibleString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_8__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_8__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_8_VisibleString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_8_VisibleString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_9_ISO646String_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_9__bases, PyObject *&closure_pyasn1$type$char_class_creation_9__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_9__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_9__prepared )
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
    tmp_set_locals = closure_pyasn1$type$char_class_creation_9__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_ISO646String;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = closure_pyasn1$type$char_class_creation_9__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_ISO646String;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_9__bases;

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
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_9__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_9_ISO646String_of_pyasn1$type$char );
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
    NUITKA_CANNOT_GET_HERE( class_9_ISO646String_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_10_GeneralString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_10__bases, PyObject *&closure_pyasn1$type$char_class_creation_10__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_10__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_10__prepared )
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
    PyObject *var_tagSet = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_10__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_GeneralString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_42a04953dafbbb8a98fa1bd0ac698300, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_27;
    frame_function->f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 43;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
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

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_10__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_GeneralString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_10__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_10__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_10_GeneralString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_10_GeneralString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_11_UniversalString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_11__bases, PyObject *&closure_pyasn1$type$char_class_creation_11__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_11__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_11__prepared )
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
    PyObject *var_tagSet = NULL;
    PyObject *var_encoding = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_11__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_UniversalString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9e718be5c2382347dac73a8e2f03fdc5, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_28;
    frame_function->f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 48;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_encoding, var_encoding );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
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

    tmp_assign_source_4 = const_str_digest_fe2123f8a6a4c2d83daf45621dede669;
    assert( var_encoding == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_encoding = tmp_assign_source_4;

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_11__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_UniversalString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_11__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_encoding, var_encoding );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_11__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_11_UniversalString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_11_UniversalString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_12_BMPString_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_12__bases, PyObject *&closure_pyasn1$type$char_class_creation_12__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_12__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_12__prepared )
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
    PyObject *var_tagSet = NULL;
    PyObject *var_encoding = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_12__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_BMPString;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a213baa4373fe329ea2563fa35b9cb8c, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_30;
    frame_function->f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 54;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_encoding, var_encoding );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
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

    tmp_assign_source_4 = const_str_digest_b737658f4b2da5ff2ae42c0fba5b6033;
    assert( var_encoding == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_encoding = tmp_assign_source_4;

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_12__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_BMPString;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_12__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_encoding, var_encoding );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_12__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_12_BMPString_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_12_BMPString_of_pyasn1$type$char );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_13_UTF8String_of_pyasn1$type$char( PyObject **python_pars, PyObject *&closure_pyasn1$type$char_class_creation_13__bases, PyObject *&closure_pyasn1$type$char_class_creation_13__class_decl_dict, PyObject *&closure_pyasn1$type$char_class_creation_13__metaclass, PyObject *&closure_pyasn1$type$char_class_creation_13__prepared )
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
    PyObject *var_tagSet = NULL;
    PyObject *var_encoding = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pyasn1$type$char_class_creation_13__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_UTF8String;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1a2831f7f133ad10541ca412967200cd, module_pyasn1$type$char );
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
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_univ );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_source_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 61;
            goto frame_exception_exit_1;
        }

    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tagSet );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tagImplicitly );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Tag );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_5 == NULL )
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_5 == NULL ))
        {
            tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagClassUniversal );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_tag );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            goto frame_exception_exit_1;
        }

    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagFormatSimple );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_12;
    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( var_tagSet == NULL );
    var_tagSet = tmp_assign_source_3;


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


                exception_lineno = 60;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_tagSet, var_tagSet );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_encoding, var_encoding );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
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

    tmp_assign_source_4 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    assert( var_encoding == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_encoding = tmp_assign_source_4;

    tmp_called_name_3 = closure_pyasn1$type$char_class_creation_13__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_UTF8String;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pyasn1$type$char_class_creation_13__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_tagSet, var_tagSet );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_encoding, var_encoding );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pyasn1$type$char_class_creation_13__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
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
    NUITKA_CANNOT_GET_HERE( class_13_UTF8String_of_pyasn1$type$char );
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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

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

    Py_XDECREF( var_tagSet );
    var_tagSet = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_13_UTF8String_of_pyasn1$type$char );
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



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$type$char =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.type.char",   /* m_name */
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

MOD_INIT_DECL( pyasn1$type$char )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$type$char );
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

    // puts( "in initpyasn1$type$char" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$type$char = Py_InitModule4(
        "pyasn1.type.char",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pyasn1$type$char = PyModule_Create( &mdef_pyasn1$type$char );
#endif

    moduledict_pyasn1$type$char = (PyDictObject *)((PyModuleObject *)module_pyasn1$type$char)->md_dict;

    CHECK_OBJECT( module_pyasn1$type$char );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8c04c9d0c9b903616c9f3d42d26686a7, module_pyasn1$type$char );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pyasn1$type$char );

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
    PyObject *tmp_pyasn1$type$char_class_creation_1__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_1__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_1__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_2__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_2__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_2__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_3__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_3__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_3__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_4__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_4__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_4__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_5__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_5__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_5__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_6__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_6__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_6__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_7__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_7__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_7__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_8__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_8__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_8__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_9__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_9__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_9__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_10__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_10__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_10__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_11__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_11__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_11__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_12__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_12__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_12__prepared = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_13__bases = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_13__metaclass = NULL;
    PyObject *tmp_pyasn1$type$char_class_creation_13__prepared = NULL;
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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_83ae06115b86af4ffcf2d075dbeabc4b;
    UPDATE_STRING_DICT0( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_7c8c58049edd248f8b1cb370445e702c;
    UPDATE_STRING_DICT0( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_04c3bd4945646b32f686bc0b352c269f, module_pyasn1$type$char );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pyasn1$type$char)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_7c8c58049edd248f8b1cb370445e702c, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_univ_str_plain_tag_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_univ );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pyasn1$type$char)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_7c8c58049edd248f8b1cb370445e702c, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_univ_str_plain_tag_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_tag );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_tag, tmp_assign_source_6 );
    // Tried code:
    tmp_assign_source_7 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 4;
        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_OctetString );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        exception_lineno = 4;
        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    assert( tmp_pyasn1$type$char_class_creation_1__bases == NULL );
    tmp_pyasn1$type$char_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_1__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_1__class_decl_dict = tmp_assign_source_8;

    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_pyasn1$type$char_class_creation_1__class_decl_dict;

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
    tmp_dict_name_1 = tmp_pyasn1$type$char_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_pyasn1$type$char_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
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
    tmp_subscribed_name_1 = tmp_pyasn1$type$char_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_pyasn1$type$char_class_creation_1__bases;

    tmp_assign_source_9 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 4;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_pyasn1$type$char_class_creation_1__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_1__metaclass = tmp_assign_source_9;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_pyasn1$type$char_class_creation_1__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_pyasn1$type$char_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
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
    tmp_source_name_2 = tmp_pyasn1$type$char_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_NumericString;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_pyasn1$type$char_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_pyasn1$type$char_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 4;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_10 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_pyasn1$type$char_class_creation_1__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_1__prepared = tmp_assign_source_10;

    tmp_assign_source_11 = impl_class_1_NumericString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_1__bases, tmp_pyasn1$type$char_class_creation_1__class_decl_dict, tmp_pyasn1$type$char_class_creation_1__metaclass, tmp_pyasn1$type$char_class_creation_1__prepared );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_NumericString, tmp_assign_source_11 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_1__bases );
    tmp_pyasn1$type$char_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_1__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_1__metaclass );
    tmp_pyasn1$type$char_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_1__prepared );
    tmp_pyasn1$type$char_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_1__bases );
    tmp_pyasn1$type$char_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_1__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_1__metaclass );
    tmp_pyasn1$type$char_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_1__prepared );
    tmp_pyasn1$type$char_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_12 = PyTuple_New( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 9;
        goto try_except_handler_2;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OctetString );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        exception_lineno = 9;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_3 );
    assert( tmp_pyasn1$type$char_class_creation_2__bases == NULL );
    tmp_pyasn1$type$char_class_creation_2__bases = tmp_assign_source_12;

    tmp_assign_source_13 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_2__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_2__class_decl_dict = tmp_assign_source_13;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_pyasn1$type$char_class_creation_2__class_decl_dict;

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
    tmp_dict_name_2 = tmp_pyasn1$type$char_class_creation_2__class_decl_dict;

    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto try_except_handler_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_pyasn1$type$char_class_creation_2__bases;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
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
    tmp_subscribed_name_2 = tmp_pyasn1$type$char_class_creation_2__bases;

    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto try_except_handler_2;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto try_except_handler_2;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_pyasn1$type$char_class_creation_2__bases;

    tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 9;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_pyasn1$type$char_class_creation_2__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_2__metaclass = tmp_assign_source_14;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_pyasn1$type$char_class_creation_2__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_2__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto try_except_handler_2;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_pyasn1$type$char_class_creation_2__metaclass;

    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
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
    tmp_source_name_4 = tmp_pyasn1$type$char_class_creation_2__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_PrintableString;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_pyasn1$type$char_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_pyasn1$type$char_class_creation_2__class_decl_dict;

    frame_module->f_lineno = 9;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto try_except_handler_2;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_15 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_pyasn1$type$char_class_creation_2__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_2__prepared = tmp_assign_source_15;

    tmp_assign_source_16 = impl_class_2_PrintableString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_2__bases, tmp_pyasn1$type$char_class_creation_2__class_decl_dict, tmp_pyasn1$type$char_class_creation_2__metaclass, tmp_pyasn1$type$char_class_creation_2__prepared );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_PrintableString, tmp_assign_source_16 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_2__bases );
    tmp_pyasn1$type$char_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_2__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_2__metaclass );
    tmp_pyasn1$type$char_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_2__prepared );
    tmp_pyasn1$type$char_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_2__bases );
    tmp_pyasn1$type$char_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_2__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_2__metaclass );
    tmp_pyasn1$type$char_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_2__prepared );
    tmp_pyasn1$type$char_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_17 = PyTuple_New( 1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;
        goto try_except_handler_3;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_OctetString );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        exception_lineno = 14;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_5 );
    assert( tmp_pyasn1$type$char_class_creation_3__bases == NULL );
    tmp_pyasn1$type$char_class_creation_3__bases = tmp_assign_source_17;

    tmp_assign_source_18 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_3__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_3__class_decl_dict = tmp_assign_source_18;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_pyasn1$type$char_class_creation_3__class_decl_dict;

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
    tmp_dict_name_3 = tmp_pyasn1$type$char_class_creation_3__class_decl_dict;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_3;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_3 = tmp_pyasn1$type$char_class_creation_3__bases;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
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
    tmp_subscribed_name_3 = tmp_pyasn1$type$char_class_creation_3__bases;

    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_3;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_3;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_3 != NULL );
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_pyasn1$type$char_class_creation_3__bases;

    tmp_assign_source_19 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 14;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_pyasn1$type$char_class_creation_3__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_3__metaclass = tmp_assign_source_19;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_pyasn1$type$char_class_creation_3__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_3__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_3;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_pyasn1$type$char_class_creation_3__metaclass;

    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
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
    tmp_source_name_6 = tmp_pyasn1$type$char_class_creation_3__metaclass;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_3;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_TeletexString;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_pyasn1$type$char_class_creation_3__bases;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    tmp_kw_name_3 = tmp_pyasn1$type$char_class_creation_3__class_decl_dict;

    frame_module->f_lineno = 14;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_3;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_20 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_pyasn1$type$char_class_creation_3__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_3__prepared = tmp_assign_source_20;

    tmp_assign_source_21 = impl_class_3_TeletexString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_3__bases, tmp_pyasn1$type$char_class_creation_3__class_decl_dict, tmp_pyasn1$type$char_class_creation_3__metaclass, tmp_pyasn1$type$char_class_creation_3__prepared );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_TeletexString, tmp_assign_source_21 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_3__bases );
    tmp_pyasn1$type$char_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_3__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_3__metaclass );
    tmp_pyasn1$type$char_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_3__prepared );
    tmp_pyasn1$type$char_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_3__bases );
    tmp_pyasn1$type$char_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_3__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_3__metaclass );
    tmp_pyasn1$type$char_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_3__prepared );
    tmp_pyasn1$type$char_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_TeletexString );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TeletexString );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TeletexString" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_7 );
    assert( tmp_pyasn1$type$char_class_creation_4__bases == NULL );
    tmp_pyasn1$type$char_class_creation_4__bases = tmp_assign_source_22;

    tmp_assign_source_23 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_4__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_4__class_decl_dict = tmp_assign_source_23;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_pyasn1$type$char_class_creation_4__class_decl_dict;

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
    tmp_dict_name_4 = tmp_pyasn1$type$char_class_creation_4__class_decl_dict;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_4;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_4 = tmp_pyasn1$type$char_class_creation_4__bases;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
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
    tmp_subscribed_name_4 = tmp_pyasn1$type$char_class_creation_4__bases;

    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_4;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_4;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_4 != NULL );
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_pyasn1$type$char_class_creation_4__bases;

    tmp_assign_source_24 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 19;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_pyasn1$type$char_class_creation_4__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_4__metaclass = tmp_assign_source_24;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_pyasn1$type$char_class_creation_4__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_4__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_4;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_pyasn1$type$char_class_creation_4__metaclass;

    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
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
    tmp_source_name_7 = tmp_pyasn1$type$char_class_creation_4__metaclass;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_4;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_T61String;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_pyasn1$type$char_class_creation_4__bases;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_kw_name_4 = tmp_pyasn1$type$char_class_creation_4__class_decl_dict;

    frame_module->f_lineno = 19;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_4;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_25 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_pyasn1$type$char_class_creation_4__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_4__prepared = tmp_assign_source_25;

    tmp_assign_source_26 = impl_class_4_T61String_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_4__bases, tmp_pyasn1$type$char_class_creation_4__class_decl_dict, tmp_pyasn1$type$char_class_creation_4__metaclass, tmp_pyasn1$type$char_class_creation_4__prepared );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_T61String, tmp_assign_source_26 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_4__bases );
    tmp_pyasn1$type$char_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_4__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_4__metaclass );
    tmp_pyasn1$type$char_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_4__prepared );
    tmp_pyasn1$type$char_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_4__bases );
    tmp_pyasn1$type$char_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_4__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_4__metaclass );
    tmp_pyasn1$type$char_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_4__prepared );
    tmp_pyasn1$type$char_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_27 = PyTuple_New( 1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto try_except_handler_5;
    }

    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_OctetString );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        exception_lineno = 21;
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_9 );
    assert( tmp_pyasn1$type$char_class_creation_5__bases == NULL );
    tmp_pyasn1$type$char_class_creation_5__bases = tmp_assign_source_27;

    tmp_assign_source_28 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_5__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_5__class_decl_dict = tmp_assign_source_28;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_pyasn1$type$char_class_creation_5__class_decl_dict;

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
    tmp_dict_name_5 = tmp_pyasn1$type$char_class_creation_5__class_decl_dict;

    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_5 = tmp_pyasn1$type$char_class_creation_5__bases;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
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
    tmp_subscribed_name_5 = tmp_pyasn1$type$char_class_creation_5__bases;

    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_5 != NULL );
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_pyasn1$type$char_class_creation_5__bases;

    tmp_assign_source_29 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_5 );

        exception_lineno = 21;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_5 );
    assert( tmp_pyasn1$type$char_class_creation_5__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_5__metaclass = tmp_assign_source_29;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_pyasn1$type$char_class_creation_5__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_5__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_pyasn1$type$char_class_creation_5__metaclass;

    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
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
    tmp_source_name_9 = tmp_pyasn1$type$char_class_creation_5__metaclass;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain_VideotexString;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_pyasn1$type$char_class_creation_5__bases;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    tmp_kw_name_5 = tmp_pyasn1$type$char_class_creation_5__class_decl_dict;

    frame_module->f_lineno = 21;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_30 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_pyasn1$type$char_class_creation_5__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_5__prepared = tmp_assign_source_30;

    tmp_assign_source_31 = impl_class_5_VideotexString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_5__bases, tmp_pyasn1$type$char_class_creation_5__class_decl_dict, tmp_pyasn1$type$char_class_creation_5__metaclass, tmp_pyasn1$type$char_class_creation_5__prepared );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_VideotexString, tmp_assign_source_31 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_5__bases );
    tmp_pyasn1$type$char_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_5__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_5__metaclass );
    tmp_pyasn1$type$char_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_5__prepared );
    tmp_pyasn1$type$char_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_5__bases );
    tmp_pyasn1$type$char_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_5__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_5__metaclass );
    tmp_pyasn1$type$char_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_5__prepared );
    tmp_pyasn1$type$char_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_32 = PyTuple_New( 1 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto try_except_handler_6;
    }

    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_OctetString );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 26;
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_11 );
    assert( tmp_pyasn1$type$char_class_creation_6__bases == NULL );
    tmp_pyasn1$type$char_class_creation_6__bases = tmp_assign_source_32;

    tmp_assign_source_33 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_6__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_6__class_decl_dict = tmp_assign_source_33;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_pyasn1$type$char_class_creation_6__class_decl_dict;

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
    tmp_dict_name_6 = tmp_pyasn1$type$char_class_creation_6__class_decl_dict;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_6 = tmp_pyasn1$type$char_class_creation_6__bases;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
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
    tmp_subscribed_name_6 = tmp_pyasn1$type$char_class_creation_6__bases;

    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_6 != NULL );
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_pyasn1$type$char_class_creation_6__bases;

    tmp_assign_source_34 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_6 );

        exception_lineno = 26;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_metaclass_name_6 );
    assert( tmp_pyasn1$type$char_class_creation_6__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_6__metaclass = tmp_assign_source_34;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_pyasn1$type$char_class_creation_6__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_6__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_pyasn1$type$char_class_creation_6__metaclass;

    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
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
    tmp_source_name_11 = tmp_pyasn1$type$char_class_creation_6__metaclass;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    tmp_args_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_12 = const_str_plain_IA5String;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_pyasn1$type$char_class_creation_6__bases;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_kw_name_6 = tmp_pyasn1$type$char_class_creation_6__class_decl_dict;

    frame_module->f_lineno = 26;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_35 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_pyasn1$type$char_class_creation_6__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_6__prepared = tmp_assign_source_35;

    tmp_assign_source_36 = impl_class_6_IA5String_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_6__bases, tmp_pyasn1$type$char_class_creation_6__class_decl_dict, tmp_pyasn1$type$char_class_creation_6__metaclass, tmp_pyasn1$type$char_class_creation_6__prepared );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_IA5String, tmp_assign_source_36 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_6__bases );
    tmp_pyasn1$type$char_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_6__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_6__metaclass );
    tmp_pyasn1$type$char_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_6__prepared );
    tmp_pyasn1$type$char_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_6__bases );
    tmp_pyasn1$type$char_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_6__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_6__metaclass );
    tmp_pyasn1$type$char_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_6__prepared );
    tmp_pyasn1$type$char_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_37 = PyTuple_New( 1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto try_except_handler_7;
    }

    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_OctetString );
    if ( tmp_tuple_element_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        exception_lineno = 31;
        goto try_except_handler_7;
    }
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_13 );
    assert( tmp_pyasn1$type$char_class_creation_7__bases == NULL );
    tmp_pyasn1$type$char_class_creation_7__bases = tmp_assign_source_37;

    tmp_assign_source_38 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_7__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_7__class_decl_dict = tmp_assign_source_38;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_pyasn1$type$char_class_creation_7__class_decl_dict;

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
    tmp_dict_name_7 = tmp_pyasn1$type$char_class_creation_7__class_decl_dict;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_7;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_7 = tmp_pyasn1$type$char_class_creation_7__bases;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
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
    tmp_subscribed_name_7 = tmp_pyasn1$type$char_class_creation_7__bases;

    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_7;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_7;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_metaclass_name_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_7 != NULL );
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_bases_name_7 = tmp_pyasn1$type$char_class_creation_7__bases;

    tmp_assign_source_39 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_7 );

        exception_lineno = 31;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_metaclass_name_7 );
    assert( tmp_pyasn1$type$char_class_creation_7__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_7__metaclass = tmp_assign_source_39;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_pyasn1$type$char_class_creation_7__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_7__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_7;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_pyasn1$type$char_class_creation_7__metaclass;

    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
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
    tmp_source_name_13 = tmp_pyasn1$type$char_class_creation_7__metaclass;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_7;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain_GraphicString;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_pyasn1$type$char_class_creation_7__bases;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    tmp_kw_name_7 = tmp_pyasn1$type$char_class_creation_7__class_decl_dict;

    frame_module->f_lineno = 31;
    tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_7;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_40 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_pyasn1$type$char_class_creation_7__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_7__prepared = tmp_assign_source_40;

    tmp_assign_source_41 = impl_class_7_GraphicString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_7__bases, tmp_pyasn1$type$char_class_creation_7__class_decl_dict, tmp_pyasn1$type$char_class_creation_7__metaclass, tmp_pyasn1$type$char_class_creation_7__prepared );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_GraphicString, tmp_assign_source_41 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_7__bases );
    tmp_pyasn1$type$char_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_7__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_7__metaclass );
    tmp_pyasn1$type$char_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_7__prepared );
    tmp_pyasn1$type$char_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_7__bases );
    tmp_pyasn1$type$char_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_7__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_7__metaclass );
    tmp_pyasn1$type$char_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_7__prepared );
    tmp_pyasn1$type$char_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_assign_source_42 = PyTuple_New( 1 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        goto try_except_handler_8;
    }

    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_OctetString );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_42 );

        exception_lineno = 36;
        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_assign_source_42, 0, tmp_tuple_element_15 );
    assert( tmp_pyasn1$type$char_class_creation_8__bases == NULL );
    tmp_pyasn1$type$char_class_creation_8__bases = tmp_assign_source_42;

    tmp_assign_source_43 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_8__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_8__class_decl_dict = tmp_assign_source_43;

    tmp_compare_left_15 = const_str_plain_metaclass;
    tmp_compare_right_15 = tmp_pyasn1$type$char_class_creation_8__class_decl_dict;

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
    tmp_dict_name_8 = tmp_pyasn1$type$char_class_creation_8__class_decl_dict;

    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_8;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_8 = tmp_pyasn1$type$char_class_creation_8__bases;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
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
    tmp_subscribed_name_8 = tmp_pyasn1$type$char_class_creation_8__bases;

    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_8;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_8;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_metaclass_name_8 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_8 != NULL );
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_bases_name_8 = tmp_pyasn1$type$char_class_creation_8__bases;

    tmp_assign_source_44 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_8 );

        exception_lineno = 36;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_metaclass_name_8 );
    assert( tmp_pyasn1$type$char_class_creation_8__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_8__metaclass = tmp_assign_source_44;

    tmp_compare_left_16 = const_str_plain_metaclass;
    tmp_compare_right_16 = tmp_pyasn1$type$char_class_creation_8__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_8__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_8;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_pyasn1$type$char_class_creation_8__metaclass;

    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
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
    tmp_source_name_15 = tmp_pyasn1$type$char_class_creation_8__metaclass;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_8;
    }
    tmp_args_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_VisibleString;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_pyasn1$type$char_class_creation_8__bases;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
    tmp_kw_name_8 = tmp_pyasn1$type$char_class_creation_8__class_decl_dict;

    frame_module->f_lineno = 36;
    tmp_assign_source_45 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_8;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_45 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_pyasn1$type$char_class_creation_8__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_8__prepared = tmp_assign_source_45;

    tmp_assign_source_46 = impl_class_8_VisibleString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_8__bases, tmp_pyasn1$type$char_class_creation_8__class_decl_dict, tmp_pyasn1$type$char_class_creation_8__metaclass, tmp_pyasn1$type$char_class_creation_8__prepared );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_VisibleString, tmp_assign_source_46 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_8__bases );
    tmp_pyasn1$type$char_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_8__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_8__metaclass );
    tmp_pyasn1$type$char_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_8__prepared );
    tmp_pyasn1$type$char_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_8__bases );
    tmp_pyasn1$type$char_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_8__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_8__metaclass );
    tmp_pyasn1$type$char_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_8__prepared );
    tmp_pyasn1$type$char_class_creation_8__prepared = NULL;

    // Tried code:
    tmp_assign_source_47 = PyTuple_New( 1 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_VisibleString );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VisibleString );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VisibleString" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_17 );
    assert( tmp_pyasn1$type$char_class_creation_9__bases == NULL );
    tmp_pyasn1$type$char_class_creation_9__bases = tmp_assign_source_47;

    tmp_assign_source_48 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_9__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_9__class_decl_dict = tmp_assign_source_48;

    tmp_compare_left_17 = const_str_plain_metaclass;
    tmp_compare_right_17 = tmp_pyasn1$type$char_class_creation_9__class_decl_dict;

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
    tmp_dict_name_9 = tmp_pyasn1$type$char_class_creation_9__class_decl_dict;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_9;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_cond_value_9 = tmp_pyasn1$type$char_class_creation_9__bases;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
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
    tmp_subscribed_name_9 = tmp_pyasn1$type$char_class_creation_9__bases;

    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_9;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_9;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_metaclass_name_9 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_9 != NULL );
    Py_INCREF( tmp_metaclass_name_9 );
    condexpr_end_26:;
    condexpr_end_25:;
    tmp_bases_name_9 = tmp_pyasn1$type$char_class_creation_9__bases;

    tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_9 );

        exception_lineno = 41;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_metaclass_name_9 );
    assert( tmp_pyasn1$type$char_class_creation_9__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_9__metaclass = tmp_assign_source_49;

    tmp_compare_left_18 = const_str_plain_metaclass;
    tmp_compare_right_18 = tmp_pyasn1$type$char_class_creation_9__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_9__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_9;
    }
    branch_no_9:;
    tmp_hasattr_source_9 = tmp_pyasn1$type$char_class_creation_9__metaclass;

    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
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
    tmp_source_name_16 = tmp_pyasn1$type$char_class_creation_9__metaclass;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_9;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_18 = const_str_plain_ISO646String;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = tmp_pyasn1$type$char_class_creation_9__bases;

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_18 );
    tmp_kw_name_9 = tmp_pyasn1$type$char_class_creation_9__class_decl_dict;

    frame_module->f_lineno = 41;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_9;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_50 = PyDict_New();
    condexpr_end_27:;
    assert( tmp_pyasn1$type$char_class_creation_9__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_9__prepared = tmp_assign_source_50;

    tmp_assign_source_51 = impl_class_9_ISO646String_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_9__bases, tmp_pyasn1$type$char_class_creation_9__class_decl_dict, tmp_pyasn1$type$char_class_creation_9__metaclass, tmp_pyasn1$type$char_class_creation_9__prepared );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_ISO646String, tmp_assign_source_51 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_9__bases );
    tmp_pyasn1$type$char_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_9__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_9__metaclass );
    tmp_pyasn1$type$char_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_9__prepared );
    tmp_pyasn1$type$char_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_9__bases );
    tmp_pyasn1$type$char_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_9__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_9__metaclass );
    tmp_pyasn1$type$char_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_9__prepared );
    tmp_pyasn1$type$char_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_assign_source_52 = PyTuple_New( 1 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        goto try_except_handler_10;
    }

    tmp_tuple_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_OctetString );
    if ( tmp_tuple_element_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );

        exception_lineno = 43;
        goto try_except_handler_10;
    }
    PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_19 );
    assert( tmp_pyasn1$type$char_class_creation_10__bases == NULL );
    tmp_pyasn1$type$char_class_creation_10__bases = tmp_assign_source_52;

    tmp_assign_source_53 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_10__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_10__class_decl_dict = tmp_assign_source_53;

    tmp_compare_left_19 = const_str_plain_metaclass;
    tmp_compare_right_19 = tmp_pyasn1$type$char_class_creation_10__class_decl_dict;

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
    tmp_dict_name_10 = tmp_pyasn1$type$char_class_creation_10__class_decl_dict;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_10;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_cond_value_10 = tmp_pyasn1$type$char_class_creation_10__bases;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
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
    tmp_subscribed_name_10 = tmp_pyasn1$type$char_class_creation_10__bases;

    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_10;
    }
    tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_10;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_metaclass_name_10 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_10 != NULL );
    Py_INCREF( tmp_metaclass_name_10 );
    condexpr_end_29:;
    condexpr_end_28:;
    tmp_bases_name_10 = tmp_pyasn1$type$char_class_creation_10__bases;

    tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_10 );

        exception_lineno = 43;
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_metaclass_name_10 );
    assert( tmp_pyasn1$type$char_class_creation_10__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_10__metaclass = tmp_assign_source_54;

    tmp_compare_left_20 = const_str_plain_metaclass;
    tmp_compare_right_20 = tmp_pyasn1$type$char_class_creation_10__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_10__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_10;
    }
    branch_no_10:;
    tmp_hasattr_source_10 = tmp_pyasn1$type$char_class_creation_10__metaclass;

    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
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
    tmp_source_name_18 = tmp_pyasn1$type$char_class_creation_10__metaclass;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_10;
    }
    tmp_args_name_10 = PyTuple_New( 2 );
    tmp_tuple_element_20 = const_str_plain_GeneralString;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_pyasn1$type$char_class_creation_10__bases;

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_20 );
    tmp_kw_name_10 = tmp_pyasn1$type$char_class_creation_10__class_decl_dict;

    frame_module->f_lineno = 43;
    tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_10;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_assign_source_55 = PyDict_New();
    condexpr_end_30:;
    assert( tmp_pyasn1$type$char_class_creation_10__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_10__prepared = tmp_assign_source_55;

    tmp_assign_source_56 = impl_class_10_GeneralString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_10__bases, tmp_pyasn1$type$char_class_creation_10__class_decl_dict, tmp_pyasn1$type$char_class_creation_10__metaclass, tmp_pyasn1$type$char_class_creation_10__prepared );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_GeneralString, tmp_assign_source_56 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_10__bases );
    tmp_pyasn1$type$char_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_10__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_10__metaclass );
    tmp_pyasn1$type$char_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_10__prepared );
    tmp_pyasn1$type$char_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_10__bases );
    tmp_pyasn1$type$char_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_10__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_10__metaclass );
    tmp_pyasn1$type$char_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_10__prepared );
    tmp_pyasn1$type$char_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_assign_source_57 = PyTuple_New( 1 );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_57 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto try_except_handler_11;
    }

    tmp_tuple_element_21 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_OctetString );
    if ( tmp_tuple_element_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_57 );

        exception_lineno = 48;
        goto try_except_handler_11;
    }
    PyTuple_SET_ITEM( tmp_assign_source_57, 0, tmp_tuple_element_21 );
    assert( tmp_pyasn1$type$char_class_creation_11__bases == NULL );
    tmp_pyasn1$type$char_class_creation_11__bases = tmp_assign_source_57;

    tmp_assign_source_58 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_11__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_11__class_decl_dict = tmp_assign_source_58;

    tmp_compare_left_21 = const_str_plain_metaclass;
    tmp_compare_right_21 = tmp_pyasn1$type$char_class_creation_11__class_decl_dict;

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
    tmp_dict_name_11 = tmp_pyasn1$type$char_class_creation_11__class_decl_dict;

    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_11;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_cond_value_11 = tmp_pyasn1$type$char_class_creation_11__bases;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
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
    tmp_subscribed_name_11 = tmp_pyasn1$type$char_class_creation_11__bases;

    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_11;
    }
    tmp_metaclass_name_11 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_11;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_metaclass_name_11 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_11 != NULL );
    Py_INCREF( tmp_metaclass_name_11 );
    condexpr_end_32:;
    condexpr_end_31:;
    tmp_bases_name_11 = tmp_pyasn1$type$char_class_creation_11__bases;

    tmp_assign_source_59 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_11 );

        exception_lineno = 48;
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_metaclass_name_11 );
    assert( tmp_pyasn1$type$char_class_creation_11__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_11__metaclass = tmp_assign_source_59;

    tmp_compare_left_22 = const_str_plain_metaclass;
    tmp_compare_right_22 = tmp_pyasn1$type$char_class_creation_11__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_11__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_11;
    }
    branch_no_11:;
    tmp_hasattr_source_11 = tmp_pyasn1$type$char_class_creation_11__metaclass;

    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
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
    tmp_source_name_20 = tmp_pyasn1$type$char_class_creation_11__metaclass;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_11;
    }
    tmp_args_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_22 = const_str_plain_UniversalString;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_pyasn1$type$char_class_creation_11__bases;

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_22 );
    tmp_kw_name_11 = tmp_pyasn1$type$char_class_creation_11__class_decl_dict;

    frame_module->f_lineno = 48;
    tmp_assign_source_60 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_11;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_assign_source_60 = PyDict_New();
    condexpr_end_33:;
    assert( tmp_pyasn1$type$char_class_creation_11__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_11__prepared = tmp_assign_source_60;

    tmp_assign_source_61 = impl_class_11_UniversalString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_11__bases, tmp_pyasn1$type$char_class_creation_11__class_decl_dict, tmp_pyasn1$type$char_class_creation_11__metaclass, tmp_pyasn1$type$char_class_creation_11__prepared );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_UniversalString, tmp_assign_source_61 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_11__bases );
    tmp_pyasn1$type$char_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_11__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_11__metaclass );
    tmp_pyasn1$type$char_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_11__prepared );
    tmp_pyasn1$type$char_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_11__bases );
    tmp_pyasn1$type$char_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_11__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_11__metaclass );
    tmp_pyasn1$type$char_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_11__prepared );
    tmp_pyasn1$type$char_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_assign_source_62 = PyTuple_New( 1 );
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_62 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        goto try_except_handler_12;
    }

    tmp_tuple_element_23 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_OctetString );
    if ( tmp_tuple_element_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_62 );

        exception_lineno = 54;
        goto try_except_handler_12;
    }
    PyTuple_SET_ITEM( tmp_assign_source_62, 0, tmp_tuple_element_23 );
    assert( tmp_pyasn1$type$char_class_creation_12__bases == NULL );
    tmp_pyasn1$type$char_class_creation_12__bases = tmp_assign_source_62;

    tmp_assign_source_63 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_12__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_12__class_decl_dict = tmp_assign_source_63;

    tmp_compare_left_23 = const_str_plain_metaclass;
    tmp_compare_right_23 = tmp_pyasn1$type$char_class_creation_12__class_decl_dict;

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
    tmp_dict_name_12 = tmp_pyasn1$type$char_class_creation_12__class_decl_dict;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_12;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_cond_value_12 = tmp_pyasn1$type$char_class_creation_12__bases;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
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
    tmp_subscribed_name_12 = tmp_pyasn1$type$char_class_creation_12__bases;

    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_12;
    }
    tmp_metaclass_name_12 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_12;
    }
    goto condexpr_end_35;
    condexpr_false_35:;
    tmp_metaclass_name_12 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_12 != NULL );
    Py_INCREF( tmp_metaclass_name_12 );
    condexpr_end_35:;
    condexpr_end_34:;
    tmp_bases_name_12 = tmp_pyasn1$type$char_class_creation_12__bases;

    tmp_assign_source_64 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_12 );

        exception_lineno = 54;
        goto try_except_handler_12;
    }
    Py_DECREF( tmp_metaclass_name_12 );
    assert( tmp_pyasn1$type$char_class_creation_12__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_12__metaclass = tmp_assign_source_64;

    tmp_compare_left_24 = const_str_plain_metaclass;
    tmp_compare_right_24 = tmp_pyasn1$type$char_class_creation_12__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_12__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_12;
    }
    branch_no_12:;
    tmp_hasattr_source_12 = tmp_pyasn1$type$char_class_creation_12__metaclass;

    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
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
    tmp_source_name_22 = tmp_pyasn1$type$char_class_creation_12__metaclass;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_12;
    }
    tmp_args_name_12 = PyTuple_New( 2 );
    tmp_tuple_element_24 = const_str_plain_BMPString;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = tmp_pyasn1$type$char_class_creation_12__bases;

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_24 );
    tmp_kw_name_12 = tmp_pyasn1$type$char_class_creation_12__class_decl_dict;

    frame_module->f_lineno = 54;
    tmp_assign_source_65 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_12;
    }
    goto condexpr_end_36;
    condexpr_false_36:;
    tmp_assign_source_65 = PyDict_New();
    condexpr_end_36:;
    assert( tmp_pyasn1$type$char_class_creation_12__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_12__prepared = tmp_assign_source_65;

    tmp_assign_source_66 = impl_class_12_BMPString_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_12__bases, tmp_pyasn1$type$char_class_creation_12__class_decl_dict, tmp_pyasn1$type$char_class_creation_12__metaclass, tmp_pyasn1$type$char_class_creation_12__prepared );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_BMPString, tmp_assign_source_66 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_12__bases );
    tmp_pyasn1$type$char_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_12__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_12__metaclass );
    tmp_pyasn1$type$char_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_12__prepared );
    tmp_pyasn1$type$char_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_12__bases );
    tmp_pyasn1$type$char_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_12__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_12__metaclass );
    tmp_pyasn1$type$char_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_12__prepared );
    tmp_pyasn1$type$char_class_creation_12__prepared = NULL;

    // Tried code:
    tmp_assign_source_67 = PyTuple_New( 1 );
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_univ );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_67 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto try_except_handler_13;
    }

    tmp_tuple_element_25 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_OctetString );
    if ( tmp_tuple_element_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_67 );

        exception_lineno = 60;
        goto try_except_handler_13;
    }
    PyTuple_SET_ITEM( tmp_assign_source_67, 0, tmp_tuple_element_25 );
    assert( tmp_pyasn1$type$char_class_creation_13__bases == NULL );
    tmp_pyasn1$type$char_class_creation_13__bases = tmp_assign_source_67;

    tmp_assign_source_68 = PyDict_New();
    assert( tmp_pyasn1$type$char_class_creation_13__class_decl_dict == NULL );
    tmp_pyasn1$type$char_class_creation_13__class_decl_dict = tmp_assign_source_68;

    tmp_compare_left_25 = const_str_plain_metaclass;
    tmp_compare_right_25 = tmp_pyasn1$type$char_class_creation_13__class_decl_dict;

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
    tmp_dict_name_13 = tmp_pyasn1$type$char_class_creation_13__class_decl_dict;

    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_13;
    }
    goto condexpr_end_37;
    condexpr_false_37:;
    tmp_cond_value_13 = tmp_pyasn1$type$char_class_creation_13__bases;

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
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
    tmp_subscribed_name_13 = tmp_pyasn1$type$char_class_creation_13__bases;

    tmp_subscript_name_13 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_13;
    }
    tmp_metaclass_name_13 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_13;
    }
    goto condexpr_end_38;
    condexpr_false_38:;
    tmp_metaclass_name_13 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_13 != NULL );
    Py_INCREF( tmp_metaclass_name_13 );
    condexpr_end_38:;
    condexpr_end_37:;
    tmp_bases_name_13 = tmp_pyasn1$type$char_class_creation_13__bases;

    tmp_assign_source_69 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_13 );

        exception_lineno = 60;
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_metaclass_name_13 );
    assert( tmp_pyasn1$type$char_class_creation_13__metaclass == NULL );
    tmp_pyasn1$type$char_class_creation_13__metaclass = tmp_assign_source_69;

    tmp_compare_left_26 = const_str_plain_metaclass;
    tmp_compare_right_26 = tmp_pyasn1$type$char_class_creation_13__class_decl_dict;

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
    tmp_dictdel_dict = tmp_pyasn1$type$char_class_creation_13__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_13;
    }
    branch_no_13:;
    tmp_hasattr_source_13 = tmp_pyasn1$type$char_class_creation_13__metaclass;

    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
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
    tmp_source_name_24 = tmp_pyasn1$type$char_class_creation_13__metaclass;

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_13;
    }
    tmp_args_name_13 = PyTuple_New( 2 );
    tmp_tuple_element_26 = const_str_plain_UTF8String;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = tmp_pyasn1$type$char_class_creation_13__bases;

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_26 );
    tmp_kw_name_13 = tmp_pyasn1$type$char_class_creation_13__class_decl_dict;

    frame_module->f_lineno = 60;
    tmp_assign_source_70 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_13;
    }
    goto condexpr_end_39;
    condexpr_false_39:;
    tmp_assign_source_70 = PyDict_New();
    condexpr_end_39:;
    assert( tmp_pyasn1$type$char_class_creation_13__prepared == NULL );
    tmp_pyasn1$type$char_class_creation_13__prepared = tmp_assign_source_70;

    tmp_assign_source_71 = impl_class_13_UTF8String_of_pyasn1$type$char( NULL, tmp_pyasn1$type$char_class_creation_13__bases, tmp_pyasn1$type$char_class_creation_13__class_decl_dict, tmp_pyasn1$type$char_class_creation_13__metaclass, tmp_pyasn1$type$char_class_creation_13__prepared );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$type$char, (Nuitka_StringObject *)const_str_plain_UTF8String, tmp_assign_source_71 );
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

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_13__bases );
    tmp_pyasn1$type$char_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_13__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_13__metaclass );
    tmp_pyasn1$type$char_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_13__prepared );
    tmp_pyasn1$type$char_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;

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
    Py_XDECREF( tmp_pyasn1$type$char_class_creation_13__bases );
    tmp_pyasn1$type$char_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_13__class_decl_dict );
    tmp_pyasn1$type$char_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_13__metaclass );
    tmp_pyasn1$type$char_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_pyasn1$type$char_class_creation_13__prepared );
    tmp_pyasn1$type$char_class_creation_13__prepared = NULL;


    return MOD_RETURN_VALUE( module_pyasn1$type$char );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
