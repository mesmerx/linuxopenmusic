// Generated code for Python source for module 'pip._vendor.requests.packages.urllib3.util'
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

// The _module_pip$_vendor$requests$packages$urllib3$util is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests$packages$urllib3$util;
PyDictObject *moduledict_pip$_vendor$requests$packages$urllib3$util;

// The module constants used
extern PyObject *const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_request;
extern PyObject *const_tuple_str_plain_Retry_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_resolve_ssl_version;
extern PyObject *const_str_plain_ssl_wrap_socket;
extern PyObject *const_tuple_str_plain_is_fp_closed_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_7da8310d74c3805f440f75838e183daf_tuple;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_parse_url;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_plain_HAS_SNI;
extern PyObject *const_str_digest_88f59c54076602dcb96ff841f9705fcc;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_resolve_cert_reqs;
static PyObject *const_str_digest_6a5fc20b06505374ba84b82141718067;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_current_time;
extern PyObject *const_str_plain_split_first;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_plain_is_fp_closed;
extern PyObject *const_str_plain_retry;
extern PyObject *const_str_plain_is_connection_dropped;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_str_plain_current_time_str_plain_Timeout_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_assert_fingerprint;
extern PyObject *const_str_plain_make_headers;
extern PyObject *const_str_plain_ssl_;
extern PyObject *const_tuple_str_plain_make_headers_tuple;
extern PyObject *const_str_plain_util;
extern PyObject *const_tuple_str_plain_is_connection_dropped_tuple;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_get_host;
static PyObject *const_str_digest_b957a443bf2b80d7e20bd2d346f1f46b;
extern PyObject *const_str_plain_Url;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_0dc273c61a7da34b5fda7bd45edb8755_tuple;
extern PyObject *const_str_plain_timeout;
static PyObject *const_list_str_digest_6a5fc20b06505374ba84b82141718067_list;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_6a5fc20b06505374ba84b82141718067 = UNSTREAM_STRING( &constant_bin[ 467819 ], 75, 0 );
    const_str_digest_b957a443bf2b80d7e20bd2d346f1f46b = UNSTREAM_STRING( &constant_bin[ 467894 ], 87, 0 );
    const_list_str_digest_6a5fc20b06505374ba84b82141718067_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_6a5fc20b06505374ba84b82141718067_list, 0, const_str_digest_6a5fc20b06505374ba84b82141718067 ); Py_INCREF( const_str_digest_6a5fc20b06505374ba84b82141718067 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests$packages$urllib3$util( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_56c4f04e597f7b35ca01e36d84f0f8c5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b957a443bf2b80d7e20bd2d346f1f46b;
    codeobj_56c4f04e597f7b35ca01e36d84f0f8c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_util, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests$packages$urllib3$util =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests.packages.urllib3.util",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$urllib3$util );
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

    // puts( "in initpip$_vendor$requests$packages$urllib3$util" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests$packages$urllib3$util = Py_InitModule4(
        "pip._vendor.requests.packages.urllib3.util",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests$packages$urllib3$util = PyModule_Create( &mdef_pip$_vendor$requests$packages$urllib3$util );
#endif

    moduledict_pip$_vendor$requests$packages$urllib3$util = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests$packages$urllib3$util );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_88f59c54076602dcb96ff841f9705fcc, module_pip$_vendor$requests$packages$urllib3$util );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests$packages$urllib3$util );

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
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b957a443bf2b80d7e20bd2d346f1f46b;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_6a5fc20b06505374ba84b82141718067_list );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_88f59c54076602dcb96ff841f9705fcc;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_56c4f04e597f7b35ca01e36d84f0f8c5, module_pip$_vendor$requests$packages$urllib3$util );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_connection, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_is_connection_dropped_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_is_connection_dropped );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_is_connection_dropped, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_request, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_make_headers_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_make_headers );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_response, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_is_fp_closed_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_is_fp_closed );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_is_fp_closed, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_ssl_, tmp_import_globals_4, tmp_import_globals_4, const_tuple_0dc273c61a7da34b5fda7bd45edb8755_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SSLContext );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_ssl_, tmp_import_globals_5, tmp_import_globals_5, const_tuple_0dc273c61a7da34b5fda7bd45edb8755_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HAS_SNI );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_ssl_, tmp_import_globals_6, tmp_import_globals_6, const_tuple_0dc273c61a7da34b5fda7bd45edb8755_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_assert_fingerprint );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_12 );
    tmp_import_globals_7 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_ssl_, tmp_import_globals_7, tmp_import_globals_7, const_tuple_0dc273c61a7da34b5fda7bd45edb8755_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_resolve_cert_reqs );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_13 );
    tmp_import_globals_8 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_ssl_, tmp_import_globals_8, tmp_import_globals_8, const_tuple_0dc273c61a7da34b5fda7bd45edb8755_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_resolve_ssl_version );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_14 );
    tmp_import_globals_9 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_ssl_, tmp_import_globals_9, tmp_import_globals_9, const_tuple_0dc273c61a7da34b5fda7bd45edb8755_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ssl_wrap_socket );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_15 );
    tmp_import_globals_10 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_timeout, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_current_time_str_plain_Timeout_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_current_time );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_current_time, tmp_assign_source_16 );
    tmp_import_globals_11 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_timeout, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_current_time_str_plain_Timeout_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_Timeout );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_17 );
    tmp_import_globals_12 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_retry, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_Retry_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_Retry );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_18 );
    tmp_import_globals_13 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_url, tmp_import_globals_13, tmp_import_globals_13, const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_get_host );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_get_host, tmp_assign_source_19 );
    tmp_import_globals_14 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_url, tmp_import_globals_14, tmp_import_globals_14, const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_parse_url );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_20 );
    tmp_import_globals_15 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_url, tmp_import_globals_15, tmp_import_globals_15, const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_split_first );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_split_first, tmp_assign_source_21 );
    tmp_import_globals_16 = ((PyModuleObject *)module_pip$_vendor$requests$packages$urllib3$util)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_url, tmp_import_globals_16, tmp_import_globals_16, const_tuple_a8f4bf95f064877135b9f41c797b793b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_Url );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain_Url, tmp_assign_source_22 );

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
    tmp_assign_source_23 = const_tuple_7da8310d74c3805f440f75838e183daf_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$urllib3$util, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_23 );

    return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$urllib3$util );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
