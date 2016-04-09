// Generated code for Python source for module 'chardet.sbcsgroupprober'
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

// The _module_chardet$sbcsgroupprober is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_chardet$sbcsgroupprober;
PyDictObject *moduledict_chardet$sbcsgroupprober;

// The module constants used
extern PyObject *const_str_plain_hebrewProber;
extern PyObject *const_tuple_742e78c696871961622efcb8f4765e2a_tuple;
extern PyObject *const_str_plain_langcyrillicmodel;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_SingleByteCharSetProber;
extern PyObject *const_str_plain_Latin2HungarianModel;
extern PyObject *const_str_plain_Win1250HungarianModel;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_logicalHebrewProber;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_dbd26833652bd6742ecbe7d18b1d832f;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_visualHebrewProber;
extern PyObject *const_str_plain_Win1253GreekModel;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Win1255HebrewModel;
extern PyObject *const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple;
extern PyObject *const_str_plain_Win1251CyrillicModel;
extern PyObject *const_str_plain_Latin7GreekModel;
extern PyObject *const_str_plain_charsetgroupprober;
extern PyObject *const_tuple_4718770696a749132e8430c48931b9e8_tuple;
extern PyObject *const_tuple_6386231dd496d164b08621b658b5ebe6_tuple;
extern PyObject *const_tuple_str_plain_Win1255HebrewModel_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_SBCSGroupProber;
extern PyObject *const_str_plain_set_model_probers;
extern PyObject *const_tuple_str_plain_TIS620ThaiModel_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_Latin5CyrillicModel;
extern PyObject *const_str_plain_Latin5BulgarianModel;
extern PyObject *const_str_plain_langhebrewmodel;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_sbcharsetprober;
extern PyObject *const_str_plain_langbulgarianmodel;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_SingleByteCharSetProber_tuple;
extern PyObject *const_str_plain_HebrewProber;
static PyObject *const_str_digest_5be317a1d4f47b238e8360b0b93bbe50;
extern PyObject *const_str_plain_langthaimodel;
extern PyObject *const_str_plain_sbcsgroupprober;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Ibm855Model;
extern PyObject *const_str_plain_Koi8rModel;
extern PyObject *const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple;
extern PyObject *const_tuple_str_plain_CharSetGroupProber_tuple;
extern PyObject *const_str_plain_chardet;
extern PyObject *const_str_plain_MacCyrillicModel;
extern PyObject *const_str_plain_langhungarianmodel;
extern PyObject *const_str_plain_TIS620ThaiModel;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_Win1251BulgarianModel;
extern PyObject *const_tuple_str_plain_HebrewProber_tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_hebrewprober;
extern PyObject *const_str_plain_CharSetGroupProber;
extern PyObject *const_str_digest_04b198014e3155ad85f3532c3e424606;
extern PyObject *const_str_plain_Ibm866Model;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain__mProbers;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_langgreekmodel;
extern PyObject *const_str_plain_extend;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_dbd26833652bd6742ecbe7d18b1d832f = UNSTREAM_STRING( &constant_bin[ 107324 ], 59, 0 );
    const_str_digest_5be317a1d4f47b238e8360b0b93bbe50 = UNSTREAM_STRING( &constant_bin[ 107383 ], 23, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$sbcsgroupprober( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e10eafef904c84123e27b1c4d2e017ba;
static PyCodeObject *codeobj_e9c0159dd33a22288810d28e2e38dac1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_dbd26833652bd6742ecbe7d18b1d832f;
    codeobj_e10eafef904c84123e27b1c4d2e017ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 43, const_tuple_742e78c696871961622efcb8f4765e2a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9c0159dd33a22288810d28e2e38dac1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sbcsgroupprober, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober( PyObject **python_pars, PyObject *&closure_chardet$sbcsgroupprober_class_creation_1__bases, PyObject *&closure_chardet$sbcsgroupprober_class_creation_1__class_decl_dict, PyObject *&closure_chardet$sbcsgroupprober_class_creation_1__metaclass, PyObject *&closure_chardet$sbcsgroupprober_class_creation_1__prepared );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober( PyObject **python_pars, PyObject *&closure_chardet$sbcsgroupprober_class_creation_1__bases, PyObject *&closure_chardet$sbcsgroupprober_class_creation_1__class_decl_dict, PyObject *&closure_chardet$sbcsgroupprober_class_creation_1__metaclass, PyObject *&closure_chardet$sbcsgroupprober_class_creation_1__prepared )
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
    tmp_set_locals = closure_chardet$sbcsgroupprober_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_5be317a1d4f47b238e8360b0b93bbe50;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_SBCSGroupProber;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_chardet$sbcsgroupprober_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_SBCSGroupProber;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_chardet$sbcsgroupprober_class_creation_1__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_chardet$sbcsgroupprober_class_creation_1__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_1_SBCSGroupProber_of_chardet$sbcsgroupprober );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_SBCSGroupProber_of_chardet$sbcsgroupprober );
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


static PyObject *impl_function_1___init___of_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_hebrewProber = NULL;
    PyObject *var_logicalHebrewProber = NULL;
    PyObject *var_visualHebrewProber = NULL;
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
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e10eafef904c84123e27b1c4d2e017ba, module_chardet$sbcsgroupprober );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharSetGroupProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    frame_function->f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = PyList_New( 13 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Win1251CyrillicModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 0, tmp_list_element_1 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Koi8rModel );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Koi8rModel );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Koi8rModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 1, tmp_list_element_1 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Latin5CyrillicModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 2, tmp_list_element_1 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MacCyrillicModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 3, tmp_list_element_1 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm866Model );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Ibm866Model );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Ibm866Model" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 4, tmp_list_element_1 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm855Model );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Ibm855Model );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Ibm855Model" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 5, tmp_list_element_1 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Latin7GreekModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 6, tmp_list_element_1 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel );

    if (unlikely( tmp_args_element_name_9 == NULL ))
    {
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel );
    }

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Win1253GreekModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 7, tmp_list_element_1 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Latin5BulgarianModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 8, tmp_list_element_1 );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Win1251BulgarianModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 9, tmp_list_element_1 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin2HungarianModel );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin2HungarianModel );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Latin2HungarianModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 10, tmp_list_element_1 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1250HungarianModel );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1250HungarianModel );
    }

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Win1250HungarianModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 11, tmp_list_element_1 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel );

    if (unlikely( tmp_args_element_name_14 == NULL ))
    {
        tmp_args_element_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel );
    }

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TIS620ThaiModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 12, tmp_list_element_1 );
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__mProbers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_HebrewProber );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HebrewProber );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HebrewProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 60;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_15 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    assert( var_hebrewProber == NULL );
    var_hebrewProber = tmp_assign_source_1;

    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel );

    if (unlikely( tmp_args_element_name_15 == NULL ))
    {
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel );
    }

    if ( tmp_args_element_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Win1255HebrewModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = Py_False;
    tmp_args_element_name_17 = var_hebrewProber;

    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( var_logicalHebrewProber == NULL );
    var_logicalHebrewProber = tmp_assign_source_2;

    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel );

    if (unlikely( tmp_args_element_name_18 == NULL ))
    {
        tmp_args_element_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel );
    }

    if ( tmp_args_element_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Win1255HebrewModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_19 = Py_True;
    tmp_args_element_name_20 = var_hebrewProber;

    if ( tmp_args_element_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hebrewProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    assert( var_visualHebrewProber == NULL );
    var_visualHebrewProber = tmp_assign_source_3;

    tmp_source_name_2 = var_hebrewProber;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hebrewProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_model_probers );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = var_logicalHebrewProber;

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logicalHebrewProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_22 = var_visualHebrewProber;

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "visualHebrewProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__mProbers );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_23 = PyList_New( 3 );
    tmp_list_element_2 = var_hebrewProber;

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hebrewProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_23, 0, tmp_list_element_2 );
    tmp_list_element_2 = var_logicalHebrewProber;

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logicalHebrewProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_23, 1, tmp_list_element_2 );
    tmp_list_element_2 = var_visualHebrewProber;

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "visualHebrewProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_23, 2, tmp_list_element_2 );
    frame_function->f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reset );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 69;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_20 );
    Py_DECREF( tmp_called_name_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
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

            if ( var_hebrewProber )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hebrewProber,
                    var_hebrewProber
                );

                assert( res == 0 );
            }

            if ( var_logicalHebrewProber )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_logicalHebrewProber,
                    var_logicalHebrewProber
                );

                assert( res == 0 );
            }

            if ( var_visualHebrewProber )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_visualHebrewProber,
                    var_visualHebrewProber
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_hebrewProber );
    var_hebrewProber = NULL;

    Py_XDECREF( var_logicalHebrewProber );
    var_logicalHebrewProber = NULL;

    Py_XDECREF( var_visualHebrewProber );
    var_visualHebrewProber = NULL;

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

    Py_XDECREF( var_hebrewProber );
    var_hebrewProber = NULL;

    Py_XDECREF( var_logicalHebrewProber );
    var_logicalHebrewProber = NULL;

    Py_XDECREF( var_visualHebrewProber );
    var_visualHebrewProber = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober );
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



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_04b198014e3155ad85f3532c3e424606,
#endif
        codeobj_e10eafef904c84123e27b1c4d2e017ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$sbcsgroupprober,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$sbcsgroupprober =
{
    PyModuleDef_HEAD_INIT,
    "chardet.sbcsgroupprober",   /* m_name */
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

MOD_INIT_DECL( chardet$sbcsgroupprober )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$sbcsgroupprober );
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

    // puts( "in initchardet$sbcsgroupprober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$sbcsgroupprober = Py_InitModule4(
        "chardet.sbcsgroupprober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_chardet$sbcsgroupprober = PyModule_Create( &mdef_chardet$sbcsgroupprober );
#endif

    moduledict_chardet$sbcsgroupprober = (PyDictObject *)((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;

    CHECK_OBJECT( module_chardet$sbcsgroupprober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5be317a1d4f47b238e8360b0b93bbe50, module_chardet$sbcsgroupprober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_chardet$sbcsgroupprober );

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
    PyObject *tmp_chardet$sbcsgroupprober_class_creation_1__bases = NULL;
    PyObject *tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_chardet$sbcsgroupprober_class_creation_1__metaclass = NULL;
    PyObject *tmp_chardet$sbcsgroupprober_class_creation_1__prepared = NULL;
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
    PyObject *tmp_import_name_from_17;
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
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_dbd26833652bd6742ecbe7d18b1d832f;
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_chardet;
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_e9c0159dd33a22288810d28e2e38dac1, module_chardet$sbcsgroupprober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 29;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_charsetgroupprober, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_CharSetGroupProber_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CharSetGroupProber );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 30;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_sbcharsetprober, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_SingleByteCharSetProber_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SingleByteCharSetProber );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber, tmp_assign_source_6 );
    tmp_import_globals_3 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_langcyrillicmodel, tmp_import_globals_3, tmp_import_globals_3, const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Win1251CyrillicModel );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_langcyrillicmodel, tmp_import_globals_4, tmp_import_globals_4, const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Koi8rModel );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Koi8rModel, tmp_assign_source_8 );
    tmp_import_globals_5 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_langcyrillicmodel, tmp_import_globals_5, tmp_import_globals_5, const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Latin5CyrillicModel );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel, tmp_assign_source_9 );
    tmp_import_globals_6 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_langcyrillicmodel, tmp_import_globals_6, tmp_import_globals_6, const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MacCyrillicModel );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel, tmp_assign_source_10 );
    tmp_import_globals_7 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_langcyrillicmodel, tmp_import_globals_7, tmp_import_globals_7, const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Ibm866Model );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm866Model, tmp_assign_source_11 );
    tmp_import_globals_8 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_langcyrillicmodel, tmp_import_globals_8, tmp_import_globals_8, const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Ibm855Model );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm855Model, tmp_assign_source_12 );
    tmp_import_globals_9 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 34;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_langgreekmodel, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Latin7GreekModel );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel, tmp_assign_source_13 );
    tmp_import_globals_10 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 34;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_langgreekmodel, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_Win1253GreekModel );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel, tmp_assign_source_14 );
    tmp_import_globals_11 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_langbulgarianmodel, tmp_import_globals_11, tmp_import_globals_11, const_tuple_4718770696a749132e8430c48931b9e8_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_Latin5BulgarianModel );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel, tmp_assign_source_15 );
    tmp_import_globals_12 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_langbulgarianmodel, tmp_import_globals_12, tmp_import_globals_12, const_tuple_4718770696a749132e8430c48931b9e8_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_Win1251BulgarianModel );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel, tmp_assign_source_16 );
    tmp_import_globals_13 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_langhungarianmodel, tmp_import_globals_13, tmp_import_globals_13, const_tuple_6386231dd496d164b08621b658b5ebe6_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Latin2HungarianModel );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin2HungarianModel, tmp_assign_source_17 );
    tmp_import_globals_14 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_langhungarianmodel, tmp_import_globals_14, tmp_import_globals_14, const_tuple_6386231dd496d164b08621b658b5ebe6_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Win1250HungarianModel );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1250HungarianModel, tmp_assign_source_18 );
    tmp_import_globals_15 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 37;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_langthaimodel, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_TIS620ThaiModel_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_TIS620ThaiModel );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel, tmp_assign_source_19 );
    tmp_import_globals_16 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 38;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_langhebrewmodel, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_Win1255HebrewModel_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_Win1255HebrewModel );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel, tmp_assign_source_20 );
    tmp_import_globals_17 = ((PyModuleObject *)module_chardet$sbcsgroupprober)->md_dict;
    frame_module->f_lineno = 39;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain_hebrewprober, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_HebrewProber_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_HebrewProber );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_HebrewProber, tmp_assign_source_21 );
    // Tried code:
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharSetGroupProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_1 );
    assert( tmp_chardet$sbcsgroupprober_class_creation_1__bases == NULL );
    tmp_chardet$sbcsgroupprober_class_creation_1__bases = tmp_assign_source_22;

    tmp_assign_source_23 = PyDict_New();
    assert( tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict == NULL );
    tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict = tmp_assign_source_23;

    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict;

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
    tmp_dict_name_1 = tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_chardet$sbcsgroupprober_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
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
    tmp_subscribed_name_1 = tmp_chardet$sbcsgroupprober_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_chardet$sbcsgroupprober_class_creation_1__bases;

    tmp_assign_source_24 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 42;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_chardet$sbcsgroupprober_class_creation_1__metaclass == NULL );
    tmp_chardet$sbcsgroupprober_class_creation_1__metaclass = tmp_assign_source_24;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict;

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
    tmp_dictdel_dict = tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_chardet$sbcsgroupprober_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
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
    tmp_source_name_1 = tmp_chardet$sbcsgroupprober_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_SBCSGroupProber;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_chardet$sbcsgroupprober_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 42;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_25 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_chardet$sbcsgroupprober_class_creation_1__prepared == NULL );
    tmp_chardet$sbcsgroupprober_class_creation_1__prepared = tmp_assign_source_25;

    tmp_assign_source_26 = impl_class_1_SBCSGroupProber_of_chardet$sbcsgroupprober( NULL, tmp_chardet$sbcsgroupprober_class_creation_1__bases, tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict, tmp_chardet$sbcsgroupprober_class_creation_1__metaclass, tmp_chardet$sbcsgroupprober_class_creation_1__prepared );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber, tmp_assign_source_26 );
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

    Py_XDECREF( tmp_chardet$sbcsgroupprober_class_creation_1__bases );
    tmp_chardet$sbcsgroupprober_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict );
    tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_chardet$sbcsgroupprober_class_creation_1__metaclass );
    tmp_chardet$sbcsgroupprober_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_chardet$sbcsgroupprober_class_creation_1__prepared );
    tmp_chardet$sbcsgroupprober_class_creation_1__prepared = NULL;

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
    Py_XDECREF( tmp_chardet$sbcsgroupprober_class_creation_1__bases );
    tmp_chardet$sbcsgroupprober_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict );
    tmp_chardet$sbcsgroupprober_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_chardet$sbcsgroupprober_class_creation_1__metaclass );
    tmp_chardet$sbcsgroupprober_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_chardet$sbcsgroupprober_class_creation_1__prepared );
    tmp_chardet$sbcsgroupprober_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_chardet$sbcsgroupprober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
