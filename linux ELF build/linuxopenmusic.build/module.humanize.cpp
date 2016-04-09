// Generated code for Python source for module 'humanize'
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

// The _module_humanize is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_humanize;
PyDictObject *moduledict_humanize;

// The module constants used
extern PyObject *const_str_plain_intword;
extern PyObject *const_str_digest_887deb79bc82ec959821f67c37b2c896;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_naturaltime;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_intcomma;
extern PyObject *const_str_digest_c9e0dcb6b7d55176d8c98b53e30de559;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_naturalday;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_tuple_str_plain_activate_str_plain_deactivate_tuple;
extern PyObject *const_str_plain_naturaldate;
extern PyObject *const_str_plain_fractional;
extern PyObject *const_str_plain_apnumber;
extern PyObject *const_str_digest_7748faf986e776a7459312f75cd8f388;
extern PyObject *const_str_plain_ordinal;
static PyObject *const_str_digest_dd7dfd042da1f4d6324a1ce42f78e77d;
extern PyObject *const_str_plain_deactivate;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_int_0_int_pos_4_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_0254f0ddaeedb0eb902972fe4d7a3fdc;
extern PyObject *const_str_plain_activate;
extern PyObject *const_str_plain_VERSION;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_naturaldelta;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_digest_cc0a7262cfce651cdc1b3b8c5139d8d6;
static PyObject *const_list_str_digest_0254f0ddaeedb0eb902972fe4d7a3fdc_list;
extern PyObject *const_str_plain_humanize;
static PyObject *const_list_c4b95b01de22992a270cf5e2a40dd616_list;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_naturalsize;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_activate_str_plain_deactivate_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_activate_str_plain_deactivate_tuple, 0, const_str_plain_activate ); Py_INCREF( const_str_plain_activate );
    PyTuple_SET_ITEM( const_tuple_str_plain_activate_str_plain_deactivate_tuple, 1, const_str_plain_deactivate ); Py_INCREF( const_str_plain_deactivate );
    const_str_digest_dd7dfd042da1f4d6324a1ce42f78e77d = UNSTREAM_STRING( &constant_bin[ 144534 ], 53, 0 );
    const_tuple_int_0_int_pos_4_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_4_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_4_tuple, 1, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_str_digest_0254f0ddaeedb0eb902972fe4d7a3fdc = UNSTREAM_STRING( &constant_bin[ 144534 ], 41, 0 );
    const_list_str_digest_0254f0ddaeedb0eb902972fe4d7a3fdc_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_0254f0ddaeedb0eb902972fe4d7a3fdc_list, 0, const_str_digest_0254f0ddaeedb0eb902972fe4d7a3fdc ); Py_INCREF( const_str_digest_0254f0ddaeedb0eb902972fe4d7a3fdc );
    const_list_c4b95b01de22992a270cf5e2a40dd616_list = PyList_New( 13 );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 0, const_str_plain_VERSION ); Py_INCREF( const_str_plain_VERSION );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 1, const_str_plain_naturalday ); Py_INCREF( const_str_plain_naturalday );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 2, const_str_plain_naturaltime ); Py_INCREF( const_str_plain_naturaltime );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 3, const_str_plain_ordinal ); Py_INCREF( const_str_plain_ordinal );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 4, const_str_plain_intword ); Py_INCREF( const_str_plain_intword );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 5, const_str_plain_naturaldelta ); Py_INCREF( const_str_plain_naturaldelta );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 6, const_str_plain_intcomma ); Py_INCREF( const_str_plain_intcomma );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 7, const_str_plain_apnumber ); Py_INCREF( const_str_plain_apnumber );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 8, const_str_plain_fractional ); Py_INCREF( const_str_plain_fractional );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 9, const_str_plain_naturalsize ); Py_INCREF( const_str_plain_naturalsize );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 10, const_str_plain_activate ); Py_INCREF( const_str_plain_activate );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 11, const_str_plain_deactivate ); Py_INCREF( const_str_plain_deactivate );
    PyList_SET_ITEM( const_list_c4b95b01de22992a270cf5e2a40dd616_list, 12, const_str_plain_naturaldate ); Py_INCREF( const_str_plain_naturaldate );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_humanize( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4508b11427cbcb5eb76acc895174b174;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_dd7dfd042da1f4d6324a1ce42f78e77d;
    codeobj_4508b11427cbcb5eb76acc895174b174 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_humanize, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_humanize =
{
    PyModuleDef_HEAD_INIT,
    "humanize",   /* m_name */
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

MOD_INIT_DECL( humanize )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_humanize );
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

    // puts( "in inithumanize" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_humanize = Py_InitModule4(
        "humanize",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_humanize = PyModule_Create( &mdef_humanize );
#endif

    moduledict_humanize = (PyDictObject *)((PyModuleObject *)module_humanize)->md_dict;

    CHECK_OBJECT( module_humanize );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_humanize, module_humanize );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_humanize );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_humanize, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_dd7dfd042da1f4d6324a1ce42f78e77d;
    UPDATE_STRING_DICT0( moduledict_humanize, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_0254f0ddaeedb0eb902972fe4d7a3fdc_list );
    UPDATE_STRING_DICT1( moduledict_humanize, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_humanize, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_humanize;
    UPDATE_STRING_DICT0( moduledict_humanize, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_tuple_int_0_int_pos_4_tuple;
    UPDATE_STRING_DICT0( moduledict_humanize, (Nuitka_StringObject *)const_str_plain_VERSION, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_4508b11427cbcb5eb76acc895174b174, module_humanize );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_humanize)->md_dict;
    frame_module->f_lineno = 3;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_c9e0dcb6b7d55176d8c98b53e30de559, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_humanize, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_2 = ((PyModuleObject *)module_humanize)->md_dict;
    frame_module->f_lineno = 4;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_digest_cc0a7262cfce651cdc1b3b8c5139d8d6, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_humanize, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_3 = ((PyModuleObject *)module_humanize)->md_dict;
    frame_module->f_lineno = 5;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_digest_7748faf986e776a7459312f75cd8f388, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_humanize, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_4 = ((PyModuleObject *)module_humanize)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_887deb79bc82ec959821f67c37b2c896, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_activate_str_plain_deactivate_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_activate );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_humanize, (Nuitka_StringObject *)const_str_plain_activate, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_humanize)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_887deb79bc82ec959821f67c37b2c896, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_activate_str_plain_deactivate_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_deactivate );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_humanize, (Nuitka_StringObject *)const_str_plain_deactivate, tmp_assign_source_8 );

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
    tmp_assign_source_9 = LIST_COPY( const_list_c4b95b01de22992a270cf5e2a40dd616_list );
    UPDATE_STRING_DICT1( moduledict_humanize, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_humanize );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
