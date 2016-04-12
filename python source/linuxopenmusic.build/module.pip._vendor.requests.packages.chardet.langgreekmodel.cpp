// Generated code for Python source for module 'pip._vendor.requests.packages.chardet.langgreekmodel'
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

// The _module_pip$_vendor$requests$packages$chardet$langgreekmodel is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests$packages$chardet$langgreekmodel;
PyDictObject *moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel;

// The module constants used
extern PyObject *const_str_plain_precedenceMatrix;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_1f7e88c8aa17cf91b2807d7d99838a07;
extern PyObject *const_str_plain_Win1253GreekModel;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Latin7GreekModel;
extern PyObject *const_str_digest_7718380faed4df7057283e0d1730db81;
extern PyObject *const_str_plain_keepEnglishLetter;
extern PyObject *const_str_plain_charsetName;
extern PyObject *const_tuple_335b990c1cc0f8a22180626502e7512a_tuple;
extern PyObject *const_str_plain_mTypicalPositiveRatio;
extern PyObject *const_tuple_f1a24a289c33e4ce8cd3d7c4beee6f6a_tuple;
extern PyObject *const_tuple_314709394625831b834265dbf269a905_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_7ca3e7632f1cccef85d1966320dcb68c;
extern PyObject *const_str_plain_Latin7_CharToOrderMap;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_win1253_CharToOrderMap;
static PyObject *const_str_digest_863a043cd4f4c2bb17369010cc5d8d3b;
extern PyObject *const_str_plain_GreekLangModel;
extern PyObject *const_float_0_982851;
extern PyObject *const_str_plain_charToOrderMap;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_langgreekmodel;
extern PyObject *const_str_digest_515cde36df26fd6f7b9906b26534476f;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_1f7e88c8aa17cf91b2807d7d99838a07 = UNSTREAM_STRING( &constant_bin[ 472129 ], 88, 0 );
    const_str_digest_863a043cd4f4c2bb17369010cc5d8d3b = UNSTREAM_STRING( &constant_bin[ 472217 ], 52, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests$packages$chardet$langgreekmodel( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_06c6448c6bd35920bb0902e36e417116;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1f7e88c8aa17cf91b2807d7d99838a07;
    codeobj_06c6448c6bd35920bb0902e36e417116 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_langgreekmodel, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests$packages$chardet$langgreekmodel =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests.packages.chardet.langgreekmodel",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$langgreekmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$chardet$langgreekmodel );
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

    // puts( "in initpip$_vendor$requests$packages$chardet$langgreekmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests$packages$chardet$langgreekmodel = Py_InitModule4(
        "pip._vendor.requests.packages.chardet.langgreekmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests$packages$chardet$langgreekmodel = PyModule_Create( &mdef_pip$_vendor$requests$packages$chardet$langgreekmodel );
#endif

    moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests$packages$chardet$langgreekmodel)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests$packages$chardet$langgreekmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_863a043cd4f4c2bb17369010cc5d8d3b, module_pip$_vendor$requests$packages$chardet$langgreekmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests$packages$chardet$langgreekmodel );

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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_1f7e88c8aa17cf91b2807d7d99838a07;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_515cde36df26fd6f7b9906b26534476f;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_tuple_314709394625831b834265dbf269a905_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_Latin7_CharToOrderMap, tmp_assign_source_5 );
    tmp_assign_source_6 = const_tuple_f1a24a289c33e4ce8cd3d7c4beee6f6a_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_win1253_CharToOrderMap, tmp_assign_source_6 );
    tmp_assign_source_7 = const_tuple_335b990c1cc0f8a22180626502e7512a_tuple;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_GreekLangModel, tmp_assign_source_7 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_06c6448c6bd35920bb0902e36e417116, module_pip$_vendor$requests$packages$chardet$langgreekmodel );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_assign_source_8 = _PyDict_NewPresized( 5 );
    tmp_dict_key_1 = const_str_plain_charToOrderMap;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_Latin7_CharToOrderMap );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin7_CharToOrderMap );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Latin7_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_precedenceMatrix;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_GreekLangModel );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GreekLangModel );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GreekLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_3 = const_float_0_982851;
    PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_4 = Py_False;
    PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_charsetName;
    tmp_dict_value_5 = const_str_digest_7ca3e7632f1cccef85d1966320dcb68c;
    PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_5, tmp_dict_value_5 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel, tmp_assign_source_8 );
    tmp_assign_source_9 = _PyDict_NewPresized( 5 );
    tmp_dict_key_6 = const_str_plain_charToOrderMap;
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_win1253_CharToOrderMap );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win1253_CharToOrderMap );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win1253_CharToOrderMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_precedenceMatrix;
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_GreekLangModel );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GreekLangModel );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GreekLangModel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_mTypicalPositiveRatio;
    tmp_dict_value_8 = const_float_0_982851;
    PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_key_9 = const_str_plain_keepEnglishLetter;
    tmp_dict_value_9 = Py_False;
    PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_key_10 = const_str_plain_charsetName;
    tmp_dict_value_10 = const_str_digest_7718380faed4df7057283e0d1730db81;
    PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_10, tmp_dict_value_10 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$packages$chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel, tmp_assign_source_9 );

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

    return MOD_RETURN_VALUE( module_pip$_vendor$requests$packages$chardet$langgreekmodel );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
