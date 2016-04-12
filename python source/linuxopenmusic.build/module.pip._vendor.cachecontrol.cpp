// Generated code for Python source for module 'pip._vendor.cachecontrol'
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

// The _module_pip$_vendor$cachecontrol is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$cachecontrol;
PyDictObject *moduledict_pip$_vendor$cachecontrol;

// The module constants used
extern PyObject *const_str_plain_CacheControlAdapter;
static PyObject *const_str_digest_e354722cec6b5c5078ff76e4d4139b52;
extern PyObject *const_str_plain_CacheControl;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_CacheController;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_adapter;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_digest_e354722cec6b5c5078ff76e4d4139b52_list;
extern PyObject *const_str_digest_cf6ad67e1fcab184ae3b2b70b1bd41c1;
extern PyObject *const_str_plain___version__;
extern PyObject *const_tuple_str_plain_CacheController_tuple;
extern PyObject *const_str_plain_cachecontrol;
static PyObject *const_str_digest_eb3fbc1aca9deffe7dc3d7d8f0b26658;
extern PyObject *const_str_plain_controller;
extern PyObject *const_str_plain___email__;
static PyObject *const_str_digest_6dd2ca47e6de6adc84570506f15ae28e;
static PyObject *const_str_digest_2d3a0abb3b9c52ea5a35c320702fd4f7;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_digest_1b2ec7330a26d0d419fe86a922d54332;
static PyObject *const_tuple_str_plain_CacheControl_tuple;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_digest_f691bd7e84b7e71c158b1521b4005149;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_wrapper;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_str_plain_CacheControlAdapter_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e354722cec6b5c5078ff76e4d4139b52 = UNSTREAM_STRING( &constant_bin[ 197157 ], 57, 0 );
    const_list_str_digest_e354722cec6b5c5078ff76e4d4139b52_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_e354722cec6b5c5078ff76e4d4139b52_list, 0, const_str_digest_e354722cec6b5c5078ff76e4d4139b52 ); Py_INCREF( const_str_digest_e354722cec6b5c5078ff76e4d4139b52 );
    const_str_digest_eb3fbc1aca9deffe7dc3d7d8f0b26658 = UNSTREAM_STRING( &constant_bin[ 197214 ], 11, 0 );
    const_str_digest_6dd2ca47e6de6adc84570506f15ae28e = UNSTREAM_STRING( &constant_bin[ 197225 ], 69, 0 );
    const_str_digest_2d3a0abb3b9c52ea5a35c320702fd4f7 = UNSTREAM_STRING( &constant_bin[ 197294 ], 16, 0 );
    const_str_digest_1b2ec7330a26d0d419fe86a922d54332 = UNSTREAM_STRING( &constant_bin[ 197310 ], 6, 0 );
    const_tuple_str_plain_CacheControl_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CacheControl_tuple, 0, const_str_plain_CacheControl ); Py_INCREF( const_str_plain_CacheControl );
    const_str_digest_f691bd7e84b7e71c158b1521b4005149 = UNSTREAM_STRING( &constant_bin[ 197316 ], 98, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$cachecontrol( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3ca83c38b78d555baff4e638747a0463;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6dd2ca47e6de6adc84570506f15ae28e;
    codeobj_3ca83c38b78d555baff4e638747a0463 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cachecontrol, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$cachecontrol =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.cachecontrol",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$cachecontrol )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$cachecontrol );
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

    // puts( "in initpip$_vendor$cachecontrol" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$cachecontrol = Py_InitModule4(
        "pip._vendor.cachecontrol",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$cachecontrol = PyModule_Create( &mdef_pip$_vendor$cachecontrol );
#endif

    moduledict_pip$_vendor$cachecontrol = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$cachecontrol)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$cachecontrol );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_cf6ad67e1fcab184ae3b2b70b1bd41c1, module_pip$_vendor$cachecontrol );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$cachecontrol );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_f691bd7e84b7e71c158b1521b4005149;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6dd2ca47e6de6adc84570506f15ae28e;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_e354722cec6b5c5078ff76e4d4139b52_list );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_cf6ad67e1fcab184ae3b2b70b1bd41c1;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_eb3fbc1aca9deffe7dc3d7d8f0b26658;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_2d3a0abb3b9c52ea5a35c320702fd4f7;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain___email__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_1b2ec7330a26d0d419fe86a922d54332;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_3ca83c38b78d555baff4e638747a0463, module_pip$_vendor$cachecontrol );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$cachecontrol)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_wrapper, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_CacheControl_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CacheControl );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain_CacheControl, tmp_assign_source_9 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$cachecontrol)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_adapter, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_CacheControlAdapter_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_CacheControlAdapter );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain_CacheControlAdapter, tmp_assign_source_10 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$_vendor$cachecontrol)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_controller, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_CacheController_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_CacheController );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol, (Nuitka_StringObject *)const_str_plain_CacheController, tmp_assign_source_11 );

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

    return MOD_RETURN_VALUE( module_pip$_vendor$cachecontrol );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}