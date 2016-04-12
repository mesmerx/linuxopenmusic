// Generated code for Python source for module 'pip._vendor.requests.packages.chardet.escsm'
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

// The _module_pip$_vendor$requests$packages$chardet$escsm is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests$packages$chardet$escsm;
PyDictObject *moduledict_pip$_vendor$requests$packages$chardet$escsm;

// The module constants used
extern PyObject *const_str_plain_charLenTable;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
extern PyObject *const_str_plain_ISO2022JP_cls;
extern PyObject *const_str_plain_escsm;
extern PyObject *const_str_plain_HZ_st;
extern PyObject *const_str_plain_HZSMModel;
extern PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
extern PyObject *const_str_plain_constants;
extern PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e;
extern PyObject *const_str_plain_ISO2022KR_st;
extern PyObject *const_str_digest_b563cc4e87000d93652e0cd29e7e2700;
extern PyObject *const_str_plain_eStart;
extern PyObject *const_str_plain_HZ_cls;
extern PyObject *const_str_plain_ISO2022CNSMModel;
extern PyObject *const_str_plain_eItsMe;
extern PyObject *const_str_plain_ISO2022KR_cls;
extern PyObject *const_str_plain_classFactor;
extern PyObject *const_int_0;
static PyObject *const_str_digest_23dc4a4eaa5ae2d4f2210ad5f365e943;
extern PyObject *const_tuple_str_plain_eStart_str_plain_eError_str_plain_eItsMe_tuple;
extern PyObject *const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple;
extern PyObject *const_str_plain_ISO2022CN_st;
extern PyObject *const_str_plain_ISO2022JPSMModel;
static PyObject *const_str_digest_a688bacc1d99c8de990687592b020b06;
extern PyObject *const_str_plain_ISO2022CN_cls;
extern PyObject *const_str_plain_ISO2022CNCharLenTable;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_ISO2022KRCharLenTable;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_stateTable;
extern PyObject *const_str_digest_63bfaeb074d98b627aa3253727ce36ed;
extern PyObject *const_str_plain_ISO2022JP_st;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde;
extern PyObject *const_str_plain_classTable;
extern PyObject *const_int_pos_4;
extern PyObject *const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_name;
extern PyObject *const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple;
extern PyObject *const_str_plain_ISO2022KRSMModel;
extern PyObject *const_str_plain_eError;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_HZCharLenTable;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_ISO2022JPCharLenTable;
extern PyObject *const_str_digest_515cde36df26fd6f7b9906b26534476f;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_23dc4a4eaa5ae2d4f2210ad5f365e943 = UNSTREAM_STRING( &constant_bin[ 470397 ], 79, 0 );
    const_str_digest_a688bacc1d99c8de990687592b020b06 = UNSTREAM_STRING( &constant_bin[ 470476 ], 43, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests$packages$chardet$escsm( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3f8318bce99c7edbde176e76ddf3427f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_23dc4a4eaa5ae2d4f2210ad5f365e943;
    codeobj_3f8318bce99c7edbde176e76ddf3427f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_escsm, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests$packages$chardet$escsm =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests.packages.chardet.escsm",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$escsm )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$chardet$escsm );
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

    // puts( "in initpip$_vendor$requests$packages$chardet$escsm" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests$packages$chardet$escsm = Py_InitModule4(
        "pip._vendor.requests.packages.chardet.escsm",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests$packages$chardet$escsm = PyModule_Create( &mdef_pip$_vendor$requests$packages$chardet$escsm );
#endif

    moduledict_pip$_vendor$requests$packages$chardet$escsm = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$escsm)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests$packages$chardet$escsm );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a688bacc1d99c8de990687592b020b06, module_pip$_vendor$requests$packages$chardet$escsm );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests$packages$chardet$escsm );

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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_23dc4a4eaa5ae2d4f2210ad5f365e943;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_515cde36df26fd6f7b9906b26534476f;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_3f8318bce99c7edbde176e76ddf3427f, module_pip$_vendor$requests$packages$chardet$escsm );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$escsm)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_constants, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_eStart_str_plain_eError_str_plain_eItsMe_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_eStart );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$escsm)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_constants, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_eStart_str_plain_eError_str_plain_eItsMe_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_eError );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError, tmp_assign_source_6 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$escsm)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_constants, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_eStart_str_plain_eError_str_plain_eItsMe_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_eItsMe );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe, tmp_assign_source_7 );
    tmp_assign_source_8 = const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_cls, tmp_assign_source_8 );
    tmp_assign_source_9 = PyTuple_New( 48 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_3;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 4, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 5, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 6, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 7, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 8, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 9, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 10, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 11, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 12, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 13, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 14, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 15, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 16, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 17, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 18, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 19, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 20, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 21, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 22, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 23, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_5;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 24, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 25, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_6;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 26, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 27, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_5;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 28, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_5;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 29, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 30, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 31, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 32, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 33, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 34, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 35, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 36, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 37, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 38, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 39, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 40, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 41, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 42, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 43, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 44, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 45, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 46, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 47, tmp_tuple_element_1 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_st, tmp_assign_source_9 );
    tmp_assign_source_10 = const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZCharLenTable, tmp_assign_source_10 );
    tmp_assign_source_11 = _PyDict_NewPresized( 5 );
    tmp_dict_key_1 = const_str_plain_classTable;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_cls );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HZ_cls );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HZ_cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_classFactor;
    tmp_dict_value_2 = const_int_pos_6;
    PyDict_SetItem( tmp_assign_source_11, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_stateTable;
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_st );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HZ_st );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HZ_st" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_11, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_charLenTable;
    tmp_dict_value_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZCharLenTable );

    if (unlikely( tmp_dict_value_4 == NULL ))
    {
        tmp_dict_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HZCharLenTable );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HZCharLenTable" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_11, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_name;
    tmp_dict_value_5 = const_str_digest_63bfaeb074d98b627aa3253727ce36ed;
    PyDict_SetItem( tmp_assign_source_11, tmp_dict_key_5, tmp_dict_value_5 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZSMModel, tmp_assign_source_11 );
    tmp_assign_source_12 = const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_cls, tmp_assign_source_12 );
    tmp_assign_source_13 = PyTuple_New( 64 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_pos_3;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 3, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 4, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 5, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 6, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 7, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 8, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 9, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 10, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 11, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 12, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 13, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 14, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 15, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 16, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 17, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 18, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 19, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 20, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 21, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 22, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 23, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 24, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 25, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 26, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 27, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 28, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 29, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 30, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 31, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 32, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 33, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 34, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 35, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 36, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 37, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 38, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 39, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_pos_5;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 40, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_pos_6;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 41, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 42, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 43, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 44, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 45, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 46, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 47, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 48, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 49, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 50, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 51, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 52, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 53, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 54, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 55, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 56, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 57, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 58, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 59, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 60, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 61, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 62, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 63, tmp_tuple_element_2 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_st, tmp_assign_source_13 );
    tmp_assign_source_14 = const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CNCharLenTable, tmp_assign_source_14 );
    tmp_assign_source_15 = _PyDict_NewPresized( 5 );
    tmp_dict_key_6 = const_str_plain_classTable;
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_cls );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022CN_cls );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022CN_cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_classFactor;
    tmp_dict_value_7 = const_int_pos_9;
    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_stateTable;
    tmp_dict_value_8 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_st );

    if (unlikely( tmp_dict_value_8 == NULL ))
    {
        tmp_dict_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022CN_st );
    }

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022CN_st" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_key_9 = const_str_plain_charLenTable;
    tmp_dict_value_9 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CNCharLenTable );

    if (unlikely( tmp_dict_value_9 == NULL ))
    {
        tmp_dict_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022CNCharLenTable );
    }

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022CNCharLenTable" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_key_10 = const_str_plain_name;
    tmp_dict_value_10 = const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e;
    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_10, tmp_dict_value_10 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CNSMModel, tmp_assign_source_15 );
    tmp_assign_source_16 = const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_cls, tmp_assign_source_16 );
    tmp_assign_source_17 = PyTuple_New( 72 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_int_pos_3;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 2, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 3, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 4, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 5, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 6, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 7, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 8, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 9, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 10, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 11, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 12, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 13, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 14, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 15, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 16, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 17, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 18, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 19, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 20, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 21, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 22, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 23, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 24, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 25, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 26, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 27, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 28, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 29, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 30, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 31, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 32, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_int_pos_5;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 33, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 34, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 35, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 36, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 37, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 38, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 39, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 40, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 41, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 42, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_int_pos_6;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 43, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 44, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 45, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 46, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 47, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 48, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 49, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 50, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 51, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 52, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 53, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 54, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 55, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 56, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 57, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 58, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 59, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 60, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 61, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 62, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 63, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 64, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 65, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 66, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 67, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 68, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 69, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 70, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 71, tmp_tuple_element_3 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_st, tmp_assign_source_17 );
    tmp_assign_source_18 = const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JPCharLenTable, tmp_assign_source_18 );
    tmp_assign_source_19 = _PyDict_NewPresized( 5 );
    tmp_dict_key_11 = const_str_plain_classTable;
    tmp_dict_value_11 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_cls );

    if (unlikely( tmp_dict_value_11 == NULL ))
    {
        tmp_dict_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022JP_cls );
    }

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022JP_cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_key_12 = const_str_plain_classFactor;
    tmp_dict_value_12 = const_int_pos_10;
    PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_key_13 = const_str_plain_stateTable;
    tmp_dict_value_13 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_st );

    if (unlikely( tmp_dict_value_13 == NULL ))
    {
        tmp_dict_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022JP_st );
    }

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022JP_st" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_key_14 = const_str_plain_charLenTable;
    tmp_dict_value_14 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JPCharLenTable );

    if (unlikely( tmp_dict_value_14 == NULL ))
    {
        tmp_dict_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022JPCharLenTable );
    }

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022JPCharLenTable" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_key_15 = const_str_plain_name;
    tmp_dict_value_15 = const_str_digest_b563cc4e87000d93652e0cd29e7e2700;
    PyDict_SetItem( tmp_assign_source_19, tmp_dict_key_15, tmp_dict_value_15 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JPSMModel, tmp_assign_source_19 );
    tmp_assign_source_20 = const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_cls, tmp_assign_source_20 );
    tmp_assign_source_21 = PyTuple_New( 40 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_int_pos_3;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 2, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 3, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 4, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 5, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 6, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 7, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 8, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 9, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 10, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 11, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 12, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 13, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 14, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 15, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 16, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 17, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 18, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 19, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 20, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 21, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 22, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 23, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 24, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 25, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 26, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 27, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_int_pos_5;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 28, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 29, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 30, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 31, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 32, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 33, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 34, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eItsMe );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eItsMe );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eItsMe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 35, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 36, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 37, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 38, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_eStart );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eStart );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "eStart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 39, tmp_tuple_element_4 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_st, tmp_assign_source_21 );
    tmp_assign_source_22 = const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KRCharLenTable, tmp_assign_source_22 );
    tmp_assign_source_23 = _PyDict_NewPresized( 5 );
    tmp_dict_key_16 = const_str_plain_classTable;
    tmp_dict_value_16 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_cls );

    if (unlikely( tmp_dict_value_16 == NULL ))
    {
        tmp_dict_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022KR_cls );
    }

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022KR_cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_23, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_dict_key_17 = const_str_plain_classFactor;
    tmp_dict_value_17 = const_int_pos_6;
    PyDict_SetItem( tmp_assign_source_23, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_key_18 = const_str_plain_stateTable;
    tmp_dict_value_18 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_st );

    if (unlikely( tmp_dict_value_18 == NULL ))
    {
        tmp_dict_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022KR_st );
    }

    if ( tmp_dict_value_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022KR_st" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_23, tmp_dict_key_18, tmp_dict_value_18 );
    tmp_dict_key_19 = const_str_plain_charLenTable;
    tmp_dict_value_19 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KRCharLenTable );

    if (unlikely( tmp_dict_value_19 == NULL ))
    {
        tmp_dict_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022KRCharLenTable );
    }

    if ( tmp_dict_value_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ISO2022KRCharLenTable" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_23, tmp_dict_key_19, tmp_dict_value_19 );
    tmp_dict_key_20 = const_str_plain_name;
    tmp_dict_value_20 = const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde;
    PyDict_SetItem( tmp_assign_source_23, tmp_dict_key_20, tmp_dict_value_20 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KRSMModel, tmp_assign_source_23 );

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

    return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$chardet$escsm );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
