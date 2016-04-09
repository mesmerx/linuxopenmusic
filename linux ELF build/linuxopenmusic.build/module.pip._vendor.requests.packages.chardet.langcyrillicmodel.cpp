// Generated code for Python source for module 'pip._vendor.requests.packages.chardet.langcyrillicmodel'
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

// The _module_pip$_vendor$requests$packages$chardet$langcyrillicmodel is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests$packages$chardet$langcyrillicmodel;
PyDictObject *moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel;

// The module constants used
extern PyObject *const_tuple_f18bdee9536a45fe5ae287fb6355492a_tuple;
extern PyObject *const_str_plain_RussianLangModel;
extern PyObject *const_str_plain_precedenceMatrix;
extern PyObject *const_str_plain_IBM866;
extern PyObject *const_str_plain_langcyrillicmodel;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_9222b66a29def824eb1194a0241b88ae_tuple;
extern PyObject *const_tuple_666844a46456f676cd51b40483cca4f3_tuple;
extern PyObject *const_str_plain_IBM866_CharToOrderMap;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_0c808d739d4314a3145ee0e332b5d593;
extern PyObject *const_str_plain_latin5_CharToOrderMap;
extern PyObject *const_tuple_534421f243659b6bda00351214dd02e2_tuple;
extern PyObject *const_str_plain_Ibm866Model;
extern PyObject *const_float_0_976601;
extern PyObject *const_str_plain_Win1251CyrillicModel;
extern PyObject *const_tuple_b24235f9a763afce8962d2938259e649_tuple;
extern PyObject *const_str_plain_IBM855_CharToOrderMap;
extern PyObject *const_str_plain_keepEnglishLetter;
extern PyObject *const_str_plain_charsetName;
extern PyObject *const_str_plain_MacCyrillic;
extern PyObject *const_str_plain_mTypicalPositiveRatio;
extern PyObject *const_str_digest_79273f970a414aa39a32d8f0b259063b;
static PyObject *const_str_digest_b115a58f6d6bd092d00cab67f9e7d01a;
extern PyObject *const_str_plain_Latin5CyrillicModel;
extern PyObject *const_str_plain_win1251_CharToOrderMap;
extern PyObject *const_tuple_f8e41cfab8cb474168ecd9a8e1d7cea1_tuple;
extern PyObject *const_tuple_ffd1e1f94e28d6aae394e365bb952ebe_tuple;
extern PyObject *const_str_plain_IBM855;
static PyObject *const_str_digest_5bcd02d137f85020ad877d75ddabee37;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Ibm855Model;
extern PyObject *const_str_plain_Koi8rModel;
extern PyObject *const_str_plain_KOI8R_CharToOrderMap;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_MacCyrillicModel;
extern PyObject *const_str_plain_macCyrillic_CharToOrderMap;
extern PyObject *const_str_digest_aada818c73a52b8f999cbecf8cef2e77;
extern PyObject *const_str_plain_charToOrderMap;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_digest_515cde36df26fd6f7b9906b26534476f;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b115a58f6d6bd092d00cab67f9e7d01a = UNSTREAM_STRING( &constant_bin[ 460748 ], 55, 0 );
    const_str_digest_5bcd02d137f85020ad877d75ddabee37 = UNSTREAM_STRING( &constant_bin[ 460803 ], 91, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests$packages$chardet$langcyrillicmodel( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8c9894d925d00de135e09bc2787a57ca;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5bcd02d137f85020ad877d75ddabee37;
    codeobj_8c9894d925d00de135e09bc2787a57ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_langcyrillicmodel, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests$packages$chardet$langcyrillicmodel =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests.packages.chardet.langcyrillicmodel",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$langcyrillicmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$chardet$langcyrillicmodel );
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

    // puts( "in initpip$_vendor$requests$packages$chardet$langcyrillicmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests$packages$chardet$langcyrillicmodel = Py_InitModule4(
        "pip._vendor.requests.packages.chardet.langcyrillicmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests$packages$chardet$langcyrillicmodel = PyModule_Create( &mdef_pip$_vendor$requests$packages$chardet$langcyrillicmodel );
#endif

    moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$langcyrillicmodel)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests$packages$chardet$langcyrillicmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b115a58f6d6bd092d00cab67f9e7d01a, module_pip$_vendor$requests$packages$chardet$langcyrillicmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests$packages$chardet$langcyrillicmodel );

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
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
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
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5bcd02d137f85020ad877d75ddabee37;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_515cde36df26fd6f7b9906b26534476f;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_tuple_f18bdee9536a45fe5ae287fb6355492a_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_KOI8R_CharToOrderMap, tmp_assign_source_5 );
    tmp_assign_source_6 = const_tuple_b24235f9a763afce8962d2938259e649_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_win1251_CharToOrderMap, tmp_assign_source_6 );
    tmp_assign_source_7 = const_tuple_ffd1e1f94e28d6aae394e365bb952ebe_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_latin5_CharToOrderMap, tmp_assign_source_7 );
    tmp_assign_source_8 = const_tuple_f8e41cfab8cb474168ecd9a8e1d7cea1_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_macCyrillic_CharToOrderMap, tmp_assign_source_8 );
    tmp_assign_source_9 = const_tuple_666844a46456f676cd51b40483cca4f3_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_IBM855_CharToOrderMap, tmp_assign_source_9 );
    tmp_assign_source_10 = const_tuple_534421f243659b6bda00351214dd02e2_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_IBM866_CharToOrderMap, tmp_assign_source_10 );
    tmp_assign_source_11 = const_tuple_9222b66a29def824eb1194a0241b88ae_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_RussianLangModel, tmp_assign_source_11 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_8c9894d925d00de135e09bc2787a57ca, module_pip$_vendor$requests$packages$chardet$langcyrillicmodel );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_assign_source_12 = _PyDict_NewPresized( 5 );
    tmp_dict_key_1 = const_str_plain_charToOrderMap;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_KOI8R_CharToOrderMap );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KOI8R_CharToOrderMap );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "KOI8R_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_precedenceMatrix;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_RussianLangModel );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RussianLangModel );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RussianLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_3 = const_float_0_976601;
    PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_4 = Py_False;
    PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_charsetName;
    tmp_dict_value_5 = const_str_digest_0c808d739d4314a3145ee0e332b5d593;
    PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_5, tmp_dict_value_5 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Koi8rModel, tmp_assign_source_12 );
    tmp_assign_source_13 = _PyDict_NewPresized( 5 );
    tmp_dict_key_6 = const_str_plain_charToOrderMap;
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_win1251_CharToOrderMap );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win1251_CharToOrderMap );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win1251_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_precedenceMatrix;
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_RussianLangModel );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RussianLangModel );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RussianLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_8 = const_float_0_976601;
    PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_key_9 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_9 = Py_False;
    PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_key_10 = const_str_plain_charsetName;
    tmp_dict_value_10 = const_str_digest_79273f970a414aa39a32d8f0b259063b;
    PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_10, tmp_dict_value_10 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel, tmp_assign_source_13 );
    tmp_assign_source_14 = _PyDict_NewPresized( 5 );
    tmp_dict_key_11 = const_str_plain_charToOrderMap;
    tmp_dict_value_11 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_latin5_CharToOrderMap );

    if (unlikely( tmp_dict_value_11 == NULL ))
    {
        tmp_dict_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_latin5_CharToOrderMap );
    }

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "latin5_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_key_12 = const_str_plain_precedenceMatrix;
    tmp_dict_value_12 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_RussianLangModel );

    if (unlikely( tmp_dict_value_12 == NULL ))
    {
        tmp_dict_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RussianLangModel );
    }

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RussianLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_key_13 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_13 = const_float_0_976601;
    PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_key_14 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_14 = Py_False;
    PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_key_15 = const_str_plain_charsetName;
    tmp_dict_value_15 = const_str_digest_aada818c73a52b8f999cbecf8cef2e77;
    PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_15, tmp_dict_value_15 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel, tmp_assign_source_14 );
    tmp_assign_source_15 = _PyDict_NewPresized( 5 );
    tmp_dict_key_16 = const_str_plain_charToOrderMap;
    tmp_dict_value_16 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_macCyrillic_CharToOrderMap );

    if (unlikely( tmp_dict_value_16 == NULL ))
    {
        tmp_dict_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_macCyrillic_CharToOrderMap );
    }

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "macCyrillic_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 306;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_dict_key_17 = const_str_plain_precedenceMatrix;
    tmp_dict_value_17 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_RussianLangModel );

    if (unlikely( tmp_dict_value_17 == NULL ))
    {
        tmp_dict_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RussianLangModel );
    }

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RussianLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_key_18 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_18 = const_float_0_976601;
    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_18, tmp_dict_value_18 );
    tmp_dict_key_19 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_19 = Py_False;
    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_19, tmp_dict_value_19 );
    tmp_dict_key_20 = const_str_plain_charsetName;
    tmp_dict_value_20 = const_str_plain_MacCyrillic;
    PyDict_SetItem( tmp_assign_source_15, tmp_dict_key_20, tmp_dict_value_20 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel, tmp_assign_source_15 );
    tmp_assign_source_16 = _PyDict_NewPresized( 5 );
    tmp_dict_key_21 = const_str_plain_charToOrderMap;
    tmp_dict_value_21 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_IBM866_CharToOrderMap );

    if (unlikely( tmp_dict_value_21 == NULL ))
    {
        tmp_dict_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IBM866_CharToOrderMap );
    }

    if ( tmp_dict_value_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IBM866_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_21, tmp_dict_value_21 );
    tmp_dict_key_22 = const_str_plain_precedenceMatrix;
    tmp_dict_value_22 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_RussianLangModel );

    if (unlikely( tmp_dict_value_22 == NULL ))
    {
        tmp_dict_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RussianLangModel );
    }

    if ( tmp_dict_value_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RussianLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_22, tmp_dict_value_22 );
    tmp_dict_key_23 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_23 = const_float_0_976601;
    PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_23, tmp_dict_value_23 );
    tmp_dict_key_24 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_24 = Py_False;
    PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_24, tmp_dict_value_24 );
    tmp_dict_key_25 = const_str_plain_charsetName;
    tmp_dict_value_25 = const_str_plain_IBM866;
    PyDict_SetItem( tmp_assign_source_16, tmp_dict_key_25, tmp_dict_value_25 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Ibm866Model, tmp_assign_source_16 );
    tmp_assign_source_17 = _PyDict_NewPresized( 5 );
    tmp_dict_key_26 = const_str_plain_charToOrderMap;
    tmp_dict_value_26 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_IBM855_CharToOrderMap );

    if (unlikely( tmp_dict_value_26 == NULL ))
    {
        tmp_dict_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IBM855_CharToOrderMap );
    }

    if ( tmp_dict_value_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IBM855_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_17, tmp_dict_key_26, tmp_dict_value_26 );
    tmp_dict_key_27 = const_str_plain_precedenceMatrix;
    tmp_dict_value_27 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_RussianLangModel );

    if (unlikely( tmp_dict_value_27 == NULL ))
    {
        tmp_dict_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RussianLangModel );
    }

    if ( tmp_dict_value_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RussianLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_17, tmp_dict_key_27, tmp_dict_value_27 );
    tmp_dict_key_28 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_28 = const_float_0_976601;
    PyDict_SetItem( tmp_assign_source_17, tmp_dict_key_28, tmp_dict_value_28 );
    tmp_dict_key_29 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_29 = Py_False;
    PyDict_SetItem( tmp_assign_source_17, tmp_dict_key_29, tmp_dict_value_29 );
    tmp_dict_key_30 = const_str_plain_charsetName;
    tmp_dict_value_30 = const_str_plain_IBM855;
    PyDict_SetItem( tmp_assign_source_17, tmp_dict_key_30, tmp_dict_value_30 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Ibm855Model, tmp_assign_source_17 );

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

    return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$chardet$langcyrillicmodel );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
