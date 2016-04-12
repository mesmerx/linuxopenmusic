// Generated code for Python source for module 'pip._vendor.cachecontrol.wrapper'
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

// The _module_pip$_vendor$cachecontrol$wrapper is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$cachecontrol$wrapper;
PyDictObject *moduledict_pip$_vendor$cachecontrol$wrapper;

// The module constants used
extern PyObject *const_str_plain_CacheControlAdapter;
extern PyObject *const_str_plain_serializer;
extern PyObject *const_str_plain_CacheControl;
extern PyObject *const_str_plain___package__;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_adapter;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple;
extern PyObject *const_str_digest_cf6ad67e1fcab184ae3b2b70b1bd41c1;
extern PyObject *const_tuple_none_true_none_none_tuple;
extern PyObject *const_str_plain_cache_etags;
static PyObject *const_str_digest_752ad0551f1bf40ca5b6a8cda161ccf4;
extern PyObject *const_tuple_str_plain_DictCache_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_heuristic;
extern PyObject *const_tuple_str_plain_CacheControlAdapter_tuple;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_plain_sess;
static PyObject *const_str_digest_b31e0a7d9885533032515f63a652cb9c;
extern PyObject *const_str_plain_cache;
extern PyObject *const_str_digest_504b77692b694460b8c25198a52c83ba;
extern PyObject *const_str_plain_wrapper;
extern PyObject *const_str_plain_mount;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_DictCache;
extern PyObject *const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple = PyTuple_New( 6 );
    const_str_plain_sess = UNSTREAM_STRING( &constant_bin[ 716 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple, 0, const_str_plain_sess ); Py_INCREF( const_str_plain_sess );
    PyTuple_SET_ITEM( const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple, 1, const_str_plain_cache ); Py_INCREF( const_str_plain_cache );
    PyTuple_SET_ITEM( const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple, 2, const_str_plain_cache_etags ); Py_INCREF( const_str_plain_cache_etags );
    PyTuple_SET_ITEM( const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple, 3, const_str_plain_serializer ); Py_INCREF( const_str_plain_serializer );
    PyTuple_SET_ITEM( const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple, 4, const_str_plain_heuristic ); Py_INCREF( const_str_plain_heuristic );
    PyTuple_SET_ITEM( const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple, 5, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    const_str_digest_752ad0551f1bf40ca5b6a8cda161ccf4 = UNSTREAM_STRING( &constant_bin[ 203182 ], 32, 0 );
    const_str_digest_b31e0a7d9885533032515f63a652cb9c = UNSTREAM_STRING( &constant_bin[ 203214 ], 68, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$cachecontrol$wrapper( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_079a8ba6ceda22079d731bf3f2f28ee9;
static PyCodeObject *codeobj_22e6269ebd4aca7f4dc21ac4b8656728;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b31e0a7d9885533032515f63a652cb9c;
    codeobj_079a8ba6ceda22079d731bf3f2f28ee9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CacheControl, 5, const_tuple_78c3ceb4466483c9178fdf6b2734f542_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_22e6269ebd4aca7f4dc21ac4b8656728 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapper, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_CacheControl_of_pip$_vendor$cachecontrol$wrapper( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_CacheControl_of_pip$_vendor$cachecontrol$wrapper( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sess = python_pars[ 0 ];
    PyObject *par_cache = python_pars[ 1 ];
    PyObject *par_cache_etags = python_pars[ 2 ];
    PyObject *par_serializer = python_pars[ 3 ];
    PyObject *par_heuristic = python_pars[ 4 ];
    PyObject *var_adapter = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_079a8ba6ceda22079d731bf3f2f28ee9, module_pip$_vendor$cachecontrol$wrapper );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_or_left_value_1 = par_cache;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain_DictCache );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DictCache );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DictCache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 11;
    tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = par_cache;
        par_cache = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain_CacheControlAdapter );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CacheControlAdapter );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CacheControlAdapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_cache;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_str_plain_cache_etags;
    tmp_dict_value_1 = par_cache_etags;

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_serializer;
    tmp_dict_value_2 = par_serializer;

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_heuristic;
    tmp_dict_value_3 = par_heuristic;

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 16;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    assert( var_adapter == NULL );
    var_adapter = tmp_assign_source_2;

    tmp_source_name_1 = par_sess;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mount );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
    tmp_args_element_name_2 = var_adapter;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "adapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_sess;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sess" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mount );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_504b77692b694460b8c25198a52c83ba;
    tmp_args_element_name_4 = var_adapter;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "adapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = par_sess;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sess" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_sess )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sess,
                    par_sess
                );

                assert( res == 0 );
            }

            if ( par_cache )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cache,
                    par_cache
                );

                assert( res == 0 );
            }

            if ( par_cache_etags )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cache_etags,
                    par_cache_etags
                );

                assert( res == 0 );
            }

            if ( par_serializer )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_serializer,
                    par_serializer
                );

                assert( res == 0 );
            }

            if ( par_heuristic )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_heuristic,
                    par_heuristic
                );

                assert( res == 0 );
            }

            if ( var_adapter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_adapter,
                    var_adapter
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_CacheControl_of_pip$_vendor$cachecontrol$wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_sess );
    par_sess = NULL;

    Py_XDECREF( par_cache );
    par_cache = NULL;

    Py_XDECREF( par_cache_etags );
    par_cache_etags = NULL;

    Py_XDECREF( par_serializer );
    par_serializer = NULL;

    Py_XDECREF( par_heuristic );
    par_heuristic = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    goto function_return_exit;
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

    Py_XDECREF( par_sess );
    par_sess = NULL;

    Py_XDECREF( par_cache );
    par_cache = NULL;

    Py_XDECREF( par_cache_etags );
    par_cache_etags = NULL;

    Py_XDECREF( par_serializer );
    par_serializer = NULL;

    Py_XDECREF( par_heuristic );
    par_heuristic = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_CacheControl_of_pip$_vendor$cachecontrol$wrapper );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_function_1_CacheControl_of_pip$_vendor$cachecontrol$wrapper( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_CacheControl_of_pip$_vendor$cachecontrol$wrapper,
        const_str_plain_CacheControl,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_079a8ba6ceda22079d731bf3f2f28ee9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$cachecontrol$wrapper,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$cachecontrol$wrapper =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.cachecontrol.wrapper",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$cachecontrol$wrapper )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$cachecontrol$wrapper );
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

    // puts( "in initpip$_vendor$cachecontrol$wrapper" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$cachecontrol$wrapper = Py_InitModule4(
        "pip._vendor.cachecontrol.wrapper",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$cachecontrol$wrapper = PyModule_Create( &mdef_pip$_vendor$cachecontrol$wrapper );
#endif

    moduledict_pip$_vendor$cachecontrol$wrapper = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$cachecontrol$wrapper)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$cachecontrol$wrapper );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_752ad0551f1bf40ca5b6a8cda161ccf4, module_pip$_vendor$cachecontrol$wrapper );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$cachecontrol$wrapper );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b31e0a7d9885533032515f63a652cb9c;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_cf6ad67e1fcab184ae3b2b70b1bd41c1;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_22e6269ebd4aca7f4dc21ac4b8656728, module_pip$_vendor$cachecontrol$wrapper );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$cachecontrol$wrapper)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_adapter, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_CacheControlAdapter_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CacheControlAdapter );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain_CacheControlAdapter, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$cachecontrol$wrapper)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_cache, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_DictCache_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DictCache );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain_DictCache, tmp_assign_source_6 );

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
    tmp_defaults_1 = const_tuple_none_true_none_none_tuple;
    tmp_assign_source_7 = MAKE_FUNCTION_function_1_CacheControl_of_pip$_vendor$cachecontrol$wrapper( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$cachecontrol$wrapper, (Nuitka_StringObject *)const_str_plain_CacheControl, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_pip$_vendor$cachecontrol$wrapper );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
