// Generated code for Python source for module 'OpenSSL.version'
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

// The _module_OpenSSL$version is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_OpenSSL$version;
PyDictObject *moduledict_OpenSSL$version;

// The module constants used
extern PyObject *const_str_plain___copyright__;
static PyObject *const_str_digest_6d16671993de1d0c3bd38cff0362a96f;
static PyObject *const_str_digest_46b22c9362bb5bfc48ba6e2a9dce4ddd;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain___summary__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_pyOpenSSL;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_9ef8fdd8c9b55de514252b0fda80fa12;
static PyObject *const_str_digest_68018ff76519212609a7968014aa79ba;
extern PyObject *const_str_digest_598c5128122328c3e816ece52ab2e1f6;
extern PyObject *const_str_plain___email__;
extern PyObject *const_str_plain___uri__;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain___license__;
static PyObject *const_str_digest_e181204d63c8b7732d12c155e97abb8c;
extern PyObject *const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain_OpenSSL;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_1ff124d4d503ef842e0d3cd45d2aabd2;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_e29bae330b8b3eb2658b1344a6271a86;
static PyObject *const_list_7a37fc81b16958dd9b37fbf746b699fd_list;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_6d16671993de1d0c3bd38cff0362a96f = UNSTREAM_STRING( &constant_bin[ 75572 ], 34, 0 );
    const_str_digest_46b22c9362bb5bfc48ba6e2a9dce4ddd = UNSTREAM_STRING( &constant_bin[ 72602 ], 6, 0 );
    const_str_plain_pyOpenSSL = UNSTREAM_STRING( &constant_bin[ 42281 ], 9, 1 );
    const_str_digest_9ef8fdd8c9b55de514252b0fda80fa12 = UNSTREAM_STRING( &constant_bin[ 75606 ], 51, 0 );
    const_str_digest_68018ff76519212609a7968014aa79ba = UNSTREAM_STRING( &constant_bin[ 75657 ], 27, 0 );
    const_str_digest_e181204d63c8b7732d12c155e97abb8c = UNSTREAM_STRING( &constant_bin[ 75684 ], 48, 0 );
    const_str_digest_1ff124d4d503ef842e0d3cd45d2aabd2 = UNSTREAM_STRING( &constant_bin[ 75732 ], 23, 0 );
    const_str_digest_e29bae330b8b3eb2658b1344a6271a86 = UNSTREAM_STRING( &constant_bin[ 75755 ], 24, 0 );
    const_list_7a37fc81b16958dd9b37fbf746b699fd_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 0, const_str_plain___author__ ); Py_INCREF( const_str_plain___author__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 1, const_str_plain___copyright__ ); Py_INCREF( const_str_plain___copyright__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 2, const_str_plain___email__ ); Py_INCREF( const_str_plain___email__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 3, const_str_plain___license__ ); Py_INCREF( const_str_plain___license__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 4, const_str_plain___summary__ ); Py_INCREF( const_str_plain___summary__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 5, const_str_plain___title__ ); Py_INCREF( const_str_plain___title__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 6, const_str_plain___uri__ ); Py_INCREF( const_str_plain___uri__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 7, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenSSL$version( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e61c79605f57bf9fa277a09af88c9bca;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9ef8fdd8c9b55de514252b0fda80fa12;
    codeobj_e61c79605f57bf9fa277a09af88c9bca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_version, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenSSL$version =
{
    PyModuleDef_HEAD_INIT,
    "OpenSSL.version",   /* m_name */
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

MOD_INIT_DECL( OpenSSL$version )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_OpenSSL$version );
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

    // puts( "in initOpenSSL$version" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenSSL$version = Py_InitModule4(
        "OpenSSL.version",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_OpenSSL$version = PyModule_Create( &mdef_OpenSSL$version );
#endif

    moduledict_OpenSSL$version = (PyDictObject *)((PyModuleObject *)module_OpenSSL$version)->md_dict;

    CHECK_OBJECT( module_OpenSSL$version );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_598c5128122328c3e816ece52ab2e1f6, module_OpenSSL$version );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_OpenSSL$version );

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
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9ef8fdd8c9b55de514252b0fda80fa12;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_OpenSSL;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_7a37fc81b16958dd9b37fbf746b699fd_list );
    UPDATE_STRING_DICT1( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_46b22c9362bb5bfc48ba6e2a9dce4ddd;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_pyOpenSSL;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_6d16671993de1d0c3bd38cff0362a96f;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___uri__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_e181204d63c8b7732d12c155e97abb8c;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___summary__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_e29bae330b8b3eb2658b1344a6271a86;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___email__, tmp_assign_source_11 );
    tmp_assign_source_12 = const_str_digest_68018ff76519212609a7968014aa79ba;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_12 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_e61c79605f57bf9fa277a09af88c9bca, module_OpenSSL$version );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = const_str_digest_1ff124d4d503ef842e0d3cd45d2aabd2;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___author__ );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___author__ );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__author__" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_13 );

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

    return MOD_RETURN_VALUE( module_OpenSSL$version );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
