// Generated code for Python source for module 'chardet.langhebrewmodel'
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

// The _module_chardet$langhebrewmodel is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_chardet$langhebrewmodel;
PyDictObject *moduledict_chardet$langhebrewmodel;

// The module constants used
extern PyObject *const_str_plain_precedenceMatrix;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Win1255HebrewModel;
extern PyObject *const_str_plain_HebrewLangModel;
extern PyObject *const_str_plain_keepEnglishLetter;
extern PyObject *const_str_plain_charsetName;
extern PyObject *const_str_plain_mTypicalPositiveRatio;
extern PyObject *const_str_plain_win1255_CharToOrderMap;
extern PyObject *const_str_plain_langhebrewmodel;
extern PyObject *const_tuple_4f19fa3634bb485716df7f8f5e81152b_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_34dc37102e727aa4ec37280084aa705c;
extern PyObject *const_float_0_984004;
extern PyObject *const_str_digest_9067f79f97483c0acb48964d9ff2d4d4;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_chardet;
static PyObject *const_str_digest_e47a8de6b5727c65c2c3c97877c79198;
extern PyObject *const_str_plain_charToOrderMap;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_96aea69e7c6c4b34b6c5234187423b87_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_34dc37102e727aa4ec37280084aa705c = UNSTREAM_STRING( &constant_bin[ 118077 ], 59, 0 );
    const_str_digest_e47a8de6b5727c65c2c3c97877c79198 = UNSTREAM_STRING( &constant_bin[ 118136 ], 23, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$langhebrewmodel( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8582b3f9b9566ed93b7c8ed9e6ab8bab;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_34dc37102e727aa4ec37280084aa705c;
    codeobj_8582b3f9b9566ed93b7c8ed9e6ab8bab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_langhebrewmodel, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$langhebrewmodel =
{
    PyModuleDef_HEAD_INIT,
    "chardet.langhebrewmodel",   /* m_name */
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

MOD_INIT_DECL( chardet$langhebrewmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$langhebrewmodel );
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

    // puts( "in initchardet$langhebrewmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$langhebrewmodel = Py_InitModule4(
        "chardet.langhebrewmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_chardet$langhebrewmodel = PyModule_Create( &mdef_chardet$langhebrewmodel );
#endif

    moduledict_chardet$langhebrewmodel = (PyDictObject *)((PyModuleObject *)module_chardet$langhebrewmodel)->md_dict;

    CHECK_OBJECT( module_chardet$langhebrewmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e47a8de6b5727c65c2c3c97877c79198, module_chardet$langhebrewmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_chardet$langhebrewmodel );

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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_34dc37102e727aa4ec37280084aa705c;
    UPDATE_STRING_DICT0( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_chardet;
    UPDATE_STRING_DICT0( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_tuple_4f19fa3634bb485716df7f8f5e81152b_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain_win1255_CharToOrderMap, tmp_assign_source_5 );
    tmp_assign_source_6 = const_tuple_96aea69e7c6c4b34b6c5234187423b87_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain_HebrewLangModel, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_8582b3f9b9566ed93b7c8ed9e6ab8bab, module_chardet$langhebrewmodel );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_assign_source_7 = _PyDict_NewPresized( 5 );
    tmp_dict_key_1 = const_str_plain_charToOrderMap;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain_win1255_CharToOrderMap );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win1255_CharToOrderMap );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win1255_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_precedenceMatrix;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain_HebrewLangModel );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HebrewLangModel );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HebrewLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_3 = const_float_0_984004;
    PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_4 = Py_False;
    PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_charsetName;
    tmp_dict_value_5 = const_str_digest_9067f79f97483c0acb48964d9ff2d4d4;
    PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_5, tmp_dict_value_5 );
    UPDATE_STRING_DICT1( moduledict_chardet$langhebrewmodel, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel, tmp_assign_source_7 );

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

    return MOD_RETURN_VALUE( module_chardet$langhebrewmodel );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
