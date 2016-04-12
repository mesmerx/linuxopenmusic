// Generated code for Python source for module 'pip._vendor.requests.status_codes'
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

// The _module_pip$_vendor$requests$status_codes is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$requests$status_codes;
PyDictObject *moduledict_pip$_vendor$requests$status_codes;

// The module constants used
extern PyObject *const_str_plain_status_codes;
static PyObject *const_tuple_str_plain_LookupDict_tuple;
static PyObject *const_str_plain__codes;
extern PyObject *const_str_plain___package__;
static PyObject *const_dict_19730b058f28080932defca1165e072e;
static PyObject *const_str_digest_edc503ce8640402b515eac9b4be2e49c;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_upper;
extern PyObject *const_tuple_str_chr_92_tuple;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_codes;
extern PyObject *const_str_plain_items;
static PyObject *const_str_digest_7407a472cb7f92da9dfbd02c8e685bfe;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e;
static PyObject *const_dict_38252060f20256dc080a28c7e1fb8512;
extern PyObject *const_str_plain_LookupDict;
extern PyObject *const_str_plain_structures;
extern PyObject *const_str_plain_title;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_plain_titles;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_chr_92;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_LookupDict_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LookupDict_tuple, 0, const_str_plain_LookupDict ); Py_INCREF( const_str_plain_LookupDict );
    const_str_plain__codes = UNSTREAM_STRING( &constant_bin[ 201532 ], 6, 1 );
    const_dict_19730b058f28080932defca1165e072e = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 495296 ], 2320 );
    const_str_digest_edc503ce8640402b515eac9b4be2e49c = UNSTREAM_STRING( &constant_bin[ 497616 ], 69, 0 );
    const_str_digest_7407a472cb7f92da9dfbd02c8e685bfe = UNSTREAM_STRING( &constant_bin[ 497685 ], 33, 0 );
    const_dict_38252060f20256dc080a28c7e1fb8512 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_38252060f20256dc080a28c7e1fb8512, const_str_plain_name, const_str_plain_status_codes );
    assert( PyDict_Size( const_dict_38252060f20256dc080a28c7e1fb8512 ) == 1 );
    const_str_plain_titles = UNSTREAM_STRING( &constant_bin[ 497718 ], 6, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$requests$status_codes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fc398c3ce42402f17822919035abca66;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_edc503ce8640402b515eac9b4be2e49c;
    codeobj_fc398c3ce42402f17822919035abca66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_status_codes, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$requests$status_codes =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.requests.status_codes",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$requests$status_codes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$requests$status_codes );
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

    // puts( "in initpip$_vendor$requests$status_codes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$requests$status_codes = Py_InitModule4(
        "pip._vendor.requests.status_codes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$requests$status_codes = PyModule_Create( &mdef_pip$_vendor$requests$status_codes );
#endif

    moduledict_pip$_vendor$requests$status_codes = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$requests$status_codes)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$requests$status_codes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7407a472cb7f92da9dfbd02c8e685bfe, module_pip$_vendor$requests$status_codes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$requests$status_codes );

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
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_attr_2;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_target_2;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_setattr_value_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_edc503ce8640402b515eac9b4be2e49c;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_92068ee7fa29014ac06ffc664a1b4b4e;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_fc398c3ce42402f17822919035abca66, module_pip$_vendor$requests$status_codes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$requests$status_codes)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_structures, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_LookupDict_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_LookupDict );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_LookupDict, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_Copy( const_dict_19730b058f28080932defca1165e072e );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain__codes, tmp_assign_source_6 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_LookupDict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LookupDict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LookupDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_38252060f20256dc080a28c7e1fb8512 );
    frame_module->f_lineno = 84;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_codes, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain__codes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__codes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_items );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 86;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_8;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_module->f_lineno = 86;
            goto try_except_handler_1;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 86;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 86;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_code, tmp_assign_source_13 );
    tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_titles, tmp_assign_source_14 );
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_iter_arg_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_titles );

    if (unlikely( tmp_iter_arg_3 == NULL ))
    {
        tmp_iter_arg_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_titles );
    }

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "titles" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto try_except_handler_1;
    }

    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_1;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_module->f_lineno = 87;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = tmp_for_loop_2__iter_value;

    UPDATE_STRING_DICT0( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_title, tmp_assign_source_17 );
    tmp_setattr_target_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_setattr_target_1 == NULL ))
    {
        tmp_setattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_setattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto try_except_handler_3;
    }

    tmp_setattr_attr_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_title );

    if (unlikely( tmp_setattr_attr_1 == NULL ))
    {
        tmp_setattr_attr_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_title );
    }

    if ( tmp_setattr_attr_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "title" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto try_except_handler_3;
    }

    tmp_setattr_value_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_code );

    if (unlikely( tmp_setattr_value_1 == NULL ))
    {
        tmp_setattr_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_code );
    }

    if ( tmp_setattr_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto try_except_handler_3;
    }

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_3;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_title );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_title );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "title" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_startswith );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto try_except_handler_3;
    }
    frame_module->f_lineno = 89;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_chr_92_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 89;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_setattr_target_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_setattr_target_2 == NULL ))
    {
        tmp_setattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_setattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto try_except_handler_3;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_title );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_title );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "title" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto try_except_handler_3;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_upper );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_3;
    }
    frame_module->f_lineno = 90;
    tmp_setattr_attr_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_setattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_3;
    }
    tmp_setattr_value_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$requests$status_codes, (Nuitka_StringObject *)const_str_plain_code );

    if (unlikely( tmp_setattr_value_2 == NULL ))
    {
        tmp_setattr_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_code );
    }

    if ( tmp_setattr_value_2 == NULL )
    {
        Py_DECREF( tmp_setattr_attr_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto try_except_handler_3;
    }

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2 );
    Py_DECREF( tmp_setattr_attr_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_3;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;


    return MOD_RETURN_VALUE( module_pip$_vendor$requests$status_codes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
