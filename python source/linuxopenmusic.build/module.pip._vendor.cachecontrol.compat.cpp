// Generated code for Python source for module 'pip._vendor.cachecontrol.compat'
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

// The _module_pip$_vendor$cachecontrol$compat is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$cachecontrol$compat;
PyDictObject *moduledict_pip$_vendor$cachecontrol$compat;

// The module constants used
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_str_digest_a9bab296c4c32dd4a20b1f64c605092a;
extern PyObject *const_str_plain_cPickle;
extern PyObject *const_tuple_str_plain_is_fp_closed_tuple;
static PyObject *const_str_digest_59c7c64061ff8765acedff60f78fc1ad;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
extern PyObject *const_str_digest_cf6ad67e1fcab184ae3b2b70b1bd41c1;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_urljoin_tuple;
extern PyObject *const_str_plain_HTTPResponse;
extern PyObject *const_str_digest_88f59c54076602dcb96ff841f9705fcc;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_tuple_str_plain_HTTPResponse_tuple;
extern PyObject *const_str_plain_is_fp_closed;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_digest_a67e5b01c64e3827f1308cf5aad38165;
extern PyObject *const_str_plain_pickle;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_urljoin;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_59c7c64061ff8765acedff60f78fc1ad = UNSTREAM_STRING( &constant_bin[ 199351 ], 67, 0 );
    const_str_digest_a67e5b01c64e3827f1308cf5aad38165 = UNSTREAM_STRING( &constant_bin[ 199418 ], 31, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$cachecontrol$compat( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_593c47b862d53c84dcdf769bbbd3b14e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_59c7c64061ff8765acedff60f78fc1ad;
    codeobj_593c47b862d53c84dcdf769bbbd3b14e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compat, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$cachecontrol$compat =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.cachecontrol.compat",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$cachecontrol$compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$cachecontrol$compat );
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

    // puts( "in initpip$_vendor$cachecontrol$compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$cachecontrol$compat = Py_InitModule4(
        "pip._vendor.cachecontrol.compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$cachecontrol$compat = PyModule_Create( &mdef_pip$_vendor$cachecontrol$compat );
#endif

    moduledict_pip$_vendor$cachecontrol$compat = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$cachecontrol$compat)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$cachecontrol$compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a67e5b01c64e3827f1308cf5aad38165, module_pip$_vendor$cachecontrol$compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$cachecontrol$compat );

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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_59c7c64061ff8765acedff60f78fc1ad;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_cf6ad67e1fcab184ae3b2b70b1bd41c1;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_593c47b862d53c84dcdf769bbbd3b14e, module_pip$_vendor$cachecontrol$compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$cachecontrol$compat)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_urljoin_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto try_except_handler_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_urljoin );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_5 );
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


        exception_lineno = 3;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$cachecontrol$compat)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_urlparse, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_urljoin_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_2;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_urljoin );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_6 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
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
    NUITKA_CANNOT_GET_HERE( pip$_vendor$cachecontrol$compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$_vendor$cachecontrol$compat)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_cPickle, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_pickle, tmp_assign_source_7 );
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


        exception_lineno = 9;
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
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$_vendor$cachecontrol$compat)->md_dict;
    frame_module->f_lineno = 10;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_pickle, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_pickle, tmp_assign_source_8 );
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_4;
    branch_end_2:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pip$_vendor$cachecontrol$compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    tmp_import_globals_5 = ((PyModuleObject *)module_pip$_vendor$cachecontrol$compat)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_a9bab296c4c32dd4a20b1f64c605092a, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_HTTPResponse_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HTTPResponse );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_9 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pip$_vendor$cachecontrol$compat)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_88f59c54076602dcb96ff841f9705fcc, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_is_fp_closed_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_is_fp_closed );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_is_fp_closed, tmp_assign_source_10 );
    // Tried code:
    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_1 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_11 );
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

    // Preserve existing published exception.
    exception_preserved_type_3 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != -1 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_module, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_NameError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_6;
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
    tmp_assign_source_12 = PyTuple_New( 1 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_2 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_12 );
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_6;
    branch_end_3:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pip$_vendor$cachecontrol$compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;

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

    return MOD_RETURN_VALUE( module_pip$_vendor$cachecontrol$compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
