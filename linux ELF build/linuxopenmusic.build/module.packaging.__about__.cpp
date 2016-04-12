// Generated code for Python source for module 'packaging.__about__'
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

// The _module_packaging$__about__ is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_packaging$__about__;
PyDictObject *moduledict_packaging$__about__;

// The module constants used
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_digest_983fc705caa3f427e09b821a1e270e4d;
extern PyObject *const_str_digest_05e8c38d628b3aba8abcc5d43ea8d8ea;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain___summary__;
extern PyObject *const_str_plain___about__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_list_b5215a344cdfe40170e16c947ed7b43b_list;
extern PyObject *const_str_digest_d1f7bddd7e62774fa968e54588d63530;
extern PyObject *const_str_plain___email__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_packaging;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___uri__;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain___license__;
static PyObject *const_str_digest_c6f278d0b7555fc30597f57513365033;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_digest_d4542d2880d54a4b54551867fac03d07;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_digest_43f96eca3406fd8074d16bbbe21aef95;
static PyObject *const_str_digest_e102fcc27d439009a0cbc27e7dee5d68;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_digest_7e8039b2a5190b84eaba8e3668438234;
static PyObject *const_str_digest_16f09775d17ec9646e59342677c4d0ea;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c6f278d0b7555fc30597f57513365033 = UNSTREAM_STRING( &constant_bin[ 193350 ], 55, 0 );
    const_str_digest_e102fcc27d439009a0cbc27e7dee5d68 = UNSTREAM_STRING( &constant_bin[ 193405 ], 19, 0 );
    const_str_digest_16f09775d17ec9646e59342677c4d0ea = UNSTREAM_STRING( &constant_bin[ 193424 ], 4, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_packaging$__about__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_83f488c8d294f2f3e6989453298cb5ee;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c6f278d0b7555fc30597f57513365033;
    codeobj_83f488c8d294f2f3e6989453298cb5ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain___about__, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_packaging$__about__ =
{
    PyModuleDef_HEAD_INIT,
    "packaging.__about__",   /* m_name */
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

MOD_INIT_DECL( packaging$__about__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_packaging$__about__ );
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

    // puts( "in initpackaging$__about__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_packaging$__about__ = Py_InitModule4(
        "packaging.__about__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_packaging$__about__ = PyModule_Create( &mdef_packaging$__about__ );
#endif

    moduledict_packaging$__about__ = (PyDictObject *)((PyModuleObject *)module_packaging$__about__)->md_dict;

    CHECK_OBJECT( module_packaging$__about__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e102fcc27d439009a0cbc27e7dee5d68, module_packaging$__about__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_packaging$__about__ );

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
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c6f278d0b7555fc30597f57513365033;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_packaging;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_assign_source_7 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_b5215a344cdfe40170e16c947ed7b43b_list );
    UPDATE_STRING_DICT1( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_plain_packaging;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_983fc705caa3f427e09b821a1e270e4d;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___summary__, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_digest_05e8c38d628b3aba8abcc5d43ea8d8ea;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___uri__, tmp_assign_source_11 );
    tmp_assign_source_12 = const_str_digest_16f09775d17ec9646e59342677c4d0ea;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_12 );
    tmp_assign_source_13 = const_str_digest_7e8039b2a5190b84eaba8e3668438234;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_13 );
    tmp_assign_source_14 = const_str_digest_43f96eca3406fd8074d16bbbe21aef95;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___email__, tmp_assign_source_14 );
    tmp_assign_source_15 = const_str_digest_d4542d2880d54a4b54551867fac03d07;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_15 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_83f488c8d294f2f3e6989453298cb5ee, module_packaging$__about__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_left_name_1 = const_str_digest_d1f7bddd7e62774fa968e54588d63530;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___author__ );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___author__ );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__author__" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_16 );

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

    return MOD_RETURN_VALUE( module_packaging$__about__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
