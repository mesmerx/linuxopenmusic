// Generated code for Python source for module 'transliterate.defaults'
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

// The _module_transliterate$defaults is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_transliterate$defaults;
PyDictObject *moduledict_transliterate$defaults;

// The module constants used
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_digest_bd897b058b0b1f938a2fc78a36316e48;
static PyObject *const_tuple_str_plain_contrib_str_plain_apps_tuple;
static PyObject *const_tuple_str_plain_contrib_str_plain_languages_tuple;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_d3fdb420a561b01f5352bf2746532d68_tuple;
static PyObject *const_str_plain_apps;
extern PyObject *const_str_plain_LANGUAGES_DIR;
static PyObject *const_str_plain_contrib;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_translit_language_pack;
static PyObject *const_str_digest_3622381e51680f7a96b2fa39272f052c;
extern PyObject *const_str_digest_78ae7bc030713b89759b3c455f875343;
static PyObject *const_str_plain_languages;
static PyObject *const_str_digest_b7c12d0a94fee61d4eb448d586e5a6f1;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_plain_transliterate;
extern PyObject *const_str_plain_LANGUAGE_PACK_MODULE_NAME;
static PyObject *const_str_plain_CONTRIB_DIR;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_digest_761192e6697a2b550a773b7759e45afa;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_LANGUAGE_DETECTION_MAX_NUM_KEYWORDS;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_contrib_str_plain_apps_tuple = PyTuple_New( 2 );
    const_str_plain_contrib = UNSTREAM_STRING( &constant_bin[ 160423 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_contrib_str_plain_apps_tuple, 0, const_str_plain_contrib ); Py_INCREF( const_str_plain_contrib );
    const_str_plain_apps = UNSTREAM_STRING( &constant_bin[ 60234 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_contrib_str_plain_apps_tuple, 1, const_str_plain_apps ); Py_INCREF( const_str_plain_apps );
    const_tuple_str_plain_contrib_str_plain_languages_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_contrib_str_plain_languages_tuple, 0, const_str_plain_contrib ); Py_INCREF( const_str_plain_contrib );
    const_str_plain_languages = UNSTREAM_STRING( &constant_bin[ 731365 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_contrib_str_plain_languages_tuple, 1, const_str_plain_languages ); Py_INCREF( const_str_plain_languages );
    const_tuple_d3fdb420a561b01f5352bf2746532d68_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d3fdb420a561b01f5352bf2746532d68_tuple, 0, const_str_plain_LANGUAGES_DIR ); Py_INCREF( const_str_plain_LANGUAGES_DIR );
    const_str_plain_CONTRIB_DIR = UNSTREAM_STRING( &constant_bin[ 732485 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_d3fdb420a561b01f5352bf2746532d68_tuple, 1, const_str_plain_CONTRIB_DIR ); Py_INCREF( const_str_plain_CONTRIB_DIR );
    PyTuple_SET_ITEM( const_tuple_d3fdb420a561b01f5352bf2746532d68_tuple, 2, const_str_plain_LANGUAGE_PACK_MODULE_NAME ); Py_INCREF( const_str_plain_LANGUAGE_PACK_MODULE_NAME );
    PyTuple_SET_ITEM( const_tuple_d3fdb420a561b01f5352bf2746532d68_tuple, 3, const_str_plain_LANGUAGE_DETECTION_MAX_NUM_KEYWORDS ); Py_INCREF( const_str_plain_LANGUAGE_DETECTION_MAX_NUM_KEYWORDS );
    PyTuple_SET_ITEM( const_tuple_d3fdb420a561b01f5352bf2746532d68_tuple, 4, const_str_plain_DEBUG ); Py_INCREF( const_str_plain_DEBUG );
    const_str_plain_translit_language_pack = UNSTREAM_STRING( &constant_bin[ 732496 ], 22, 1 );
    const_str_digest_3622381e51680f7a96b2fa39272f052c = UNSTREAM_STRING( &constant_bin[ 732518 ], 58, 0 );
    const_str_digest_b7c12d0a94fee61d4eb448d586e5a6f1 = UNSTREAM_STRING( &constant_bin[ 732576 ], 22, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_transliterate$defaults( void )
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
static struct PyModuleDef mdef_transliterate$defaults =
{
    PyModuleDef_HEAD_INIT,
    "transliterate.defaults",   /* m_name */
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

MOD_INIT_DECL( transliterate$defaults )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_transliterate$defaults );
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

    // puts( "in inittransliterate$defaults" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_transliterate$defaults = Py_InitModule4(
        "transliterate.defaults",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_transliterate$defaults = PyModule_Create( &mdef_transliterate$defaults );
#endif

    moduledict_transliterate$defaults = (PyDictObject *)((PyModuleObject *)module_transliterate$defaults)->md_dict;

    CHECK_OBJECT( module_transliterate$defaults );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b7c12d0a94fee61d4eb448d586e5a6f1, module_transliterate$defaults );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_transliterate$defaults );

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
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3622381e51680f7a96b2fa39272f052c;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_transliterate;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_b7c12d0a94fee61d4eb448d586e5a6f1;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_78ae7bc030713b89759b3c455f875343;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_761192e6697a2b550a773b7759e45afa;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_bd897b058b0b1f938a2fc78a36316e48;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_tuple_d3fdb420a561b01f5352bf2746532d68_tuple;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_tuple_str_plain_contrib_str_plain_languages_tuple;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain_LANGUAGES_DIR, tmp_assign_source_10 );
    tmp_assign_source_11 = const_tuple_str_plain_contrib_str_plain_apps_tuple;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain_CONTRIB_DIR, tmp_assign_source_11 );
    tmp_assign_source_12 = const_str_plain_translit_language_pack;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain_LANGUAGE_PACK_MODULE_NAME, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain_LANGUAGE_DETECTION_MAX_NUM_KEYWORDS, tmp_assign_source_13 );
    tmp_assign_source_14 = Py_False;
    UPDATE_STRING_DICT0( moduledict_transliterate$defaults, (Nuitka_StringObject *)const_str_plain_DEBUG, tmp_assign_source_14 );

    return MOD_RETURN_VALUE( module_transliterate$defaults );
}
