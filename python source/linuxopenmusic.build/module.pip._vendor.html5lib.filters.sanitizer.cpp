// Generated code for Python source for module 'pip._vendor.html5lib.filters.sanitizer'
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

// The _module_pip$_vendor$html5lib$filters$sanitizer is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$_vendor$html5lib$filters$sanitizer;
PyDictObject *moduledict_pip$_vendor$html5lib$filters$sanitizer;

// The module constants used
static PyObject *const_str_digest_39b4ef5caf6a566afaeb253ab5102c30;
extern PyObject *const_str_plain_sanitizer;
extern PyObject *const_str_plain_token;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_str_plain__base_tuple;
extern PyObject *const_str_plain_unicode_literals;
static PyObject *const_str_digest_fb7c7a721c31f85c58ae5aa59bdb0229;
extern PyObject *const_str_digest_d36ae9b750313709c035038320832426;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_HTMLSanitizerMixin_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_Filter;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__base;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_sanitize_token;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_HTMLSanitizerMixin;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain___iter__;
extern PyObject *const_str_digest_d461a9163d79fb5f5d142c821a3b8167;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_39b4ef5caf6a566afaeb253ab5102c30 = UNSTREAM_STRING( &constant_bin[ 317236 ], 38, 0 );
    const_str_digest_fb7c7a721c31f85c58ae5aa59bdb0229 = UNSTREAM_STRING( &constant_bin[ 317274 ], 74, 0 );
    const_tuple_str_plain_HTMLSanitizerMixin_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTMLSanitizerMixin_tuple, 0, const_str_plain_HTMLSanitizerMixin ); Py_INCREF( const_str_plain_HTMLSanitizerMixin );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$_vendor$html5lib$filters$sanitizer( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3ddb138ff770f158f756e5c6fe3959d5;
static PyCodeObject *codeobj_efcddb79fdd9091e9f353cc545750f05;
static PyCodeObject *codeobj_5d6960f998d1e6e9f24968310641f6eb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_fb7c7a721c31f85c58ae5aa59bdb0229;
    codeobj_3ddb138ff770f158f756e5c6fe3959d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 8, const_tuple_str_plain_self_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_efcddb79fdd9091e9f353cc545750f05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 8, const_tuple_str_plain_self_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS );
    codeobj_5d6960f998d1e6e9f24968310641f6eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sanitizer, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer( PyObject **python_pars, PyObject *&closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases, PyObject *&closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict, PyObject *&closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass, PyObject *&closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared );


static void genobj_1___iter___of_function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer_context( Nuitka_GeneratorObject *generator );


static PyObject *MAKE_FUNCTION_function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer( PyObject **python_pars, PyObject *&closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases, PyObject *&closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict, PyObject *&closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass, PyObject *&closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___iter__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_39b4ef5caf6a566afaeb253ab5102c30;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_Filter;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer(  );
    assert( var___iter__ == NULL );
    var___iter__ = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_Filter;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___iter__, var___iter__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___iter__ );
    var___iter__ = NULL;

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

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___iter__ );
    var___iter__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
        closure[0] = par_self;
        Py_INCREF( closure[0] );

        tmp_return_value = Nuitka_Generator_New(
            genobj_1___iter___of_function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer_context,
            self->m_name,
#if PYTHON_VERSION >= 350
            self->m_qualname,
#endif
            codeobj_efcddb79fdd9091e9f353cc545750f05,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void genobj_1___iter___of_function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_token = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_3ddb138ff770f158f756e5c6fe3959d5, module_pip$_vendor$html5lib$filters$sanitizer );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 8;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain__base );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__base );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_base" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 9;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Filter );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___iter__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 9;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 9;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 9;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_token;
        var_token = tmp_assign_source_3;
        Py_INCREF( var_token );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sanitize_token );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_token;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 10;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_token;
        var_token = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_token;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_expression_name_1 = var_token;

    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_token )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_token,
                    var_token
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_token );
    var_token = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( var_token );
    var_token = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}



static PyObject *MAKE_FUNCTION_function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___iter___of_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        const_str_digest_d36ae9b750313709c035038320832426,
#endif
        codeobj_3ddb138ff770f158f756e5c6fe3959d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$_vendor$html5lib$filters$sanitizer,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$_vendor$html5lib$filters$sanitizer =
{
    PyModuleDef_HEAD_INIT,
    "pip._vendor.html5lib.filters.sanitizer",   /* m_name */
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

MOD_INIT_DECL( pip$_vendor$html5lib$filters$sanitizer )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$_vendor$html5lib$filters$sanitizer );
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

    // puts( "in initpip$_vendor$html5lib$filters$sanitizer" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$_vendor$html5lib$filters$sanitizer = Py_InitModule4(
        "pip._vendor.html5lib.filters.sanitizer",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$_vendor$html5lib$filters$sanitizer = PyModule_Create( &mdef_pip$_vendor$html5lib$filters$sanitizer );
#endif

    moduledict_pip$_vendor$html5lib$filters$sanitizer = (PyDictObject *)((PyModuleObject *)module_pip$_vendor$html5lib$filters$sanitizer)->md_dict;

    CHECK_OBJECT( module_pip$_vendor$html5lib$filters$sanitizer );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_39b4ef5caf6a566afaeb253ab5102c30, module_pip$_vendor$html5lib$filters$sanitizer );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$_vendor$html5lib$filters$sanitizer );

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
    PyObject *tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases = NULL;
    PyObject *tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass = NULL;
    PyObject *tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_metaclass_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_fb7c7a721c31f85c58ae5aa59bdb0229;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_d461a9163d79fb5f5d142c821a3b8167;
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_assign_source_7 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "unicode_literals");
    UPDATE_STRING_DICT0( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_5d6960f998d1e6e9f24968310641f6eb, module_pip$_vendor$html5lib$filters$sanitizer );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$_vendor$html5lib$filters$sanitizer)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain__base_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__base );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain__base, tmp_assign_source_8 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$_vendor$html5lib$filters$sanitizer)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_sanitizer, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_HTMLSanitizerMixin_tuple, const_int_pos_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_HTMLSanitizerMixin );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain_HTMLSanitizerMixin, tmp_assign_source_9 );
    // Tried code:
    tmp_assign_source_10 = PyTuple_New( 2 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain__base );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__base );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_base" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;
        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Filter );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        exception_lineno = 7;
        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain_HTMLSanitizerMixin );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTMLSanitizerMixin );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTMLSanitizerMixin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 1, tmp_tuple_element_1 );
    assert( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases == NULL );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases = tmp_assign_source_10;

    tmp_assign_source_11 = PyDict_New();
    assert( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict == NULL );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict = tmp_assign_source_11;

    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases;

    tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 7;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass == NULL );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass = tmp_assign_source_12;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_2 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_Filter;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 7;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_13 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared == NULL );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared = tmp_assign_source_13;

    tmp_assign_source_14 = impl_class_1_Filter_of_pip$_vendor$html5lib$filters$sanitizer( NULL, tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases, tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict, tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass, tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$_vendor$html5lib$filters$sanitizer, (Nuitka_StringObject *)const_str_plain_Filter, tmp_assign_source_14 );
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

    Py_XDECREF( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
    Py_XDECREF( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared );
    tmp_pip$_vendor$html5lib$filters$sanitizer_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_pip$_vendor$html5lib$filters$sanitizer );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
