// Generated code for Python source for module 'pip.commands'
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

// The _module_pip$commands is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$commands;
PyDictObject *moduledict_pip$commands;

// The module constants used
extern PyObject *const_str_digest_693acb53f27752719e35cd85704ccb85;
static PyObject *const_tuple_016558709ed413e1fd5f1d84fccac1bc_tuple;
extern PyObject *const_str_plain_ListCommand;
extern PyObject *const_str_digest_c2f8520385159b1df2ec4892d8ea77d8;
static PyObject *const_tuple_str_plain_HelpCommand_tuple;
static PyObject *const_tuple_str_plain_InstallCommand_tuple;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_WheelCommand;
extern PyObject *const_str_plain_get_similar_commands;
static PyObject *const_str_plain_ordered;
static PyObject *const_str_plain_commands_order;
static PyObject *const_str_plain_difflib;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_str_digest_1a4a961ce5e7e76606b035d356a34a2c;
extern PyObject *const_str_digest_fe261a5c41de6ed817b9930bb673ddbb;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_cmddict_str_plain_order_str_plain_keyfn_tuple;
static PyObject *const_str_plain_commands;
static PyObject *const_str_digest_7cd5420825f16746eec003acb5b3e437;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_DownloadCommand;
extern PyObject *const_str_digest_3cfe9e4ff9066362898db9d33c4e06bc;
static PyObject *const_tuple_str_plain_HashCommand_tuple;
extern PyObject *const_str_plain_ShowCommand;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_plain_key;
extern PyObject *const_int_0;
static PyObject *const_str_digest_7072a2438f03ee09a6535f00d29c1697;
static PyObject *const_str_plain_command_class;
static PyObject *const_str_plain_cmditems;
static PyObject *const_list_str_digest_f5bd9263b048d8199f7b5de311b914db_list;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_DownloadCommand_tuple;
static PyObject *const_tuple_str_plain_ListCommand_tuple;
extern PyObject *const_str_plain_UninstallCommand;
extern PyObject *const_str_digest_12e511a77b7b565098d7faa2ef69f07a;
extern PyObject *const_str_plain_commands_dict;
extern PyObject *const_str_plain_get_summaries;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_digest_32275709d296345a6ef0130003c86b26;
extern PyObject *const_str_plain_lower;
static PyObject *const_tuple_str_plain_UninstallCommand_tuple;
extern PyObject *const_int_pos_255;
static PyObject *const_str_digest_fde7d4b51520656e96abb8f3f8676aca;
extern PyObject *const_str_plain_InstallCommand;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_SearchCommand;
extern PyObject *const_str_digest_eaf1c24d1324d2a299a09f2c33a11bca;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_close_commands;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_HelpCommand;
static PyObject *const_tuple_str_plain_ordered_tuple;
static PyObject *const_str_digest_f5bd9263b048d8199f7b5de311b914db;
static PyObject *const_tuple_str_plain_ShowCommand_tuple;
static PyObject *const_tuple_str_plain_key_str_plain_order_tuple;
extern PyObject *const_str_digest_5e691927f9b63eb93d8e761deaec2d4e;
extern PyObject *const_str_plain_CompletionCommand;
static PyObject *const_tuple_str_plain_SearchCommand_tuple;
static PyObject *const_tuple_str_plain_WheelCommand_tuple;
extern PyObject *const_str_digest_90200d37c8cc2fad83f2044dfe719a0a;
static PyObject *const_tuple_str_plain_FreezeCommand_tuple;
extern PyObject *const_str_plain_FreezeCommand;
static PyObject *const_tuple_str_plain_get_close_matches_tuple;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_digest_6e22f047b07ed2a2dcf544370cbe1a8d;
extern PyObject *const_str_plain___loader__;
static PyObject *const_tuple_str_plain_CompletionCommand_tuple;
static PyObject *const_str_plain_get_close_matches;
static PyObject *const_str_plain__sort_commands;
extern PyObject *const_tuple_true_tuple;
static PyObject *const_str_digest_9f19b98f4cfa7beaa710a0a0c11913ef;
static PyObject *const_str_plain_keyfn;
static PyObject *const_str_plain_cmddict;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_HashCommand;
extern PyObject *const_str_plain_summary;
static PyObject *const_str_digest_56a88b40ca9074e19b2e973a9a1d3626;
extern PyObject *const_str_digest_5be8c2a2a06122e95b90f0e849b314e8;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_016558709ed413e1fd5f1d84fccac1bc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_016558709ed413e1fd5f1d84fccac1bc_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_get_close_matches = UNSTREAM_STRING( &constant_bin[ 499034 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_016558709ed413e1fd5f1d84fccac1bc_tuple, 1, const_str_plain_get_close_matches ); Py_INCREF( const_str_plain_get_close_matches );
    const_str_plain_close_commands = UNSTREAM_STRING( &constant_bin[ 499051 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_016558709ed413e1fd5f1d84fccac1bc_tuple, 2, const_str_plain_close_commands ); Py_INCREF( const_str_plain_close_commands );
    const_tuple_str_plain_HelpCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HelpCommand_tuple, 0, const_str_plain_HelpCommand ); Py_INCREF( const_str_plain_HelpCommand );
    const_tuple_str_plain_InstallCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InstallCommand_tuple, 0, const_str_plain_InstallCommand ); Py_INCREF( const_str_plain_InstallCommand );
    const_str_plain_ordered = UNSTREAM_STRING( &constant_bin[ 184030 ], 7, 1 );
    const_str_plain_commands_order = UNSTREAM_STRING( &constant_bin[ 499065 ], 14, 1 );
    const_str_plain_difflib = UNSTREAM_STRING( &constant_bin[ 499079 ], 7, 1 );
    const_tuple_str_plain_cmddict_str_plain_order_str_plain_keyfn_tuple = PyTuple_New( 3 );
    const_str_plain_cmddict = UNSTREAM_STRING( &constant_bin[ 499086 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmddict_str_plain_order_str_plain_keyfn_tuple, 0, const_str_plain_cmddict ); Py_INCREF( const_str_plain_cmddict );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmddict_str_plain_order_str_plain_keyfn_tuple, 1, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_str_plain_keyfn = UNSTREAM_STRING( &constant_bin[ 499093 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmddict_str_plain_order_str_plain_keyfn_tuple, 2, const_str_plain_keyfn ); Py_INCREF( const_str_plain_keyfn );
    const_str_plain_commands = UNSTREAM_STRING( &constant_bin[ 183010 ], 8, 1 );
    const_str_digest_7cd5420825f16746eec003acb5b3e437 = UNSTREAM_STRING( &constant_bin[ 499098 ], 57, 0 );
    const_tuple_str_plain_HashCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HashCommand_tuple, 0, const_str_plain_HashCommand ); Py_INCREF( const_str_plain_HashCommand );
    const_str_digest_7072a2438f03ee09a6535f00d29c1697 = UNSTREAM_STRING( &constant_bin[ 499155 ], 37, 0 );
    const_str_plain_command_class = UNSTREAM_STRING( &constant_bin[ 499192 ], 13, 1 );
    const_str_plain_cmditems = UNSTREAM_STRING( &constant_bin[ 499205 ], 8, 1 );
    const_list_str_digest_f5bd9263b048d8199f7b5de311b914db_list = PyList_New( 1 );
    const_str_digest_f5bd9263b048d8199f7b5de311b914db = UNSTREAM_STRING( &constant_bin[ 499098 ], 45, 0 );
    PyList_SET_ITEM( const_list_str_digest_f5bd9263b048d8199f7b5de311b914db_list, 0, const_str_digest_f5bd9263b048d8199f7b5de311b914db ); Py_INCREF( const_str_digest_f5bd9263b048d8199f7b5de311b914db );
    const_tuple_str_plain_DownloadCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DownloadCommand_tuple, 0, const_str_plain_DownloadCommand ); Py_INCREF( const_str_plain_DownloadCommand );
    const_tuple_str_plain_ListCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ListCommand_tuple, 0, const_str_plain_ListCommand ); Py_INCREF( const_str_plain_ListCommand );
    const_tuple_str_plain_UninstallCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UninstallCommand_tuple, 0, const_str_plain_UninstallCommand ); Py_INCREF( const_str_plain_UninstallCommand );
    const_str_digest_fde7d4b51520656e96abb8f3f8676aca = UNSTREAM_STRING( &constant_bin[ 499213 ], 53, 0 );
    const_tuple_str_plain_ordered_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ordered_tuple, 0, const_str_plain_ordered ); Py_INCREF( const_str_plain_ordered );
    const_tuple_str_plain_ShowCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ShowCommand_tuple, 0, const_str_plain_ShowCommand ); Py_INCREF( const_str_plain_ShowCommand );
    const_tuple_str_plain_key_str_plain_order_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_str_plain_order_tuple, 0, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_str_plain_order_tuple, 1, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_tuple_str_plain_SearchCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SearchCommand_tuple, 0, const_str_plain_SearchCommand ); Py_INCREF( const_str_plain_SearchCommand );
    const_tuple_str_plain_WheelCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_WheelCommand_tuple, 0, const_str_plain_WheelCommand ); Py_INCREF( const_str_plain_WheelCommand );
    const_tuple_str_plain_FreezeCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FreezeCommand_tuple, 0, const_str_plain_FreezeCommand ); Py_INCREF( const_str_plain_FreezeCommand );
    const_tuple_str_plain_get_close_matches_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_close_matches_tuple, 0, const_str_plain_get_close_matches ); Py_INCREF( const_str_plain_get_close_matches );
    const_tuple_str_plain_CompletionCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CompletionCommand_tuple, 0, const_str_plain_CompletionCommand ); Py_INCREF( const_str_plain_CompletionCommand );
    const_str_plain__sort_commands = UNSTREAM_STRING( &constant_bin[ 499266 ], 14, 1 );
    const_str_digest_9f19b98f4cfa7beaa710a0a0c11913ef = UNSTREAM_STRING( &constant_bin[ 499280 ], 29, 0 );
    const_str_digest_56a88b40ca9074e19b2e973a9a1d3626 = UNSTREAM_STRING( &constant_bin[ 499309 ], 26, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$commands( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6a1312abd02009e414a717e67aecdcc0;
static PyCodeObject *codeobj_2ef269e5c7cc4542811286042994fd15;
static PyCodeObject *codeobj_c8474257f203ee0b8703b8a67c96b4ae;
static PyCodeObject *codeobj_9bfa579adc93b2a6efd3581dbe583589;
static PyCodeObject *codeobj_ba33507d659d7a01e7e96c8bea847fe4;
static PyCodeObject *codeobj_ea3010844db8f833e6d24a4e0a116e4a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7cd5420825f16746eec003acb5b3e437;
    codeobj_6a1312abd02009e414a717e67aecdcc0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sort_commands, 75, const_tuple_str_plain_cmddict_str_plain_order_str_plain_keyfn_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2ef269e5c7cc4542811286042994fd15 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_commands, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c8474257f203ee0b8703b8a67c96b4ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_similar_commands, 61, const_tuple_016558709ed413e1fd5f1d84fccac1bc_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9bfa579adc93b2a6efd3581dbe583589 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_summaries, 49, const_tuple_str_plain_ordered_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba33507d659d7a01e7e96c8bea847fe4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_summaries, 49, const_tuple_str_plain_ordered_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_ea3010844db8f833e6d24a4e0a116e4a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_keyfn, 76, const_tuple_str_plain_key_str_plain_order_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static void genobj_1_get_summaries_of_function_1_get_summaries_of_pip$commands_context( Nuitka_GeneratorObject *generator );


static PyObject *MAKE_FUNCTION_function_1_get_summaries_of_pip$commands( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_keyfn_of_function_3__sort_commands_of_pip$commands( PyCellObject *closure_order );


static PyObject *MAKE_FUNCTION_function_2_get_similar_commands_of_pip$commands(  );


static PyObject *MAKE_FUNCTION_function_3__sort_commands_of_pip$commands(  );


// The module function definitions.
static PyObject *impl_function_1_get_summaries_of_pip$commands( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_ordered = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
        closure[0] = par_ordered;
        Py_INCREF( closure[0] );

        tmp_return_value = Nuitka_Generator_New(
            genobj_1_get_summaries_of_function_1_get_summaries_of_pip$commands_context,
            self->m_name,
#if PYTHON_VERSION >= 350
            self->m_qualname,
#endif
            codeobj_ba33507d659d7a01e7e96c8bea847fe4,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_get_summaries_of_pip$commands );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ordered );
    Py_DECREF( par_ordered );
    par_ordered = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_ordered );
    Py_DECREF( par_ordered );
    par_ordered = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_get_summaries_of_pip$commands );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void genobj_1_get_summaries_of_function_1_get_summaries_of_pip$commands_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_cmditems = NULL;
    PyObject *var_name = NULL;
    PyObject *var_command_class = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_9bfa579adc93b2a6efd3581dbe583589, module_pip$commands );
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
            exception_lineno = 49;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_cond_value_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ordered" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain__sort_commands );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sort_commands );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sort_commands" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_commands_dict );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_commands_dict );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "commands_dict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_commands_order );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_commands_order );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "commands_order" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    assert( var_cmditems == NULL );
    var_cmditems = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_commands_dict );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_commands_dict );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "commands_dict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_items );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 55;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    assert( var_cmditems == NULL );
    var_cmditems = tmp_assign_source_2;

    branch_end_1:;
    tmp_iter_arg_1 = var_cmditems;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 57;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 57;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_7 == NULL )
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


        exception_lineno = 57;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                goto try_except_handler_3;
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

        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_8;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_command_class;
        var_command_class = tmp_assign_source_9;
        Py_INCREF( var_command_class );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_expression_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_name;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_expression_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = var_command_class;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_expression_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "command_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        goto try_except_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_summary );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_expression_name_1 );

        exception_lineno = 58;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

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
                    const_str_plain_ordered,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_cmditems )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cmditems,
                    var_cmditems
                );

                assert( res == 0 );
            }

            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
                );

                assert( res == 0 );
            }

            if ( var_command_class )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_command_class,
                    var_command_class
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

    Py_XDECREF( var_cmditems );
    var_cmditems = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_command_class );
    var_command_class = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( var_cmditems );
    var_cmditems = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_command_class );
    var_command_class = NULL;


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


static PyObject *impl_function_2_get_similar_commands_of_pip$commands( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_get_close_matches = NULL;
    PyObject *var_close_commands = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c8474257f203ee0b8703b8a67c96b4ae, module_pip$commands );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$commands)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_name )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_name,
            par_name
        );

        assert( res == 0 );
    }

    if ( var_get_close_matches )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_get_close_matches,
            var_get_close_matches
        );

        assert( res == 0 );
    }

    if ( var_close_commands )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_close_commands,
            var_close_commands
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 63;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_difflib, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_get_close_matches_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_get_close_matches );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    assert( var_get_close_matches == NULL );
    var_get_close_matches = tmp_assign_source_1;

    tmp_source_name_1 = par_name;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 65;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_name;
        par_name = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = var_get_close_matches;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "get_close_matches" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_name;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_commands_dict );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_commands_dict );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "commands_dict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keys );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 67;
    tmp_args_element_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    assert( var_close_commands == NULL );
    var_close_commands = tmp_assign_source_3;

    tmp_cond_value_1 = var_close_commands;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
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
    tmp_subscribed_name_1 = var_close_commands;

    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

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
            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( var_get_close_matches )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_get_close_matches,
                    var_get_close_matches
                );

                assert( res == 0 );
            }

            if ( var_close_commands )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_close_commands,
                    var_close_commands
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
    NUITKA_CANNOT_GET_HERE( function_2_get_similar_commands_of_pip$commands );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_get_close_matches );
    var_get_close_matches = NULL;

    Py_XDECREF( var_close_commands );
    var_close_commands = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_get_close_matches );
    var_get_close_matches = NULL;

    Py_XDECREF( var_close_commands );
    var_close_commands = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_get_similar_commands_of_pip$commands );
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


static PyObject *impl_function_3__sort_commands_of_pip$commands( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cmddict = python_pars[ 0 ];
    PyCellObject *par_order = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *var_keyfn = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_keyfn_of_function_3__sort_commands_of_pip$commands( par_order );
    assert( var_keyfn == NULL );
    var_keyfn = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6a1312abd02009e414a717e67aecdcc0, module_pip$commands );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_1 != NULL );
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_cmddict;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_items );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 83;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_key;
    tmp_dict_value_1 = var_keyfn;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keyfn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 83;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
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
            if ( par_cmddict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cmddict,
                    par_cmddict
                );

                assert( res == 0 );
            }

            if ( par_order->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_order,
                    par_order->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_keyfn )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keyfn,
                    var_keyfn
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
    NUITKA_CANNOT_GET_HERE( function_3__sort_commands_of_pip$commands );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cmddict );
    par_cmddict = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    Py_XDECREF( var_keyfn );
    var_keyfn = NULL;

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

    Py_XDECREF( par_cmddict );
    par_cmddict = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    Py_XDECREF( var_keyfn );
    var_keyfn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3__sort_commands_of_pip$commands );
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


static PyObject *impl_function_1_keyfn_of_function_3__sort_commands_of_pip$commands( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ea3010844db8f833e6d24a4e0a116e4a, module_pip$commands );
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
    // Tried code:
    tmp_source_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "order" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = par_key;

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 78;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_keyfn_of_function_3__sort_commands_of_pip$commands );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = const_int_pos_255;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_keyfn_of_function_3__sort_commands_of_pip$commands );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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
            if ( par_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key,
                    par_key
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_order,
                    self->m_closure[0]->ob_ref
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
    NUITKA_CANNOT_GET_HERE( function_1_keyfn_of_function_3__sort_commands_of_pip$commands );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_key );
    par_key = NULL;

    goto function_return_exit;
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

    Py_XDECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_keyfn_of_function_3__sort_commands_of_pip$commands );
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



static PyObject *MAKE_FUNCTION_function_1_get_summaries_of_pip$commands( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_get_summaries_of_pip$commands,
        const_str_plain_get_summaries,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9bfa579adc93b2a6efd3581dbe583589,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$commands,
        const_str_digest_fde7d4b51520656e96abb8f3f8676aca
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_keyfn_of_function_3__sort_commands_of_pip$commands( PyCellObject *closure_order )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
    closure[0] = closure_order;
    Py_INCREF( closure[0] );


    PyObject *result = Nuitka_Function_New(
        impl_function_1_keyfn_of_function_3__sort_commands_of_pip$commands,
        const_str_plain_keyfn,
#if PYTHON_VERSION >= 330
        const_str_digest_9f19b98f4cfa7beaa710a0a0c11913ef,
#endif
        codeobj_ea3010844db8f833e6d24a4e0a116e4a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$commands,
        Py_None,
        closure,
        1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_similar_commands_of_pip$commands(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_get_similar_commands_of_pip$commands,
        const_str_plain_get_similar_commands,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c8474257f203ee0b8703b8a67c96b4ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$commands,
        const_str_digest_56a88b40ca9074e19b2e973a9a1d3626
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__sort_commands_of_pip$commands(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3__sort_commands_of_pip$commands,
        const_str_plain__sort_commands,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6a1312abd02009e414a717e67aecdcc0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$commands,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$commands =
{
    PyModuleDef_HEAD_INIT,
    "pip.commands",   /* m_name */
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

MOD_INIT_DECL( pip$commands )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$commands );
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

    // puts( "in initpip$commands" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$commands = Py_InitModule4(
        "pip.commands",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$commands = PyModule_Create( &mdef_pip$commands );
#endif

    moduledict_pip$commands = (PyDictObject *)((PyModuleObject *)module_pip$commands)->md_dict;

    CHECK_OBJECT( module_pip$commands );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_32275709d296345a6ef0130003c86b26, module_pip$commands );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$commands );

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
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
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
    PyObject *tmp_list_element_1;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_7072a2438f03ee09a6535f00d29c1697;
    UPDATE_STRING_DICT0( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7cd5420825f16746eec003acb5b3e437;
    UPDATE_STRING_DICT0( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f5bd9263b048d8199f7b5de311b914db_list );
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_32275709d296345a6ef0130003c86b26;
    UPDATE_STRING_DICT0( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_2ef269e5c7cc4542811286042994fd15, module_pip$commands );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_fe261a5c41de6ed817b9930bb673ddbb, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_CompletionCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CompletionCommand );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_CompletionCommand, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_12e511a77b7b565098d7faa2ef69f07a, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_DownloadCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DownloadCommand );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_DownloadCommand, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_3cfe9e4ff9066362898db9d33c4e06bc, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_FreezeCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_FreezeCommand );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_FreezeCommand, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_eaf1c24d1324d2a299a09f2c33a11bca, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_HashCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_HashCommand );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_HashCommand, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_693acb53f27752719e35cd85704ccb85, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_HelpCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HelpCommand );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_HelpCommand, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_5be8c2a2a06122e95b90f0e849b314e8, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_ListCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ListCommand );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_ListCommand, tmp_assign_source_12 );
    tmp_import_globals_7 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_5e691927f9b63eb93d8e761deaec2d4e, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_SearchCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_SearchCommand );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_SearchCommand, tmp_assign_source_13 );
    tmp_import_globals_8 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_90200d37c8cc2fad83f2044dfe719a0a, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_ShowCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ShowCommand );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_ShowCommand, tmp_assign_source_14 );
    tmp_import_globals_9 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_c2f8520385159b1df2ec4892d8ea77d8, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_InstallCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_InstallCommand );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_InstallCommand, tmp_assign_source_15 );
    tmp_import_globals_10 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_1a4a961ce5e7e76606b035d356a34a2c, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_UninstallCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_UninstallCommand );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_UninstallCommand, tmp_assign_source_16 );
    tmp_import_globals_11 = ((PyModuleObject *)module_pip$commands)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_6e22f047b07ed2a2dcf544370cbe1a8d, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_WheelCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_WheelCommand );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_WheelCommand, tmp_assign_source_17 );
    tmp_assign_source_18 = _PyDict_NewPresized( 11 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_CompletionCommand );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CompletionCommand );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CompletionCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_dict_key_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_CompletionCommand );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CompletionCommand );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CompletionCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_1, tmp_dict_value_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_1 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_FreezeCommand );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FreezeCommand );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FreezeCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_dict_key_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_FreezeCommand );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FreezeCommand );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FreezeCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_2 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_HashCommand );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HashCommand );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HashCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    if ( tmp_dict_key_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_HashCommand );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HashCommand );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HashCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_3 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_3 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_HelpCommand );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HelpCommand );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HelpCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_dict_key_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_4 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_HelpCommand );

    if (unlikely( tmp_dict_value_4 == NULL ))
    {
        tmp_dict_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HelpCommand );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HelpCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_4, tmp_dict_value_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_4 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_4 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_SearchCommand );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SearchCommand );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SearchCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
    if ( tmp_dict_key_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_5 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_SearchCommand );

    if (unlikely( tmp_dict_value_5 == NULL ))
    {
        tmp_dict_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SearchCommand );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SearchCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_5, tmp_dict_value_5 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_5 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_5 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_ShowCommand );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ShowCommand );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ShowCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_name );
    if ( tmp_dict_key_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_ShowCommand );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ShowCommand );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ShowCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_6, tmp_dict_value_6 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_6 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_6 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_InstallCommand );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InstallCommand );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InstallCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_name );
    if ( tmp_dict_key_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_InstallCommand );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InstallCommand );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InstallCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_7, tmp_dict_value_7 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_7 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_7 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_UninstallCommand );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UninstallCommand );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UninstallCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_name );
    if ( tmp_dict_key_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_8 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_UninstallCommand );

    if (unlikely( tmp_dict_value_8 == NULL ))
    {
        tmp_dict_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UninstallCommand );
    }

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UninstallCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_8, tmp_dict_value_8 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_8 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_8 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_DownloadCommand );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DownloadCommand );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DownloadCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_name );
    if ( tmp_dict_key_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_9 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_DownloadCommand );

    if (unlikely( tmp_dict_value_9 == NULL ))
    {
        tmp_dict_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DownloadCommand );
    }

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DownloadCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_9, tmp_dict_value_9 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_9 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_9 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_ListCommand );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ListCommand );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ListCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_name );
    if ( tmp_dict_key_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_10 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_ListCommand );

    if (unlikely( tmp_dict_value_10 == NULL ))
    {
        tmp_dict_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ListCommand );
    }

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ListCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_10, tmp_dict_value_10 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_10 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_10 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_WheelCommand );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WheelCommand );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WheelCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_name );
    if ( tmp_dict_key_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_11 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_WheelCommand );

    if (unlikely( tmp_dict_value_11 == NULL ))
    {
        tmp_dict_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WheelCommand );
    }

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WheelCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_18, tmp_dict_key_11, tmp_dict_value_11 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_18 );
        Py_DECREF( tmp_dict_key_11 );

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_key_11 );
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_commands_dict, tmp_assign_source_18 );
    tmp_assign_source_19 = PyList_New( 11 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_InstallCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InstallCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InstallCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 0, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_DownloadCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DownloadCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DownloadCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 1, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_UninstallCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UninstallCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UninstallCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 2, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_FreezeCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FreezeCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FreezeCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 3, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_ListCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ListCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ListCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 4, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_ShowCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ShowCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ShowCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 5, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_SearchCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SearchCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SearchCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 6, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_WheelCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WheelCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WheelCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 7, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_HashCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HashCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HashCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 8, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_CompletionCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CompletionCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CompletionCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 9, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_HelpCommand );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HelpCommand );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HelpCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_19, 10, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_commands_order, tmp_assign_source_19 );

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
    tmp_defaults_1 = const_tuple_true_tuple;
    tmp_assign_source_20 = MAKE_FUNCTION_function_1_get_summaries_of_pip$commands( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_get_summaries, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_function_2_get_similar_commands_of_pip$commands(  );
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain_get_similar_commands, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_function_3__sort_commands_of_pip$commands(  );
    UPDATE_STRING_DICT1( moduledict_pip$commands, (Nuitka_StringObject *)const_str_plain__sort_commands, tmp_assign_source_22 );

    return MOD_RETURN_VALUE( module_pip$commands );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
