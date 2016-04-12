// Generated code for Python source for module 'simplejson.decoder'
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

// The _module_simplejson$decoder is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_simplejson$decoder;
PyDictObject *moduledict_simplejson$decoder;

// The module constants used
static PyObject *const_str_digest_0ecaf8cadbe5cd8d2a50e4a59ffa5482;
extern PyObject *const_str_plain_MULTILINE;
static PyObject *const_str_plain_raw_decode;
static PyObject *const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_big;
static PyObject *const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple;
static PyObject *const_str_digest_9768aaf512679785b33f03240f2d8642;
extern PyObject *const_str_plain_NaN;
extern PyObject *const_str_plain_parse_constant;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_pairs;
extern PyObject *const_int_pos_55296;
static PyObject *const_str_plain_JSONObject;
extern PyObject *const_str_plain_PosInf;
extern PyObject *const_slice_int_pos_8_none_none;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_binary_type;
extern PyObject *const_str_plain_unpack;
static PyObject *const_str_plain__w;
extern PyObject *const_tuple_str_chr_34_tuple;
static PyObject *const_str_plain_NegInf;
static PyObject *const_str_digest_cdb48e83084411623187b5dfc05e24e2;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_end;
static PyObject *const_str_plain__CONSTANTS;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_nextchar;
static PyObject *const_str_plain_BACKSLASH;
static PyObject *const_str_digest_1d21bb799fed9afd1c58ac6e12dd3170;
static PyObject *const_str_digest_fa8095fc0888435e3790faede211f6e9;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_0a2604c8ae60507309a5be81abbb2d58;
extern PyObject *const_str_plain_fromhex;
static PyObject *const_list_str_plain_JSONDecoder_list;
static PyObject *const_str_digest_cacd0af28718d0dad5cf11b675796327;
static PyObject *const_tuple_str_plain__BYTES_str_plain_nan_str_plain_inf_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_scan_once;
static PyObject *const_str_plain_escX;
static PyObject *const_str_plain__ws;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_85d7040e60705e57c9398509934d6613;
static PyObject *const_tuple_none_none_none_none_none_true_none_tuple;
extern PyObject *const_str_plain_py_scanstring;
static PyObject *const_str_plain_nan;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_WHITESPACE;
extern PyObject *const_str_plain_JSONDecodeError;
static PyObject *const_str_plain_uni2;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_object_pairs_hook;
static PyObject *const_str_digest_853e849e7dfdcf8a2c16729dd0c2cccc;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_digest_90fc8c406fd6945f66bb1cd669171bd6;
static PyObject *const_str_plain_7FF80000000000007FF0000000000000;
extern PyObject *const_str_plain_t;
static PyObject *const_int_pos_64512;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_81b9bf601442006362df52f18569e200;
static PyObject *const_str_digest_1eee447c219bb7ebf2997d5b802c335f;
static PyObject *const_str_plain__join;
extern PyObject *const_str_plain_terminator;
extern PyObject *const_int_pos_239;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_chr_13;
static PyObject *const_str_digest_47e02b19e4e386226cd24c3510b95a5a;
static PyObject *const_str_plain_esc;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_chr_8;
extern PyObject *const_str_plain_object_hook;
static PyObject *const_str_plain_esc2;
extern PyObject *const_tuple_str_newline_tuple;
extern PyObject *const_int_pos_65535;
static PyObject *const_str_digest_e0d1f0033c9dda08166c17a2f108b83c;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_22ff8b10eb8e1dc22f9715a8cef8bd4b;
static PyObject *const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain__maxunicode;
extern PyObject *const_str_chr_9;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_plain__b;
extern PyObject *const_str_chr_125;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_aa3b841eec06848a0a21af5b9b4a619e;
extern PyObject *const_str_chr_92;
static PyObject *const_str_digest_a283b08790b4e138bccc8873376f6f80;
extern PyObject *const_int_pos_10;
extern PyObject *const_tuple_str_chr_12_tuple;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_parse_array;
extern PyObject *const_str_plain_b;
static PyObject *const_tuple_str_chr_8_tuple;
extern PyObject *const_str_plain_match;
static PyObject *const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple;
extern PyObject *const_str_plain_maxunicode;
extern PyObject *const_str_plain_decode;
extern PyObject *const_int_pos_56320;
extern PyObject *const_tuple_str_empty_tuple;
static PyObject *const_str_digest_70f0b6b07f9ce5c014a802d97b4725e1;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_dd;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_strict;
static PyObject *const_str_plain_memo_get;
extern PyObject *const_str_chr_12;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_plain_STRINGCHUNK;
extern PyObject *const_str_plain_parse_float;
static PyObject *const_str_plain__m;
extern PyObject *const_int_0;
static PyObject *const_slice_none_int_pos_8_none;
extern PyObject *const_str_plain_content;
extern PyObject *const_str_plain_chunks;
extern PyObject *const_tuple_str_chr_92_tuple;
static PyObject *const_str_digest_4dc7b606f4f272e1acc1c6d15e20c877;
extern PyObject *const_str_plain_msg;
static PyObject *const_tuple_3efdd14badb2aecc5fb7e6a255a445f8_tuple;
extern PyObject *const_str_plain_scanner;
static PyObject *const_int_pos_65279;
static PyObject *const_str_plain_byteorder;
extern PyObject *const_str_chr_58;
static PyObject *const_str_plain_ord0;
static PyObject *const_str_plain__BYTES;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_parse_object;
extern PyObject *const_str_digest_84bbbbe97f6e4159970e42a288988abf;
static PyObject *const_str_digest_f3176fd2e0e8ce526c77b9fad9b29549;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_setdefault;
static PyObject *const_tuple_str_plain_7FF80000000000007FF0000000000000_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_chr_13_tuple;
extern PyObject *const_str_plain_scanstring;
extern PyObject *const_str_chr_93;
extern PyObject *const_str_plain_make_scanner;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_DEFAULT_ENCODING;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_Infinity;
static PyObject *const_str_digest_d4b1bab947b379480adaa0b00e84655d;
static PyObject *const_str_plain_begin;
static PyObject *const_tuple_str_plain_scanstring_tuple;
static PyObject *const_str_plain__floatconstants;
extern PyObject *const_str_plain_parse_string;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_simplejson;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain_memo;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_chunk;
static PyObject *const_str_digest_d6dfbb08ebce948a228788feeb86846d;
static PyObject *const_str_plain__import_c_scanstring;
extern PyObject *const_str_plain_parse_int;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_str_digest_55ee07ca9d29d78d24331ccf7da751d6;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_values;
static PyObject *const_str_plain_WHITESPACE_STR;
static PyObject *const_tuple_str_plain_make_scanner_str_plain_JSONDecodeError_tuple;
static PyObject *const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple;
static PyObject *const_str_digest_a75c516bc4fc5ac6523e443d99a00dff;
extern PyObject *const_str_plain_decoder;
static PyObject *const_str_plain_JSONArray;
extern PyObject *const_str_plain_c_scanstring;
extern PyObject *const_str_plain_VERBOSE;
extern PyObject *const_str_plain_unichr;
extern PyObject *const_tuple_str_chr_47_tuple;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain__speedups;
static PyObject *const_str_plain__append;
static PyObject *const_str_plain_uni;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_newline;
extern PyObject *const_str_chr_34;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_digest_146e803d9878ec1c531de3dd001739b2;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_groups;
static PyObject *const_str_digest_46680d0b9c762093d6b01df5f7e36089;
static PyObject *const_str_digest_df3bab021f55099720d4d0082642d46b;
extern PyObject *const_str_plain_DOTALL;
extern PyObject *const_str_plain_u;
static PyObject *const_tuple_str_chr_9_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_plain_FLAGS;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain__PY3;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_f882a04d500527aadd741ca07273e56c;
static PyObject *const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple;
extern PyObject *const_int_pos_65536;
extern PyObject *const_str_plain_JSONDecoder;
static PyObject *const_slice_int_pos_1_int_pos_2_none;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_0ecaf8cadbe5cd8d2a50e4a59ffa5482 = UNSTREAM_STRING( &constant_bin[ 708851 ], 30, 0 );
    const_str_plain_raw_decode = UNSTREAM_STRING( &constant_bin[ 708881 ], 10, 1 );
    const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple, 2, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    const_str_plain__w = UNSTREAM_STRING( &constant_bin[ 3029 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple, 3, const_str_plain__w ); Py_INCREF( const_str_plain__w );
    PyTuple_SET_ITEM( const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple, 4, const_str_plain__PY3 ); Py_INCREF( const_str_plain__PY3 );
    const_str_plain_ord0 = UNSTREAM_STRING( &constant_bin[ 708891 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple, 5, const_str_plain_ord0 ); Py_INCREF( const_str_plain_ord0 );
    const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple, 2, const_str_plain__w ); Py_INCREF( const_str_plain__w );
    PyTuple_SET_ITEM( const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple, 3, const_str_plain__PY3 ); Py_INCREF( const_str_plain__PY3 );
    PyTuple_SET_ITEM( const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple, 4, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple, 5, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_str_digest_9768aaf512679785b33f03240f2d8642 = UNSTREAM_STRING( &constant_bin[ 353685 ], 2, 0 );
    const_str_plain_JSONObject = UNSTREAM_STRING( &constant_bin[ 708895 ], 10, 1 );
    const_str_plain_NegInf = UNSTREAM_STRING( &constant_bin[ 708905 ], 6, 1 );
    const_str_digest_cdb48e83084411623187b5dfc05e24e2 = UNSTREAM_STRING( &constant_bin[ 708911 ], 1050, 0 );
    const_str_plain__CONSTANTS = UNSTREAM_STRING( &constant_bin[ 709961 ], 10, 1 );
    const_str_plain_BACKSLASH = UNSTREAM_STRING( &constant_bin[ 709971 ], 9, 1 );
    const_str_digest_1d21bb799fed9afd1c58ac6e12dd3170 = UNSTREAM_STRING( &constant_bin[ 709980 ], 30, 0 );
    const_str_digest_fa8095fc0888435e3790faede211f6e9 = UNSTREAM_STRING( &constant_bin[ 710010 ], 430, 0 );
    const_str_digest_0a2604c8ae60507309a5be81abbb2d58 = UNSTREAM_STRING( &constant_bin[ 710440 ], 2312, 0 );
    const_list_str_plain_JSONDecoder_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_JSONDecoder_list, 0, const_str_plain_JSONDecoder ); Py_INCREF( const_str_plain_JSONDecoder );
    const_str_digest_cacd0af28718d0dad5cf11b675796327 = UNSTREAM_STRING( &constant_bin[ 712752 ], 31, 0 );
    const_tuple_str_plain__BYTES_str_plain_nan_str_plain_inf_tuple = PyTuple_New( 3 );
    const_str_plain__BYTES = UNSTREAM_STRING( &constant_bin[ 712783 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__BYTES_str_plain_nan_str_plain_inf_tuple, 0, const_str_plain__BYTES ); Py_INCREF( const_str_plain__BYTES );
    const_str_plain_nan = UNSTREAM_STRING( &constant_bin[ 186428 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__BYTES_str_plain_nan_str_plain_inf_tuple, 1, const_str_plain_nan ); Py_INCREF( const_str_plain_nan );
    PyTuple_SET_ITEM( const_tuple_str_plain__BYTES_str_plain_nan_str_plain_inf_tuple, 2, const_str_plain_inf ); Py_INCREF( const_str_plain_inf );
    const_str_plain_escX = UNSTREAM_STRING( &constant_bin[ 712789 ], 4, 1 );
    const_str_plain__ws = UNSTREAM_STRING( &constant_bin[ 712793 ], 3, 1 );
    const_str_digest_85d7040e60705e57c9398509934d6613 = UNSTREAM_STRING( &constant_bin[ 712796 ], 30, 0 );
    const_tuple_none_none_none_none_none_true_none_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_true_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_true_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_true_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_true_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_true_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_true_none_tuple, 5, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_true_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    const_str_plain_WHITESPACE = UNSTREAM_STRING( &constant_bin[ 403490 ], 10, 1 );
    const_str_plain_uni2 = UNSTREAM_STRING( &constant_bin[ 712826 ], 4, 1 );
    const_str_digest_853e849e7dfdcf8a2c16729dd0c2cccc = UNSTREAM_STRING( &constant_bin[ 712830 ], 18, 0 );
    const_str_plain_7FF80000000000007FF0000000000000 = UNSTREAM_STRING( &constant_bin[ 712848 ], 32, 0 );
    const_int_pos_64512 = PyLong_FromUnsignedLong( 64512ul );
    const_str_digest_81b9bf601442006362df52f18569e200 = UNSTREAM_STRING( &constant_bin[ 712880 ], 442, 0 );
    const_str_digest_1eee447c219bb7ebf2997d5b802c335f = UNSTREAM_STRING( &constant_bin[ 713322 ], 30, 0 );
    const_str_plain__join = UNSTREAM_STRING( &constant_bin[ 713352 ], 5, 1 );
    const_str_digest_47e02b19e4e386226cd24c3510b95a5a = UNSTREAM_STRING( &constant_bin[ 713357 ], 4, 0 );
    const_str_plain_esc = UNSTREAM_STRING( &constant_bin[ 14124 ], 3, 1 );
    const_str_plain_esc2 = UNSTREAM_STRING( &constant_bin[ 713361 ], 4, 1 );
    const_str_digest_e0d1f0033c9dda08166c17a2f108b83c = UNSTREAM_STRING( &constant_bin[ 713365 ], 122, 0 );
    const_str_digest_22ff8b10eb8e1dc22f9715a8cef8bd4b = UNSTREAM_STRING( &constant_bin[ 713487 ], 21, 0 );
    const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 2, const_str_plain_object_hook ); Py_INCREF( const_str_plain_object_hook );
    PyTuple_SET_ITEM( const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 3, const_str_plain_parse_float ); Py_INCREF( const_str_plain_parse_float );
    PyTuple_SET_ITEM( const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 4, const_str_plain_parse_int ); Py_INCREF( const_str_plain_parse_int );
    PyTuple_SET_ITEM( const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 5, const_str_plain_parse_constant ); Py_INCREF( const_str_plain_parse_constant );
    PyTuple_SET_ITEM( const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 6, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 7, const_str_plain_object_pairs_hook ); Py_INCREF( const_str_plain_object_pairs_hook );
    const_str_plain__maxunicode = UNSTREAM_STRING( &constant_bin[ 713508 ], 11, 1 );
    const_str_plain__b = UNSTREAM_STRING( &constant_bin[ 1287 ], 2, 1 );
    const_str_digest_aa3b841eec06848a0a21af5b9b4a619e = UNSTREAM_STRING( &constant_bin[ 713519 ], 36, 0 );
    const_str_digest_a283b08790b4e138bccc8873376f6f80 = UNSTREAM_STRING( &constant_bin[ 713555 ], 29, 0 );
    const_tuple_str_chr_8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_8_tuple, 0, const_str_chr_8 ); Py_INCREF( const_str_chr_8 );
    const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 0, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 1, const_str_plain_scan_once ); Py_INCREF( const_str_plain_scan_once );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 2, const_str_plain__w ); Py_INCREF( const_str_plain__w );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 3, const_str_plain__ws ); Py_INCREF( const_str_plain__ws );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 4, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 5, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 6, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 7, const_str_plain_nextchar ); Py_INCREF( const_str_plain_nextchar );
    const_str_plain__append = UNSTREAM_STRING( &constant_bin[ 87035 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 8, const_str_plain__append ); Py_INCREF( const_str_plain__append );
    PyTuple_SET_ITEM( const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 9, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_70f0b6b07f9ce5c014a802d97b4725e1 = UNSTREAM_STRING( &constant_bin[ 713584 ], 54, 0 );
    const_str_plain_memo_get = UNSTREAM_STRING( &constant_bin[ 713638 ], 8, 1 );
    const_str_plain_STRINGCHUNK = UNSTREAM_STRING( &constant_bin[ 713646 ], 11, 1 );
    const_str_plain__m = UNSTREAM_STRING( &constant_bin[ 3519 ], 2, 1 );
    const_slice_none_int_pos_8_none = PySlice_New( Py_None, const_int_pos_8, Py_None );
    const_str_digest_4dc7b606f4f272e1acc1c6d15e20c877 = UNSTREAM_STRING( &constant_bin[ 713657 ], 10, 0 );
    const_tuple_3efdd14badb2aecc5fb7e6a255a445f8_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 713667 ], 153 );
    const_int_pos_65279 = PyLong_FromUnsignedLong( 65279ul );
    const_str_plain_byteorder = UNSTREAM_STRING( &constant_bin[ 713820 ], 9, 1 );
    const_str_digest_f3176fd2e0e8ce526c77b9fad9b29549 = UNSTREAM_STRING( &constant_bin[ 713829 ], 20, 0 );
    const_tuple_str_plain_7FF80000000000007FF0000000000000_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_7FF80000000000007FF0000000000000_tuple, 0, const_str_plain_7FF80000000000007FF0000000000000 ); Py_INCREF( const_str_plain_7FF80000000000007FF0000000000000 );
    const_str_plain_DEFAULT_ENCODING = UNSTREAM_STRING( &constant_bin[ 713849 ], 16, 1 );
    const_str_digest_d4b1bab947b379480adaa0b00e84655d = UNSTREAM_STRING( &constant_bin[ 713865 ], 10, 0 );
    const_str_plain_begin = UNSTREAM_STRING( &constant_bin[ 96026 ], 5, 1 );
    const_tuple_str_plain_scanstring_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scanstring_tuple, 0, const_str_plain_scanstring ); Py_INCREF( const_str_plain_scanstring );
    const_str_plain__floatconstants = UNSTREAM_STRING( &constant_bin[ 713875 ], 15, 1 );
    const_str_digest_d6dfbb08ebce948a228788feeb86846d = UNSTREAM_STRING( &constant_bin[ 713890 ], 22, 0 );
    const_str_plain__import_c_scanstring = UNSTREAM_STRING( &constant_bin[ 713912 ], 20, 1 );
    const_str_plain_WHITESPACE_STR = UNSTREAM_STRING( &constant_bin[ 713932 ], 14, 1 );
    const_tuple_str_plain_make_scanner_str_plain_JSONDecodeError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_make_scanner_str_plain_JSONDecodeError_tuple, 0, const_str_plain_make_scanner ); Py_INCREF( const_str_plain_make_scanner );
    PyTuple_SET_ITEM( const_tuple_str_plain_make_scanner_str_plain_JSONDecodeError_tuple, 1, const_str_plain_JSONDecodeError ); Py_INCREF( const_str_plain_JSONDecodeError );
    const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, 0, const_str_plain_fromhex ); Py_INCREF( const_str_plain_fromhex );
    PyTuple_SET_ITEM( const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, 2, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, 3, const_str_plain_text_type ); Py_INCREF( const_str_plain_text_type );
    PyTuple_SET_ITEM( const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, 4, const_str_plain_binary_type ); Py_INCREF( const_str_plain_binary_type );
    PyTuple_SET_ITEM( const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, 5, const_str_plain_PY3 ); Py_INCREF( const_str_plain_PY3 );
    PyTuple_SET_ITEM( const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, 6, const_str_plain_unichr ); Py_INCREF( const_str_plain_unichr );
    const_str_digest_a75c516bc4fc5ac6523e443d99a00dff = UNSTREAM_STRING( &constant_bin[ 713946 ], 49, 0 );
    const_str_plain_JSONArray = UNSTREAM_STRING( &constant_bin[ 713995 ], 9, 1 );
    const_str_plain_uni = UNSTREAM_STRING( &constant_bin[ 5054 ], 3, 1 );
    const_str_digest_46680d0b9c762093d6b01df5f7e36089 = UNSTREAM_STRING( &constant_bin[ 714004 ], 31, 0 );
    const_str_digest_df3bab021f55099720d4d0082642d46b = UNSTREAM_STRING( &constant_bin[ 714035 ], 22, 0 );
    const_tuple_str_chr_9_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_9_tuple, 0, const_str_chr_9 ); Py_INCREF( const_str_chr_9 );
    const_str_plain_FLAGS = UNSTREAM_STRING( &constant_bin[ 8565 ], 5, 1 );
    const_str_digest_f882a04d500527aadd741ca07273e56c = UNSTREAM_STRING( &constant_bin[ 714057 ], 23, 0 );
    const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 0, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 2, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 3, const_str_plain_scan_once ); Py_INCREF( const_str_plain_scan_once );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 4, const_str_plain_object_hook ); Py_INCREF( const_str_plain_object_hook );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 5, const_str_plain_object_pairs_hook ); Py_INCREF( const_str_plain_object_pairs_hook );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 6, const_str_plain_memo ); Py_INCREF( const_str_plain_memo );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 7, const_str_plain__w ); Py_INCREF( const_str_plain__w );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 8, const_str_plain__ws ); Py_INCREF( const_str_plain__ws );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 9, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 10, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 11, const_str_plain_memo_get ); Py_INCREF( const_str_plain_memo_get );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 12, const_str_plain_pairs ); Py_INCREF( const_str_plain_pairs );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 13, const_str_plain_nextchar ); Py_INCREF( const_str_plain_nextchar );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 14, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 15, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 16, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_slice_int_pos_1_int_pos_2_none = PySlice_New( const_int_pos_1, const_int_pos_2, Py_None );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_simplejson$decoder( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b5a7c5540c4cf61b80ef189c301b1a18;
static PyCodeObject *codeobj_24088aa59dd6e51dc203516062790e9c;
static PyCodeObject *codeobj_86c7dcff11279286b61f5a12aa818d8d;
static PyCodeObject *codeobj_af4fadf0eedbeaa43fe6b044d03a9387;
static PyCodeObject *codeobj_7f914472db7cda7511140f68de85ed5d;
static PyCodeObject *codeobj_85686deee26256dc62a6e552fa70554a;
static PyCodeObject *codeobj_34114ee288849c081d6d2df8499877ac;
static PyCodeObject *codeobj_552b34e979ff5758a5e281d893e95791;
static PyCodeObject *codeobj_e1b548dccb750cc8734e8e370f5a3d46;
static PyCodeObject *codeobj_2dfd4448e28faef0864107c902f08a63;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_70f0b6b07f9ce5c014a802d97b4725e1;
    codeobj_b5a7c5540c4cf61b80ef189c301b1a18 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_JSONArray, 236, const_tuple_21ae8ccf17a36307b45360a09cb50ce1_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24088aa59dd6e51dc203516062790e9c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_JSONDecoder, 272, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_86c7dcff11279286b61f5a12aa818d8d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_JSONObject, 142, const_tuple_a830e0b5996960f1574e6395165b1eb0_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_af4fadf0eedbeaa43fe6b044d03a9387 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 302, const_tuple_dfdec1fabd2416badf6fb4b540baa126_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7f914472db7cda7511140f68de85ed5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__floatconstants, 24, const_tuple_str_plain__BYTES_str_plain_nan_str_plain_inf_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_85686deee26256dc62a6e552fa70554a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__import_c_scanstring, 10, const_tuple_str_plain_scanstring_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_34114ee288849c081d6d2df8499877ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 363, const_tuple_bea206029347e56e7d8251fcb1808ee8_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_552b34e979ff5758a5e281d893e95791 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decoder, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e1b548dccb750cc8734e8e370f5a3d46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_py_scanstring, 49, const_tuple_3efdd14badb2aecc5fb7e6a255a445f8_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2dfd4448e28faef0864107c902f08a63 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_raw_decode, 376, const_tuple_bf435db0852a5e460c4e6bd12fe7de10_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_JSONDecoder_of_simplejson$decoder( PyObject **python_pars, PyObject *&closure_simplejson$decoder_class_creation_1__bases, PyObject *&closure_simplejson$decoder_class_creation_1__class_decl_dict, PyObject *&closure_simplejson$decoder_class_creation_1__metaclass, PyObject *&closure_simplejson$decoder_class_creation_1__prepared );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_JSONDecoder_of_simplejson$decoder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1__import_c_scanstring_of_simplejson$decoder(  );


static PyObject *MAKE_FUNCTION_function_2__floatconstants_of_simplejson$decoder(  );


static PyObject *MAKE_FUNCTION_function_2_decode_of_class_1_JSONDecoder_of_simplejson$decoder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_py_scanstring_of_simplejson$decoder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_raw_decode_of_class_1_JSONDecoder_of_simplejson$decoder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_JSONObject_of_simplejson$decoder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_JSONArray_of_simplejson$decoder( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1__import_c_scanstring_of_simplejson$decoder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_scanstring = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_85686deee26256dc62a6e552fa70554a, module_simplejson$decoder );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( var_scanstring )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_scanstring,
            var_scanstring
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 12;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain__speedups, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_scanstring_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_scanstring );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_2;
    }
    assert( var_scanstring == NULL );
    var_scanstring = tmp_assign_source_1;

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
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1__import_c_scanstring_of_simplejson$decoder );
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
    try_end_1:;

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
            if ( var_scanstring )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scanstring,
                    var_scanstring
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

    tmp_return_value = var_scanstring;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1__import_c_scanstring_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_scanstring );
    var_scanstring = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1__import_c_scanstring_of_simplejson$decoder );
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


static PyObject *impl_function_2__floatconstants_of_simplejson$decoder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var__BYTES = NULL;
    PyObject *var_nan = NULL;
    PyObject *var_inf = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7f914472db7cda7511140f68de85ed5d, module_simplejson$decoder );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_fromhex );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fromhex );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fromhex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 25;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_7FF80000000000007FF0000000000000_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    assert( var__BYTES == NULL );
    var__BYTES = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_byteorder );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_big;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_subscribed_name_2 = var__BYTES;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_BYTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_slice_none_int_pos_8_none;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_slice_none_none_int_neg_1;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_4 = var__BYTES;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_BYTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_slice_int_pos_8_none_none;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = const_slice_none_none_int_neg_1;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var__BYTES;
        var__BYTES = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_1:;
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_unpack );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = const_str_plain_dd;
    tmp_args_element_name_2 = var__BYTES;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_BYTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_5 == NULL )
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


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;

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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    assert( var_nan == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_nan = tmp_assign_source_6;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    assert( var_inf == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_inf = tmp_assign_source_7;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_nan;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_inf;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_operand_name_1 = var_inf;

    if ( tmp_operand_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
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
            if ( var__BYTES )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__BYTES,
                    var__BYTES
                );

                assert( res == 0 );
            }

            if ( var_nan )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nan,
                    var_nan
                );

                assert( res == 0 );
            }

            if ( var_inf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_inf,
                    var_inf
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
    NUITKA_CANNOT_GET_HERE( function_2__floatconstants_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var__BYTES );
    var__BYTES = NULL;

    Py_XDECREF( var_nan );
    var_nan = NULL;

    Py_XDECREF( var_inf );
    var_inf = NULL;

    goto function_return_exit;
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

    Py_XDECREF( var__BYTES );
    var__BYTES = NULL;

    Py_XDECREF( var_nan );
    var_nan = NULL;

    Py_XDECREF( var_inf );
    var_inf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2__floatconstants_of_simplejson$decoder );
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


static PyObject *impl_function_3_py_scanstring_of_simplejson$decoder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_end = python_pars[ 1 ];
    PyObject *par_encoding = python_pars[ 2 ];
    PyObject *par_strict = python_pars[ 3 ];
    PyObject *par__b = python_pars[ 4 ];
    PyObject *par__m = python_pars[ 5 ];
    PyObject *par__join = python_pars[ 6 ];
    PyObject *par__PY3 = python_pars[ 7 ];
    PyObject *par__maxunicode = python_pars[ 8 ];
    PyObject *var_chunks = NULL;
    PyObject *var__append = NULL;
    PyObject *var_begin = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_content = NULL;
    PyObject *var_terminator = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_esc = NULL;
    PyObject *var_char = NULL;
    PyObject *var_escX = NULL;
    PyObject *var_uni = NULL;
    PyObject *var_esc2 = NULL;
    PyObject *var_uni2 = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
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
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
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
    PyObject *tmp_base_name_1;
    PyObject *tmp_base_name_2;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_left_9;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    PyObject *tmp_compexpr_right_9;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
    PyObject *tmp_right_name_18;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e1b548dccb750cc8734e8e370f5a3d46, module_simplejson$decoder );
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
    tmp_compare_left_1 = par_encoding;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_DEFAULT_ENCODING );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_ENCODING );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_ENCODING" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_encoding;
        par_encoding = tmp_assign_source_1;
        Py_INCREF( par_encoding );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_chunks == NULL );
    var_chunks = tmp_assign_source_2;

    tmp_source_name_1 = var_chunks;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    assert( var__append == NULL );
    var__append = tmp_assign_source_3;

    tmp_left_name_1 = par_end;

    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    assert( var_begin == NULL );
    var_begin = tmp_assign_source_4;

    loop_start_1:;
    tmp_called_name_1 = par__m;

    tmp_args_element_name_1 = par_s;

    tmp_args_element_name_2 = par_end;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_chunk;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = const_str_digest_cacd0af28718d0dad5cf11b675796327;
    tmp_args_element_name_4 = par_s;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_begin;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "begin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 69;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_2 = var_chunk;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_end );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 70;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_end;
        par_end = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_3 = var_chunk;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_groups );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 71;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_8 == NULL )
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


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_9 == NULL )
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


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_content;
        var_content = tmp_assign_source_10;
        Py_INCREF( var_content );
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_terminator;
        var_terminator = tmp_assign_source_11;
        Py_INCREF( var_terminator );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_cond_value_1 = var_content;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_operand_name_1 = par__PY3;

    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
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
    tmp_isinstance_inst_1 = var_content;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_text_type );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "text_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_operand_name_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_text_type );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "text_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_content;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_encoding;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_content;
        var_content = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_called_name_6 = var__append;

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_append" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_content;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_compare_left_3 = var_terminator;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "terminator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_str_chr_34;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_end_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_4 = var_terminator;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "terminator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_str_chr_92;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_cond_value_3 = par_strict;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    Py_XDECREF( var_msg );
    var_msg = NULL;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = const_str_digest_46680d0b9c762093d6b01df5f7e36089;
    tmp_args_element_name_10 = par_s;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = par_end;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 84;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_called_name_8 = var__append;

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_append" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_terminator;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "terminator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto loop_start_1;
    branch_end_7:;
    branch_no_6:;
    branch_end_5:;
    // Tried code:
    tmp_subscribed_name_1 = par_s;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        goto try_except_handler_3;
    }

    tmp_subscript_name_1 = par_end;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        goto try_except_handler_3;
    }

    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_esc;
        var_esc = tmp_assign_source_13;
        Py_XDECREF( old );
    }

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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_function, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_compare_left_5 = PyThreadState_GET()->exc_type;
    tmp_compare_right_5 = PyExc_IndexError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto try_except_handler_4;
    }

    tmp_args_element_name_13 = const_str_digest_cacd0af28718d0dad5cf11b675796327;
    tmp_args_element_name_14 = par_s;

    if ( tmp_args_element_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto try_except_handler_4;
    }

    tmp_args_element_name_15 = var_begin;

    if ( tmp_args_element_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "begin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        goto try_except_handler_4;
    }

    frame_function->f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 92;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_4;
    goto branch_end_8;
    branch_no_8:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_4;
    branch_end_8:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_py_scanstring_of_simplejson$decoder );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    tmp_compare_left_6 = var_esc;

    tmp_compare_right_6 = const_str_plain_u;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    // Tried code:
    tmp_subscribed_name_2 = par__b;

    tmp_subscript_name_2 = var_esc;

    if ( tmp_subscript_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "esc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        goto try_except_handler_5;
    }

    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_char;
        var_char = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    goto try_end_3;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != -1 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_function, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_7 = PyThreadState_GET()->exc_type;
    tmp_compare_right_7 = PyExc_KeyError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    Py_XDECREF( var_msg );
    var_msg = NULL;

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto try_except_handler_6;
    }

    tmp_args_element_name_16 = const_str_digest_a283b08790b4e138bccc8873376f6f80;
    tmp_args_element_name_17 = par_s;

    if ( tmp_args_element_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto try_except_handler_6;
    }

    tmp_args_element_name_18 = par_end;

    if ( tmp_args_element_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto try_except_handler_6;
    }

    frame_function->f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto try_except_handler_6;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 99;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_6;
    goto branch_end_10;
    branch_no_10:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_6;
    branch_end_10:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_py_scanstring_of_simplejson$decoder );
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    tmp_left_name_2 = par_end;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_15 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    par_end = tmp_assign_source_15;

    goto branch_end_9;
    branch_no_9:;
    tmp_assign_source_16 = const_str_digest_0ecaf8cadbe5cd8d2a50e4a59ffa5482;
    {
        PyObject *old = var_msg;
        var_msg = tmp_assign_source_16;
        Py_INCREF( var_msg );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_3 = par_s;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = par_end;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_start_name_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_start_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = par_end;

    if ( tmp_left_name_4 == NULL )
    {
        Py_DECREF( tmp_start_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_5;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_start_name_1 );

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_start_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_3 != NULL );
    tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_esc;
        var_esc = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_4 = var_esc;

    tmp_subscript_name_4 = const_slice_int_pos_1_int_pos_2_none;
    tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_escX;
        var_escX = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = var_esc;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "esc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_4;
    tmp_or_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 106;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_compexpr_left_2 = var_escX;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "escX" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_str_plain_x;
    tmp_or_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 106;
        goto frame_exception_exit_1;
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
    Py_DECREF( tmp_or_left_value_2 );
    tmp_compexpr_left_3 = var_escX;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "escX" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = const_str_plain_X;
    tmp_or_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_value_4 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_4 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_19 = var_msg;

    if ( tmp_args_element_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_20 = par_s;

    if ( tmp_args_element_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = par_end;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_1;
    tmp_args_element_name_21 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 107;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_5;
    exception_lineno = 107;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_11:;
    // Tried code:
    tmp_value_name_1 = var_esc;

    if ( tmp_value_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "esc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        goto try_except_handler_7;
    }

    tmp_base_name_1 = const_int_pos_16;
    tmp_assign_source_19 = TO_INT2( tmp_value_name_1, tmp_base_name_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_uni;
        var_uni = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    exception_preserved_type_3 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != -1 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_function, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    tmp_compare_left_8 = PyThreadState_GET()->exc_type;
    tmp_compare_right_8 = PyExc_ValueError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_8;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto try_except_handler_8;
    }

    tmp_args_element_name_22 = var_msg;

    if ( tmp_args_element_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto try_except_handler_8;
    }

    tmp_args_element_name_23 = par_s;

    if ( tmp_args_element_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto try_except_handler_8;
    }

    tmp_left_name_6 = par_end;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto try_except_handler_8;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_args_element_name_24 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto try_except_handler_8;
    }
    frame_function->f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_raise_type_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto try_except_handler_8;
    }
    exception_type = tmp_raise_type_6;
    exception_lineno = 111;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_8;
    goto branch_end_12;
    branch_no_12:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_8;
    branch_end_12:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_py_scanstring_of_simplejson$decoder );
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_4:;
    tmp_left_name_7 = par_end;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_5;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_20 = tmp_left_name_7;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    par_end = tmp_assign_source_20;

    tmp_compexpr_left_4 = par__maxunicode;

    tmp_compexpr_right_4 = const_int_pos_65535;
    tmp_and_left_value_2 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_left_name_8 = var_uni;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uni" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = const_int_pos_64512;
    tmp_compexpr_left_5 = BINARY_OPERATION( PyNumber_And, tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = const_int_pos_55296;
    tmp_and_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_subscribed_name_5 = par_s;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_start_name_2 = par_end;

    if ( tmp_start_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_left_name_9 = par_end;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = const_int_pos_2;
    tmp_stop_name_2 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_stop_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_stop_name_2 );
    assert( tmp_subscript_name_5 != NULL );
    tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscript_name_5 );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_6 = const_str_digest_9768aaf512679785b33f03240f2d8642;
    tmp_and_right_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_value_5 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_5 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_subscribed_name_6 = par_s;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_left_name_10 = par_end;

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = const_int_pos_2;
    tmp_start_name_3 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_start_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_left_name_11 = par_end;

    if ( tmp_left_name_11 == NULL )
    {
        Py_DECREF( tmp_start_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = const_int_pos_6;
    tmp_stop_name_3 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_stop_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_start_name_3 );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_start_name_3 );
    Py_DECREF( tmp_stop_name_3 );
    assert( tmp_subscript_name_6 != NULL );
    tmp_assign_source_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscript_name_6 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_esc2;
        var_esc2 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_7 = var_esc2;

    tmp_subscript_name_7 = const_slice_int_pos_1_int_pos_2_none;
    tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_escX;
        var_escX = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_len_arg_2 = var_esc2;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "esc2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_7 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_7 = const_int_pos_4;
    tmp_and_left_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    Py_DECREF( tmp_and_left_value_4 );
    tmp_compexpr_left_8 = var_escX;

    if ( tmp_compexpr_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "escX" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_8 = const_str_plain_x;
    tmp_or_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
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
    tmp_compexpr_left_9 = var_escX;

    if ( tmp_compexpr_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "escX" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_9 = const_str_plain_X;
    tmp_or_right_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_9, tmp_compexpr_right_9 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_3 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_operand_name_3 = tmp_or_left_value_3;
    or_end_3:;
    tmp_and_right_value_4 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    Py_DECREF( tmp_operand_name_3 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_4 );
    tmp_cond_value_6 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_cond_value_6 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    // Tried code:
    tmp_value_name_2 = var_esc2;

    if ( tmp_value_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "esc2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        goto try_except_handler_9;
    }

    tmp_base_name_2 = const_int_pos_16;
    tmp_assign_source_23 = TO_INT2( tmp_value_name_2, tmp_base_name_2 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_uni2;
        var_uni2 = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    exception_preserved_type_4 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_4 );
    exception_preserved_value_4 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_4 );
    exception_preserved_tb_4 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_4 );

    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != -1 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_function, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PyException_SetTraceback( exception_keeper_value_8, (PyObject *)exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    // Tried code:
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyExc_ValueError;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_10;
    }
    if ( tmp_exc_match_exception_match_4 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto try_except_handler_10;
    }

    tmp_args_element_name_25 = var_msg;

    if ( tmp_args_element_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto try_except_handler_10;
    }

    tmp_args_element_name_26 = par_s;

    if ( tmp_args_element_name_26 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto try_except_handler_10;
    }

    tmp_args_element_name_27 = par_end;

    if ( tmp_args_element_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto try_except_handler_10;
    }

    frame_function->f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
    }

    if ( tmp_raise_type_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_10;
    }
    exception_type = tmp_raise_type_7;
    exception_lineno = 125;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_10;
    goto branch_end_15;
    branch_no_15:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_10;
    branch_end_15:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_py_scanstring_of_simplejson$decoder );
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_5:;
    tmp_left_name_12 = var_uni2;

    tmp_right_name_12 = const_int_pos_64512;
    tmp_compare_left_10 = BINARY_OPERATION( PyNumber_And, tmp_left_name_12, tmp_right_name_12 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = const_int_pos_56320;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_left_name_13 = const_int_pos_65536;
    tmp_left_name_16 = var_uni;

    if ( tmp_left_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uni" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_right_name_14 = const_int_pos_55296;
    tmp_left_name_15 = BINARY_OPERATION_SUB( tmp_left_name_16, tmp_right_name_14 );
    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_right_name_15 = const_int_pos_10;
    tmp_left_name_14 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_15, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_15 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_left_name_17 = var_uni2;

    if ( tmp_left_name_17 == NULL )
    {
        Py_DECREF( tmp_left_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uni2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_right_name_17 = const_int_pos_56320;
    tmp_right_name_16 = BINARY_OPERATION_SUB( tmp_left_name_17, tmp_right_name_17 );
    if ( tmp_right_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_14 );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_right_name_13 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_14, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_14 );
    Py_DECREF( tmp_right_name_16 );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_13 );
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_uni;
        var_uni = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_left_name_18 = par_end;

    if ( tmp_left_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_right_name_18 = const_int_pos_6;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
    tmp_assign_source_25 = tmp_left_name_18;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    par_end = tmp_assign_source_25;

    branch_no_16:;
    branch_no_14:;
    branch_no_13:;
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_unichr );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unichr );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unichr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_28 = var_uni;

    if ( tmp_args_element_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uni" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_char;
        var_char = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    branch_end_9:;
    tmp_called_name_15 = var__append;

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_append" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_29 = var_char;

    if ( tmp_args_element_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_called_name_16 = par__join;

    tmp_args_element_name_30 = var_chunks;

    if ( tmp_args_element_name_30 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_end;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

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
            if ( par_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
                );

                assert( res == 0 );
            }

            if ( par_end )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_end,
                    par_end
                );

                assert( res == 0 );
            }

            if ( par_encoding )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encoding,
                    par_encoding
                );

                assert( res == 0 );
            }

            if ( par_strict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_strict,
                    par_strict
                );

                assert( res == 0 );
            }

            if ( par__b )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__b,
                    par__b
                );

                assert( res == 0 );
            }

            if ( par__m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__m,
                    par__m
                );

                assert( res == 0 );
            }

            if ( par__join )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__join,
                    par__join
                );

                assert( res == 0 );
            }

            if ( par__PY3 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__PY3,
                    par__PY3
                );

                assert( res == 0 );
            }

            if ( par__maxunicode )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__maxunicode,
                    par__maxunicode
                );

                assert( res == 0 );
            }

            if ( var_chunks )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_chunks,
                    var_chunks
                );

                assert( res == 0 );
            }

            if ( var__append )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__append,
                    var__append
                );

                assert( res == 0 );
            }

            if ( var_begin )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_begin,
                    var_begin
                );

                assert( res == 0 );
            }

            if ( var_chunk )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_chunk,
                    var_chunk
                );

                assert( res == 0 );
            }

            if ( var_content )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_content,
                    var_content
                );

                assert( res == 0 );
            }

            if ( var_terminator )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_terminator,
                    var_terminator
                );

                assert( res == 0 );
            }

            if ( var_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    var_msg
                );

                assert( res == 0 );
            }

            if ( var_esc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_esc,
                    var_esc
                );

                assert( res == 0 );
            }

            if ( var_char )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_char,
                    var_char
                );

                assert( res == 0 );
            }

            if ( var_escX )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_escX,
                    var_escX
                );

                assert( res == 0 );
            }

            if ( var_uni )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_uni,
                    var_uni
                );

                assert( res == 0 );
            }

            if ( var_esc2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_esc2,
                    var_esc2
                );

                assert( res == 0 );
            }

            if ( var_uni2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_uni2,
                    var_uni2
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
    NUITKA_CANNOT_GET_HERE( function_3_py_scanstring_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_end );
    par_end = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_strict );
    Py_DECREF( par_strict );
    par_strict = NULL;

    CHECK_OBJECT( (PyObject *)par__b );
    Py_DECREF( par__b );
    par__b = NULL;

    Py_XDECREF( par__m );
    par__m = NULL;

    Py_XDECREF( par__join );
    par__join = NULL;

    Py_XDECREF( par__PY3 );
    par__PY3 = NULL;

    CHECK_OBJECT( (PyObject *)par__maxunicode );
    Py_DECREF( par__maxunicode );
    par__maxunicode = NULL;

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

    Py_XDECREF( var__append );
    var__append = NULL;

    Py_XDECREF( var_begin );
    var_begin = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_content );
    var_content = NULL;

    Py_XDECREF( var_terminator );
    var_terminator = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_esc );
    var_esc = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    Py_XDECREF( var_escX );
    var_escX = NULL;

    Py_XDECREF( var_uni );
    var_uni = NULL;

    Py_XDECREF( var_esc2 );
    var_esc2 = NULL;

    Py_XDECREF( var_uni2 );
    var_uni2 = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_end );
    par_end = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par__b );
    par__b = NULL;

    Py_XDECREF( par__m );
    par__m = NULL;

    Py_XDECREF( par__join );
    par__join = NULL;

    Py_XDECREF( par__PY3 );
    par__PY3 = NULL;

    Py_XDECREF( par__maxunicode );
    par__maxunicode = NULL;

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

    Py_XDECREF( var__append );
    var__append = NULL;

    Py_XDECREF( var_begin );
    var_begin = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_content );
    var_content = NULL;

    Py_XDECREF( var_terminator );
    var_terminator = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_esc );
    var_esc = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    Py_XDECREF( var_escX );
    var_escX = NULL;

    Py_XDECREF( var_uni );
    var_uni = NULL;

    Py_XDECREF( var_esc2 );
    var_esc2 = NULL;

    Py_XDECREF( var_uni2 );
    var_uni2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_py_scanstring_of_simplejson$decoder );
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


static PyObject *impl_function_4_JSONObject_of_simplejson$decoder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_state = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_strict = python_pars[ 2 ];
    PyObject *par_scan_once = python_pars[ 3 ];
    PyObject *par_object_hook = python_pars[ 4 ];
    PyObject *par_object_pairs_hook = python_pars[ 5 ];
    PyObject *par_memo = python_pars[ 6 ];
    PyObject *par__w = python_pars[ 7 ];
    PyObject *par__ws = python_pars[ 8 ];
    PyObject *var_s = NULL;
    PyObject *var_end = NULL;
    PyObject *var_memo_get = NULL;
    PyObject *var_pairs = NULL;
    PyObject *var_nextchar = NULL;
    PyObject *var_result = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
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
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
    int tmp_cmp_NotEq_5;
    int tmp_cmp_NotEq_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_dict_seq_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_start_name_4;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_step_name_4;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_stop_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_86c7dcff11279286b61f5a12aa818d8d, module_simplejson$decoder );
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
    tmp_iter_arg_1 = par_state;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 145;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_3 == NULL )
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


        exception_lineno = 145;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    assert( var_s == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_s = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    assert( var_end == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_end = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = par_memo;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_6 = PyDict_New();
    {
        PyObject *old = par_memo;
        par_memo = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_source_name_1 = par_memo;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "memo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setdefault );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    assert( var_memo_get == NULL );
    var_memo_get = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( var_pairs == NULL );
    var_pairs = tmp_assign_source_8;

    tmp_subscribed_name_1 = var_s;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = var_end;

    if ( tmp_start_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = var_end;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    assert( var_nextchar == NULL );
    var_nextchar = tmp_assign_source_9;

    tmp_compare_left_2 = var_nextchar;

    tmp_compare_right_2 = const_str_chr_34;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_3 = var_nextchar;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = par__ws;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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
    tmp_called_name_2 = par__w;

    tmp_args_element_name_1 = var_s;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_end;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_end );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 157;
    tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = var_s;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_start_name_2 = var_end;

    tmp_left_name_2 = var_end;

    tmp_right_name_2 = const_int_pos_1;
    tmp_stop_name_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_stop_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_stop_name_2 );
    assert( tmp_subscript_name_2 != NULL );
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_compare_left_4 = var_nextchar;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_str_chr_125;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_compare_left_5 = par_object_pairs_hook;

    tmp_compare_right_5 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_3 = par_object_pairs_hook;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_pairs_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_pairs;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_12;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_result;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_left_name_3 = var_end;

    if ( tmp_left_name_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_tuple_element_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_assign_source_13 = PyDict_New();
    {
        PyObject *old = var_pairs;
        var_pairs = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_compare_left_6 = par_object_hook;

    tmp_compare_right_6 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_4 = par_object_hook;

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_pairs;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_pairs;
        var_pairs = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    branch_no_6:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_pairs;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_left_name_4 = var_end;

    if ( tmp_left_name_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_tuple_element_2 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_7 = var_nextchar;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_str_chr_34;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = const_str_digest_a75c516bc4fc5ac6523e443d99a00dff;
    tmp_args_element_name_6 = var_s;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_end;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 171;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_7:;
    branch_end_4:;
    branch_no_2:;
    tmp_left_name_5 = var_end;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_15 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    var_end = tmp_assign_source_15;

    loop_start_1:;
    // Tried code:
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_scanstring );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scanstring );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scanstring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto try_except_handler_3;
    }

    tmp_args_element_name_8 = var_s;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto try_except_handler_3;
    }

    tmp_args_element_name_9 = var_end;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto try_except_handler_3;
    }

    tmp_args_element_name_10 = par_encoding;

    tmp_args_element_name_11 = par_strict;

    frame_function->f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_6, call_args );
    }

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto try_except_handler_3;
    }
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_17 == NULL )
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


        exception_lineno = 174;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_18 == NULL )
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


        exception_lineno = 174;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_19;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_20;
        Py_INCREF( var_end );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_called_name_7 = var_memo_get;

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "memo_get" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_key;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_key;

    if ( tmp_args_element_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_3 = var_s;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_start_name_3 = var_end;

    if ( tmp_start_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = var_end;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_stop_name_3 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_stop_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_stop_name_3 );
    assert( tmp_subscript_name_3 != NULL );
    tmp_compare_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = const_str_chr_58;
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_9 = par__w;

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_w" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = var_s;

    if ( tmp_args_element_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = var_end;

    if ( tmp_args_element_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_end );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 180;
    tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_4 = var_s;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        goto frame_exception_exit_1;
    }

    tmp_start_name_4 = var_end;

    tmp_left_name_7 = var_end;

    tmp_right_name_7 = const_int_pos_1;
    tmp_stop_name_4 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_stop_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    tmp_step_name_4 = Py_None;
    tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
    Py_DECREF( tmp_stop_name_4 );
    assert( tmp_subscript_name_4 != NULL );
    tmp_compare_left_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = const_str_chr_58;
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 181;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = const_str_digest_f882a04d500527aadd741ca07273e56c;
    tmp_args_element_name_17 = var_s;

    if ( tmp_args_element_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = var_end;

    if ( tmp_args_element_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 182;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 182;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_9:;
    branch_no_8:;
    tmp_left_name_8 = var_end;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_23 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    var_end = tmp_assign_source_23;

    // Tried code:
    tmp_subscribed_name_5 = var_s;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        goto try_except_handler_4;
    }

    tmp_subscript_name_5 = var_end;

    tmp_compare_left_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto try_except_handler_4;
    }
    tmp_compare_right_10 = par__ws;

    if ( tmp_compare_right_10 == NULL )
    {
        Py_DECREF( tmp_compare_left_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_ws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        goto try_except_handler_4;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_2 == -1) );
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_9 = var_end;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        goto try_except_handler_4;
    }

    tmp_right_name_9 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_24 = tmp_left_name_9;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_4;
    }
    var_end = tmp_assign_source_24;

    tmp_subscribed_name_6 = var_s;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        goto try_except_handler_4;
    }

    tmp_subscript_name_6 = var_end;

    tmp_compare_left_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto try_except_handler_4;
    }
    tmp_compare_right_11 = par__ws;

    if ( tmp_compare_right_11 == NULL )
    {
        Py_DECREF( tmp_compare_left_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_ws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        goto try_except_handler_4;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_3 == -1) );
    Py_DECREF( tmp_compare_left_11 );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_name_12 = par__w;

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_w" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        goto try_except_handler_4;
    }

    tmp_args_element_name_19 = var_s;

    if ( tmp_args_element_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        goto try_except_handler_4;
    }

    tmp_left_name_10 = var_end;

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        goto try_except_handler_4;
    }

    tmp_right_name_10 = const_int_pos_1;
    tmp_args_element_name_20 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 190;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_4;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_end );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 190;
    tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    branch_no_11:;
    branch_no_10:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_function, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_12 = PyThreadState_GET()->exc_type;
    tmp_compare_right_12 = PyExc_IndexError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_12;
    }
    else
    {
        goto branch_yes_12;
    }
    branch_yes_12:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_5;
    branch_no_12:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_JSONObject_of_simplejson$decoder );
    return NULL;
    // End of try:
    try_end_3:;
    // Tried code:
    tmp_called_name_13 = par_scan_once;

    tmp_args_element_name_21 = var_s;

    if ( tmp_args_element_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        goto try_except_handler_6;
    }

    tmp_args_element_name_22 = var_end;

    if ( tmp_args_element_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        goto try_except_handler_6;
    }

    frame_function->f_lineno = 194;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto try_except_handler_6;
    }
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__source_iter;
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;

    tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
    if ( tmp_assign_source_27 == NULL )
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


        exception_lineno = 194;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_1;
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;

    tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
    if ( tmp_assign_source_28 == NULL )
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


        exception_lineno = 194;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_2;
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                goto try_except_handler_6;
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

        goto try_except_handler_6;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_29 = tmp_tuple_unpack_3__element_1;

    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_29;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    tmp_assign_source_30 = tmp_tuple_unpack_3__element_2;

    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_30;
        Py_INCREF( var_end );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_source_name_5 = var_pairs;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_23 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_key;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_23, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_value;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_23, 1, tmp_tuple_element_3 );
    frame_function->f_lineno = 195;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_subscribed_name_7 = var_s;

    if ( tmp_subscribed_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        goto try_except_handler_7;
    }

    tmp_subscript_name_7 = var_end;

    if ( tmp_subscript_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        goto try_except_handler_7;
    }

    tmp_assign_source_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    tmp_compare_left_13 = var_nextchar;

    tmp_compare_right_13 = par__ws;

    if ( tmp_compare_right_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_ws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        goto try_except_handler_7;
    }

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_16 = par__w;

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_w" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        goto try_except_handler_7;
    }

    tmp_args_element_name_24 = var_s;

    if ( tmp_args_element_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        goto try_except_handler_7;
    }

    tmp_left_name_11 = var_end;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        goto try_except_handler_7;
    }

    tmp_right_name_11 = const_int_pos_1;
    tmp_args_element_name_25 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
        tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto try_except_handler_7;
    }
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_end );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 200;
    tmp_assign_source_32 = CALL_FUNCTION_NO_ARGS( tmp_called_name_15 );
    Py_DECREF( tmp_called_name_15 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_8 = var_s;

    if ( tmp_subscribed_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        goto try_except_handler_7;
    }

    tmp_subscript_name_8 = var_end;

    tmp_assign_source_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    branch_no_13:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != -1 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_function, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    tmp_compare_left_14 = PyThreadState_GET()->exc_type;
    tmp_compare_right_14 = PyExc_IndexError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto try_except_handler_8;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assign_source_34 = const_str_empty;
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_34;
        Py_INCREF( var_nextchar );
        Py_XDECREF( old );
    }

    goto branch_end_14;
    branch_no_14:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_8;
    branch_end_14:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_JSONObject_of_simplejson$decoder );
    return NULL;
    // End of try:
    try_end_6:;
    tmp_left_name_12 = var_end;

    if ( tmp_left_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
    tmp_assign_source_35 = tmp_left_name_12;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    var_end = tmp_assign_source_35;

    tmp_compare_left_15 = var_nextchar;

    if ( tmp_compare_left_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_15 = const_str_chr_125;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    goto loop_end_1;
    goto branch_end_15;
    branch_no_15:;
    tmp_compare_left_16 = var_nextchar;

    if ( tmp_compare_left_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_16 = const_str_chr_44;
    tmp_cmp_NotEq_5 = RICH_COMPARE_BOOL_NE( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_NotEq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_5 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_26 = const_str_digest_1d21bb799fed9afd1c58ac6e12dd3170;
    tmp_args_element_name_27 = var_s;

    if ( tmp_args_element_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_left_name_13 = var_end;

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_right_name_13 = const_int_pos_1;
    tmp_args_element_name_28 = BINARY_OPERATION_SUB( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 209;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_16:;
    branch_end_15:;
    // Tried code:
    tmp_subscribed_name_9 = var_s;

    if ( tmp_subscribed_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        goto try_except_handler_9;
    }

    tmp_subscript_name_9 = var_end;

    if ( tmp_subscript_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        goto try_except_handler_9;
    }

    tmp_assign_source_36 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    tmp_compare_left_17 = var_nextchar;

    tmp_compare_right_17 = par__ws;

    if ( tmp_compare_right_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_ws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        goto try_except_handler_9;
    }

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_left_name_14 = var_end;

    if ( tmp_left_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        goto try_except_handler_9;
    }

    tmp_right_name_14 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_14, tmp_right_name_14 );
    tmp_assign_source_37 = tmp_left_name_14;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto try_except_handler_9;
    }
    var_end = tmp_assign_source_37;

    tmp_subscribed_name_10 = var_s;

    if ( tmp_subscribed_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        goto try_except_handler_9;
    }

    tmp_subscript_name_10 = var_end;

    tmp_assign_source_38 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_38;
        Py_XDECREF( old );
    }

    tmp_compare_left_18 = var_nextchar;

    tmp_compare_right_18 = par__ws;

    if ( tmp_compare_right_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_ws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        goto try_except_handler_9;
    }

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_called_name_19 = par__w;

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_w" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        goto try_except_handler_9;
    }

    tmp_args_element_name_29 = var_s;

    if ( tmp_args_element_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        goto try_except_handler_9;
    }

    tmp_left_name_15 = var_end;

    if ( tmp_left_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        goto try_except_handler_9;
    }

    tmp_right_name_15 = const_int_pos_1;
    tmp_args_element_name_30 = BINARY_OPERATION_ADD( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_9;
    }
    frame_function->f_lineno = 217;
    {
        PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
        tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_9;
    }
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_end );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_9;
    }
    frame_function->f_lineno = 217;
    tmp_assign_source_39 = CALL_FUNCTION_NO_ARGS( tmp_called_name_18 );
    Py_DECREF( tmp_called_name_18 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_39;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_11 = var_s;

    if ( tmp_subscribed_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        goto try_except_handler_9;
    }

    tmp_subscript_name_11 = var_end;

    tmp_assign_source_40 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_40;
        Py_XDECREF( old );
    }

    branch_no_18:;
    branch_no_17:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    exception_preserved_type_3 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != -1 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_function, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PyException_SetTraceback( exception_keeper_value_8, (PyObject *)exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    // Tried code:
    tmp_compare_left_19 = PyThreadState_GET()->exc_type;
    tmp_compare_right_19 = PyExc_IndexError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_19, tmp_compare_right_19 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto try_except_handler_10;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_assign_source_41 = const_str_empty;
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_41;
        Py_INCREF( var_nextchar );
        Py_XDECREF( old );
    }

    goto branch_end_19;
    branch_no_19:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_10;
    branch_end_19:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_8;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_JSONObject_of_simplejson$decoder );
    return NULL;
    // End of try:
    try_end_8:;
    tmp_left_name_16 = var_end;

    if ( tmp_left_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }

    tmp_right_name_16 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
    tmp_assign_source_42 = tmp_left_name_16;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    var_end = tmp_assign_source_42;

    tmp_compare_left_20 = var_nextchar;

    if ( tmp_compare_left_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_20 = const_str_chr_34;
    tmp_cmp_NotEq_6 = RICH_COMPARE_BOOL_NE( tmp_compare_left_20, tmp_compare_right_20 );
    if ( tmp_cmp_NotEq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_6 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_31 = const_str_digest_a75c516bc4fc5ac6523e443d99a00dff;
    tmp_args_element_name_32 = var_s;

    if ( tmp_args_element_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_left_name_17 = var_end;

    if ( tmp_left_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_right_name_17 = const_int_pos_1;
    tmp_args_element_name_33 = BINARY_OPERATION_SUB( tmp_left_name_17, tmp_right_name_17 );
    if ( tmp_args_element_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 226;
    {
        PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 226;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_20:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_compare_left_21 = par_object_pairs_hook;

    if ( tmp_compare_left_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_pairs_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_21 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_21 != tmp_compare_right_21 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_called_name_21 = par_object_pairs_hook;

    if ( tmp_called_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_pairs_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_34 = var_pairs;

    if ( tmp_args_element_name_34 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_result;
        var_result = tmp_assign_source_43;
        Py_XDECREF( old );
    }

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_result;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_end;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    branch_no_21:;
    tmp_dict_seq_1 = var_pairs;

    if ( tmp_dict_seq_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_44 = TO_DICT( tmp_dict_seq_1, NULL );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_pairs;
        var_pairs = tmp_assign_source_44;
        Py_XDECREF( old );
    }

    tmp_compare_left_22 = par_object_hook;

    if ( tmp_compare_left_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_22 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_22 != tmp_compare_right_22 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_called_name_22 = par_object_hook;

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_35 = var_pairs;

    if ( tmp_args_element_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 233;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_pairs;
        var_pairs = tmp_assign_source_45;
        Py_XDECREF( old );
    }

    branch_no_22:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_pairs;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_end;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
    goto frame_return_exit_1;

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
            if ( par_state )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_state,
                    par_state
                );

                assert( res == 0 );
            }

            if ( par_encoding )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encoding,
                    par_encoding
                );

                assert( res == 0 );
            }

            if ( par_strict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_strict,
                    par_strict
                );

                assert( res == 0 );
            }

            if ( par_scan_once )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scan_once,
                    par_scan_once
                );

                assert( res == 0 );
            }

            if ( par_object_hook )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_hook,
                    par_object_hook
                );

                assert( res == 0 );
            }

            if ( par_object_pairs_hook )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_pairs_hook,
                    par_object_pairs_hook
                );

                assert( res == 0 );
            }

            if ( par_memo )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_memo,
                    par_memo
                );

                assert( res == 0 );
            }

            if ( par__w )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__w,
                    par__w
                );

                assert( res == 0 );
            }

            if ( par__ws )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__ws,
                    par__ws
                );

                assert( res == 0 );
            }

            if ( var_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    var_s
                );

                assert( res == 0 );
            }

            if ( var_end )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_end,
                    var_end
                );

                assert( res == 0 );
            }

            if ( var_memo_get )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_memo_get,
                    var_memo_get
                );

                assert( res == 0 );
            }

            if ( var_pairs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pairs,
                    var_pairs
                );

                assert( res == 0 );
            }

            if ( var_nextchar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nextchar,
                    var_nextchar
                );

                assert( res == 0 );
            }

            if ( var_result )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_result,
                    var_result
                );

                assert( res == 0 );
            }

            if ( var_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key,
                    var_key
                );

                assert( res == 0 );
            }

            if ( var_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    var_value
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
    NUITKA_CANNOT_GET_HERE( function_4_JSONObject_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_state );
    par_state = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par_scan_once );
    par_scan_once = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_memo );
    par_memo = NULL;

    Py_XDECREF( par__w );
    par__w = NULL;

    Py_XDECREF( par__ws );
    par__ws = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_memo_get );
    var_memo_get = NULL;

    Py_XDECREF( var_pairs );
    var_pairs = NULL;

    Py_XDECREF( var_nextchar );
    var_nextchar = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_state );
    par_state = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par_scan_once );
    par_scan_once = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_memo );
    par_memo = NULL;

    Py_XDECREF( par__w );
    par__w = NULL;

    Py_XDECREF( par__ws );
    par__ws = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_memo_get );
    var_memo_get = NULL;

    Py_XDECREF( var_pairs );
    var_pairs = NULL;

    Py_XDECREF( var_nextchar );
    var_nextchar = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_JSONObject_of_simplejson$decoder );
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


static PyObject *impl_function_5_JSONArray_of_simplejson$decoder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_state = python_pars[ 0 ];
    PyObject *par_scan_once = python_pars[ 1 ];
    PyObject *par__w = python_pars[ 2 ];
    PyObject *par__ws = python_pars[ 3 ];
    PyObject *var_s = NULL;
    PyObject *var_end = NULL;
    PyObject *var_values = NULL;
    PyObject *var_nextchar = NULL;
    PyObject *var__append = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_start_name_4;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_step_name_4;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_stop_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b5a7c5540c4cf61b80ef189c301b1a18, module_simplejson$decoder );
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
    tmp_iter_arg_1 = par_state;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 237;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_3 == NULL )
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


        exception_lineno = 237;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    assert( var_s == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_s = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    assert( var_end == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_end = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_6 = PyList_New( 0 );
    assert( var_values == NULL );
    var_values = tmp_assign_source_6;

    tmp_subscribed_name_1 = var_s;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = var_end;

    if ( tmp_start_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = var_end;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    assert( var_nextchar == NULL );
    var_nextchar = tmp_assign_source_7;

    tmp_compare_left_1 = var_nextchar;

    tmp_compare_right_1 = par__ws;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = par__w;

    tmp_args_element_name_1 = var_s;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = var_end;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_end );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 241;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = var_s;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_start_name_2 = var_end;

    tmp_left_name_3 = var_end;

    tmp_right_name_3 = const_int_pos_1;
    tmp_stop_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_stop_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_stop_name_2 );
    assert( tmp_subscript_name_2 != NULL );
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = var_nextchar;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_chr_93;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_values;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "values" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_left_name_4 = var_end;

    if ( tmp_left_name_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_tuple_element_1 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = var_nextchar;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_str_empty;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = const_str_digest_df3bab021f55099720d4d0082642d46b;
    tmp_args_element_name_4 = var_s;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_end;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 247;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    branch_end_2:;
    tmp_source_name_2 = var_values;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "values" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto frame_exception_exit_1;
    }
    assert( var__append == NULL );
    var__append = tmp_assign_source_10;

    loop_start_1:;
    // Tried code:
    tmp_called_name_4 = par_scan_once;

    tmp_args_element_name_6 = var_s;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        goto try_except_handler_3;
    }

    tmp_args_element_name_7 = var_end;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        goto try_except_handler_3;
    }

    frame_function->f_lineno = 250;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_3;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


        exception_lineno = 250;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_13 == NULL )
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


        exception_lineno = 250;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_14;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_15;
        Py_INCREF( var_end );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_called_name_5 = var__append;

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_append" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_value;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_3 = var_s;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_start_name_3 = var_end;

    if ( tmp_start_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = var_end;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_1;
    tmp_stop_name_3 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_stop_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_stop_name_3 );
    assert( tmp_subscript_name_3 != NULL );
    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_compare_left_4 = var_nextchar;

    tmp_compare_right_4 = par__ws;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_ws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_7 = par__w;

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_w" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_s;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = var_end;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_args_element_name_10 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 254;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_end );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 254;
    tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_4 = var_s;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_start_name_4 = var_end;

    tmp_left_name_7 = var_end;

    tmp_right_name_7 = const_int_pos_1;
    tmp_stop_name_4 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_stop_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_step_name_4 = Py_None;
    tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
    Py_DECREF( tmp_stop_name_4 );
    assert( tmp_subscript_name_4 != NULL );
    tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_nextchar;
        var_nextchar = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_left_name_8 = var_end;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_19 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    var_end = tmp_assign_source_19;

    tmp_compare_left_5 = var_nextchar;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_str_chr_93;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_end_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_6 = var_nextchar;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nextchar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_str_chr_44;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = const_str_digest_85d7040e60705e57c9398509934d6613;
    tmp_args_element_name_12 = var_s;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_left_name_9 = var_end;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = const_int_pos_1;
    tmp_args_element_name_13 = BINARY_OPERATION_SUB( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 260;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 260;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_6:;
    branch_end_5:;
    // Tried code:
    tmp_subscribed_name_5 = var_s;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto try_except_handler_4;
    }

    tmp_subscript_name_5 = var_end;

    if ( tmp_subscript_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto try_except_handler_4;
    }

    tmp_compare_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        goto try_except_handler_4;
    }
    tmp_compare_right_7 = par__ws;

    if ( tmp_compare_right_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_ws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto try_except_handler_4;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_3 == -1) );
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_left_name_10 = var_end;

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        goto try_except_handler_4;
    }

    tmp_right_name_10 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
    tmp_assign_source_20 = tmp_left_name_10;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto try_except_handler_4;
    }
    var_end = tmp_assign_source_20;

    tmp_subscribed_name_6 = var_s;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto try_except_handler_4;
    }

    tmp_subscript_name_6 = var_end;

    tmp_compare_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        goto try_except_handler_4;
    }
    tmp_compare_right_8 = par__ws;

    if ( tmp_compare_right_8 == NULL )
    {
        Py_DECREF( tmp_compare_left_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_ws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto try_except_handler_4;
    }

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_4 == -1) );
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_10 = par__w;

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_w" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        goto try_except_handler_4;
    }

    tmp_args_element_name_14 = var_s;

    if ( tmp_args_element_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        goto try_except_handler_4;
    }

    tmp_left_name_11 = var_end;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        goto try_except_handler_4;
    }

    tmp_right_name_11 = const_int_pos_1;
    tmp_args_element_name_15 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 266;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_4;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_end );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 266;
    tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    branch_no_8:;
    branch_no_7:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_function, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyExc_IndexError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_5;
    branch_no_9:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_5_JSONArray_of_simplejson$decoder );
    return NULL;
    // End of try:
    try_end_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_values;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "values" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_end;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;

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
            if ( par_state )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_state,
                    par_state
                );

                assert( res == 0 );
            }

            if ( par_scan_once )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scan_once,
                    par_scan_once
                );

                assert( res == 0 );
            }

            if ( par__w )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__w,
                    par__w
                );

                assert( res == 0 );
            }

            if ( par__ws )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__ws,
                    par__ws
                );

                assert( res == 0 );
            }

            if ( var_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    var_s
                );

                assert( res == 0 );
            }

            if ( var_end )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_end,
                    var_end
                );

                assert( res == 0 );
            }

            if ( var_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_values,
                    var_values
                );

                assert( res == 0 );
            }

            if ( var_nextchar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nextchar,
                    var_nextchar
                );

                assert( res == 0 );
            }

            if ( var__append )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__append,
                    var__append
                );

                assert( res == 0 );
            }

            if ( var_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    var_value
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
    NUITKA_CANNOT_GET_HERE( function_5_JSONArray_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_state );
    par_state = NULL;

    Py_XDECREF( par_scan_once );
    par_scan_once = NULL;

    Py_XDECREF( par__w );
    par__w = NULL;

    Py_XDECREF( par__ws );
    par__ws = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_nextchar );
    var_nextchar = NULL;

    Py_XDECREF( var__append );
    var__append = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_state );
    par_state = NULL;

    Py_XDECREF( par_scan_once );
    par_scan_once = NULL;

    Py_XDECREF( par__w );
    par__w = NULL;

    Py_XDECREF( par__ws );
    par__ws = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_nextchar );
    var_nextchar = NULL;

    Py_XDECREF( var__append );
    var__append = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_JSONArray_of_simplejson$decoder );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_1_JSONDecoder_of_simplejson$decoder( PyObject **python_pars, PyObject *&closure_simplejson$decoder_class_creation_1__bases, PyObject *&closure_simplejson$decoder_class_creation_1__class_decl_dict, PyObject *&closure_simplejson$decoder_class_creation_1__metaclass, PyObject *&closure_simplejson$decoder_class_creation_1__prepared )
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
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_decode = NULL;
    PyObject *var_raw_decode = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_simplejson$decoder_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_84bbbbe97f6e4159970e42a288988abf;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_cdb48e83084411623187b5dfc05e24e2;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_JSONDecoder;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_none_none_none_none_none_true_none_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_1_JSONDecoder_of_simplejson$decoder( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_24088aa59dd6e51dc203516062790e9c, module_simplejson$decoder );
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
    tmp_defaults_2 = PyTuple_New( 2 );
    tmp_source_name_1 = PyDict_GetItem( locals_dict, const_str_plain_WHITESPACE );

    if ( tmp_source_name_1 == NULL )
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_WHITESPACE );

        if (unlikely( tmp_source_name_1 == NULL ))
        {
            tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WHITESPACE );
        }

        if ( tmp_source_name_1 == NULL )
        {
            Py_DECREF( tmp_defaults_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WHITESPACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            goto frame_exception_exit_1;
        }

    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_2 );

        exception_lineno = 363;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyDict_GetItem( locals_dict, const_str_plain_PY3 );

    if ( tmp_tuple_element_1 == NULL )
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_PY3 );

        if (unlikely( tmp_tuple_element_1 == NULL ))
        {
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3 );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            Py_DECREF( tmp_defaults_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PY3" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_1 );
    tmp_assign_source_5 = MAKE_FUNCTION_function_2_decode_of_class_1_JSONDecoder_of_simplejson$decoder( tmp_defaults_2 );
    assert( var_decode == NULL );
    var_decode = tmp_assign_source_5;

    tmp_defaults_3 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_2 );
    tmp_source_name_2 = PyDict_GetItem( locals_dict, const_str_plain_WHITESPACE );

    if ( tmp_source_name_2 == NULL )
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_WHITESPACE );

        if (unlikely( tmp_source_name_2 == NULL ))
        {
            tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WHITESPACE );
        }

        if ( tmp_source_name_2 == NULL )
        {
            Py_DECREF( tmp_defaults_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WHITESPACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 376;
            goto frame_exception_exit_1;
        }

    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_match );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_3 );

        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyDict_GetItem( locals_dict, const_str_plain_PY3 );

    if ( tmp_tuple_element_2 == NULL )
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_PY3 );

        if (unlikely( tmp_tuple_element_2 == NULL ))
        {
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3 );
        }

        if ( tmp_tuple_element_2 == NULL )
        {
            Py_DECREF( tmp_defaults_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PY3" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 376;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_3, 2, tmp_tuple_element_2 );
    tmp_assign_source_6 = MAKE_FUNCTION_function_3_raw_decode_of_class_1_JSONDecoder_of_simplejson$decoder( tmp_defaults_3 );
    assert( var_raw_decode == NULL );
    var_raw_decode = tmp_assign_source_6;


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

            tmp_frame_locals = locals_dict;
            Py_INCREF( locals_dict );
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___class__, var___class__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___doc__, var___doc__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___init__, var___init__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_decode, var_decode );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain_raw_decode, var_raw_decode );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                goto frame_exception_exit_1;
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

    tmp_called_name_1 = closure_simplejson$decoder_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_JSONDecoder;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = closure_simplejson$decoder_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_3, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_3, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_3, const_str_plain___doc__, var___doc__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_3, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_3, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_3, const_str_plain_decode, var_decode );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_3, const_str_plain_raw_decode, var_raw_decode );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_3 );
    tmp_kw_name_1 = closure_simplejson$decoder_class_creation_1__class_decl_dict;

    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_7;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_JSONDecoder_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_decode );
    var_decode = NULL;

    Py_XDECREF( var_raw_decode );
    var_raw_decode = NULL;

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

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_decode );
    var_decode = NULL;

    Py_XDECREF( var_raw_decode );
    var_raw_decode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_JSONDecoder_of_simplejson$decoder );
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


static PyObject *impl_function_1___init___of_class_1_JSONDecoder_of_simplejson$decoder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_object_hook = python_pars[ 2 ];
    PyObject *par_parse_float = python_pars[ 3 ];
    PyObject *par_parse_int = python_pars[ 4 ];
    PyObject *par_parse_constant = python_pars[ 5 ];
    PyObject *par_strict = python_pars[ 6 ];
    PyObject *par_object_pairs_hook = python_pars[ 7 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_af4fadf0eedbeaa43fe6b044d03a9387, module_simplejson$decoder );
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
    tmp_compare_left_1 = par_encoding;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_DEFAULT_ENCODING );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_ENCODING );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_ENCODING" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_encoding;
        par_encoding = tmp_assign_source_1;
        Py_INCREF( par_encoding );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_1 = par_encoding;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_encoding, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_object_hook;

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 351;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_object_hook, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_object_pairs_hook;

    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_object_pairs_hook, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = par_parse_float;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
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
    tmp_or_right_value_1 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_or_right_value_1 != NULL );
    tmp_assattr_name_4 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assattr_name_4 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_parse_float, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = par_parse_int;

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        goto frame_exception_exit_1;
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
    tmp_or_right_value_2 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_or_right_value_2 != NULL );
    tmp_assattr_name_5 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assattr_name_5 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_parse_int, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_3 = par_parse_constant;

    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        goto frame_exception_exit_1;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain__CONSTANTS );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__CONSTANTS );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_CONSTANTS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___getitem__ );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    Py_INCREF( tmp_or_left_value_3 );
    tmp_assattr_name_6 = tmp_or_left_value_3;
    or_end_3:;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_parse_constant, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assattr_name_7 = par_strict;

    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_strict, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONObject );

    if (unlikely( tmp_assattr_name_8 == NULL ))
    {
        tmp_assattr_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONObject );
    }

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONObject" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_parse_object, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONArray );

    if (unlikely( tmp_assattr_name_9 == NULL ))
    {
        tmp_assattr_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONArray );
    }

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONArray" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_self;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_parse_array, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_scanstring );

    if (unlikely( tmp_assattr_name_10 == NULL ))
    {
        tmp_assattr_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scanstring );
    }

    if ( tmp_assattr_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scanstring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_10 = par_self;

    if ( tmp_assattr_target_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_parse_string, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_11 = PyDict_New();
    tmp_assattr_target_11 = par_self;

    if ( tmp_assattr_target_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_memo, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_make_scanner );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_scanner );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_scanner" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 361;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_12 = par_self;

    if ( tmp_assattr_target_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_scan_once, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 361;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );

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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_encoding )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encoding,
                    par_encoding
                );

                assert( res == 0 );
            }

            if ( par_object_hook )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_hook,
                    par_object_hook
                );

                assert( res == 0 );
            }

            if ( par_parse_float )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_float,
                    par_parse_float
                );

                assert( res == 0 );
            }

            if ( par_parse_int )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_int,
                    par_parse_int
                );

                assert( res == 0 );
            }

            if ( par_parse_constant )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parse_constant,
                    par_parse_constant
                );

                assert( res == 0 );
            }

            if ( par_strict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_strict,
                    par_strict
                );

                assert( res == 0 );
            }

            if ( par_object_pairs_hook )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_pairs_hook,
                    par_object_pairs_hook
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_JSONDecoder_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_JSONDecoder_of_simplejson$decoder );
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


static PyObject *impl_function_2_decode_of_class_1_JSONDecoder_of_simplejson$decoder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par__w = python_pars[ 2 ];
    PyObject *par__PY3 = python_pars[ 3 ];
    PyObject *var_obj = NULL;
    PyObject *var_end = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_34114ee288849c081d6d2df8499877ac, module_simplejson$decoder );
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
    tmp_and_left_value_1 = par__PY3;

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
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
    tmp_isinstance_inst_1 = par_s;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_binary_type );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_type );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binary_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
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
    tmp_source_name_1 = par_s;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encoding );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 369;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_s;
        par_s = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    // Tried code:
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_raw_decode );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = par_s;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 370;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_3 == NULL )
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


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    assert( var_obj == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_obj = tmp_assign_source_5;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    assert( var_end == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_end = tmp_assign_source_6;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_name_4 = par__w;

    tmp_args_element_name_3 = par_s;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_end;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 371;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_end );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 371;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_end;

    tmp_len_arg_1 = par_s;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = const_str_digest_4dc7b606f4f272e1acc1c6d15e20c877;
    tmp_args_element_name_6 = par_s;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_end;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = par_s;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 373;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_return_value = var_obj;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 374;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
                );

                assert( res == 0 );
            }

            if ( par__w )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__w,
                    par__w
                );

                assert( res == 0 );
            }

            if ( par__PY3 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__PY3,
                    par__PY3
                );

                assert( res == 0 );
            }

            if ( var_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    var_obj
                );

                assert( res == 0 );
            }

            if ( var_end )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_end,
                    var_end
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
    NUITKA_CANNOT_GET_HERE( function_2_decode_of_class_1_JSONDecoder_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par__w );
    par__w = NULL;

    Py_XDECREF( par__PY3 );
    par__PY3 = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    goto function_return_exit;
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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par__w );
    par__w = NULL;

    Py_XDECREF( par__PY3 );
    par__PY3 = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_decode_of_class_1_JSONDecoder_of_simplejson$decoder );
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


static PyObject *impl_function_3_raw_decode_of_class_1_JSONDecoder_of_simplejson$decoder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_idx = python_pars[ 2 ];
    PyObject *par__w = python_pars[ 3 ];
    PyObject *par__PY3 = python_pars[ 4 ];
    PyObject *var_ord0 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_ord_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2dfd4448e28faef0864107c902f08a63, module_simplejson$decoder );
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
    tmp_compare_left_1 = par_idx;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecodeError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_90fc8c406fd6945f66bb1cd669171bd6;
    tmp_args_element_name_2 = par_s;

    tmp_args_element_name_3 = par_idx;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "idx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 390;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_and_left_value_1 = par__PY3;

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto frame_exception_exit_1;
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
    tmp_isinstance_inst_1 = par_s;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_text_type );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "text_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
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
    tmp_make_exception_arg_1 = const_str_digest_aa3b841eec06848a0a21af5b9b4a619e;
    frame_function->f_lineno = 392;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 392;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_len_arg_1 = par_s;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = par_idx;

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "idx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_subscribed_name_1 = par_s;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 395;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_idx;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "idx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 395;
        goto frame_exception_exit_1;
    }

    tmp_ord_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_ord_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BUILTIN_ORD( tmp_ord_arg_1 );
    Py_DECREF( tmp_ord_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto frame_exception_exit_1;
    }
    assert( var_ord0 == NULL );
    var_ord0 = tmp_assign_source_1;

    tmp_compare_left_3 = var_ord0;

    tmp_compare_right_3 = const_int_pos_65279;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_1 = par_idx;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "idx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_2 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    par_idx = tmp_assign_source_2;

    goto branch_end_4;
    branch_no_4:;
    tmp_compexpr_left_1 = var_ord0;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ord0" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_pos_239;
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_subscribed_name_2 = par_s;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = par_idx;

    if ( tmp_start_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "idx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = par_idx;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "idx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_3;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_2 != NULL );
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_str_digest_55ee07ca9d29d78d24331ccf7da751d6;
    tmp_and_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_3 = par_idx;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "idx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_3;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_3 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto frame_exception_exit_1;
    }
    par_idx = tmp_assign_source_3;

    branch_no_5:;
    branch_end_4:;
    branch_no_3:;
    tmp_source_name_1 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scan_once );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_s;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_idx;
    tmp_called_name_4 = par__w;

    tmp_args_element_name_4 = par_s;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_idx;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "idx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 400;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_end );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 400;
    tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 400;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
                );

                assert( res == 0 );
            }

            if ( par_idx )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_idx,
                    par_idx
                );

                assert( res == 0 );
            }

            if ( par__w )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__w,
                    par__w
                );

                assert( res == 0 );
            }

            if ( par__PY3 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__PY3,
                    par__PY3
                );

                assert( res == 0 );
            }

            if ( var_ord0 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ord0,
                    var_ord0
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
    NUITKA_CANNOT_GET_HERE( function_3_raw_decode_of_class_1_JSONDecoder_of_simplejson$decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_idx );
    par_idx = NULL;

    Py_XDECREF( par__w );
    par__w = NULL;

    Py_XDECREF( par__PY3 );
    par__PY3 = NULL;

    Py_XDECREF( var_ord0 );
    var_ord0 = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_idx );
    par_idx = NULL;

    Py_XDECREF( par__w );
    par__w = NULL;

    Py_XDECREF( par__PY3 );
    par__PY3 = NULL;

    Py_XDECREF( var_ord0 );
    var_ord0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_raw_decode_of_class_1_JSONDecoder_of_simplejson$decoder );
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



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_JSONDecoder_of_simplejson$decoder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_JSONDecoder_of_simplejson$decoder,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_f3176fd2e0e8ce526c77b9fad9b29549,
#endif
        codeobj_af4fadf0eedbeaa43fe6b044d03a9387,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson$decoder,
        const_str_digest_0a2604c8ae60507309a5be81abbb2d58
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__import_c_scanstring_of_simplejson$decoder(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1__import_c_scanstring_of_simplejson$decoder,
        const_str_plain__import_c_scanstring,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_85686deee26256dc62a6e552fa70554a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson$decoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__floatconstants_of_simplejson$decoder(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2__floatconstants_of_simplejson$decoder,
        const_str_plain__floatconstants,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7f914472db7cda7511140f68de85ed5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson$decoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_decode_of_class_1_JSONDecoder_of_simplejson$decoder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_decode_of_class_1_JSONDecoder_of_simplejson$decoder,
        const_str_plain_decode,
#if PYTHON_VERSION >= 330
        const_str_digest_853e849e7dfdcf8a2c16729dd0c2cccc,
#endif
        codeobj_34114ee288849c081d6d2df8499877ac,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson$decoder,
        const_str_digest_e0d1f0033c9dda08166c17a2f108b83c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_py_scanstring_of_simplejson$decoder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_py_scanstring_of_simplejson$decoder,
        const_str_plain_py_scanstring,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e1b548dccb750cc8734e8e370f5a3d46,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson$decoder,
        const_str_digest_fa8095fc0888435e3790faede211f6e9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_raw_decode_of_class_1_JSONDecoder_of_simplejson$decoder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_raw_decode_of_class_1_JSONDecoder_of_simplejson$decoder,
        const_str_plain_raw_decode,
#if PYTHON_VERSION >= 330
        const_str_digest_d6dfbb08ebce948a228788feeb86846d,
#endif
        codeobj_2dfd4448e28faef0864107c902f08a63,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson$decoder,
        const_str_digest_81b9bf601442006362df52f18569e200
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_JSONObject_of_simplejson$decoder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_JSONObject_of_simplejson$decoder,
        const_str_plain_JSONObject,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_86c7dcff11279286b61f5a12aa818d8d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson$decoder,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_JSONArray_of_simplejson$decoder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_JSONArray_of_simplejson$decoder,
        const_str_plain_JSONArray,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b5a7c5540c4cf61b80ef189c301b1a18,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson$decoder,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_simplejson$decoder =
{
    PyModuleDef_HEAD_INIT,
    "simplejson.decoder",   /* m_name */
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

MOD_INIT_DECL( simplejson$decoder )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_simplejson$decoder );
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

    // puts( "in initsimplejson$decoder" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_simplejson$decoder = Py_InitModule4(
        "simplejson.decoder",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_simplejson$decoder = PyModule_Create( &mdef_simplejson$decoder );
#endif

    moduledict_simplejson$decoder = (PyDictObject *)((PyModuleObject *)module_simplejson$decoder)->md_dict;

    CHECK_OBJECT( module_simplejson$decoder );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_84bbbbe97f6e4159970e42a288988abf, module_simplejson$decoder );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_simplejson$decoder );

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
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_simplejson$decoder_class_creation_1__bases = NULL;
    PyObject *tmp_simplejson$decoder_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_simplejson$decoder_class_creation_1__metaclass = NULL;
    PyObject *tmp_simplejson$decoder_class_creation_1__prepared = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_bases_name_1;
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
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
    PyObject *tmp_dict_name_1;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_metaclass_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_1eee447c219bb7ebf2997d5b802c335f;
    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_70f0b6b07f9ce5c014a802d97b4725e1;
    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_simplejson;
    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_552b34e979ff5758a5e281d893e95791, module_simplejson$decoder );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_struct, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_struct, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_compat, tmp_import_globals_4, tmp_import_globals_4, const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_fromhex );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_fromhex, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_compat, tmp_import_globals_5, tmp_import_globals_5, const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_b );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_compat, tmp_import_globals_6, tmp_import_globals_6, const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_u );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_compat, tmp_import_globals_7, tmp_import_globals_7, const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_text_type );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_compat, tmp_import_globals_8, tmp_import_globals_8, const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_binary_type );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_binary_type, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_compat, tmp_import_globals_9, tmp_import_globals_9, const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_PY3 );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_compat, tmp_import_globals_10, tmp_import_globals_10, const_tuple_020e10053ffa22e5a654bdbe37577f49_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_unichr );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_unichr, tmp_assign_source_15 );
    tmp_import_globals_11 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_scanner, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_make_scanner_str_plain_JSONDecodeError_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_make_scanner );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_make_scanner, tmp_assign_source_16 );
    tmp_import_globals_12 = ((PyModuleObject *)module_simplejson$decoder)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_scanner, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_make_scanner_str_plain_JSONDecodeError_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_JSONDecodeError );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecodeError, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_function_1__import_c_scanstring_of_simplejson$decoder(  );
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain__import_c_scanstring, tmp_assign_source_18 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain__import_c_scanstring );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__import_c_scanstring );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_import_c_scanstring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 16;
    tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_c_scanstring, tmp_assign_source_19 );
    tmp_assign_source_20 = LIST_COPY( const_list_str_plain_JSONDecoder_list );
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_20 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_VERBOSE );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MULTILINE );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DOTALL );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_FLAGS, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_function_2__floatconstants_of_simplejson$decoder(  );
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain__floatconstants, tmp_assign_source_22 );
    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain__floatconstants );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__floatconstants );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_floatconstants" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        goto try_except_handler_1;
    }

    frame_module->f_lineno = 33;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_23;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
    if ( tmp_assign_source_24 == NULL )
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


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_24;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
    if ( tmp_assign_source_25 == NULL )
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


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_25;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
    if ( tmp_assign_source_26 == NULL )
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


        exception_lineno = 33;
        goto try_except_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_26;

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

                goto try_except_handler_1;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_1;
    }
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_27 = tmp_tuple_unpack_1__element_1;

    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_NaN, tmp_assign_source_27 );
    tmp_assign_source_28 = tmp_tuple_unpack_1__element_2;

    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_PosInf, tmp_assign_source_28 );
    tmp_assign_source_29 = tmp_tuple_unpack_1__element_3;

    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_NegInf, tmp_assign_source_29 );
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_30 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_str_digest_146e803d9878ec1c531de3dd001739b2;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_NegInf );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NegInf );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NegInf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_Infinity;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_PosInf );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PosInf );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PosInf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_NaN;
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_NaN );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NaN );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NaN" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_3, tmp_dict_value_3 );
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain__CONSTANTS, tmp_assign_source_30 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_compile );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_22ff8b10eb8e1dc22f9715a8cef8bd4b;
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_FLAGS );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FLAGS );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FLAGS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_STRINGCHUNK, tmp_assign_source_31 );
    tmp_assign_source_32 = _PyDict_NewPresized( 8 );
    tmp_dict_key_4 = const_str_chr_34;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 43;
    tmp_dict_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_chr_34_tuple, 0 ) );

    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_chr_92;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 43;
    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_chr_92_tuple, 0 ) );

    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_chr_47;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 43;
    tmp_dict_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_b;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 44;
    tmp_dict_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_chr_8_tuple, 0 ) );

    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_f;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 44;
    tmp_dict_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_chr_12_tuple, 0 ) );

    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    tmp_dict_key_9 = const_str_plain_n;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 44;
    tmp_dict_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    tmp_dict_key_10 = const_str_plain_r;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 44;
    tmp_dict_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_chr_13_tuple, 0 ) );

    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    tmp_dict_key_11 = const_str_plain_t;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 44;
    tmp_dict_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_chr_9_tuple, 0 ) );

    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_BACKSLASH, tmp_assign_source_32 );
    tmp_assign_source_33 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_DEFAULT_ENCODING, tmp_assign_source_33 );
    tmp_defaults_1 = PyTuple_New( 7 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_True;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_BACKSLASH );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BACKSLASH );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BACKSLASH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_STRINGCHUNK );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STRINGCHUNK );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STRINGCHUNK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_match );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_u );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_u );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 50;
    tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_PY3 );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3 );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PY3" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_maxunicode );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_1 );
    tmp_assign_source_34 = MAKE_FUNCTION_function_3_py_scanstring_of_simplejson$decoder( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_py_scanstring, tmp_assign_source_34 );
    tmp_or_left_value_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_c_scanstring );

    if (unlikely( tmp_or_left_value_1 == NULL ))
    {
        tmp_or_left_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_scanstring );
    }

    if ( tmp_or_left_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_scanstring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
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
    tmp_or_right_value_1 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_py_scanstring );

    if (unlikely( tmp_or_right_value_1 == NULL ))
    {
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_py_scanstring );
    }

    if ( tmp_or_right_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "py_scanstring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_35 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_35 = tmp_or_left_value_1;
    or_end_1:;
    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_scanstring, tmp_assign_source_35 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_compile );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_d4b1bab947b379480adaa0b00e84655d;
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_FLAGS );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FLAGS );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FLAGS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_WHITESPACE, tmp_assign_source_36 );
    tmp_assign_source_37 = const_str_digest_47e02b19e4e386226cd24c3510b95a5a;
    UPDATE_STRING_DICT0( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_WHITESPACE_STR, tmp_assign_source_37 );
    tmp_defaults_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_WHITESPACE );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WHITESPACE );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WHITESPACE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_match );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_2 );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_WHITESPACE_STR );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WHITESPACE_STR );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WHITESPACE_STR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_2 );
    tmp_assign_source_38 = MAKE_FUNCTION_function_4_JSONObject_of_simplejson$decoder( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONObject, tmp_assign_source_38 );
    tmp_defaults_3 = PyTuple_New( 2 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_WHITESPACE );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WHITESPACE );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_defaults_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WHITESPACE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_match );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_3 );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_WHITESPACE_STR );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WHITESPACE_STR );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_defaults_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WHITESPACE_STR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_3 );
    tmp_assign_source_39 = MAKE_FUNCTION_function_5_JSONArray_of_simplejson$decoder( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONArray, tmp_assign_source_39 );
    tmp_assign_source_40 = PyTuple_New( 1 );
    tmp_tuple_element_4 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_4 != NULL );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_4 );
    assert( tmp_simplejson$decoder_class_creation_1__bases == NULL );
    tmp_simplejson$decoder_class_creation_1__bases = tmp_assign_source_40;

    tmp_assign_source_41 = PyDict_New();
    assert( tmp_simplejson$decoder_class_creation_1__class_decl_dict == NULL );
    tmp_simplejson$decoder_class_creation_1__class_decl_dict = tmp_assign_source_41;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_simplejson$decoder_class_creation_1__class_decl_dict;

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
    tmp_dict_name_1 = tmp_simplejson$decoder_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_simplejson$decoder_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
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
    tmp_subscribed_name_1 = tmp_simplejson$decoder_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_simplejson$decoder_class_creation_1__bases;

    tmp_assign_source_42 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 272;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_simplejson$decoder_class_creation_1__metaclass == NULL );
    tmp_simplejson$decoder_class_creation_1__metaclass = tmp_assign_source_42;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_simplejson$decoder_class_creation_1__class_decl_dict;

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
    tmp_dictdel_dict = tmp_simplejson$decoder_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_simplejson$decoder_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
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
    tmp_source_name_11 = tmp_simplejson$decoder_class_creation_1__metaclass;

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain_JSONDecoder;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_simplejson$decoder_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_5 );
    tmp_kw_name_1 = tmp_simplejson$decoder_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 272;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_43 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_simplejson$decoder_class_creation_1__prepared == NULL );
    tmp_simplejson$decoder_class_creation_1__prepared = tmp_assign_source_43;

    tmp_assign_source_44 = impl_class_1_JSONDecoder_of_simplejson$decoder( NULL, tmp_simplejson$decoder_class_creation_1__bases, tmp_simplejson$decoder_class_creation_1__class_decl_dict, tmp_simplejson$decoder_class_creation_1__metaclass, tmp_simplejson$decoder_class_creation_1__prepared );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson$decoder, (Nuitka_StringObject *)const_str_plain_JSONDecoder, tmp_assign_source_44 );
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

    Py_XDECREF( tmp_simplejson$decoder_class_creation_1__bases );
    tmp_simplejson$decoder_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_simplejson$decoder_class_creation_1__class_decl_dict );
    tmp_simplejson$decoder_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_simplejson$decoder_class_creation_1__metaclass );
    tmp_simplejson$decoder_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_simplejson$decoder_class_creation_1__prepared );
    tmp_simplejson$decoder_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

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
    Py_XDECREF( tmp_simplejson$decoder_class_creation_1__bases );
    tmp_simplejson$decoder_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_simplejson$decoder_class_creation_1__class_decl_dict );
    tmp_simplejson$decoder_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_simplejson$decoder_class_creation_1__metaclass );
    tmp_simplejson$decoder_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_simplejson$decoder_class_creation_1__prepared );
    tmp_simplejson$decoder_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_simplejson$decoder );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
