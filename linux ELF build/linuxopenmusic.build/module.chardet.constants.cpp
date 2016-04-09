// Generated code for Python source for module 'chardet.constants'
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

// The _module_chardet$constants is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_chardet$constants;
PyDictObject *moduledict_chardet$constants;

// The module constants used
static PyObject *const_str_digest_0d1828e7deeae9e27bf4a47818d5d840;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_eFoundIt;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_4a5aef251ac9338f10c4a44a27d657cc;
extern PyObject *const_str_plain_chardet;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_eStart;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_eError;
extern PyObject *const_str_plain_eItsMe;
extern PyObject *const_float_0_95;
extern PyObject *const_str_plain_SHORTCUT_THRESHOLD;
extern PyObject *const_str_plain__debug;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_eDetecting;
extern PyObject *const_str_plain_eNotMe;
extern PyObject *const_int_pos_2;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_0d1828e7deeae9e27bf4a47818d5d840 = UNSTREAM_STRING( &constant_bin[ 105444 ], 17, 0 );
    const_str_digest_4a5aef251ac9338f10c4a44a27d657cc = UNSTREAM_STRING( &constant_bin[ 105461 ], 53, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$constants( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$constants =
{
    PyModuleDef_HEAD_INIT,
    "chardet.constants",   /* m_name */
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

MOD_INIT_DECL( chardet$constants )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$constants );
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

    // puts( "in initchardet$constants" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$constants = Py_InitModule4(
        "chardet.constants",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_chardet$constants = PyModule_Create( &mdef_chardet$constants );
#endif

    moduledict_chardet$constants = (PyDictObject *)((PyModuleObject *)module_chardet$constants)->md_dict;

    CHECK_OBJECT( module_chardet$constants );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0d1828e7deeae9e27bf4a47818d5d840, module_chardet$constants );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_chardet$constants );

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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4a5aef251ac9338f10c4a44a27d657cc;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_chardet;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain__debug, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain_eDetecting, tmp_assign_source_6 );
    tmp_assign_source_7 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain_eFoundIt, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain_eNotMe, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain_eStart, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain_eError, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain_eItsMe, tmp_assign_source_11 );
    tmp_assign_source_12 = const_float_0_95;
    UPDATE_STRING_DICT0( moduledict_chardet$constants, (Nuitka_StringObject *)const_str_plain_SHORTCUT_THRESHOLD, tmp_assign_source_12 );

    return MOD_RETURN_VALUE( module_chardet$constants );
}
