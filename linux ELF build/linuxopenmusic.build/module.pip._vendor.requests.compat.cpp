// Generated code for Python source for module 'pip._vendor.requests.compat'
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

// The _module_pip$_vendor$requests$compat is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests$compat;
PyDictObject *moduledict_pip$_vendor$requests$compat;

// The module constants used
static PyObject *const_str_plain_is_py3;
static PyObject *const_str_digest_c212703b77f24e2fb0e0d52b69f340a3;
extern PyObject *const_str_plain_cookielib;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_getproxies;
extern PyObject *const_str_plain_quote;
extern PyObject *const_str_plain_simplejson;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_urllib;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_urlparse;
static PyObject *const_str_digest_69a39ea0909b53dd224dfdc9fdc598a3;
extern PyObject *const_tuple_str_plain_StringIO_tuple;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_StringIO;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_parse_http_list;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_plain_builtin_str;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple;
extern PyObject *const_str_plain_urlsplit;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_digest_faf5973379f42e9b5528565b323f20e0;
extern PyObject *const_tuple_str_plain_chardet_tuple;
extern PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
extern PyObject *const_tuple_str_plain_cookiejar_tuple;
extern PyObject *const_str_plain_unquote_plus;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_urldefrag;
extern PyObject *const_str_digest_59bc9c95777e64e4720c3af0837aec42;
extern PyObject *const_str_plain_json;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_574a157748715665bc83c6cc19cc693b;
extern PyObject *const_str_plain_Cookie;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_urlencode;
extern PyObject *const_str_plain_urlunparse;
extern PyObject *const_str_plain_version_info;
static PyObject *const_tuple_str_plain_Morsel_tuple;
extern PyObject *const_str_plain_cookiejar;
extern PyObject *const_str_plain_OrderedDict;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_urllib2;
extern PyObject *const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e;
extern PyObject *const_tuple_str_plain_parse_http_list_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_chardet;
static PyObject *const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple;
extern PyObject *const_tuple_str_plain_OrderedDict_tuple;
static PyObject *const_str_plain_numeric_types;
static PyObject *const_str_plain__ver;
extern PyObject *const_str_plain_Morsel;
static PyObject *const_str_digest_27dc36e07483239abb04a7b1394ae9e9;
extern PyObject *const_str_plain_is_py2;
extern PyObject *const_str_plain_unquote;
static PyObject *const_tuple_5286d1aca9c735d3365d3e2e3831fb81_tuple;
extern PyObject *const_str_plain_urljoin;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_proxy_bypass;
extern PyObject *const_str_plain_quote_plus;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_is_py3 = UNSTREAM_STRING( &constant_bin[ 440930 ], 6, 1 );
    const_str_digest_c212703b77f24e2fb0e0d52b69f340a3 = UNSTREAM_STRING( &constant_bin[ 184004 ], 38, 0 );
    const_str_digest_69a39ea0909b53dd224dfdc9fdc598a3 = UNSTREAM_STRING( &constant_bin[ 440936 ], 14, 0 );
    const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 0, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 1, const_str_plain_urlunparse ); Py_INCREF( const_str_plain_urlunparse );
    PyTuple_SET_ITEM( const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 2, const_str_plain_urljoin ); Py_INCREF( const_str_plain_urljoin );
    PyTuple_SET_ITEM( const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 3, const_str_plain_urlsplit ); Py_INCREF( const_str_plain_urlsplit );
    PyTuple_SET_ITEM( const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 4, const_str_plain_urldefrag ); Py_INCREF( const_str_plain_urldefrag );
    const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 0, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 1, const_str_plain_urlunparse ); Py_INCREF( const_str_plain_urlunparse );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 2, const_str_plain_urljoin ); Py_INCREF( const_str_plain_urljoin );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 3, const_str_plain_urlsplit ); Py_INCREF( const_str_plain_urlsplit );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 4, const_str_plain_urlencode ); Py_INCREF( const_str_plain_urlencode );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 5, const_str_plain_quote ); Py_INCREF( const_str_plain_quote );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 6, const_str_plain_unquote ); Py_INCREF( const_str_plain_unquote );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 7, const_str_plain_quote_plus ); Py_INCREF( const_str_plain_quote_plus );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 8, const_str_plain_unquote_plus ); Py_INCREF( const_str_plain_unquote_plus );
    PyTuple_SET_ITEM( const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 9, const_str_plain_urldefrag ); Py_INCREF( const_str_plain_urldefrag );
    const_str_digest_574a157748715665bc83c6cc19cc693b = UNSTREAM_STRING( &constant_bin[ 440950 ], 63, 0 );
    const_tuple_str_plain_Morsel_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Morsel_tuple, 0, const_str_plain_Morsel ); Py_INCREF( const_str_plain_Morsel );
    const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, 0, const_str_plain_quote ); Py_INCREF( const_str_plain_quote );
    PyTuple_SET_ITEM( const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, 1, const_str_plain_unquote ); Py_INCREF( const_str_plain_unquote );
    PyTuple_SET_ITEM( const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, 2, const_str_plain_quote_plus ); Py_INCREF( const_str_plain_quote_plus );
    PyTuple_SET_ITEM( const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, 3, const_str_plain_unquote_plus ); Py_INCREF( const_str_plain_unquote_plus );
    PyTuple_SET_ITEM( const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, 4, const_str_plain_urlencode ); Py_INCREF( const_str_plain_urlencode );
    PyTuple_SET_ITEM( const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, 5, const_str_plain_getproxies ); Py_INCREF( const_str_plain_getproxies );
    PyTuple_SET_ITEM( const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, 6, const_str_plain_proxy_bypass ); Py_INCREF( const_str_plain_proxy_bypass );
    const_str_plain_numeric_types = UNSTREAM_STRING( &constant_bin[ 441013 ], 13, 1 );
    const_str_plain__ver = UNSTREAM_STRING( &constant_bin[ 4570 ], 4, 1 );
    const_str_digest_27dc36e07483239abb04a7b1394ae9e9 = UNSTREAM_STRING( &constant_bin[ 441026 ], 27, 0 );
    const_tuple_5286d1aca9c735d3365d3e2e3831fb81_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_5286d1aca9c735d3365d3e2e3831fb81_tuple, 0, const_str_plain_parse_http_list ); Py_INCREF( const_str_plain_parse_http_list );
    PyTuple_SET_ITEM( const_tuple_5286d1aca9c735d3365d3e2e3831fb81_tuple, 1, const_str_plain_getproxies ); Py_INCREF( const_str_plain_getproxies );
    PyTuple_SET_ITEM( const_tuple_5286d1aca9c735d3365d3e2e3831fb81_tuple, 2, const_str_plain_proxy_bypass ); Py_INCREF( const_str_plain_proxy_bypass );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests$compat( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4159c559c649db1b4ba3b80311e10aa0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_574a157748715665bc83c6cc19cc693b;
    codeobj_4159c559c649db1b4ba3b80311e10aa0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compat, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests$compat =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests.compat",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests$compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests$compat );
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

    // puts( "in initpip$_vendor$requests$compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests$compat = Py_InitModule4(
        "pip._vendor.requests.compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests$compat = PyModule_Create( &mdef_pip$_vendor$requests$compat );
#endif

    moduledict_pip$_vendor$requests$compat = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests$compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_27dc36e07483239abb04a7b1394ae9e9, module_pip$_vendor$requests$compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests$compat );

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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_globals_22;
    PyObject *tmp_import_globals_23;
    PyObject *tmp_import_globals_24;
    PyObject *tmp_import_globals_25;
    PyObject *tmp_import_globals_26;
    PyObject *tmp_import_globals_27;
    PyObject *tmp_import_globals_28;
    PyObject *tmp_import_globals_29;
    PyObject *tmp_import_globals_30;
    PyObject *tmp_import_globals_31;
    PyObject *tmp_import_globals_32;
    PyObject *tmp_import_globals_33;
    PyObject *tmp_import_globals_34;
    PyObject *tmp_import_globals_35;
    PyObject *tmp_import_globals_36;
    PyObject *tmp_import_globals_37;
    PyObject *tmp_import_globals_38;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_69a39ea0909b53dd224dfdc9fdc598a3;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_574a157748715665bc83c6cc19cc693b;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_4159c559c649db1b4ba3b80311e10aa0, module_pip$_vendor$requests$compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_packages, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_chardet_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_chardet );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_chardet, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain__ver, tmp_assign_source_7 );
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain__ver );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ver );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ver" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_8 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_is_py2, tmp_assign_source_8 );
    tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain__ver );

    if (unlikely( tmp_subscribed_name_2 == NULL ))
    {
        tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ver );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ver" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_3;
    tmp_assign_source_9 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_is_py3, tmp_assign_source_9 );
    // Tried code:
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 25;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_simplejson, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_10 );
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
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_ImportError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_SyntaxError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 26;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 29;
    tmp_assign_source_11 = IMPORT_MODULE( const_str_plain_json, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_11 );
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
    NUITKA_CANNOT_GET_HERE( pip$_vendor$requests$compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_is_py2 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_py2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_5 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_5, tmp_import_globals_5, const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_quote );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_quote, tmp_assign_source_12 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_6, tmp_import_globals_6, const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unquote );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_unquote, tmp_assign_source_13 );
    tmp_import_globals_7 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_7, tmp_import_globals_7, const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_quote_plus );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_quote_plus, tmp_assign_source_14 );
    tmp_import_globals_8 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_8, tmp_import_globals_8, const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_unquote_plus );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_unquote_plus, tmp_assign_source_15 );
    tmp_import_globals_9 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_9, tmp_import_globals_9, const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_urlencode );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_16 );
    tmp_import_globals_10 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_10, tmp_import_globals_10, const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_getproxies );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_getproxies, tmp_assign_source_17 );
    tmp_import_globals_11 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_urllib, tmp_import_globals_11, tmp_import_globals_11, const_tuple_4efa1b2d27dfd0414f007f422718ae23_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_proxy_bypass );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_proxy_bypass, tmp_assign_source_18 );
    tmp_import_globals_12 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 37;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_urlparse, tmp_import_globals_12, tmp_import_globals_12, const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_urlparse );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_19 );
    tmp_import_globals_13 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 37;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_urlparse, tmp_import_globals_13, tmp_import_globals_13, const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_urlunparse );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urlunparse, tmp_assign_source_20 );
    tmp_import_globals_14 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 37;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_urlparse, tmp_import_globals_14, tmp_import_globals_14, const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_urljoin );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_21 );
    tmp_import_globals_15 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 37;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_urlparse, tmp_import_globals_15, tmp_import_globals_15, const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_urlsplit );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urlsplit, tmp_assign_source_22 );
    tmp_import_globals_16 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 37;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_urlparse, tmp_import_globals_16, tmp_import_globals_16, const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_urldefrag );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urldefrag, tmp_assign_source_23 );
    tmp_import_globals_17 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 38;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_urllib2, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_parse_http_list_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_parse_http_list );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_parse_http_list, tmp_assign_source_24 );
    tmp_import_globals_18 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 39;
    tmp_assign_source_25 = IMPORT_MODULE( const_str_plain_cookielib, tmp_import_globals_18, tmp_import_globals_18, Py_None, const_int_0 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_25 );
    tmp_import_globals_19 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 40;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_Cookie, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_plain_Morsel_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_Morsel );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_Morsel, tmp_assign_source_26 );
    tmp_import_globals_20 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 41;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_StringIO, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_plain_StringIO_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_27 );
    tmp_import_globals_21 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 42;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_c212703b77f24e2fb0e0d52b69f340a3, tmp_import_globals_21, tmp_import_globals_21, const_tuple_str_plain_OrderedDict_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_OrderedDict );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_28 );
    tmp_assign_source_29 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_assign_source_29 == NULL ))
    {
        tmp_assign_source_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_assign_source_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_builtin_str, tmp_assign_source_29 );
    tmp_assign_source_30 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_assign_source_30 == NULL ))
    {
        tmp_assign_source_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_30 );
    tmp_assign_source_31 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_assign_source_31 == NULL ))
    {
        tmp_assign_source_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_assign_source_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_31 );
    tmp_assign_source_32 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_assign_source_32 == NULL ))
    {
        tmp_assign_source_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_assign_source_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_32 );
    tmp_assign_source_33 = PyTuple_New( 3 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_33 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "long" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 2, tmp_tuple_element_2 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_numeric_types, tmp_assign_source_33 );
    goto branch_end_2;
    branch_no_2:;
    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_is_py3 );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py3 );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_py3" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_import_globals_22 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_22, tmp_import_globals_22, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_urlparse );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_34 );
    tmp_import_globals_23 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_23, tmp_import_globals_23, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_urlunparse );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urlunparse, tmp_assign_source_35 );
    tmp_import_globals_24 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_24, tmp_import_globals_24, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_urljoin );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_36 );
    tmp_import_globals_25 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_25, tmp_import_globals_25, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_urlsplit );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urlsplit, tmp_assign_source_37 );
    tmp_import_globals_26 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_26, tmp_import_globals_26, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_urlencode );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_38 );
    tmp_import_globals_27 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_27, tmp_import_globals_27, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_quote );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_quote, tmp_assign_source_39 );
    tmp_import_globals_28 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_24 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_28, tmp_import_globals_28, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_unquote );
    Py_DECREF( tmp_import_name_from_24 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_unquote, tmp_assign_source_40 );
    tmp_import_globals_29 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_25 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_29, tmp_import_globals_29, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_quote_plus );
    Py_DECREF( tmp_import_name_from_25 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_quote_plus, tmp_assign_source_41 );
    tmp_import_globals_30 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_26 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_30, tmp_import_globals_30, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_unquote_plus );
    Py_DECREF( tmp_import_name_from_26 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_unquote_plus, tmp_assign_source_42 );
    tmp_import_globals_31 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 51;
    tmp_import_name_from_27 = IMPORT_MODULE( const_str_digest_04991ea695faff4a76e4efb6a8a8593f, tmp_import_globals_31, tmp_import_globals_31, const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, const_int_0 );
    if ( tmp_import_name_from_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_urldefrag );
    Py_DECREF( tmp_import_name_from_27 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_urldefrag, tmp_assign_source_43 );
    tmp_import_globals_32 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 52;
    tmp_import_name_from_28 = IMPORT_MODULE( const_str_digest_59bc9c95777e64e4720c3af0837aec42, tmp_import_globals_32, tmp_import_globals_32, const_tuple_5286d1aca9c735d3365d3e2e3831fb81_tuple, const_int_0 );
    if ( tmp_import_name_from_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_parse_http_list );
    Py_DECREF( tmp_import_name_from_28 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_parse_http_list, tmp_assign_source_44 );
    tmp_import_globals_33 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 52;
    tmp_import_name_from_29 = IMPORT_MODULE( const_str_digest_59bc9c95777e64e4720c3af0837aec42, tmp_import_globals_33, tmp_import_globals_33, const_tuple_5286d1aca9c735d3365d3e2e3831fb81_tuple, const_int_0 );
    if ( tmp_import_name_from_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_getproxies );
    Py_DECREF( tmp_import_name_from_29 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_getproxies, tmp_assign_source_45 );
    tmp_import_globals_34 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 52;
    tmp_import_name_from_30 = IMPORT_MODULE( const_str_digest_59bc9c95777e64e4720c3af0837aec42, tmp_import_globals_34, tmp_import_globals_34, const_tuple_5286d1aca9c735d3365d3e2e3831fb81_tuple, const_int_0 );
    if ( tmp_import_name_from_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_proxy_bypass );
    Py_DECREF( tmp_import_name_from_30 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_proxy_bypass, tmp_assign_source_46 );
    tmp_import_globals_35 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 53;
    tmp_import_name_from_31 = IMPORT_MODULE( const_str_plain_http, tmp_import_globals_35, tmp_import_globals_35, const_tuple_str_plain_cookiejar_tuple, const_int_0 );
    if ( tmp_import_name_from_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_cookiejar );
    Py_DECREF( tmp_import_name_from_31 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_47 );
    tmp_import_globals_36 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 54;
    tmp_import_name_from_32 = IMPORT_MODULE( const_str_digest_faf5973379f42e9b5528565b323f20e0, tmp_import_globals_36, tmp_import_globals_36, const_tuple_str_plain_Morsel_tuple, const_int_0 );
    if ( tmp_import_name_from_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_Morsel );
    Py_DECREF( tmp_import_name_from_32 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_Morsel, tmp_assign_source_48 );
    tmp_import_globals_37 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 55;
    tmp_import_name_from_33 = IMPORT_MODULE( const_str_plain_io, tmp_import_globals_37, tmp_import_globals_37, const_tuple_str_plain_StringIO_tuple, const_int_0 );
    if ( tmp_import_name_from_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_33 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_49 );
    tmp_import_globals_38 = ((PyModuleObject *)module_pip$_vendor$requests$compat)->md_dict;
    frame_module->f_lineno = 56;
    tmp_import_name_from_34 = IMPORT_MODULE( const_str_plain_collections, tmp_import_globals_38, tmp_import_globals_38, const_tuple_str_plain_OrderedDict_tuple, const_int_0 );
    if ( tmp_import_name_from_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_OrderedDict );
    Py_DECREF( tmp_import_name_from_34 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_50 );
    tmp_assign_source_51 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_assign_source_51 == NULL ))
    {
        tmp_assign_source_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_assign_source_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_builtin_str, tmp_assign_source_51 );
    tmp_assign_source_52 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_assign_source_52 == NULL ))
    {
        tmp_assign_source_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_assign_source_52 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_52 );
    tmp_assign_source_53 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_assign_source_53 == NULL ))
    {
        tmp_assign_source_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_assign_source_53 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_53 );
    tmp_assign_source_54 = PyTuple_New( 2 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_54 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_54, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_54 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_54, 1, tmp_tuple_element_3 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_54 );
    tmp_assign_source_55 = PyTuple_New( 2 );
    tmp_tuple_element_4 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_4 != NULL );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_55, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_tuple_element_4 != NULL );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_55, 1, tmp_tuple_element_4 );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$compat, (Nuitka_StringObject *)const_str_plain_numeric_types, tmp_assign_source_55 );
    branch_no_3:;
    branch_end_2:;

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

    return MOD_RETURN_VALUE( module_pip$_vendor$requests$compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
