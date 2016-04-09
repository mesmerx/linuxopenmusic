// Generated code for Python source for module 'pip.req'
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

// The _module_pip$req is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$req;
PyDictObject *moduledict_pip$req;

// The module constants used
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_Requirements;
extern PyObject *const_str_plain_parse_requirements;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_InstallRequirement;
extern PyObject *const_str_plain_req_install;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_digest_c4f824d86a32d8b35189248194ff7eb0_list;
static PyObject *const_tuple_str_plain_RequirementSet_str_plain_Requirements_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_c0738af5e840c8be1c2e73773ab92b81;
static PyObject *const_tuple_str_plain_parse_requirements_tuple;
static PyObject *const_str_digest_c4f824d86a32d8b35189248194ff7eb0;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_e1c5bd967e7379897c8b51d4d14882ef;
extern PyObject *const_tuple_str_plain_InstallRequirement_tuple;
extern PyObject *const_str_plain_req;
extern PyObject *const_str_plain_RequirementSet;
extern PyObject *const_str_plain_req_file;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_req_set;
static PyObject *const_list_d3f7f6da45db97d01c2eb416941725d9_list;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_c4f824d86a32d8b35189248194ff7eb0_list = PyList_New( 1 );
    const_str_digest_c4f824d86a32d8b35189248194ff7eb0 = UNSTREAM_STRING( &constant_bin[ 530971 ], 40, 0 );
    PyList_SET_ITEM( const_list_str_digest_c4f824d86a32d8b35189248194ff7eb0_list, 0, const_str_digest_c4f824d86a32d8b35189248194ff7eb0 ); Py_INCREF( const_str_digest_c4f824d86a32d8b35189248194ff7eb0 );
    const_tuple_str_plain_RequirementSet_str_plain_Requirements_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RequirementSet_str_plain_Requirements_tuple, 0, const_str_plain_RequirementSet ); Py_INCREF( const_str_plain_RequirementSet );
    PyTuple_SET_ITEM( const_tuple_str_plain_RequirementSet_str_plain_Requirements_tuple, 1, const_str_plain_Requirements ); Py_INCREF( const_str_plain_Requirements );
    const_tuple_str_plain_parse_requirements_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_parse_requirements_tuple, 0, const_str_plain_parse_requirements ); Py_INCREF( const_str_plain_parse_requirements );
    const_str_digest_e1c5bd967e7379897c8b51d4d14882ef = UNSTREAM_STRING( &constant_bin[ 531011 ], 52, 0 );
    const_list_d3f7f6da45db97d01c2eb416941725d9_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_d3f7f6da45db97d01c2eb416941725d9_list, 0, const_str_plain_RequirementSet ); Py_INCREF( const_str_plain_RequirementSet );
    PyList_SET_ITEM( const_list_d3f7f6da45db97d01c2eb416941725d9_list, 1, const_str_plain_Requirements ); Py_INCREF( const_str_plain_Requirements );
    PyList_SET_ITEM( const_list_d3f7f6da45db97d01c2eb416941725d9_list, 2, const_str_plain_InstallRequirement ); Py_INCREF( const_str_plain_InstallRequirement );
    PyList_SET_ITEM( const_list_d3f7f6da45db97d01c2eb416941725d9_list, 3, const_str_plain_parse_requirements ); Py_INCREF( const_str_plain_parse_requirements );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$req( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d7e80a64cf0c8b1e36bed587685d41cc;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e1c5bd967e7379897c8b51d4d14882ef;
    codeobj_d7e80a64cf0c8b1e36bed587685d41cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_req, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$req =
{
    PyModuleDef_HEAD_INIT,
    "pip.req",   /* m_name */
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

MOD_INIT_DECL( pip$req )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$req );
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

    // puts( "in initpip$req" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$req = Py_InitModule4(
        "pip.req",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$req = PyModule_Create( &mdef_pip$req );
#endif

    moduledict_pip$req = (PyDictObject *)((PyModuleObject *)module_pip$req)->md_dict;

    CHECK_OBJECT( module_pip$req );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c0738af5e840c8be1c2e73773ab92b81, module_pip$req );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$req );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e1c5bd967e7379897c8b51d4d14882ef;
    UPDATE_STRING_DICT0( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_c4f824d86a32d8b35189248194ff7eb0_list );
    UPDATE_STRING_DICT1( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_c0738af5e840c8be1c2e73773ab92b81;
    UPDATE_STRING_DICT0( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_d7e80a64cf0c8b1e36bed587685d41cc, module_pip$req );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$req)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_req_install, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_InstallRequirement_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_InstallRequirement );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain_InstallRequirement, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$req)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_req_set, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_RequirementSet_str_plain_Requirements_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_RequirementSet );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain_RequirementSet, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$req)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_req_set, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_RequirementSet_str_plain_Requirements_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Requirements );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain_Requirements, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$req)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_req_file, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_parse_requirements_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_parse_requirements );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain_parse_requirements, tmp_assign_source_10 );

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
    tmp_assign_source_11 = LIST_COPY( const_list_d3f7f6da45db97d01c2eb416941725d9_list );
    UPDATE_STRING_DICT1( moduledict_pip$req, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );

    return MOD_RETURN_VALUE( module_pip$req );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
