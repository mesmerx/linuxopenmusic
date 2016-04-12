// Generated code for Python source for module 'pyasn1'
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

// The _module_pyasn1 is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pyasn1;
PyDictObject *moduledict_pyasn1;

// The module constants used
static PyObject *const_list_str_digest_2cc7a5e2e693a32d1d3bca0f6a9fa1a3_list;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_str_digest_75965f54d42111634c4f999c1dad9b73;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_pyasn1;
extern PyObject *const_str_plain___version__;
static PyObject *const_tuple_int_pos_2_int_pos_4_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_digest_2cc7a5e2e693a32d1d3bca0f6a9fa1a3;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_digest_7c470b65775bdea9f43f6cc3f7cc7bf3;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_4725e7c11e3d4ee2a0458e45f4faf09a;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_2cc7a5e2e693a32d1d3bca0f6a9fa1a3_list = PyList_New( 1 );
    const_str_digest_2cc7a5e2e693a32d1d3bca0f6a9fa1a3 = UNSTREAM_STRING( &constant_bin[ 603086 ], 39, 0 );
    PyList_SET_ITEM( const_list_str_digest_2cc7a5e2e693a32d1d3bca0f6a9fa1a3_list, 0, const_str_digest_2cc7a5e2e693a32d1d3bca0f6a9fa1a3 ); Py_INCREF( const_str_digest_2cc7a5e2e693a32d1d3bca0f6a9fa1a3 );
    const_str_digest_75965f54d42111634c4f999c1dad9b73 = UNSTREAM_STRING( &constant_bin[ 603125 ], 51, 0 );
    const_tuple_int_pos_2_int_pos_4_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_4_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_4_tuple, 1, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_str_digest_7c470b65775bdea9f43f6cc3f7cc7bf3 = UNSTREAM_STRING( &constant_bin[ 603176 ], 5, 0 );
    const_str_digest_4725e7c11e3d4ee2a0458e45f4faf09a = UNSTREAM_STRING( &constant_bin[ 603181 ], 35, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2b9a15d875b548c6faf024ee5fd72252;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_75965f54d42111634c4f999c1dad9b73;
    codeobj_2b9a15d875b548c6faf024ee5fd72252 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pyasn1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1 =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1",   /* m_name */
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

MOD_INIT_DECL( pyasn1 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1 );
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

    // puts( "in initpyasn1" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1 = Py_InitModule4(
        "pyasn1",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pyasn1 = PyModule_Create( &mdef_pyasn1 );
#endif

    moduledict_pyasn1 = (PyDictObject *)((PyModuleObject *)module_pyasn1)->md_dict;

    CHECK_OBJECT( module_pyasn1 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_pyasn1, module_pyasn1 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pyasn1 );

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
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_75965f54d42111634c4f999c1dad9b73;
    UPDATE_STRING_DICT0( moduledict_pyasn1, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_2cc7a5e2e693a32d1d3bca0f6a9fa1a3_list );
    UPDATE_STRING_DICT1( moduledict_pyasn1, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_pyasn1;
    UPDATE_STRING_DICT0( moduledict_pyasn1, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_2b9a15d875b548c6faf024ee5fd72252, module_pyasn1 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pyasn1)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_7c470b65775bdea9f43f6cc3f7cc7bf3;
    UPDATE_STRING_DICT0( moduledict_pyasn1, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 6;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_int_pos_2_int_pos_4_tuple;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_4725e7c11e3d4ee2a0458e45f4faf09a;
    frame_module->f_lineno = 7;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 7;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;

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

    return MOD_RETURN_VALUE( module_pyasn1 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
