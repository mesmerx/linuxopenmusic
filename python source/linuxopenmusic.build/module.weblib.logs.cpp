// Generated code for Python source for module 'weblib.logs'
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

// The _module_weblib$logs is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_weblib$logs;
PyDictObject *moduledict_weblib$logs;

// The module constants used
extern PyObject *const_str_plain_setLevel;
static PyObject *const_str_digest_a76794a0d877fb0809d05cf91767049e;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_digest_0e686b995f18e79c906f6515bf695ff4;
extern PyObject *const_tuple_str_digest_14e31872508f11775a650445e5beb8e2_tuple;
extern PyObject *const_str_plain_addHandler;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_14e31872508f11775a650445e5beb8e2;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_grab_log;
static PyObject *const_str_plain_propagate_network_logger;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_a;
static PyObject *const_tuple_52d98e362529cb2c85f93a046e613427_tuple;
extern PyObject *const_str_plain_level;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_plain_network_log;
static PyObject *const_str_plain_hdl;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_690d7eecdd087d709ea8317536451d73;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_tuple_str_plain_grab_tuple;
static PyObject *const_str_digest_cf5118997314efa26110eafc457df06f;
static PyObject *const_str_plain_grab_logger;
static PyObject *const_str_plain_basicConfig;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_propagate;
static PyObject *const_str_plain_logs;
extern PyObject *const_str_plain_FileHandler;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_weblib;
extern PyObject *const_str_plain_default_logging;
static PyObject *const_str_plain_network_logger;
extern PyObject *const_str_digest_04fbc157b6aced5e1ba8c94f0b45524c;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_grab;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_a76794a0d877fb0809d05cf91767049e = UNSTREAM_STRING( &constant_bin[ 751698 ], 47, 0 );
    const_str_digest_0e686b995f18e79c906f6515bf695ff4 = UNSTREAM_STRING( &constant_bin[ 751745 ], 135, 0 );
    const_str_plain_grab_log = UNSTREAM_STRING( &constant_bin[ 751880 ], 8, 1 );
    const_str_plain_propagate_network_logger = UNSTREAM_STRING( &constant_bin[ 751888 ], 24, 1 );
    const_tuple_52d98e362529cb2c85f93a046e613427_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 0, const_str_plain_grab_log ); Py_INCREF( const_str_plain_grab_log );
    PyTuple_SET_ITEM( const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 1, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    PyTuple_SET_ITEM( const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 3, const_str_plain_propagate_network_logger ); Py_INCREF( const_str_plain_propagate_network_logger );
    const_str_plain_network_log = UNSTREAM_STRING( &constant_bin[ 751898 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 4, const_str_plain_network_log ); Py_INCREF( const_str_plain_network_log );
    const_str_plain_network_logger = UNSTREAM_STRING( &constant_bin[ 751898 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 5, const_str_plain_network_logger ); Py_INCREF( const_str_plain_network_logger );
    const_str_plain_hdl = UNSTREAM_STRING( &constant_bin[ 751912 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 6, const_str_plain_hdl ); Py_INCREF( const_str_plain_hdl );
    const_str_plain_grab_logger = UNSTREAM_STRING( &constant_bin[ 751915 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 7, const_str_plain_grab_logger ); Py_INCREF( const_str_plain_grab_logger );
    const_str_digest_690d7eecdd087d709ea8317536451d73 = UNSTREAM_STRING( &constant_bin[ 751926 ], 21, 0 );
    const_str_digest_cf5118997314efa26110eafc457df06f = UNSTREAM_STRING( &constant_bin[ 751947 ], 13, 0 );
    const_str_plain_basicConfig = UNSTREAM_STRING( &constant_bin[ 751960 ], 11, 1 );
    const_str_plain_logs = UNSTREAM_STRING( &constant_bin[ 174752 ], 4, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_weblib$logs( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_227cc5dd572a89201ad1d23e72fba70a;
static PyCodeObject *codeobj_c18490584d843411671452f33877a8ec;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a76794a0d877fb0809d05cf91767049e;
    codeobj_227cc5dd572a89201ad1d23e72fba70a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_default_logging, 4, const_tuple_52d98e362529cb2c85f93a046e613427_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c18490584d843411671452f33877a8ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_logs, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_default_logging_of_weblib$logs( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_default_logging_of_weblib$logs( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_grab_log = python_pars[ 0 ];
    PyObject *par_level = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *par_propagate_network_logger = python_pars[ 3 ];
    PyObject *par_network_log = python_pars[ 4 ];
    PyObject *var_network_logger = NULL;
    PyObject *var_hdl = NULL;
    PyObject *var_grab_logger = NULL;
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_227cc5dd572a89201ad1d23e72fba70a, module_weblib$logs );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_basicConfig );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_level;
    tmp_dict_value_1 = par_level;

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 14;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getLogger );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 16;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_14e31872508f11775a650445e5beb8e2_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    assert( var_network_logger == NULL );
    var_network_logger = tmp_assign_source_1;

    tmp_assattr_name_1 = par_propagate_network_logger;

    tmp_assattr_target_1 = var_network_logger;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_propagate, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = par_network_log;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_FileHandler );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_network_log;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "network_log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_mode;

    frame_function->f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    assert( var_hdl == NULL );
    var_hdl = tmp_assign_source_2;

    tmp_source_name_4 = var_network_logger;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "network_logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_addHandler );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_hdl;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hdl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = var_network_logger;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "network_logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_setLevel );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_level;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_getLogger );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 23;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_grab_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    assert( var_grab_logger == NULL );
    var_grab_logger = tmp_assign_source_3;

    tmp_cond_value_2 = par_grab_log;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_FileHandler );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_grab_log;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "grab_log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_mode;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_hdl;
        var_hdl = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_source_name_8 = var_grab_logger;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "grab_logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_addHandler );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_hdl;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hdl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = var_grab_logger;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "grab_logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_setLevel );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_level;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;

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
            if ( par_grab_log )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_grab_log,
                    par_grab_log
                );

                assert( res == 0 );
            }

            if ( par_level )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_level,
                    par_level
                );

                assert( res == 0 );
            }

            if ( par_mode )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mode,
                    par_mode
                );

                assert( res == 0 );
            }

            if ( par_propagate_network_logger )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_propagate_network_logger,
                    par_propagate_network_logger
                );

                assert( res == 0 );
            }

            if ( par_network_log )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_network_log,
                    par_network_log
                );

                assert( res == 0 );
            }

            if ( var_network_logger )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_network_logger,
                    var_network_logger
                );

                assert( res == 0 );
            }

            if ( var_hdl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hdl,
                    var_hdl
                );

                assert( res == 0 );
            }

            if ( var_grab_logger )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_grab_logger,
                    var_grab_logger
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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_default_logging_of_weblib$logs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_grab_log );
    par_grab_log = NULL;

    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_propagate_network_logger );
    par_propagate_network_logger = NULL;

    Py_XDECREF( par_network_log );
    par_network_log = NULL;

    Py_XDECREF( var_network_logger );
    var_network_logger = NULL;

    Py_XDECREF( var_hdl );
    var_hdl = NULL;

    Py_XDECREF( var_grab_logger );
    var_grab_logger = NULL;

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

    Py_XDECREF( par_grab_log );
    par_grab_log = NULL;

    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_propagate_network_logger );
    par_propagate_network_logger = NULL;

    Py_XDECREF( par_network_log );
    par_network_log = NULL;

    Py_XDECREF( var_network_logger );
    var_network_logger = NULL;

    Py_XDECREF( var_hdl );
    var_hdl = NULL;

    Py_XDECREF( var_grab_logger );
    var_grab_logger = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_default_logging_of_weblib$logs );
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



static PyObject *MAKE_FUNCTION_function_1_default_logging_of_weblib$logs( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_default_logging_of_weblib$logs,
        const_str_plain_default_logging,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_227cc5dd572a89201ad1d23e72fba70a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_weblib$logs,
        const_str_digest_0e686b995f18e79c906f6515bf695ff4
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_weblib$logs =
{
    PyModuleDef_HEAD_INIT,
    "weblib.logs",   /* m_name */
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

MOD_INIT_DECL( weblib$logs )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_weblib$logs );
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

    // puts( "in initweblib$logs" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_weblib$logs = Py_InitModule4(
        "weblib.logs",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_weblib$logs = PyModule_Create( &mdef_weblib$logs );
#endif

    moduledict_weblib$logs = (PyDictObject *)((PyModuleObject *)module_weblib$logs)->md_dict;

    CHECK_OBJECT( module_weblib$logs );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_04fbc157b6aced5e1ba8c94f0b45524c, module_weblib$logs );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_weblib$logs );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a76794a0d877fb0809d05cf91767049e;
    UPDATE_STRING_DICT0( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_weblib;
    UPDATE_STRING_DICT0( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_c18490584d843411671452f33877a8ec, module_weblib$logs );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_weblib$logs)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5 );
    tmp_defaults_1 = PyTuple_New( 5 );
    tmp_tuple_element_1 = const_str_digest_cf5118997314efa26110eafc457df06f;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 4;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DEBUG );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_a;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_digest_690d7eecdd087d709ea8317536451d73;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
    tmp_assign_source_6 = MAKE_FUNCTION_function_1_default_logging_of_weblib$logs( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_weblib$logs, (Nuitka_StringObject *)const_str_plain_default_logging, tmp_assign_source_6 );

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

    return MOD_RETURN_VALUE( module_weblib$logs );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
