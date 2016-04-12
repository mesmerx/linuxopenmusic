// Generated code for Python source for module 'pip._vendor.requests'
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

// The _module_pip$_vendor$requests is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests;
PyDictObject *moduledict_pip$_vendor$requests;

// The module constants used
extern PyObject *const_str_plain_status_codes;
static PyObject *const_tuple_str_plain_pyopenssl_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_dict_9d1be102e274ebd5d21e13e40f132db0;
extern PyObject *const_str_plain_Request;
extern PyObject *const_str_plain_URLRequired;
extern PyObject *const_str_plain_codes;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_NullHandler;
extern PyObject *const_str_plain___license__;
extern PyObject *const_tuple_str_plain_utils_tuple;
static PyObject *const_str_digest_45d85aebd0b3dccaf1a39222e779f98e;
static PyObject *const_list_str_digest_45d85aebd0b3dccaf1a39222e779f98e_list;
static PyObject *const_str_digest_1e2133b1f0f9a683626d4c53584b6582;
static PyObject *const_tuple_fd66aad139b6265b81892a9a0752726b_tuple;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_sessions;
static PyObject *const_tuple_str_plain_session_str_plain_Session_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_models;
static PyObject *const_str_digest_948e3457519b59d7e8da93ab13788ea6;
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_c732b0001bd9466f3f59e4e065102217;
extern PyObject *const_str_plain_put;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_addHandler;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_Handler;
static PyObject *const_int_pos_133377;
extern PyObject *const_str_plain_Session;
extern PyObject *const_str_plain_simplefilter;
extern PyObject *const_str_plain_head;
static PyObject *const_str_digest_78305c41bd7d2390dc514a5a0ea282c0;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple;
static PyObject *const_str_digest_c035f4225650cd0cc965f4c85cafb0cf;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_session;
static PyObject *const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_Response;
extern PyObject *const_tuple_str_plain_codes_tuple;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_record;
extern PyObject *const_str_digest_895053584462000f806d2a64eaddf388;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_Timeout;
static PyObject *const_str_digest_fdc414d46c8f15eea094f56b8d5a369e;
static PyObject *const_tuple_str_digest_92068ee7fa29014ac06ffc664a1b4b4e_tuple;
extern PyObject *const_str_plain_patch;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_PreparedRequest;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_str_plain_NullHandler_tuple;
extern PyObject *const_str_plain_FileModeWarning;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain_requests;
extern PyObject *const_str_plain_emit;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___build__;
extern PyObject *const_str_plain_post;
extern PyObject *const_str_plain_pyopenssl;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_inject_into_urllib3;
extern PyObject *const_str_plain_delete;
extern PyObject *const_str_plain_RequestException;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_TooManyRedirects;
extern PyObject *const_tuple_str_plain_self_str_plain_record_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_pyopenssl_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pyopenssl_tuple, 0, const_str_plain_pyopenssl ); Py_INCREF( const_str_plain_pyopenssl );
    const_str_digest_45d85aebd0b3dccaf1a39222e779f98e = UNSTREAM_STRING( &constant_bin[ 438241 ], 53, 0 );
    const_list_str_digest_45d85aebd0b3dccaf1a39222e779f98e_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_45d85aebd0b3dccaf1a39222e779f98e_list, 0, const_str_digest_45d85aebd0b3dccaf1a39222e779f98e ); Py_INCREF( const_str_digest_45d85aebd0b3dccaf1a39222e779f98e );
    const_str_digest_1e2133b1f0f9a683626d4c53584b6582 = UNSTREAM_STRING( &constant_bin[ 438294 ], 28, 0 );
    const_tuple_fd66aad139b6265b81892a9a0752726b_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, 0, const_str_plain_RequestException ); Py_INCREF( const_str_plain_RequestException );
    PyTuple_SET_ITEM( const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, 1, const_str_plain_Timeout ); Py_INCREF( const_str_plain_Timeout );
    PyTuple_SET_ITEM( const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, 2, const_str_plain_URLRequired ); Py_INCREF( const_str_plain_URLRequired );
    PyTuple_SET_ITEM( const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, 3, const_str_plain_TooManyRedirects ); Py_INCREF( const_str_plain_TooManyRedirects );
    PyTuple_SET_ITEM( const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, 4, const_str_plain_HTTPError ); Py_INCREF( const_str_plain_HTTPError );
    PyTuple_SET_ITEM( const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, 5, const_str_plain_ConnectionError ); Py_INCREF( const_str_plain_ConnectionError );
    PyTuple_SET_ITEM( const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, 6, const_str_plain_FileModeWarning ); Py_INCREF( const_str_plain_FileModeWarning );
    const_tuple_str_plain_session_str_plain_Session_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_session_str_plain_Session_tuple, 0, const_str_plain_session ); Py_INCREF( const_str_plain_session );
    PyTuple_SET_ITEM( const_tuple_str_plain_session_str_plain_Session_tuple, 1, const_str_plain_Session ); Py_INCREF( const_str_plain_Session );
    const_str_digest_948e3457519b59d7e8da93ab13788ea6 = UNSTREAM_STRING( &constant_bin[ 194974 ], 24, 0 );
    const_str_digest_c732b0001bd9466f3f59e4e065102217 = UNSTREAM_STRING( &constant_bin[ 438322 ], 10, 0 );
    const_int_pos_133377 = PyLong_FromUnsignedLong( 133377ul );
    const_str_digest_78305c41bd7d2390dc514a5a0ea282c0 = UNSTREAM_STRING( &constant_bin[ 438332 ], 5, 0 );
    const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, 0, const_str_plain_Request ); Py_INCREF( const_str_plain_Request );
    PyTuple_SET_ITEM( const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, 1, const_str_plain_Response ); Py_INCREF( const_str_plain_Response );
    PyTuple_SET_ITEM( const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, 2, const_str_plain_PreparedRequest ); Py_INCREF( const_str_plain_PreparedRequest );
    const_str_digest_c035f4225650cd0cc965f4c85cafb0cf = UNSTREAM_STRING( &constant_bin[ 438337 ], 65, 0 );
    const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887 = UNSTREAM_STRING( &constant_bin[ 438309 ], 13, 0 );
    const_str_digest_fdc414d46c8f15eea094f56b8d5a369e = UNSTREAM_STRING( &constant_bin[ 438402 ], 756, 0 );
    const_tuple_str_digest_92068ee7fa29014ac06ffc664a1b4b4e_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_92068ee7fa29014ac06ffc664a1b4b4e_tuple, 0, const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e ); Py_INCREF( const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e );
    const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 0, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 1, const_str_plain_get ); Py_INCREF( const_str_plain_get );
    PyTuple_SET_ITEM( const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 2, const_str_plain_head ); Py_INCREF( const_str_plain_head );
    PyTuple_SET_ITEM( const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 3, const_str_plain_post ); Py_INCREF( const_str_plain_post );
    PyTuple_SET_ITEM( const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 4, const_str_plain_patch ); Py_INCREF( const_str_plain_patch );
    PyTuple_SET_ITEM( const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 5, const_str_plain_put ); Py_INCREF( const_str_plain_put );
    PyTuple_SET_ITEM( const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 6, const_str_plain_delete ); Py_INCREF( const_str_plain_delete );
    PyTuple_SET_ITEM( const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 7, const_str_plain_options ); Py_INCREF( const_str_plain_options );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7a6704faea6e8061049fc9a9f8acaf88;
static PyCodeObject *codeobj_ce6c0a4805c4523c7335db372aa85ef8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c035f4225650cd0cc965f4c85cafb0cf;
    codeobj_7a6704faea6e8061049fc9a9f8acaf88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_emit, 75, const_tuple_str_plain_self_str_plain_record_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce6c0a4805c4523c7335db372aa85ef8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_requests, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NullHandler_of_pip$_vendor$requests( PyObject **python_pars, PyObject *&closure_pip$_vendor$requests_class_creation_1__bases, PyObject *&closure_pip$_vendor$requests_class_creation_1__class_decl_dict, PyObject *&closure_pip$_vendor$requests_class_creation_1__metaclass, PyObject *&closure_pip$_vendor$requests_class_creation_1__prepared );


static PyObject *MAKE_FUNCTION_function_1_emit_of_class_1_NullHandler_of_pip$_vendor$requests(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NullHandler_of_pip$_vendor$requests( PyObject **python_pars, PyObject *&closure_pip$_vendor$requests_class_creation_1__bases, PyObject *&closure_pip$_vendor$requests_class_creation_1__class_decl_dict, PyObject *&closure_pip$_vendor$requests_class_creation_1__metaclass, PyObject *&closure_pip$_vendor$requests_class_creation_1__prepared )
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
    PyObject *var_emit = NULL;
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
    tmp_set_locals = closure_pip$_vendor$requests_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_NullHandler;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1_emit_of_class_1_NullHandler_of_pip$_vendor$requests(  );
    assert( var_emit == NULL );
    var_emit = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_pip$_vendor$requests_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_NullHandler;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pip$_vendor$requests_class_creation_1__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_emit, var_emit );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pip$_vendor$requests_class_creation_1__class_decl_dict;

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
    NUITKA_CANNOT_GET_HERE( class_1_NullHandler_of_pip$_vendor$requests );
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

    Py_XDECREF( var_emit );
    var_emit = NULL;

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

    Py_XDECREF( var_emit );
    var_emit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_NullHandler_of_pip$_vendor$requests );
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


static PyObject *impl_function_1_emit_of_class_1_NullHandler_of_pip$_vendor$requests( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_record = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_emit_of_class_1_NullHandler_of_pip$_vendor$requests );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_record );
    Py_DECREF( par_record );
    par_record = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_record );
    Py_DECREF( par_record );
    par_record = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_emit_of_class_1_NullHandler_of_pip$_vendor$requests );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_function_1_emit_of_class_1_NullHandler_of_pip$_vendor$requests(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_emit_of_class_1_NullHandler_of_pip$_vendor$requests,
        const_str_plain_emit,
#if PYTHON_VERSION >= 330
        const_str_digest_895053584462000f806d2a64eaddf388,
#endif
        codeobj_7a6704faea6e8061049fc9a9f8acaf88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$requests,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests );
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

    // puts( "in initpip$_vendor$requests" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests = Py_InitModule4(
        "pip._vendor.requests",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests = PyModule_Create( &mdef_pip$_vendor$requests );
#endif

    moduledict_pip$_vendor$requests = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e, module_pip$_vendor$requests );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests );

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
    PyObject *tmp_pip$_vendor$requests_class_creation_1__bases = NULL;
    PyObject *tmp_pip$_vendor$requests_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pip$_vendor$requests_class_creation_1__metaclass = NULL;
    PyObject *tmp_pip$_vendor$requests_class_creation_1__prepared = NULL;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
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
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
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
    PyObject *tmp_import_globals_22;
    PyObject *tmp_import_globals_23;
    PyObject *tmp_import_globals_24;
    PyObject *tmp_import_globals_25;
    PyObject *tmp_import_globals_26;
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
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_metaclass_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_fdc414d46c8f15eea094f56b8d5a369e;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c035f4225650cd0cc965f4c85cafb0cf;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_45d85aebd0b3dccaf1a39222e779f98e_list );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_requests;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_78305c41bd7d2390dc514a5a0ea282c0;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_133377;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___build__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_c732b0001bd9466f3f59e4e065102217;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_digest_1e2133b1f0f9a683626d4c53584b6582;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_11 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_ce6c0a4805c4523c7335db372aa85ef8, module_pip$_vendor$requests );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 53;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_948e3457519b59d7e8da93ab13788ea6, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_pyopenssl_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto try_except_handler_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_pyopenssl );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_pyopenssl, tmp_assign_source_12 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_pyopenssl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pyopenssl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pyopenssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        goto try_except_handler_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inject_into_urllib3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 54;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
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


        exception_lineno = 55;
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
    NUITKA_CANNOT_GET_HERE( pip$_vendor$requests );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 58;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_empty, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_utils_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_13 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 59;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_models, tmp_import_globals_3, tmp_import_globals_3, const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Request );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_Request, tmp_assign_source_14 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 59;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_models, tmp_import_globals_4, tmp_import_globals_4, const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Response );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_Response, tmp_assign_source_15 );
    tmp_import_globals_5 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 59;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_models, tmp_import_globals_5, tmp_import_globals_5, const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_PreparedRequest );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_PreparedRequest, tmp_assign_source_16 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 60;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_6, tmp_import_globals_6, const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_request );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_request, tmp_assign_source_17 );
    tmp_import_globals_7 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 60;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_7, tmp_import_globals_7, const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_get );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_get, tmp_assign_source_18 );
    tmp_import_globals_8 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 60;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_8, tmp_import_globals_8, const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_head );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_head, tmp_assign_source_19 );
    tmp_import_globals_9 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 60;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_9, tmp_import_globals_9, const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_post );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_post, tmp_assign_source_20 );
    tmp_import_globals_10 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 60;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_10, tmp_import_globals_10, const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_patch );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_patch, tmp_assign_source_21 );
    tmp_import_globals_11 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 60;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_11, tmp_import_globals_11, const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_put );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_put, tmp_assign_source_22 );
    tmp_import_globals_12 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 60;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_12, tmp_import_globals_12, const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_delete );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_delete, tmp_assign_source_23 );
    tmp_import_globals_13 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 60;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_13, tmp_import_globals_13, const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_options );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_options, tmp_assign_source_24 );
    tmp_import_globals_14 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 61;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_sessions, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_session_str_plain_Session_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_session );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_session, tmp_assign_source_25 );
    tmp_import_globals_15 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 61;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_sessions, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_session_str_plain_Session_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_Session );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_Session, tmp_assign_source_26 );
    tmp_import_globals_16 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 62;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_status_codes, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_codes_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_codes );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_codes, tmp_assign_source_27 );
    tmp_import_globals_17 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 63;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_17, tmp_import_globals_17, const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_RequestException );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_RequestException, tmp_assign_source_28 );
    tmp_import_globals_18 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 63;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_18, tmp_import_globals_18, const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_Timeout );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_29 );
    tmp_import_globals_19 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 63;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_19, tmp_import_globals_19, const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_URLRequired );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_URLRequired, tmp_assign_source_30 );
    tmp_import_globals_20 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 63;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_20, tmp_import_globals_20, const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_TooManyRedirects );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_31 );
    tmp_import_globals_21 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 63;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_21, tmp_import_globals_21, const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_HTTPError );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_32 );
    tmp_import_globals_22 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 63;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_22, tmp_import_globals_22, const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_ConnectionError );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_33 );
    tmp_import_globals_23 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 63;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_plain_exceptions, tmp_import_globals_23, tmp_import_globals_23, const_tuple_fd66aad139b6265b81892a9a0752726b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_FileModeWarning );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_FileModeWarning, tmp_assign_source_34 );
    tmp_import_globals_24 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 70;
    tmp_assign_source_35 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_24, tmp_import_globals_24, Py_None, const_int_0 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_35 );
    // Tried code:
    tmp_import_globals_25 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 72;
    tmp_import_name_from_24 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_25, tmp_import_globals_25, const_tuple_str_plain_NullHandler_tuple, const_int_0 );
    if ( tmp_import_name_from_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto try_except_handler_3;
    }
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_NullHandler );
    Py_DECREF( tmp_import_name_from_24 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_36 );
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


        exception_lineno = 73;
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
    // Tried code:
    tmp_assign_source_37 = PyTuple_New( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        goto try_except_handler_5;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Handler );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        exception_lineno = 74;
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_1 );
    assert( tmp_pip$_vendor$requests_class_creation_1__bases == NULL );
    tmp_pip$_vendor$requests_class_creation_1__bases = tmp_assign_source_37;

    tmp_assign_source_38 = PyDict_New();
    assert( tmp_pip$_vendor$requests_class_creation_1__class_decl_dict == NULL );
    tmp_pip$_vendor$requests_class_creation_1__class_decl_dict = tmp_assign_source_38;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_pip$_vendor$requests_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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
    tmp_dict_name_1 = tmp_pip$_vendor$requests_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_pip$_vendor$requests_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
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
    tmp_subscribed_name_1 = tmp_pip$_vendor$requests_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_pip$_vendor$requests_class_creation_1__bases;

    tmp_assign_source_39 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 74;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_pip$_vendor$requests_class_creation_1__metaclass == NULL );
    tmp_pip$_vendor$requests_class_creation_1__metaclass = tmp_assign_source_39;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_pip$_vendor$requests_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_pip$_vendor$requests_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
    }
    branch_no_3:;
    tmp_hasattr_source_1 = tmp_pip$_vendor$requests_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
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
    tmp_source_name_3 = tmp_pip$_vendor$requests_class_creation_1__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_NullHandler;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_pip$_vendor$requests_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_pip$_vendor$requests_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 74;
    tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_40 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_pip$_vendor$requests_class_creation_1__prepared == NULL );
    tmp_pip$_vendor$requests_class_creation_1__prepared = tmp_assign_source_40;

    tmp_assign_source_41 = impl_class_1_NullHandler_of_pip$_vendor$requests( NULL, tmp_pip$_vendor$requests_class_creation_1__bases, tmp_pip$_vendor$requests_class_creation_1__class_decl_dict, tmp_pip$_vendor$requests_class_creation_1__metaclass, tmp_pip$_vendor$requests_class_creation_1__prepared );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_41 );
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

    Py_XDECREF( tmp_pip$_vendor$requests_class_creation_1__bases );
    tmp_pip$_vendor$requests_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests_class_creation_1__class_decl_dict );
    tmp_pip$_vendor$requests_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests_class_creation_1__metaclass );
    tmp_pip$_vendor$requests_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests_class_creation_1__prepared );
    tmp_pip$_vendor$requests_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_pip$_vendor$requests_class_creation_1__bases );
    tmp_pip$_vendor$requests_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests_class_creation_1__class_decl_dict );
    tmp_pip$_vendor$requests_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests_class_creation_1__metaclass );
    tmp_pip$_vendor$requests_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$_vendor$requests_class_creation_1__prepared );
    tmp_pip$_vendor$requests_class_creation_1__prepared = NULL;

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
    NUITKA_CANNOT_GET_HERE( pip$_vendor$requests );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_getLogger );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 78;
    tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_92068ee7fa29014ac06ffc664a1b4b4e_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_addHandler );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_NullHandler );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NullHandler );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NullHandler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 78;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_26 = ((PyModuleObject *)module_pip$_vendor$requests)->md_dict;
    frame_module->f_lineno = 80;
    tmp_assign_source_42 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_26, tmp_import_globals_26, Py_None, const_int_0 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_42 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_warnings );

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

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_simplefilter );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_default;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests, (Nuitka_StringObject *)const_str_plain_FileModeWarning );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FileModeWarning );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FileModeWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_module->f_lineno = 83;
    tmp_unused = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

    return MOD_RETURN_VALUE( module_pip$_vendor$requests );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
