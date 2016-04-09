// Generated code for Python source for module 'pip.operations.freeze'
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

// The _module_pip$operations$freeze is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$operations$freeze;
PyDictObject *moduledict_pip$operations$freeze;

// The module constants used
static PyObject *const_tuple_str_digest_aa6337ecb2fc140713fa001cf234f3d7_tuple;
static PyObject *const_str_digest_a0924c9544ee69bb139bf50eff2cbb55;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_103511b2d15f4b9dd33ac43d29126685;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___exit__;
static PyObject *const_tuple_str_plain_get_installed_distributions_tuple;
extern PyObject *const_str_plain_lstrip;
extern PyObject *const_str_plain_requirement;
extern PyObject *const_str_plain_link;
extern PyObject *const_str_digest_65dd85f4337b631a8d3b3172085071f3;
extern PyObject *const_str_plain_FrozenRequirement;
static PyObject *const_str_digest_fb6b366ff9572c0e3b226bc6e53d1ea2;
extern PyObject *const_tuple_str_chr_35_tuple;
static PyObject *const_str_digest_1eb573c2f511cf2c37adb47fcbfe9377;
extern PyObject *const_str_chr_61;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_wheel_cache;
extern PyObject *const_str_plain_from_dist;
extern PyObject *const_str_digest_aa6337ecb2fc140713fa001cf234f3d7;
extern PyObject *const_str_digest_4b690a7e875c8578e3270ebb36361d52;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_dependency_links;
extern PyObject *const_str_plain_freeze;
static PyObject *const_str_plain_installations;
extern PyObject *const_str_digest_a155ac2694faac81d0af281a20d32dc5;
static PyObject *const_str_digest_85b32b95afa7a8dc5bc867f97fe42f2a;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain_skip_match;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_digest_b95b7f6b7770a3414d9688660fa8dddc;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_canonicalize_name;
extern PyObject *const_str_plain_local_only;
extern PyObject *const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc;
extern PyObject *const_str_digest_06f68890f582633f62a3ed2858a94eb3;
extern PyObject *const_str_plain_has_metadata;
extern PyObject *const_str_plain_pip;
extern PyObject *const_str_plain_get_metadata_lines;
extern PyObject *const_str_plain_isolated;
extern PyObject *const_str_digest_a7f339ea041ab7d1417c38098e7f9579;
static PyObject *const_tuple_str_digest_a0924c9544ee69bb139bf50eff2cbb55_tuple;
extern PyObject *const_str_chr_35;
extern PyObject *const_str_digest_c0738af5e840c8be1c2e73773ab92b81;
extern PyObject *const_str_digest_97b979d16c22a631cf901d7fc79eba25;
extern PyObject *const_str_plain_get_installed_distributions;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_user_only;
extern PyObject *const_str_digest_47dbfb7d1d6ab8cacd2d590c7b7f023b;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_55be2b9e39ecd7588773f9fbc4873694;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_tuple_str_plain_canonicalize_name_tuple;
extern PyObject *const_str_plain_name;
extern PyObject *const_int_pos_10;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_digest_d46f991cc82ae963239ad012dfb2ce92;
extern PyObject *const_str_digest_75c1113d1333e3f18890bd794bf85661;
extern PyObject *const_str_plain_dist;
extern PyObject *const_str_digest_66bab72d4b41212e0228eea1c88fb078;
extern PyObject *const_slice_int_pos_10_none_none;
extern PyObject *const_str_plain_skip;
extern PyObject *const_str_digest_3afce1a914768434ffa6f85dbbbe804d;
static PyObject *const_tuple_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc_tuple;
extern PyObject *const_str_plain_InstallRequirement;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_from_editable;
static PyObject *const_tuple_str_digest_66bab72d4b41212e0228eea1c88fb078_tuple;
static PyObject *const_str_digest_d8c40419eac983fb110104d8caf10465;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_digest_4ffd88444eeadce54f1221ee94f39d18;
extern PyObject *const_str_digest_e704e015eb89f7b0018092009606b410;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple_tuple;
extern PyObject *const_str_plain_warning;
extern PyObject *const_tuple_str_chr_61_tuple;
extern PyObject *const_str_digest_cf5095d6092235af9c6daca1112eb52f;
extern PyObject *const_str_digest_5ec1282353051301ac716f71f067cae9;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_find_links;
extern PyObject *const_tuple_str_plain_InstallRequirement_tuple;
extern PyObject *const_str_plain_req;
extern PyObject *const_str_plain_skip_regex;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_default_vcs;
extern PyObject *const_str_digest_9a42311a7ab513048f520d695f11f02e;
extern PyObject *const_tuple_str_plain_pkg_resources_tuple;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_installation;
extern PyObject *const_str_digest_95192a51f5a6f76129aa727954138d8e;
extern PyObject *const_slice_int_pos_2_none_none;
static PyObject *const_str_plain_line_req;
static PyObject *const_tuple_395482d8bc3af279b168cf32fce9b865_tuple;
extern PyObject *const_tuple_str_digest_65dd85f4337b631a8d3b3172085071f3_tuple;
static PyObject *const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple;
extern PyObject *const_str_plain_rstrip;
extern PyObject *const_str_plain_pkg_resources;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple;
extern PyObject *const_str_plain_from_line;
static PyObject *const_str_digest_b5627da78cbe56bc1f6bfc160eabbee1;
extern PyObject *const_str_plain_working_set;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_req_file;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_digest_aa6337ecb2fc140713fa001cf234f3d7_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_aa6337ecb2fc140713fa001cf234f3d7_tuple, 0, const_str_digest_aa6337ecb2fc140713fa001cf234f3d7 ); Py_INCREF( const_str_digest_aa6337ecb2fc140713fa001cf234f3d7 );
    const_str_digest_a0924c9544ee69bb139bf50eff2cbb55 = UNSTREAM_STRING( &constant_bin[ 528860 ], 57, 0 );
    const_tuple_str_plain_get_installed_distributions_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_installed_distributions_tuple, 0, const_str_plain_get_installed_distributions ); Py_INCREF( const_str_plain_get_installed_distributions );
    const_str_digest_fb6b366ff9572c0e3b226bc6e53d1ea2 = UNSTREAM_STRING( &constant_bin[ 528917 ], 5, 0 );
    const_str_digest_1eb573c2f511cf2c37adb47fcbfe9377 = UNSTREAM_STRING( &constant_bin[ 528922 ], 24, 0 );
    const_str_plain_installations = UNSTREAM_STRING( &constant_bin[ 528946 ], 13, 1 );
    const_str_digest_85b32b95afa7a8dc5bc867f97fe42f2a = UNSTREAM_STRING( &constant_bin[ 528959 ], 57, 0 );
    const_str_plain_skip_match = UNSTREAM_STRING( &constant_bin[ 529016 ], 10, 1 );
    const_tuple_str_digest_a0924c9544ee69bb139bf50eff2cbb55_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a0924c9544ee69bb139bf50eff2cbb55_tuple, 0, const_str_digest_a0924c9544ee69bb139bf50eff2cbb55 ); Py_INCREF( const_str_digest_a0924c9544ee69bb139bf50eff2cbb55 );
    const_str_digest_55be2b9e39ecd7588773f9fbc4873694 = UNSTREAM_STRING( &constant_bin[ 528867 ], 5, 0 );
    const_str_digest_d46f991cc82ae963239ad012dfb2ce92 = UNSTREAM_STRING( &constant_bin[ 529026 ], 63, 0 );
    const_tuple_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc_tuple, 0, const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc ); Py_INCREF( const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc );
    const_tuple_str_digest_66bab72d4b41212e0228eea1c88fb078_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_66bab72d4b41212e0228eea1c88fb078_tuple, 0, const_str_digest_66bab72d4b41212e0228eea1c88fb078 ); Py_INCREF( const_str_digest_66bab72d4b41212e0228eea1c88fb078 );
    const_str_digest_d8c40419eac983fb110104d8caf10465 = UNSTREAM_STRING( &constant_bin[ 529089 ], 62, 0 );
    const_tuple_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple_tuple = PyTuple_New( 1 );
    const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 0, const_str_digest_103511b2d15f4b9dd33ac43d29126685 ); Py_INCREF( const_str_digest_103511b2d15f4b9dd33ac43d29126685 );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 1, const_str_digest_97b979d16c22a631cf901d7fc79eba25 ); Py_INCREF( const_str_digest_97b979d16c22a631cf901d7fc79eba25 );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 2, const_str_digest_e704e015eb89f7b0018092009606b410 ); Py_INCREF( const_str_digest_e704e015eb89f7b0018092009606b410 );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 3, const_str_digest_06f68890f582633f62a3ed2858a94eb3 ); Py_INCREF( const_str_digest_06f68890f582633f62a3ed2858a94eb3 );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 4, const_str_digest_95192a51f5a6f76129aa727954138d8e ); Py_INCREF( const_str_digest_95192a51f5a6f76129aa727954138d8e );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 5, const_str_digest_a7f339ea041ab7d1417c38098e7f9579 ); Py_INCREF( const_str_digest_a7f339ea041ab7d1417c38098e7f9579 );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 6, const_str_digest_75c1113d1333e3f18890bd794bf85661 ); Py_INCREF( const_str_digest_75c1113d1333e3f18890bd794bf85661 );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 7, const_str_digest_3afce1a914768434ffa6f85dbbbe804d ); Py_INCREF( const_str_digest_3afce1a914768434ffa6f85dbbbe804d );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 8, const_str_digest_cf5095d6092235af9c6daca1112eb52f ); Py_INCREF( const_str_digest_cf5095d6092235af9c6daca1112eb52f );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 9, const_str_digest_b95b7f6b7770a3414d9688660fa8dddc ); Py_INCREF( const_str_digest_b95b7f6b7770a3414d9688660fa8dddc );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 10, const_str_digest_a155ac2694faac81d0af281a20d32dc5 ); Py_INCREF( const_str_digest_a155ac2694faac81d0af281a20d32dc5 );
    PyTuple_SET_ITEM( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple, 11, const_str_digest_47dbfb7d1d6ab8cacd2d590c7b7f023b ); Py_INCREF( const_str_digest_47dbfb7d1d6ab8cacd2d590c7b7f023b );
    PyTuple_SET_ITEM( const_tuple_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple_tuple, 0, const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple ); Py_INCREF( const_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple );
    const_str_plain_installation = UNSTREAM_STRING( &constant_bin[ 207972 ], 12, 1 );
    const_str_plain_line_req = UNSTREAM_STRING( &constant_bin[ 529151 ], 8, 1 );
    const_tuple_395482d8bc3af279b168cf32fce9b865_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 0, const_str_plain_requirement ); Py_INCREF( const_str_plain_requirement );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 1, const_str_plain_find_links ); Py_INCREF( const_str_plain_find_links );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 2, const_str_plain_local_only ); Py_INCREF( const_str_plain_local_only );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 3, const_str_plain_user_only ); Py_INCREF( const_str_plain_user_only );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 4, const_str_plain_skip_regex ); Py_INCREF( const_str_plain_skip_regex );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 5, const_str_plain_default_vcs ); Py_INCREF( const_str_plain_default_vcs );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 6, const_str_plain_isolated ); Py_INCREF( const_str_plain_isolated );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 7, const_str_plain_wheel_cache ); Py_INCREF( const_str_plain_wheel_cache );
    PyTuple_SET_ITEM( const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 8, const_str_plain_skip ); Py_INCREF( const_str_plain_skip );
    const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 6, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple, 8, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_b5627da78cbe56bc1f6bfc160eabbee1 = UNSTREAM_STRING( &constant_bin[ 529159 ], 55, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$operations$freeze( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_114ec5ff9b69255ae4e4e40ca993ac95;
static PyCodeObject *codeobj_d3faac633586f0774b26a591ec282025;
static PyCodeObject *codeobj_f2769073c4b8b242b1e5f0424923a1ba;
static PyCodeObject *codeobj_ad8513d96c747a6b81c2569869b5d83d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_85b32b95afa7a8dc5bc867f97fe42f2a;
    codeobj_114ec5ff9b69255ae4e4e40ca993ac95 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 112, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d3faac633586f0774b26a591ec282025 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_freeze, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f2769073c4b8b242b1e5f0424923a1ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_freeze, 16, const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 9, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ad8513d96c747a6b81c2569869b5d83d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_freeze, 16, const_tuple_395482d8bc3af279b168cf32fce9b865_tuple, 9, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static void genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze_context( Nuitka_GeneratorObject *generator );


static PyObject *MAKE_FUNCTION_function_1_freeze_of_pip$operations$freeze( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_lambda_of_genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze(  );


// The module function definitions.
static PyObject *impl_function_1_freeze_of_pip$operations$freeze( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_requirement = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_find_links = PyCell_NEW1( python_pars[ 1 ] );
    PyCellObject *par_local_only = PyCell_NEW1( python_pars[ 2 ] );
    PyCellObject *par_user_only = PyCell_NEW1( python_pars[ 3 ] );
    PyCellObject *par_skip_regex = PyCell_NEW1( python_pars[ 4 ] );
    PyCellObject *par_default_vcs = PyCell_NEW1( python_pars[ 5 ] );
    PyCellObject *par_isolated = PyCell_NEW1( python_pars[ 6 ] );
    PyCellObject *par_wheel_cache = PyCell_NEW1( python_pars[ 7 ] );
    PyCellObject *par_skip = PyCell_NEW1( python_pars[ 8 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(9 * sizeof(PyCellObject *));
        closure[0] = par_default_vcs;
        Py_INCREF( closure[0] );
        closure[1] = par_find_links;
        Py_INCREF( closure[1] );
        closure[2] = par_isolated;
        Py_INCREF( closure[2] );
        closure[3] = par_local_only;
        Py_INCREF( closure[3] );
        closure[4] = par_requirement;
        Py_INCREF( closure[4] );
        closure[5] = par_skip;
        Py_INCREF( closure[5] );
        closure[6] = par_skip_regex;
        Py_INCREF( closure[6] );
        closure[7] = par_user_only;
        Py_INCREF( closure[7] );
        closure[8] = par_wheel_cache;
        Py_INCREF( closure[8] );

        tmp_return_value = Nuitka_Generator_New(
            genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze_context,
            self->m_name,
#if PYTHON_VERSION >= 350
            self->m_qualname,
#endif
            codeobj_ad8513d96c747a6b81c2569869b5d83d,
            closure,
            9
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_freeze_of_pip$operations$freeze );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_requirement );
    Py_DECREF( par_requirement );
    par_requirement = NULL;

    CHECK_OBJECT( (PyObject *)par_find_links );
    Py_DECREF( par_find_links );
    par_find_links = NULL;

    CHECK_OBJECT( (PyObject *)par_local_only );
    Py_DECREF( par_local_only );
    par_local_only = NULL;

    CHECK_OBJECT( (PyObject *)par_user_only );
    Py_DECREF( par_user_only );
    par_user_only = NULL;

    CHECK_OBJECT( (PyObject *)par_skip_regex );
    Py_DECREF( par_skip_regex );
    par_skip_regex = NULL;

    CHECK_OBJECT( (PyObject *)par_default_vcs );
    Py_DECREF( par_default_vcs );
    par_default_vcs = NULL;

    CHECK_OBJECT( (PyObject *)par_isolated );
    Py_DECREF( par_isolated );
    par_isolated = NULL;

    CHECK_OBJECT( (PyObject *)par_wheel_cache );
    Py_DECREF( par_wheel_cache );
    par_wheel_cache = NULL;

    CHECK_OBJECT( (PyObject *)par_skip );
    Py_DECREF( par_skip );
    par_skip = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_requirement );
    Py_DECREF( par_requirement );
    par_requirement = NULL;

    CHECK_OBJECT( (PyObject *)par_find_links );
    Py_DECREF( par_find_links );
    par_find_links = NULL;

    CHECK_OBJECT( (PyObject *)par_local_only );
    Py_DECREF( par_local_only );
    par_local_only = NULL;

    CHECK_OBJECT( (PyObject *)par_user_only );
    Py_DECREF( par_user_only );
    par_user_only = NULL;

    CHECK_OBJECT( (PyObject *)par_skip_regex );
    Py_DECREF( par_skip_regex );
    par_skip_regex = NULL;

    CHECK_OBJECT( (PyObject *)par_default_vcs );
    Py_DECREF( par_default_vcs );
    par_default_vcs = NULL;

    CHECK_OBJECT( (PyObject *)par_isolated );
    Py_DECREF( par_isolated );
    par_isolated = NULL;

    CHECK_OBJECT( (PyObject *)par_wheel_cache );
    Py_DECREF( par_wheel_cache );
    par_wheel_cache = NULL;

    CHECK_OBJECT( (PyObject *)par_skip );
    Py_DECREF( par_skip );
    par_skip = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_freeze_of_pip$operations$freeze );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_skip_match = NULL;
    PyObject *var_dependency_links = NULL;
    PyObject *var_dist = NULL;
    PyObject *var_link = NULL;
    PyObject *var_installations = NULL;
    PyObject *var_req = NULL;
    PyObject *var_req_file = NULL;
    PyObject *var_line = NULL;
    PyObject *var_line_req = NULL;
    PyObject *var_installation = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_expression_name_3;
    PyObject *tmp_expression_name_4;
    PyObject *tmp_expression_name_5;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    int tmp_or_left_truth_4;
    int tmp_or_left_truth_5;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_left_value_4;
    PyObject *tmp_or_left_value_5;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_or_right_value_4;
    PyObject *tmp_or_right_value_5;
    bool tmp_result;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unicode_arg_1;
    PyObject *tmp_unicode_arg_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_f2769073c4b8b242b1e5f0424923a1ba, module_pip$operations$freeze );
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
            exception_lineno = 16;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_or_left_value_1 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_or_left_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "find_links" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
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
    tmp_or_right_value_1 = PyList_New( 0 );
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = PyCell_GET( generator->m_closure[1] );
        PyCell_SET( generator->m_closure[1], tmp_assign_source_1 );
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = Py_None;
    assert( var_skip_match == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_skip_match = tmp_assign_source_2;

    tmp_cond_value_1 = PyCell_GET( generator->m_closure[6] );

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "skip_regex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_compile );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyCell_GET( generator->m_closure[6] );

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "skip_regex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_search );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_skip_match;
        var_skip_match = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_4 = PyList_New( 0 );
    assert( var_dependency_links == NULL );
    var_dependency_links = tmp_assign_source_4;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_pkg_resources );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pkg_resources );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pkg_resources" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_working_set );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 31;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_dist;
        var_dist = tmp_assign_source_7;
        Py_INCREF( var_dist );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_dist;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_has_metadata );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 32;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_65dd85f4337b631a8d3b3172085071f3_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 32;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = var_dependency_links;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dependency_links" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_extend );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_2;
    }
    tmp_source_name_6 = var_dist;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get_metadata_lines );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 34;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 34;
    tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_65dd85f4337b631a8d3b3172085071f3_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 34;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_iter_arg_2 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "find_links" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_8;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 36;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_link;
        var_link = tmp_assign_source_10;
        Py_INCREF( var_link );
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = const_str_digest_55be2b9e39ecd7588773f9fbc4873694;
    tmp_compare_right_1 = var_link;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_7 = var_dependency_links;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dependency_links" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto try_except_handler_3;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = var_link;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "link" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto try_except_handler_3;
    }

    generator->m_frame->f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_iter_arg_3 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "find_links" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_11;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 39;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_link;
        var_link = tmp_assign_source_13;
        Py_INCREF( var_link );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = const_str_digest_fb6b366ff9572c0e3b226bc6e53d1ea2;
    tmp_right_name_1 = var_link;

    tmp_expression_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_4;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_assign_source_14 = PyDict_New();
    assert( var_installations == NULL );
    var_installations = tmp_assign_source_14;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_get_installed_distributions );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_installed_distributions );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_installed_distributions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_str_plain_local_only;
    tmp_dict_value_1 = PyCell_GET( generator->m_closure[3] );

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "local_only" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_skip;
    tmp_dict_value_2 = const_tuple_empty;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_user_only;
    tmp_dict_value_3 = PyCell_GET( generator->m_closure[7] );

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "user_only" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    generator->m_frame->f_lineno = 44;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator == NULL );
    tmp_for_loop_4__for_iterator = tmp_assign_source_15;

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator;

    tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 42;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = tmp_for_loop_4__iter_value;

    {
        PyObject *old = var_dist;
        var_dist = tmp_assign_source_17;
        Py_INCREF( var_dist );
        Py_XDECREF( old );
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_pip );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pip );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        goto try_except_handler_5;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_FrozenRequirement );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_5;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_from_dist );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_5;
    }
    tmp_args_element_name_4 = var_dist;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto try_except_handler_5;
    }

    tmp_args_element_name_5 = var_dependency_links;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dependency_links" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        goto try_except_handler_5;
    }

    generator->m_frame->f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_req;
        var_req = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = var_req;

    tmp_ass_subscribed_1 = var_installations;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "installations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        goto try_except_handler_5;
    }

    tmp_source_name_10 = var_req;

    tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_name );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto try_except_handler_5;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    tmp_cond_value_3 = PyCell_GET( generator->m_closure[4] );

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "requirement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    // Tried code:
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_open );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_6 = PyCell_GET( generator->m_closure[4] );

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "requirement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto try_except_handler_6;
    }

    generator->m_frame->f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_6;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_19;

    tmp_source_name_11 = tmp_with_1__source;

    tmp_assign_source_20 = LOOKUP_SPECIAL( tmp_source_name_11, const_str_plain___exit__ );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_6;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_20;

    tmp_source_name_12 = tmp_with_1__source;

    tmp_called_name_9 = LOOKUP_SPECIAL( tmp_source_name_12, const_str_plain___enter__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_6;
    }
    generator->m_frame->f_lineno = 52;
    tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_6;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_21;

    tmp_assign_source_22 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_22 );
    tmp_with_1__indicator = tmp_assign_source_22;

    tmp_assign_source_23 = tmp_with_1__enter;

    assert( var_req_file == NULL );
    Py_INCREF( tmp_assign_source_23 );
    var_req_file = tmp_assign_source_23;

    // Tried code:
    // Tried code:
    tmp_iter_arg_5 = var_req_file;

    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto try_except_handler_8;
    }
    assert( tmp_for_loop_5__for_iterator == NULL );
    tmp_for_loop_5__for_iterator = tmp_assign_source_24;

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator;

    tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 53;
            goto try_except_handler_9;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_assign_source_26 = tmp_for_loop_5__iter_value;

    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_26;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_source_name_13 = var_line;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_strip );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 54;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_10 );
    Py_DECREF( tmp_called_name_10 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_9;
    }
    tmp_or_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_9;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto try_except_handler_9;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_source_name_15 = var_line;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto try_except_handler_9;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_strip );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 55;
    tmp_source_name_14 = CALL_FUNCTION_NO_ARGS( tmp_called_name_12 );
    Py_DECREF( tmp_called_name_12 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_9;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 57;
    tmp_or_left_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_chr_35_tuple, 0 ) );

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto try_except_handler_9;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 57;
        goto try_except_handler_9;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_and_left_value_1 = var_skip_match;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "skip_match" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto try_except_handler_9;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto try_except_handler_9;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_called_name_13 = var_skip_match;

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "skip_match" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto try_except_handler_9;
    }

    tmp_args_element_name_7 = var_line;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto try_except_handler_9;
    }

    generator->m_frame->f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto try_except_handler_9;
    }
    tmp_or_left_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_or_left_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_4 = CHECK_IF_TRUE( tmp_or_left_value_4 );
    if ( tmp_or_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_4 );

        exception_lineno = 57;
        goto try_except_handler_9;
    }
    if ( tmp_or_left_truth_4 == 1 )
    {
        goto or_left_4;
    }
    else
    {
        goto or_right_4;
    }
    or_right_4:;
    Py_DECREF( tmp_or_left_value_4 );
    tmp_source_name_16 = var_line;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_9;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_startswith );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 65;
    tmp_or_right_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, &PyTuple_GET_ITEM( const_tuple_tuple_4bbf6dc44a3352ffbdbf7e89c6fb362f_tuple_tuple, 0 ) );

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_or_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto try_except_handler_9;
    }
    tmp_or_right_value_3 = tmp_or_right_value_4;
    goto or_end_4;
    or_left_4:;
    tmp_or_right_value_3 = tmp_or_left_value_4;
    or_end_4:;
    tmp_or_right_value_2 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_or_right_value_2 = tmp_or_left_value_3;
    or_end_3:;
    tmp_cond_value_4 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_cond_value_4 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 57;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_17 = var_line;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_9;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_rstrip );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 66;
    tmp_expression_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_15 );
    Py_DECREF( tmp_called_name_15 );
    if ( tmp_expression_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto try_except_handler_9;
    }
    goto loop_start_5;
    branch_no_5:;
    tmp_source_name_18 = var_line;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto try_except_handler_9;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_startswith );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 69;
    tmp_or_left_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc_tuple, 0 ) );

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_or_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto try_except_handler_9;
    }
    tmp_or_left_truth_5 = CHECK_IF_TRUE( tmp_or_left_value_5 );
    if ( tmp_or_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_5 );

        exception_lineno = 69;
        goto try_except_handler_9;
    }
    if ( tmp_or_left_truth_5 == 1 )
    {
        goto or_left_5;
    }
    else
    {
        goto or_right_5;
    }
    or_right_5:;
    Py_DECREF( tmp_or_left_value_5 );
    tmp_source_name_19 = var_line;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto try_except_handler_9;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_startswith );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 69;
    tmp_or_right_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, &PyTuple_GET_ITEM( const_tuple_str_digest_aa6337ecb2fc140713fa001cf234f3d7_tuple, 0 ) );

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_or_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto try_except_handler_9;
    }
    tmp_cond_value_5 = tmp_or_right_value_5;
    goto or_end_5;
    or_left_5:;
    tmp_cond_value_5 = tmp_or_left_value_5;
    or_end_5:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 69;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_20 = var_line;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto try_except_handler_9;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_startswith );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 70;
    tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, &PyTuple_GET_ITEM( const_tuple_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc_tuple, 0 ) );

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_9;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 70;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_subscribed_name_1 = var_line;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto try_except_handler_9;
    }

    tmp_subscript_name_1 = const_slice_int_pos_2_none_none;
    tmp_source_name_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_9;
    }
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_strip );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 71;
    tmp_assign_source_27 = CALL_FUNCTION_NO_ARGS( tmp_called_name_19 );
    Py_DECREF( tmp_called_name_19 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_subscribed_name_2 = var_line;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        goto try_except_handler_9;
    }

    tmp_subscript_name_2 = const_slice_int_pos_10_none_none;
    tmp_source_name_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto try_except_handler_9;
    }
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_strip );
    Py_DECREF( tmp_source_name_23 );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 73;
    tmp_source_name_22 = CALL_FUNCTION_NO_ARGS( tmp_called_name_21 );
    Py_DECREF( tmp_called_name_21 );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto try_except_handler_9;
    }
    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_lstrip );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 73;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, &PyTuple_GET_ITEM( const_tuple_str_chr_61_tuple, 0 ) );

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    branch_end_7:;
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_InstallRequirement );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InstallRequirement );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InstallRequirement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        goto try_except_handler_9;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_from_editable );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_9;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_line;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
    tmp_dict_key_4 = const_str_plain_default_vcs;
    tmp_dict_value_4 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "default_vcs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto try_except_handler_9;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_isolated;
    tmp_dict_value_5 = PyCell_GET( generator->m_closure[2] );

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "isolated" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        goto try_except_handler_9;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_plain_wheel_cache;
    tmp_dict_value_6 = PyCell_GET( generator->m_closure[8] );

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "wheel_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto try_except_handler_9;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    generator->m_frame->f_lineno = 78;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_line_req;
        var_line_req = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_InstallRequirement );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InstallRequirement );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InstallRequirement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        goto try_except_handler_9;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_from_line );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_9;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_line;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_dict_key_7 = const_str_plain_isolated;
    tmp_dict_value_7 = PyCell_GET( generator->m_closure[2] );

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "isolated" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto try_except_handler_9;
    }

    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_wheel_cache;
    tmp_dict_value_8 = PyCell_GET( generator->m_closure[8] );

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "wheel_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto try_except_handler_9;
    }

    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8 );
    generator->m_frame->f_lineno = 84;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_2, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_line_req;
        var_line_req = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    branch_end_6:;
    tmp_source_name_26 = var_line_req;

    tmp_cond_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_name );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_9;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 87;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto try_except_handler_9;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_info );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    tmp_args_element_name_8 = const_str_digest_d8c40419eac983fb110104d8caf10465;
    tmp_source_name_28 = var_line;

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto try_except_handler_9;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_strip );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_24 );

        exception_lineno = 91;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 91;
    tmp_args_element_name_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_25 );
    Py_DECREF( tmp_called_name_25 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_24 );

        exception_lineno = 91;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        goto try_except_handler_9;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_info );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 94;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, &PyTuple_GET_ITEM( const_tuple_str_digest_a0924c9544ee69bb139bf50eff2cbb55_tuple, 0 ) );

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_30 = var_line_req;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line_req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto try_except_handler_9;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_name );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_9;
    }
    tmp_compare_right_2 = var_installations;

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "installations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto try_except_handler_9;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        goto try_except_handler_9;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_warning );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_9;
    }
    tmp_args_element_name_10 = const_str_digest_d46f991cc82ae963239ad012dfb2ce92;
    tmp_source_name_32 = var_line;

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        goto try_except_handler_9;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_strip );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 101;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 101;
    tmp_args_element_name_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_28 );
    Py_DECREF( tmp_called_name_28 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 101;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_9;
    branch_no_9:;
    tmp_subscribed_name_3 = var_installations;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "installations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto try_except_handler_9;
    }

    tmp_source_name_34 = var_line_req;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line_req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto try_except_handler_9;
    }

    tmp_subscript_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_name );
    if ( tmp_subscript_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_9;
    }
    tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_unicode_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_9;
    }
    tmp_source_name_33 = PyObject_Unicode( tmp_unicode_arg_1 );
    Py_DECREF( tmp_unicode_arg_1 );
    if ( tmp_source_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_9;
    }
    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_rstrip );
    Py_DECREF( tmp_source_name_33 );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_9;
    }
    generator->m_frame->f_lineno = 104;
    tmp_expression_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_29 );
    Py_DECREF( tmp_called_name_29 );
    if ( tmp_expression_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_9;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_9;
    }
    tmp_delsubscr_target_1 = var_installations;

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "installations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        goto try_except_handler_9;
    }

    tmp_source_name_35 = var_line_req;

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line_req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        goto try_except_handler_9;
    }

    tmp_delsubscr_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_name );
    if ( tmp_delsubscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_9;
    }
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    Py_DECREF( tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_9;
    }
    branch_end_9:;
    branch_end_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto try_except_handler_9;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_8;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != -1 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, generator->m_frame, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto try_except_handler_10;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_31 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        tmp_with_1__indicator = tmp_assign_source_31;
        Py_INCREF( tmp_with_1__indicator );
        Py_XDECREF( old );
    }

    tmp_called_name_30 = tmp_with_1__exit;

    tmp_args_element_name_12 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_13 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_14 = PyThreadState_GET()->exc_traceback;
    generator->m_frame->f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_30, call_args );
    }

    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto try_except_handler_10;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 53;
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_no_11;
    }
    else
    {
        goto branch_yes_11;
    }
    branch_yes_11:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == generator->m_frame) generator->m_frame->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_10;
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == generator->m_frame) generator->m_frame->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_10;
    branch_end_10:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze );
    return;
    // End of try:
    try_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    tmp_compare_left_4 = tmp_with_1__indicator;

    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_name_31 = tmp_with_1__exit;

    generator->m_frame->f_lineno = 53;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_31, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_8 );
        Py_XDECREF( exception_keeper_value_8 );
        Py_XDECREF( exception_keeper_tb_8 );

        exception_lineno = 53;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    tmp_compare_left_5 = tmp_with_1__indicator;

    tmp_compare_right_5 = Py_True;
    tmp_is_2 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_2 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_32 = tmp_with_1__exit;

    generator->m_frame->f_lineno = 53;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_32, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_expression_name_4 = const_str_digest_b5627da78cbe56bc1f6bfc160eabbee1;
    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_4 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_called_name_33 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_33 != NULL );
    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_source_name_36 = var_installations;

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "installations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_values );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 112;
    tmp_tuple_element_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_34 );
    Py_DECREF( tmp_called_name_34 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_dict_key_9 = const_str_plain_key;
    tmp_dict_value_9 = MAKE_FUNCTION_function_1_lambda_of_genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze(  );
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    generator->m_frame->f_lineno = 112;
    tmp_iter_arg_6 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_3, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator == NULL );
    tmp_for_loop_6__for_iterator = tmp_assign_source_32;

    // Tried code:
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator;

    tmp_assign_source_33 = ITERATOR_NEXT( tmp_next_source_6 );
    if ( tmp_assign_source_33 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_6;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 111;
            goto try_except_handler_11;
        }
    }

    {
        PyObject *old = tmp_for_loop_6__iter_value;
        tmp_for_loop_6__iter_value = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    tmp_assign_source_34 = tmp_for_loop_6__iter_value;

    {
        PyObject *old = var_installation;
        var_installation = tmp_assign_source_34;
        Py_INCREF( var_installation );
        Py_XDECREF( old );
    }

    tmp_called_name_35 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_canonicalize_name );

    if (unlikely( tmp_called_name_35 == NULL ))
    {
        tmp_called_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_canonicalize_name );
    }

    if ( tmp_called_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "canonicalize_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto try_except_handler_11;
    }

    tmp_source_name_37 = var_installation;

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_name );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto try_except_handler_11;
    }
    generator->m_frame->f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_compare_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto try_except_handler_11;
    }
    tmp_compare_right_6 = PyCell_GET( generator->m_closure[5] );

    if ( tmp_compare_right_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "skip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto try_except_handler_11;
    }

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_NotIn_2 == -1) );
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_NotIn_2 == 0 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_unicode_arg_2 = var_installation;

    if ( tmp_unicode_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "installation" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        goto try_except_handler_11;
    }

    tmp_source_name_38 = PyObject_Unicode( tmp_unicode_arg_2 );
    if ( tmp_source_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_11;
    }
    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_rstrip );
    Py_DECREF( tmp_source_name_38 );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_11;
    }
    generator->m_frame->f_lineno = 114;
    tmp_expression_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_36 );
    Py_DECREF( tmp_called_name_36 );
    if ( tmp_expression_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_11;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_11;
    }
    branch_no_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto try_except_handler_11;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;

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
            if ( generator->m_closure[4]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_requirement,
                    generator->m_closure[4]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_find_links,
                    generator->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[3]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_local_only,
                    generator->m_closure[3]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[7]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_user_only,
                    generator->m_closure[7]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[6]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_skip_regex,
                    generator->m_closure[6]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default_vcs,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_isolated,
                    generator->m_closure[2]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[8]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wheel_cache,
                    generator->m_closure[8]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[5]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_skip,
                    generator->m_closure[5]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_skip_match )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_skip_match,
                    var_skip_match
                );

                assert( res == 0 );
            }

            if ( var_dependency_links )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dependency_links,
                    var_dependency_links
                );

                assert( res == 0 );
            }

            if ( var_dist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dist,
                    var_dist
                );

                assert( res == 0 );
            }

            if ( var_link )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_link,
                    var_link
                );

                assert( res == 0 );
            }

            if ( var_installations )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_installations,
                    var_installations
                );

                assert( res == 0 );
            }

            if ( var_req )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_req,
                    var_req
                );

                assert( res == 0 );
            }

            if ( var_req_file )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_req_file,
                    var_req_file
                );

                assert( res == 0 );
            }

            if ( var_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    var_line
                );

                assert( res == 0 );
            }

            if ( var_line_req )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line_req,
                    var_line_req
                );

                assert( res == 0 );
            }

            if ( var_installation )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_installation,
                    var_installation
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

    goto try_end_11;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_skip_match );
    var_skip_match = NULL;

    Py_XDECREF( var_dependency_links );
    var_dependency_links = NULL;

    Py_XDECREF( var_dist );
    var_dist = NULL;

    Py_XDECREF( var_link );
    var_link = NULL;

    Py_XDECREF( var_installations );
    var_installations = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    Py_XDECREF( var_req_file );
    var_req_file = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_line_req );
    var_line_req = NULL;

    Py_XDECREF( var_installation );
    var_installation = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    Py_XDECREF( var_skip_match );
    var_skip_match = NULL;

    Py_XDECREF( var_dependency_links );
    var_dependency_links = NULL;

    Py_XDECREF( var_dist );
    var_dist = NULL;

    Py_XDECREF( var_link );
    var_link = NULL;

    Py_XDECREF( var_installations );
    var_installations = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    Py_XDECREF( var_req_file );
    var_req_file = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_line_req );
    var_line_req = NULL;

    Py_XDECREF( var_installation );
    var_installation = NULL;


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


static PyObject *impl_function_1_lambda_of_genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_114ec5ff9b69255ae4e4e40ca993ac95, module_pip$operations$freeze );
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
    tmp_source_name_2 = par_x;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 112;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
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
            if ( par_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    par_x
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
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze );
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



static PyObject *MAKE_FUNCTION_function_1_freeze_of_pip$operations$freeze( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_freeze_of_pip$operations$freeze,
        const_str_plain_freeze,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f2769073c4b8b242b1e5f0424923a1ba,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$operations$freeze,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_lambda_of_genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_lambda_of_genobj_1_freeze_of_function_1_freeze_of_pip$operations$freeze,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_1eb573c2f511cf2c37adb47fcbfe9377,
#endif
        codeobj_114ec5ff9b69255ae4e4e40ca993ac95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$operations$freeze,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$operations$freeze =
{
    PyModuleDef_HEAD_INIT,
    "pip.operations.freeze",   /* m_name */
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

MOD_INIT_DECL( pip$operations$freeze )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$operations$freeze );
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

    // puts( "in initpip$operations$freeze" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$operations$freeze = Py_InitModule4(
        "pip.operations.freeze",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$operations$freeze = PyModule_Create( &mdef_pip$operations$freeze );
#endif

    moduledict_pip$operations$freeze = (PyDictObject *)((PyModuleObject *)module_pip$operations$freeze)->md_dict;

    CHECK_OBJECT( module_pip$operations$freeze );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_66bab72d4b41212e0228eea1c88fb078, module_pip$operations$freeze );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$operations$freeze );

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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_source_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_85b32b95afa7a8dc5bc867f97fe42f2a;
    UPDATE_STRING_DICT0( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_4ffd88444eeadce54f1221ee94f39d18;
    UPDATE_STRING_DICT0( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_d3faac633586f0774b26a591ec282025, module_pip$operations$freeze );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$operations$freeze)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$operations$freeze)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$operations$freeze)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_pip, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_pip, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$operations$freeze)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c0738af5e840c8be1c2e73773ab92b81, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_InstallRequirement_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_InstallRequirement );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_InstallRequirement, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_pip$operations$freeze)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_5ec1282353051301ac716f71f067cae9, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_get_installed_distributions_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_get_installed_distributions );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_get_installed_distributions, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pip$operations$freeze)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_9a42311a7ab513048f520d695f11f02e, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_pkg_resources_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_pkg_resources );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_pkg_resources, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_pip$operations$freeze)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_4b690a7e875c8578e3270ebb36361d52, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_canonicalize_name_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_canonicalize_name );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_canonicalize_name, tmp_assign_source_12 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 13;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_66bab72d4b41212e0228eea1c88fb078_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_logger, tmp_assign_source_13 );

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
    tmp_defaults_1 = const_tuple_none_none_none_none_none_none_false_none_tuple_empty_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_function_1_freeze_of_pip$operations$freeze( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_pip$operations$freeze, (Nuitka_StringObject *)const_str_plain_freeze, tmp_assign_source_14 );

    return MOD_RETURN_VALUE( module_pip$operations$freeze );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
