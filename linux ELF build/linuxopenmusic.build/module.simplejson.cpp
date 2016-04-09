// Generated code for Python source for module 'simplejson'
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

// The _module_simplejson is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_simplejson;
PyDictObject *moduledict_simplejson;

// The module constants used
static PyObject *const_list_f84a2984e85a27a6b972ac8cc2d191e4_list;
extern PyObject *const_str_plain_py_make_scanner;
extern PyObject *const_str_plain_for_json;
extern PyObject *const_str_plain_JSONEncoder;
extern PyObject *const_str_plain_dict;
static PyObject *const_str_digest_3511a98d7dd469c6c3cd992ec005bdf1;
static PyObject *const_tuple_938c1efa47b6068f905608d95c9d1d47_tuple;
extern PyObject *const_str_plain_parse_constant;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_iterable;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain__toggle_speedups;
extern PyObject *const_str_plain_default;
static PyObject *const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple;
static PyObject *const_str_plain_dec;
extern PyObject *const_str_plain_separators;
extern PyObject *const_str_plain_enc;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_decimal;
extern PyObject *const_str_plain_read;
extern PyObject *const_tuple_str_plain_decoder_tuple;
extern PyObject *const_str_plain_c_encode_basestring_ascii;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_py_scanstring;
extern PyObject *const_str_plain_JSONEncoderForHTML;
static PyObject *const_tuple_806361c2c2eaa7b89848956d396216bb_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_item_sort_key;
extern PyObject *const_str_plain_JSONDecodeError;
static PyObject *const_str_plain__default_encoder;
extern PyObject *const_str_plain_object_pairs_hook;
static PyObject *const_tuple_str_plain_ordered_dict_tuple;
extern PyObject *const_str_plain_check_circular;
static PyObject *const_dict_37e83e69aa1ba56e46454396202513d2;
static PyObject *const_str_digest_29128799e6868180fe0bd02edfedaa2d;
extern PyObject *const_str_plain_encode_basestring_ascii;
static PyObject *const_str_plain__import_c_make_encoder;
extern PyObject *const_str_plain_collections;
static PyObject *const_tuple_str_plain_kv_tuple;
extern PyObject *const_str_plain_Decimal;
static PyObject *const_str_plain_kv;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain_make_encoder;
extern PyObject *const_str_plain_ensure_ascii;
extern PyObject *const_str_plain_allow_nan;
extern PyObject *const_str_plain_object_hook;
extern PyObject *const_str_plain_indent;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_dump;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_c_make_encoder;
extern PyObject *const_str_plain_py_encode_basestring_ascii;
static PyObject *const_str_plain_simple_first;
static PyObject *const_tuple_str_plain_make_encoder_tuple;
static PyObject *const_dict_959a39584b85e1964750ccd746043bed;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_encoding;
static PyObject *const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple;
extern PyObject *const_str_plain_parse_float;
extern PyObject *const_str_plain___version__;
static PyObject *const_tuple_str_plain_scanner_tuple;
static PyObject *const_tuple_str_plain_Decimal_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_569a3f1c6de90af94d33b2686aaf078c_tuple;
static PyObject *const_str_digest_11ef09aa53c219bd9ad5d5116682ed3e;
static PyObject *const_tuple_str_plain_JSONDecoder_tuple;
static PyObject *const_list_str_digest_3511a98d7dd469c6c3cd992ec005bdf1_list;
static PyObject *const_tuple_none_none_none_none_none_none_none_false_tuple;
static PyObject *const_dict_1dbee11ab85c09603c4a3e72ea590cea;
extern PyObject *const_str_plain_dumps;
static PyObject *const_str_digest_056dff25d5325386a052ec3e062023a0;
extern PyObject *const_str_plain_scanner;
extern PyObject *const_str_plain___author__;
static PyObject *const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple;
static PyObject *const_str_digest_6fd554b5d4a4ecd210f80190483f7b16;
extern PyObject *const_str_plain_OrderedDict;
static PyObject *const_str_plain__import_OrderedDict;
extern PyObject *const_str_plain_tuple_as_array;
static PyObject *const_tuple_str_plain_encoder_tuple;
static PyObject *const_str_plain__default_decoder;
static PyObject *const_str_digest_021b885e98285b326436109d09a4f0c5;
extern PyObject *const_str_plain_scanstring;
static PyObject *const_tuple_str_plain_collections_str_plain_ordered_dict_tuple;
static PyObject *const_str_digest_b9349770d86089b862f8cef6382c2931;
extern PyObject *const_str_plain_make_scanner;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_iterable_as_array;
static PyObject *const_tuple_none_none_none_none_none_none_none_false_true_true_tuple;
extern PyObject *const_str_plain_simplejson;
static PyObject *const_str_digest_42256fcacc1ac14f73f19092740ce8f7;
extern PyObject *const_str_plain_bigint_as_string;
extern PyObject *const_str_plain_iterencode;
extern PyObject *const_str_plain_sort_keys;
static PyObject *const_tuple_d6b80cb1ff69748caff298d967e01196_tuple;
extern PyObject *const_str_plain_chunk;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_parse_int;
extern PyObject *const_str_plain_ordered_dict;
static PyObject *const_tuple_str_plain_JSONDecodeError_tuple;
extern PyObject *const_str_plain_int_as_string_bitcount;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_5f19295486f8c25cc6fdf18d2edc0f0a;
extern PyObject *const_str_plain_decoder;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_namedtuple_as_object;
extern PyObject *const_str_plain_c_scanstring;
extern PyObject *const_str_plain__speedups;
extern PyObject *const_str_plain_enabled;
extern PyObject *const_str_plain_skipkeys;
extern PyObject *const_str_plain_ignore_nan;
extern PyObject *const_str_plain_encoder;
extern PyObject *const_str_plain_use_decimal;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_loads;
static PyObject *const_str_digest_48c897e0fc561f1b02560db1fa883cf7;
extern PyObject *const_str_plain_scan;
extern PyObject *const_str_plain_obj;
static PyObject *const_str_digest_3d141c97fd8feb4dac3a776ad5e63133;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_c_make_scanner;
extern PyObject *const_str_plain_JSONDecoder;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_f84a2984e85a27a6b972ac8cc2d191e4_list = PyList_New( 9 );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 0, const_str_plain_dump ); Py_INCREF( const_str_plain_dump );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 1, const_str_plain_dumps ); Py_INCREF( const_str_plain_dumps );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 2, const_str_plain_load ); Py_INCREF( const_str_plain_load );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 3, const_str_plain_loads ); Py_INCREF( const_str_plain_loads );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 4, const_str_plain_JSONDecoder ); Py_INCREF( const_str_plain_JSONDecoder );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 5, const_str_plain_JSONDecodeError ); Py_INCREF( const_str_plain_JSONDecodeError );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 6, const_str_plain_JSONEncoder ); Py_INCREF( const_str_plain_JSONEncoder );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 7, const_str_plain_OrderedDict ); Py_INCREF( const_str_plain_OrderedDict );
    const_str_plain_simple_first = UNSTREAM_STRING( &constant_bin[ 672550 ], 12, 1 );
    PyList_SET_ITEM( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list, 8, const_str_plain_simple_first ); Py_INCREF( const_str_plain_simple_first );
    const_str_digest_3511a98d7dd469c6c3cd992ec005bdf1 = UNSTREAM_STRING( &constant_bin[ 672562 ], 43, 0 );
    const_tuple_938c1efa47b6068f905608d95c9d1d47_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 672605 ], 266 );
    const_str_plain__toggle_speedups = UNSTREAM_STRING( &constant_bin[ 672871 ], 16, 1 );
    const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 2, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 3, const_str_plain_object_hook ); Py_INCREF( const_str_plain_object_hook );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 4, const_str_plain_parse_float ); Py_INCREF( const_str_plain_parse_float );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 5, const_str_plain_parse_int ); Py_INCREF( const_str_plain_parse_int );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 6, const_str_plain_parse_constant ); Py_INCREF( const_str_plain_parse_constant );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 7, const_str_plain_object_pairs_hook ); Py_INCREF( const_str_plain_object_pairs_hook );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 8, const_str_plain_use_decimal ); Py_INCREF( const_str_plain_use_decimal );
    PyTuple_SET_ITEM( const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 9, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_plain_dec = UNSTREAM_STRING( &constant_bin[ 29655 ], 3, 1 );
    const_tuple_806361c2c2eaa7b89848956d396216bb_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 0, const_str_plain_enabled ); Py_INCREF( const_str_plain_enabled );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 1, const_str_plain_dec ); Py_INCREF( const_str_plain_dec );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 2, const_str_plain_enc ); Py_INCREF( const_str_plain_enc );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 3, const_str_plain_scan ); Py_INCREF( const_str_plain_scan );
    PyTuple_SET_ITEM( const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 4, const_str_plain_c_make_encoder ); Py_INCREF( const_str_plain_c_make_encoder );
    const_str_plain__default_encoder = UNSTREAM_STRING( &constant_bin[ 672887 ], 16, 1 );
    const_tuple_str_plain_ordered_dict_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ordered_dict_tuple, 0, const_str_plain_ordered_dict ); Py_INCREF( const_str_plain_ordered_dict );
    const_dict_37e83e69aa1ba56e46454396202513d2 = _PyDict_NewPresized( 8 );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_encoding, const_str_digest_c075052d723d6707083e869a0e3659bb );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_default, Py_None );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_indent, Py_None );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_allow_nan, Py_True );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_skipkeys, Py_False );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_separators, Py_None );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_ensure_ascii, Py_True );
    PyDict_SetItem( const_dict_37e83e69aa1ba56e46454396202513d2, const_str_plain_check_circular, Py_True );
    assert( PyDict_Size( const_dict_37e83e69aa1ba56e46454396202513d2 ) == 8 );
    const_str_digest_29128799e6868180fe0bd02edfedaa2d = UNSTREAM_STRING( &constant_bin[ 672903 ], 29, 0 );
    const_str_plain__import_c_make_encoder = UNSTREAM_STRING( &constant_bin[ 672932 ], 22, 1 );
    const_tuple_str_plain_kv_tuple = PyTuple_New( 1 );
    const_str_plain_kv = UNSTREAM_STRING( &constant_bin[ 279494 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kv_tuple, 0, const_str_plain_kv ); Py_INCREF( const_str_plain_kv );
    const_tuple_str_plain_make_encoder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_make_encoder_tuple, 0, const_str_plain_make_encoder ); Py_INCREF( const_str_plain_make_encoder );
    const_dict_959a39584b85e1964750ccd746043bed = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_959a39584b85e1964750ccd746043bed, const_str_plain_encoding, Py_None );
    PyDict_SetItem( const_dict_959a39584b85e1964750ccd746043bed, const_str_plain_object_hook, Py_None );
    PyDict_SetItem( const_dict_959a39584b85e1964750ccd746043bed, const_str_plain_object_pairs_hook, Py_None );
    assert( PyDict_Size( const_dict_959a39584b85e1964750ccd746043bed ) == 3 );
    const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 3, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 7, const_str_digest_c075052d723d6707083e869a0e3659bb ); Py_INCREF( const_str_digest_c075052d723d6707083e869a0e3659bb );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 9, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 10, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 11, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 12, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 13, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 14, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 15, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 16, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 17, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple, 18, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_scanner_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scanner_tuple, 0, const_str_plain_scanner ); Py_INCREF( const_str_plain_scanner );
    const_tuple_str_plain_Decimal_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Decimal_tuple, 0, const_str_plain_Decimal ); Py_INCREF( const_str_plain_Decimal );
    const_tuple_569a3f1c6de90af94d33b2686aaf078c_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 672954 ], 287 );
    const_str_digest_11ef09aa53c219bd9ad5d5116682ed3e = UNSTREAM_STRING( &constant_bin[ 673241 ], 55, 0 );
    const_tuple_str_plain_JSONDecoder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_JSONDecoder_tuple, 0, const_str_plain_JSONDecoder ); Py_INCREF( const_str_plain_JSONDecoder );
    const_list_str_digest_3511a98d7dd469c6c3cd992ec005bdf1_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_3511a98d7dd469c6c3cd992ec005bdf1_list, 0, const_str_digest_3511a98d7dd469c6c3cd992ec005bdf1 ); Py_INCREF( const_str_digest_3511a98d7dd469c6c3cd992ec005bdf1 );
    const_tuple_none_none_none_none_none_none_none_false_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_tuple, 7, Py_False ); Py_INCREF( Py_False );
    const_dict_1dbee11ab85c09603c4a3e72ea590cea = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 673296 ], 264 );
    const_str_digest_056dff25d5325386a052ec3e062023a0 = UNSTREAM_STRING( &constant_bin[ 673560 ], 3859, 0 );
    const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple, 0, const_str_plain_JSONEncoder ); Py_INCREF( const_str_plain_JSONEncoder );
    PyTuple_SET_ITEM( const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple, 1, const_str_plain_JSONEncoderForHTML ); Py_INCREF( const_str_plain_JSONEncoderForHTML );
    const_str_digest_6fd554b5d4a4ecd210f80190483f7b16 = UNSTREAM_STRING( &constant_bin[ 677419 ], 110, 0 );
    const_str_plain__import_OrderedDict = UNSTREAM_STRING( &constant_bin[ 677529 ], 19, 1 );
    const_tuple_str_plain_encoder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_encoder_tuple, 0, const_str_plain_encoder ); Py_INCREF( const_str_plain_encoder );
    const_str_plain__default_decoder = UNSTREAM_STRING( &constant_bin[ 677548 ], 16, 1 );
    const_str_digest_021b885e98285b326436109d09a4f0c5 = UNSTREAM_STRING( &constant_bin[ 677564 ], 44, 0 );
    const_tuple_str_plain_collections_str_plain_ordered_dict_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_collections_str_plain_ordered_dict_tuple, 0, const_str_plain_collections ); Py_INCREF( const_str_plain_collections );
    PyTuple_SET_ITEM( const_tuple_str_plain_collections_str_plain_ordered_dict_tuple, 1, const_str_plain_ordered_dict ); Py_INCREF( const_str_plain_ordered_dict );
    const_str_digest_b9349770d86089b862f8cef6382c2931 = UNSTREAM_STRING( &constant_bin[ 677608 ], 2332, 0 );
    const_tuple_none_none_none_none_none_none_none_false_true_true_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 7, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 8, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_false_true_true_tuple, 9, Py_True ); Py_INCREF( Py_True );
    const_str_digest_42256fcacc1ac14f73f19092740ce8f7 = UNSTREAM_STRING( &constant_bin[ 679940 ], 4203, 0 );
    const_tuple_d6b80cb1ff69748caff298d967e01196_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 2, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 3, const_str_plain_object_hook ); Py_INCREF( const_str_plain_object_hook );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 4, const_str_plain_parse_float ); Py_INCREF( const_str_plain_parse_float );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 5, const_str_plain_parse_int ); Py_INCREF( const_str_plain_parse_int );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 6, const_str_plain_parse_constant ); Py_INCREF( const_str_plain_parse_constant );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 7, const_str_plain_object_pairs_hook ); Py_INCREF( const_str_plain_object_pairs_hook );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 8, const_str_plain_use_decimal ); Py_INCREF( const_str_plain_use_decimal );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 9, const_str_plain_namedtuple_as_object ); Py_INCREF( const_str_plain_namedtuple_as_object );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 10, const_str_plain_tuple_as_array ); Py_INCREF( const_str_plain_tuple_as_array );
    PyTuple_SET_ITEM( const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 11, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_tuple_str_plain_JSONDecodeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_JSONDecodeError_tuple, 0, const_str_plain_JSONDecodeError ); Py_INCREF( const_str_plain_JSONDecodeError );
    const_str_digest_5f19295486f8c25cc6fdf18d2edc0f0a = UNSTREAM_STRING( &constant_bin[ 684143 ], 3083, 0 );
    const_str_digest_48c897e0fc561f1b02560db1fa883cf7 = UNSTREAM_STRING( &constant_bin[ 687226 ], 2323, 0 );
    const_str_digest_3d141c97fd8feb4dac3a776ad5e63133 = UNSTREAM_STRING( &constant_bin[ 689549 ], 5, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_simplejson( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1550a19a89afc5f13297f35819854f08;
static PyCodeObject *codeobj_6ce3086fe54d6adedf01148fc6ea4083;
static PyCodeObject *codeobj_c2a8a9ecf871ec160e95bc62506ce2c3;
static PyCodeObject *codeobj_4c7649adb62522d39921860f0ecd5a09;
static PyCodeObject *codeobj_85001b88ce5c9c18a13eceedae7fd235;
static PyCodeObject *codeobj_d60dbe24da9e301f8cf16c7a1f24606a;
static PyCodeObject *codeobj_4891e6c38a17c49a5c1dae1fec9e26a8;
static PyCodeObject *codeobj_da212f967c5a94b2b31b602c70645352;
static PyCodeObject *codeobj_e354709b61156e0db43e15fa2acb7aaa;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_11ef09aa53c219bd9ad5d5116682ed3e;
    codeobj_1550a19a89afc5f13297f35819854f08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__import_OrderedDict, 114, const_tuple_str_plain_collections_str_plain_ordered_dict_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6ce3086fe54d6adedf01148fc6ea4083 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__import_c_make_encoder, 123, const_tuple_str_plain_make_encoder_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c2a8a9ecf871ec160e95bc62506ce2c3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__toggle_speedups, 536, const_tuple_806361c2c2eaa7b89848956d396216bb_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c7649adb62522d39921860f0ecd5a09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dump, 150, const_tuple_569a3f1c6de90af94d33b2686aaf078c_tuple, 21, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_85001b88ce5c9c18a13eceedae7fd235 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dumps, 280, const_tuple_938c1efa47b6068f905608d95c9d1d47_tuple, 20, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d60dbe24da9e301f8cf16c7a1f24606a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load, 404, const_tuple_d6b80cb1ff69748caff298d967e01196_tuple, 11, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_4891e6c38a17c49a5c1dae1fec9e26a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loads, 462, const_tuple_4eda7b4c0d26ded466f1db9af66b0563_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_da212f967c5a94b2b31b602c70645352 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_simple_first, 571, const_tuple_str_plain_kv_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e354709b61156e0db43e15fa2acb7aaa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_simplejson, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_keywords_star_dict_of___internal__( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl_function_7_complex_call_helper_pos_keywords_star_dict_of___internal__( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1__import_OrderedDict_of_simplejson(  );


static PyObject *MAKE_FUNCTION_function_2__import_c_make_encoder_of_simplejson(  );


static PyObject *MAKE_FUNCTION_function_3_dump_of_simplejson( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_dumps_of_simplejson( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_load_of_simplejson( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_loads_of_simplejson( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7__toggle_speedups_of_simplejson(  );


static PyObject *MAKE_FUNCTION_function_8_simple_first_of_simplejson(  );


// The module function definitions.
static PyObject *impl_function_1__import_OrderedDict_of_simplejson( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_collections = NULL;
    PyObject *var_ordered_dict = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1550a19a89afc5f13297f35819854f08, module_simplejson );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( var_collections )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_collections,
            var_collections
        );

        assert( res == 0 );
    }

    if ( var_ordered_dict )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ordered_dict,
            var_ordered_dict
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 115;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_collections, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    assert( var_collections == NULL );
    var_collections = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_1 = var_collections;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_OrderedDict );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1__import_OrderedDict_of_simplejson );
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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
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
    tmp_import_globals_2 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ( var_collections )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_collections,
            var_collections
        );

        assert( res == 0 );
    }

    if ( var_ordered_dict )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ordered_dict,
            var_ordered_dict
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 119;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_ordered_dict_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto try_except_handler_3;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ordered_dict );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto try_except_handler_3;
    }
    assert( var_ordered_dict == NULL );
    var_ordered_dict = tmp_assign_source_2;

    tmp_source_name_2 = var_ordered_dict;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_OrderedDict );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1__import_OrderedDict_of_simplejson );
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
            if ( var_collections )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_collections,
                    var_collections
                );

                assert( res == 0 );
            }

            if ( var_ordered_dict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ordered_dict,
                    var_ordered_dict
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
    NUITKA_CANNOT_GET_HERE( function_1__import_OrderedDict_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_collections );
    var_collections = NULL;

    Py_XDECREF( var_ordered_dict );
    var_ordered_dict = NULL;

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

    Py_XDECREF( var_collections );
    var_collections = NULL;

    Py_XDECREF( var_ordered_dict );
    var_ordered_dict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1__import_OrderedDict_of_simplejson );
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


static PyObject *impl_function_2__import_c_make_encoder_of_simplejson( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_make_encoder = NULL;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6ce3086fe54d6adedf01148fc6ea4083, module_simplejson );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( var_make_encoder )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_make_encoder,
            var_make_encoder
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 125;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain__speedups, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_make_encoder_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_make_encoder );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_2;
    }
    assert( var_make_encoder == NULL );
    var_make_encoder = tmp_assign_source_1;

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


        exception_lineno = 127;
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
    NUITKA_CANNOT_GET_HERE( function_2__import_c_make_encoder_of_simplejson );
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
            if ( var_make_encoder )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_make_encoder,
                    var_make_encoder
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

    tmp_return_value = var_make_encoder;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2__import_c_make_encoder_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_make_encoder );
    var_make_encoder = NULL;

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
    NUITKA_CANNOT_GET_HERE( function_2__import_c_make_encoder_of_simplejson );
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


static PyObject *impl_function_3_dump_of_simplejson( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    PyObject *par_skipkeys = python_pars[ 2 ];
    PyObject *par_ensure_ascii = python_pars[ 3 ];
    PyObject *par_check_circular = python_pars[ 4 ];
    PyObject *par_allow_nan = python_pars[ 5 ];
    PyObject *par_cls = python_pars[ 6 ];
    PyObject *par_indent = python_pars[ 7 ];
    PyObject *par_separators = python_pars[ 8 ];
    PyObject *par_encoding = python_pars[ 9 ];
    PyObject *par_default = python_pars[ 10 ];
    PyObject *par_use_decimal = python_pars[ 11 ];
    PyObject *par_namedtuple_as_object = python_pars[ 12 ];
    PyObject *par_tuple_as_array = python_pars[ 13 ];
    PyObject *par_bigint_as_string = python_pars[ 14 ];
    PyObject *par_sort_keys = python_pars[ 15 ];
    PyObject *par_item_sort_key = python_pars[ 16 ];
    PyObject *par_for_json = python_pars[ 17 ];
    PyObject *par_ignore_nan = python_pars[ 18 ];
    PyObject *par_int_as_string_bitcount = python_pars[ 19 ];
    PyObject *par_iterable_as_array = python_pars[ 20 ];
    PyObject *par_kw = python_pars[ 21 ];
    PyObject *var_iterable = NULL;
    PyObject *var_chunk = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    int tmp_and_left_truth_6;
    int tmp_and_left_truth_7;
    int tmp_and_left_truth_8;
    int tmp_and_left_truth_9;
    int tmp_and_left_truth_10;
    int tmp_and_left_truth_11;
    int tmp_and_left_truth_12;
    int tmp_and_left_truth_13;
    int tmp_and_left_truth_14;
    int tmp_and_left_truth_15;
    int tmp_and_left_truth_16;
    int tmp_and_left_truth_17;
    int tmp_and_left_truth_18;
    int tmp_and_left_truth_19;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_left_value_7;
    PyObject *tmp_and_left_value_8;
    PyObject *tmp_and_left_value_9;
    PyObject *tmp_and_left_value_10;
    PyObject *tmp_and_left_value_11;
    PyObject *tmp_and_left_value_12;
    PyObject *tmp_and_left_value_13;
    PyObject *tmp_and_left_value_14;
    PyObject *tmp_and_left_value_15;
    PyObject *tmp_and_left_value_16;
    PyObject *tmp_and_left_value_17;
    PyObject *tmp_and_left_value_18;
    PyObject *tmp_and_left_value_19;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_and_right_value_7;
    PyObject *tmp_and_right_value_8;
    PyObject *tmp_and_right_value_9;
    PyObject *tmp_and_right_value_10;
    PyObject *tmp_and_right_value_11;
    PyObject *tmp_and_right_value_12;
    PyObject *tmp_and_right_value_13;
    PyObject *tmp_and_right_value_14;
    PyObject *tmp_and_right_value_15;
    PyObject *tmp_and_right_value_16;
    PyObject *tmp_and_right_value_17;
    PyObject *tmp_and_right_value_18;
    PyObject *tmp_and_right_value_19;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
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
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_operand_name_5;
    PyObject *tmp_operand_name_6;
    PyObject *tmp_operand_name_7;
    PyObject *tmp_operand_name_8;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4c7649adb62522d39921860f0ecd5a09, module_simplejson );
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
    tmp_operand_name_1 = par_skipkeys;

    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
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
    tmp_and_left_value_2 = par_ensure_ascii;

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
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
    tmp_and_left_value_3 = par_check_circular;

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
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
    tmp_and_left_value_4 = par_allow_nan;

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
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
    tmp_compexpr_left_1 = par_cls;

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_5 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    assert( !(tmp_and_left_truth_5 == -1) );
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_compexpr_left_2 = par_indent;

    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_6 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    assert( !(tmp_and_left_truth_6 == -1) );
    if ( tmp_and_left_truth_6 == 1 )
    {
        goto and_right_6;
    }
    else
    {
        goto and_left_6;
    }
    and_right_6:;
    tmp_compexpr_left_3 = par_separators;

    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_7 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    assert( !(tmp_and_left_truth_7 == -1) );
    if ( tmp_and_left_truth_7 == 1 )
    {
        goto and_right_7;
    }
    else
    {
        goto and_left_7;
    }
    and_right_7:;
    tmp_compexpr_left_4 = par_encoding;

    tmp_compexpr_right_4 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    tmp_and_left_value_8 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_8 );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_8 == 1 )
    {
        goto and_right_8;
    }
    else
    {
        goto and_left_8;
    }
    and_right_8:;
    Py_DECREF( tmp_and_left_value_8 );
    tmp_compexpr_left_5 = par_default;

    tmp_compexpr_right_5 = Py_None;
    tmp_and_left_value_9 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    tmp_and_left_truth_9 = CHECK_IF_TRUE( tmp_and_left_value_9 );
    assert( !(tmp_and_left_truth_9 == -1) );
    if ( tmp_and_left_truth_9 == 1 )
    {
        goto and_right_9;
    }
    else
    {
        goto and_left_9;
    }
    and_right_9:;
    tmp_and_left_value_10 = par_use_decimal;

    tmp_and_left_truth_10 = CHECK_IF_TRUE( tmp_and_left_value_10 );
    if ( tmp_and_left_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_10 == 1 )
    {
        goto and_right_10;
    }
    else
    {
        goto and_left_10;
    }
    and_right_10:;
    tmp_and_left_value_11 = par_namedtuple_as_object;

    tmp_and_left_truth_11 = CHECK_IF_TRUE( tmp_and_left_value_11 );
    if ( tmp_and_left_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_11 == 1 )
    {
        goto and_right_11;
    }
    else
    {
        goto and_left_11;
    }
    and_right_11:;
    tmp_and_left_value_12 = par_tuple_as_array;

    tmp_and_left_truth_12 = CHECK_IF_TRUE( tmp_and_left_value_12 );
    if ( tmp_and_left_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_12 == 1 )
    {
        goto and_right_12;
    }
    else
    {
        goto and_left_12;
    }
    and_right_12:;
    tmp_operand_name_2 = par_iterable_as_array;

    tmp_and_left_value_13 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_left_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_13 = CHECK_IF_TRUE( tmp_and_left_value_13 );
    if ( tmp_and_left_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_13 == 1 )
    {
        goto and_right_13;
    }
    else
    {
        goto and_left_13;
    }
    and_right_13:;
    tmp_operand_name_3 = par_bigint_as_string;

    tmp_and_left_value_14 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    if ( tmp_and_left_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_14 = CHECK_IF_TRUE( tmp_and_left_value_14 );
    if ( tmp_and_left_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_14 == 1 )
    {
        goto and_right_14;
    }
    else
    {
        goto and_left_14;
    }
    and_right_14:;
    tmp_operand_name_4 = par_sort_keys;

    tmp_and_left_value_15 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    if ( tmp_and_left_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_15 = CHECK_IF_TRUE( tmp_and_left_value_15 );
    if ( tmp_and_left_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_15 == 1 )
    {
        goto and_right_15;
    }
    else
    {
        goto and_left_15;
    }
    and_right_15:;
    tmp_operand_name_5 = par_item_sort_key;

    tmp_and_left_value_16 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_5 );
    if ( tmp_and_left_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_16 = CHECK_IF_TRUE( tmp_and_left_value_16 );
    if ( tmp_and_left_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_16 == 1 )
    {
        goto and_right_16;
    }
    else
    {
        goto and_left_16;
    }
    and_right_16:;
    tmp_operand_name_6 = par_for_json;

    tmp_and_left_value_17 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_6 );
    if ( tmp_and_left_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_17 = CHECK_IF_TRUE( tmp_and_left_value_17 );
    if ( tmp_and_left_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_17 == 1 )
    {
        goto and_right_17;
    }
    else
    {
        goto and_left_17;
    }
    and_right_17:;
    tmp_operand_name_7 = par_ignore_nan;

    tmp_and_left_value_18 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_7 );
    if ( tmp_and_left_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_18 = CHECK_IF_TRUE( tmp_and_left_value_18 );
    if ( tmp_and_left_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_18 == 1 )
    {
        goto and_right_18;
    }
    else
    {
        goto and_left_18;
    }
    and_right_18:;
    tmp_compexpr_left_6 = par_int_as_string_bitcount;

    tmp_compexpr_right_6 = Py_None;
    tmp_and_left_value_19 = BOOL_FROM( tmp_compexpr_left_6 == tmp_compexpr_right_6 );
    tmp_and_left_truth_19 = CHECK_IF_TRUE( tmp_and_left_value_19 );
    assert( !(tmp_and_left_truth_19 == -1) );
    if ( tmp_and_left_truth_19 == 1 )
    {
        goto and_right_19;
    }
    else
    {
        goto and_left_19;
    }
    and_right_19:;
    tmp_operand_name_8 = par_kw;

    tmp_and_right_value_19 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_8 );
    if ( tmp_and_right_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_18 = tmp_and_right_value_19;
    goto and_end_19;
    and_left_19:;
    tmp_and_right_value_18 = tmp_and_left_value_19;
    and_end_19:;
    tmp_and_right_value_17 = tmp_and_right_value_18;
    goto and_end_18;
    and_left_18:;
    tmp_and_right_value_17 = tmp_and_left_value_18;
    and_end_18:;
    tmp_and_right_value_16 = tmp_and_right_value_17;
    goto and_end_17;
    and_left_17:;
    tmp_and_right_value_16 = tmp_and_left_value_17;
    and_end_17:;
    tmp_and_right_value_15 = tmp_and_right_value_16;
    goto and_end_16;
    and_left_16:;
    tmp_and_right_value_15 = tmp_and_left_value_16;
    and_end_16:;
    tmp_and_right_value_14 = tmp_and_right_value_15;
    goto and_end_15;
    and_left_15:;
    tmp_and_right_value_14 = tmp_and_left_value_15;
    and_end_15:;
    tmp_and_right_value_13 = tmp_and_right_value_14;
    goto and_end_14;
    and_left_14:;
    tmp_and_right_value_13 = tmp_and_left_value_14;
    and_end_14:;
    tmp_and_right_value_12 = tmp_and_right_value_13;
    goto and_end_13;
    and_left_13:;
    tmp_and_right_value_12 = tmp_and_left_value_13;
    and_end_13:;
    tmp_and_right_value_11 = tmp_and_right_value_12;
    goto and_end_12;
    and_left_12:;
    tmp_and_right_value_11 = tmp_and_left_value_12;
    and_end_12:;
    tmp_and_right_value_10 = tmp_and_right_value_11;
    goto and_end_11;
    and_left_11:;
    tmp_and_right_value_10 = tmp_and_left_value_11;
    and_end_11:;
    tmp_and_right_value_9 = tmp_and_right_value_10;
    goto and_end_10;
    and_left_10:;
    tmp_and_right_value_9 = tmp_and_left_value_10;
    and_end_10:;
    tmp_and_right_value_8 = tmp_and_right_value_9;
    goto and_end_9;
    and_left_9:;
    tmp_and_right_value_8 = tmp_and_left_value_9;
    and_end_9:;
    Py_INCREF( tmp_and_right_value_8 );
    tmp_and_right_value_7 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_and_right_value_7 = tmp_and_left_value_8;
    and_end_8:;
    tmp_and_right_value_6 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    Py_INCREF( tmp_and_left_value_7 );
    tmp_and_right_value_6 = tmp_and_left_value_7;
    and_end_7:;
    tmp_and_right_value_5 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    Py_INCREF( tmp_and_left_value_6 );
    tmp_and_right_value_5 = tmp_and_left_value_6;
    and_end_6:;
    tmp_and_right_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    Py_INCREF( tmp_and_left_value_5 );
    tmp_and_right_value_4 = tmp_and_left_value_5;
    and_end_5:;
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_encoder );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_encoder );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_default_encoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_iterencode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_obj;

    frame_function->f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    assert( var_iterable == NULL );
    var_iterable = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_1 = par_cls;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder );

    if (unlikely( tmp_assign_source_2 == NULL ))
    {
        tmp_assign_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONEncoder );
    }

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONEncoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_cls;
        par_cls = tmp_assign_source_2;
        Py_INCREF( par_cls );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_dircall_arg1_1 = par_cls;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 18 );
    tmp_dict_key_1 = const_str_plain_skipkeys;
    tmp_dict_value_1 = par_skipkeys;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "skipkeys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_ensure_ascii;
    tmp_dict_value_2 = par_ensure_ascii;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ensure_ascii" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_check_circular;
    tmp_dict_value_3 = par_check_circular;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "check_circular" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_allow_nan;
    tmp_dict_value_4 = par_allow_nan;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_nan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_indent;
    tmp_dict_value_5 = par_indent;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "indent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_plain_separators;
    tmp_dict_value_6 = par_separators;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "separators" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_encoding;
    tmp_dict_value_7 = par_encoding;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_default;
    tmp_dict_value_8 = par_default;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_key_9 = const_str_plain_use_decimal;
    tmp_dict_value_9 = par_use_decimal;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "use_decimal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_key_10 = const_str_plain_namedtuple_as_object;
    tmp_dict_value_10 = par_namedtuple_as_object;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "namedtuple_as_object" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_key_11 = const_str_plain_tuple_as_array;
    tmp_dict_value_11 = par_tuple_as_array;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tuple_as_array" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_key_12 = const_str_plain_iterable_as_array;
    tmp_dict_value_12 = par_iterable_as_array;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iterable_as_array" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_key_13 = const_str_plain_bigint_as_string;
    tmp_dict_value_13 = par_bigint_as_string;

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bigint_as_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_key_14 = const_str_plain_sort_keys;
    tmp_dict_value_14 = par_sort_keys;

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sort_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_key_15 = const_str_plain_item_sort_key;
    tmp_dict_value_15 = par_item_sort_key;

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "item_sort_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_15, tmp_dict_value_15 );
    tmp_dict_key_16 = const_str_plain_for_json;
    tmp_dict_value_16 = par_for_json;

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "for_json" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_dict_key_17 = const_str_plain_ignore_nan;
    tmp_dict_value_17 = par_ignore_nan;

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ignore_nan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_key_18 = const_str_plain_int_as_string_bitcount;
    tmp_dict_value_18 = par_int_as_string_bitcount;

    if ( tmp_dict_value_18 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "int_as_string_bitcount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_18, tmp_dict_value_18 );
    tmp_dircall_arg3_1 = par_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_2 = impl_function_6_complex_call_helper_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_iterencode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_obj;

    frame_function->f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto frame_exception_exit_1;
    }
    assert( var_iterable == NULL );
    var_iterable = tmp_assign_source_3;

    branch_end_1:;
    tmp_iter_arg_1 = var_iterable;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 276;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_6;
        Py_INCREF( var_chunk );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_fp;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_chunk;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
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
            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
                );

                assert( res == 0 );
            }

            if ( par_fp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fp,
                    par_fp
                );

                assert( res == 0 );
            }

            if ( par_skipkeys )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_skipkeys,
                    par_skipkeys
                );

                assert( res == 0 );
            }

            if ( par_ensure_ascii )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ensure_ascii,
                    par_ensure_ascii
                );

                assert( res == 0 );
            }

            if ( par_check_circular )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check_circular,
                    par_check_circular
                );

                assert( res == 0 );
            }

            if ( par_allow_nan )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_allow_nan,
                    par_allow_nan
                );

                assert( res == 0 );
            }

            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( par_indent )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_indent,
                    par_indent
                );

                assert( res == 0 );
            }

            if ( par_separators )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_separators,
                    par_separators
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

            if ( par_default )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default,
                    par_default
                );

                assert( res == 0 );
            }

            if ( par_use_decimal )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_decimal,
                    par_use_decimal
                );

                assert( res == 0 );
            }

            if ( par_namedtuple_as_object )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_namedtuple_as_object,
                    par_namedtuple_as_object
                );

                assert( res == 0 );
            }

            if ( par_tuple_as_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tuple_as_array,
                    par_tuple_as_array
                );

                assert( res == 0 );
            }

            if ( par_bigint_as_string )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bigint_as_string,
                    par_bigint_as_string
                );

                assert( res == 0 );
            }

            if ( par_sort_keys )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sort_keys,
                    par_sort_keys
                );

                assert( res == 0 );
            }

            if ( par_item_sort_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item_sort_key,
                    par_item_sort_key
                );

                assert( res == 0 );
            }

            if ( par_for_json )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_for_json,
                    par_for_json
                );

                assert( res == 0 );
            }

            if ( par_ignore_nan )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ignore_nan,
                    par_ignore_nan
                );

                assert( res == 0 );
            }

            if ( par_int_as_string_bitcount )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_int_as_string_bitcount,
                    par_int_as_string_bitcount
                );

                assert( res == 0 );
            }

            if ( par_iterable_as_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iterable_as_array,
                    par_iterable_as_array
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
                );

                assert( res == 0 );
            }

            if ( var_iterable )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iterable,
                    var_iterable
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_dump_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_skipkeys );
    par_skipkeys = NULL;

    Py_XDECREF( par_ensure_ascii );
    par_ensure_ascii = NULL;

    Py_XDECREF( par_check_circular );
    par_check_circular = NULL;

    Py_XDECREF( par_allow_nan );
    par_allow_nan = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_separators );
    par_separators = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_bigint_as_string );
    par_bigint_as_string = NULL;

    Py_XDECREF( par_sort_keys );
    par_sort_keys = NULL;

    Py_XDECREF( par_item_sort_key );
    par_item_sort_key = NULL;

    Py_XDECREF( par_for_json );
    par_for_json = NULL;

    Py_XDECREF( par_ignore_nan );
    par_ignore_nan = NULL;

    Py_XDECREF( par_int_as_string_bitcount );
    par_int_as_string_bitcount = NULL;

    Py_XDECREF( par_iterable_as_array );
    par_iterable_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_iterable );
    var_iterable = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

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

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_skipkeys );
    par_skipkeys = NULL;

    Py_XDECREF( par_ensure_ascii );
    par_ensure_ascii = NULL;

    Py_XDECREF( par_check_circular );
    par_check_circular = NULL;

    Py_XDECREF( par_allow_nan );
    par_allow_nan = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_separators );
    par_separators = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_bigint_as_string );
    par_bigint_as_string = NULL;

    Py_XDECREF( par_sort_keys );
    par_sort_keys = NULL;

    Py_XDECREF( par_item_sort_key );
    par_item_sort_key = NULL;

    Py_XDECREF( par_for_json );
    par_for_json = NULL;

    Py_XDECREF( par_ignore_nan );
    par_ignore_nan = NULL;

    Py_XDECREF( par_int_as_string_bitcount );
    par_int_as_string_bitcount = NULL;

    Py_XDECREF( par_iterable_as_array );
    par_iterable_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_iterable );
    var_iterable = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_dump_of_simplejson );
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


static PyObject *impl_function_4_dumps_of_simplejson( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *par_skipkeys = python_pars[ 1 ];
    PyObject *par_ensure_ascii = python_pars[ 2 ];
    PyObject *par_check_circular = python_pars[ 3 ];
    PyObject *par_allow_nan = python_pars[ 4 ];
    PyObject *par_cls = python_pars[ 5 ];
    PyObject *par_indent = python_pars[ 6 ];
    PyObject *par_separators = python_pars[ 7 ];
    PyObject *par_encoding = python_pars[ 8 ];
    PyObject *par_default = python_pars[ 9 ];
    PyObject *par_use_decimal = python_pars[ 10 ];
    PyObject *par_namedtuple_as_object = python_pars[ 11 ];
    PyObject *par_tuple_as_array = python_pars[ 12 ];
    PyObject *par_bigint_as_string = python_pars[ 13 ];
    PyObject *par_sort_keys = python_pars[ 14 ];
    PyObject *par_item_sort_key = python_pars[ 15 ];
    PyObject *par_for_json = python_pars[ 16 ];
    PyObject *par_ignore_nan = python_pars[ 17 ];
    PyObject *par_int_as_string_bitcount = python_pars[ 18 ];
    PyObject *par_iterable_as_array = python_pars[ 19 ];
    PyObject *par_kw = python_pars[ 20 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    int tmp_and_left_truth_6;
    int tmp_and_left_truth_7;
    int tmp_and_left_truth_8;
    int tmp_and_left_truth_9;
    int tmp_and_left_truth_10;
    int tmp_and_left_truth_11;
    int tmp_and_left_truth_12;
    int tmp_and_left_truth_13;
    int tmp_and_left_truth_14;
    int tmp_and_left_truth_15;
    int tmp_and_left_truth_16;
    int tmp_and_left_truth_17;
    int tmp_and_left_truth_18;
    int tmp_and_left_truth_19;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_left_value_7;
    PyObject *tmp_and_left_value_8;
    PyObject *tmp_and_left_value_9;
    PyObject *tmp_and_left_value_10;
    PyObject *tmp_and_left_value_11;
    PyObject *tmp_and_left_value_12;
    PyObject *tmp_and_left_value_13;
    PyObject *tmp_and_left_value_14;
    PyObject *tmp_and_left_value_15;
    PyObject *tmp_and_left_value_16;
    PyObject *tmp_and_left_value_17;
    PyObject *tmp_and_left_value_18;
    PyObject *tmp_and_left_value_19;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_and_right_value_7;
    PyObject *tmp_and_right_value_8;
    PyObject *tmp_and_right_value_9;
    PyObject *tmp_and_right_value_10;
    PyObject *tmp_and_right_value_11;
    PyObject *tmp_and_right_value_12;
    PyObject *tmp_and_right_value_13;
    PyObject *tmp_and_right_value_14;
    PyObject *tmp_and_right_value_15;
    PyObject *tmp_and_right_value_16;
    PyObject *tmp_and_right_value_17;
    PyObject *tmp_and_right_value_18;
    PyObject *tmp_and_right_value_19;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
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
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_operand_name_5;
    PyObject *tmp_operand_name_6;
    PyObject *tmp_operand_name_7;
    PyObject *tmp_operand_name_8;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_85001b88ce5c9c18a13eceedae7fd235, module_simplejson );
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
    tmp_operand_name_1 = par_skipkeys;

    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
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
    tmp_and_left_value_2 = par_ensure_ascii;

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
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
    tmp_and_left_value_3 = par_check_circular;

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
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
    tmp_and_left_value_4 = par_allow_nan;

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
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
    tmp_compexpr_left_1 = par_cls;

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_5 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    assert( !(tmp_and_left_truth_5 == -1) );
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_compexpr_left_2 = par_indent;

    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_6 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    assert( !(tmp_and_left_truth_6 == -1) );
    if ( tmp_and_left_truth_6 == 1 )
    {
        goto and_right_6;
    }
    else
    {
        goto and_left_6;
    }
    and_right_6:;
    tmp_compexpr_left_3 = par_separators;

    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_7 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    assert( !(tmp_and_left_truth_7 == -1) );
    if ( tmp_and_left_truth_7 == 1 )
    {
        goto and_right_7;
    }
    else
    {
        goto and_left_7;
    }
    and_right_7:;
    tmp_compexpr_left_4 = par_encoding;

    tmp_compexpr_right_4 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    tmp_and_left_value_8 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_8 );

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_8 == 1 )
    {
        goto and_right_8;
    }
    else
    {
        goto and_left_8;
    }
    and_right_8:;
    Py_DECREF( tmp_and_left_value_8 );
    tmp_compexpr_left_5 = par_default;

    tmp_compexpr_right_5 = Py_None;
    tmp_and_left_value_9 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    tmp_and_left_truth_9 = CHECK_IF_TRUE( tmp_and_left_value_9 );
    assert( !(tmp_and_left_truth_9 == -1) );
    if ( tmp_and_left_truth_9 == 1 )
    {
        goto and_right_9;
    }
    else
    {
        goto and_left_9;
    }
    and_right_9:;
    tmp_and_left_value_10 = par_use_decimal;

    tmp_and_left_truth_10 = CHECK_IF_TRUE( tmp_and_left_value_10 );
    if ( tmp_and_left_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_10 == 1 )
    {
        goto and_right_10;
    }
    else
    {
        goto and_left_10;
    }
    and_right_10:;
    tmp_and_left_value_11 = par_namedtuple_as_object;

    tmp_and_left_truth_11 = CHECK_IF_TRUE( tmp_and_left_value_11 );
    if ( tmp_and_left_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_11 == 1 )
    {
        goto and_right_11;
    }
    else
    {
        goto and_left_11;
    }
    and_right_11:;
    tmp_and_left_value_12 = par_tuple_as_array;

    tmp_and_left_truth_12 = CHECK_IF_TRUE( tmp_and_left_value_12 );
    if ( tmp_and_left_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_12 == 1 )
    {
        goto and_right_12;
    }
    else
    {
        goto and_left_12;
    }
    and_right_12:;
    tmp_operand_name_2 = par_iterable_as_array;

    tmp_and_left_value_13 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_left_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_13 = CHECK_IF_TRUE( tmp_and_left_value_13 );
    if ( tmp_and_left_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_13 == 1 )
    {
        goto and_right_13;
    }
    else
    {
        goto and_left_13;
    }
    and_right_13:;
    tmp_operand_name_3 = par_bigint_as_string;

    tmp_and_left_value_14 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    if ( tmp_and_left_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_14 = CHECK_IF_TRUE( tmp_and_left_value_14 );
    if ( tmp_and_left_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_14 == 1 )
    {
        goto and_right_14;
    }
    else
    {
        goto and_left_14;
    }
    and_right_14:;
    tmp_operand_name_4 = par_sort_keys;

    tmp_and_left_value_15 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    if ( tmp_and_left_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_15 = CHECK_IF_TRUE( tmp_and_left_value_15 );
    if ( tmp_and_left_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_15 == 1 )
    {
        goto and_right_15;
    }
    else
    {
        goto and_left_15;
    }
    and_right_15:;
    tmp_operand_name_5 = par_item_sort_key;

    tmp_and_left_value_16 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_5 );
    if ( tmp_and_left_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_16 = CHECK_IF_TRUE( tmp_and_left_value_16 );
    if ( tmp_and_left_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_16 == 1 )
    {
        goto and_right_16;
    }
    else
    {
        goto and_left_16;
    }
    and_right_16:;
    tmp_operand_name_6 = par_for_json;

    tmp_and_left_value_17 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_6 );
    if ( tmp_and_left_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_17 = CHECK_IF_TRUE( tmp_and_left_value_17 );
    if ( tmp_and_left_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_17 == 1 )
    {
        goto and_right_17;
    }
    else
    {
        goto and_left_17;
    }
    and_right_17:;
    tmp_operand_name_7 = par_ignore_nan;

    tmp_and_left_value_18 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_7 );
    if ( tmp_and_left_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_18 = CHECK_IF_TRUE( tmp_and_left_value_18 );
    if ( tmp_and_left_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_18 == 1 )
    {
        goto and_right_18;
    }
    else
    {
        goto and_left_18;
    }
    and_right_18:;
    tmp_compexpr_left_6 = par_int_as_string_bitcount;

    tmp_compexpr_right_6 = Py_None;
    tmp_and_left_value_19 = BOOL_FROM( tmp_compexpr_left_6 == tmp_compexpr_right_6 );
    tmp_and_left_truth_19 = CHECK_IF_TRUE( tmp_and_left_value_19 );
    assert( !(tmp_and_left_truth_19 == -1) );
    if ( tmp_and_left_truth_19 == 1 )
    {
        goto and_right_19;
    }
    else
    {
        goto and_left_19;
    }
    and_right_19:;
    tmp_operand_name_8 = par_kw;

    tmp_and_right_value_19 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_8 );
    if ( tmp_and_right_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_18 = tmp_and_right_value_19;
    goto and_end_19;
    and_left_19:;
    tmp_and_right_value_18 = tmp_and_left_value_19;
    and_end_19:;
    tmp_and_right_value_17 = tmp_and_right_value_18;
    goto and_end_18;
    and_left_18:;
    tmp_and_right_value_17 = tmp_and_left_value_18;
    and_end_18:;
    tmp_and_right_value_16 = tmp_and_right_value_17;
    goto and_end_17;
    and_left_17:;
    tmp_and_right_value_16 = tmp_and_left_value_17;
    and_end_17:;
    tmp_and_right_value_15 = tmp_and_right_value_16;
    goto and_end_16;
    and_left_16:;
    tmp_and_right_value_15 = tmp_and_left_value_16;
    and_end_16:;
    tmp_and_right_value_14 = tmp_and_right_value_15;
    goto and_end_15;
    and_left_15:;
    tmp_and_right_value_14 = tmp_and_left_value_15;
    and_end_15:;
    tmp_and_right_value_13 = tmp_and_right_value_14;
    goto and_end_14;
    and_left_14:;
    tmp_and_right_value_13 = tmp_and_left_value_14;
    and_end_14:;
    tmp_and_right_value_12 = tmp_and_right_value_13;
    goto and_end_13;
    and_left_13:;
    tmp_and_right_value_12 = tmp_and_left_value_13;
    and_end_13:;
    tmp_and_right_value_11 = tmp_and_right_value_12;
    goto and_end_12;
    and_left_12:;
    tmp_and_right_value_11 = tmp_and_left_value_12;
    and_end_12:;
    tmp_and_right_value_10 = tmp_and_right_value_11;
    goto and_end_11;
    and_left_11:;
    tmp_and_right_value_10 = tmp_and_left_value_11;
    and_end_11:;
    tmp_and_right_value_9 = tmp_and_right_value_10;
    goto and_end_10;
    and_left_10:;
    tmp_and_right_value_9 = tmp_and_left_value_10;
    and_end_10:;
    tmp_and_right_value_8 = tmp_and_right_value_9;
    goto and_end_9;
    and_left_9:;
    tmp_and_right_value_8 = tmp_and_left_value_9;
    and_end_9:;
    Py_INCREF( tmp_and_right_value_8 );
    tmp_and_right_value_7 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_and_right_value_7 = tmp_and_left_value_8;
    and_end_8:;
    tmp_and_right_value_6 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    Py_INCREF( tmp_and_left_value_7 );
    tmp_and_right_value_6 = tmp_and_left_value_7;
    and_end_7:;
    tmp_and_right_value_5 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    Py_INCREF( tmp_and_left_value_6 );
    tmp_and_right_value_5 = tmp_and_left_value_6;
    and_end_6:;
    tmp_and_right_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    Py_INCREF( tmp_and_left_value_5 );
    tmp_and_right_value_4 = tmp_and_left_value_5;
    and_end_5:;
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_encoder );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_encoder );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_default_encoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_obj;

    frame_function->f_lineno = 380;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_cls;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONEncoder );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONEncoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_cls;
        par_cls = tmp_assign_source_1;
        Py_INCREF( par_cls );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_dircall_arg1_1 = par_cls;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 18 );
    tmp_dict_key_1 = const_str_plain_skipkeys;
    tmp_dict_value_1 = par_skipkeys;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "skipkeys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_ensure_ascii;
    tmp_dict_value_2 = par_ensure_ascii;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ensure_ascii" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_check_circular;
    tmp_dict_value_3 = par_check_circular;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "check_circular" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_allow_nan;
    tmp_dict_value_4 = par_allow_nan;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_nan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_indent;
    tmp_dict_value_5 = par_indent;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "indent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_plain_separators;
    tmp_dict_value_6 = par_separators;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "separators" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_encoding;
    tmp_dict_value_7 = par_encoding;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_default;
    tmp_dict_value_8 = par_default;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_key_9 = const_str_plain_use_decimal;
    tmp_dict_value_9 = par_use_decimal;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "use_decimal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_key_10 = const_str_plain_namedtuple_as_object;
    tmp_dict_value_10 = par_namedtuple_as_object;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "namedtuple_as_object" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_key_11 = const_str_plain_tuple_as_array;
    tmp_dict_value_11 = par_tuple_as_array;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tuple_as_array" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 389;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_key_12 = const_str_plain_iterable_as_array;
    tmp_dict_value_12 = par_iterable_as_array;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iterable_as_array" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_key_13 = const_str_plain_bigint_as_string;
    tmp_dict_value_13 = par_bigint_as_string;

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bigint_as_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_key_14 = const_str_plain_sort_keys;
    tmp_dict_value_14 = par_sort_keys;

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sort_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_key_15 = const_str_plain_item_sort_key;
    tmp_dict_value_15 = par_item_sort_key;

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "item_sort_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_15, tmp_dict_value_15 );
    tmp_dict_key_16 = const_str_plain_for_json;
    tmp_dict_value_16 = par_for_json;

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "for_json" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_dict_key_17 = const_str_plain_ignore_nan;
    tmp_dict_value_17 = par_ignore_nan;

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ignore_nan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 395;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_key_18 = const_str_plain_int_as_string_bitcount;
    tmp_dict_value_18 = par_int_as_string_bitcount;

    if ( tmp_dict_value_18 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "int_as_string_bitcount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 396;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_18, tmp_dict_value_18 );
    tmp_dircall_arg3_1 = par_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_2 = impl_function_6_complex_call_helper_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_obj;

    frame_function->f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
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
            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
                );

                assert( res == 0 );
            }

            if ( par_skipkeys )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_skipkeys,
                    par_skipkeys
                );

                assert( res == 0 );
            }

            if ( par_ensure_ascii )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ensure_ascii,
                    par_ensure_ascii
                );

                assert( res == 0 );
            }

            if ( par_check_circular )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check_circular,
                    par_check_circular
                );

                assert( res == 0 );
            }

            if ( par_allow_nan )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_allow_nan,
                    par_allow_nan
                );

                assert( res == 0 );
            }

            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( par_indent )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_indent,
                    par_indent
                );

                assert( res == 0 );
            }

            if ( par_separators )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_separators,
                    par_separators
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

            if ( par_default )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_default,
                    par_default
                );

                assert( res == 0 );
            }

            if ( par_use_decimal )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_decimal,
                    par_use_decimal
                );

                assert( res == 0 );
            }

            if ( par_namedtuple_as_object )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_namedtuple_as_object,
                    par_namedtuple_as_object
                );

                assert( res == 0 );
            }

            if ( par_tuple_as_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tuple_as_array,
                    par_tuple_as_array
                );

                assert( res == 0 );
            }

            if ( par_bigint_as_string )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bigint_as_string,
                    par_bigint_as_string
                );

                assert( res == 0 );
            }

            if ( par_sort_keys )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sort_keys,
                    par_sort_keys
                );

                assert( res == 0 );
            }

            if ( par_item_sort_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item_sort_key,
                    par_item_sort_key
                );

                assert( res == 0 );
            }

            if ( par_for_json )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_for_json,
                    par_for_json
                );

                assert( res == 0 );
            }

            if ( par_ignore_nan )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ignore_nan,
                    par_ignore_nan
                );

                assert( res == 0 );
            }

            if ( par_int_as_string_bitcount )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_int_as_string_bitcount,
                    par_int_as_string_bitcount
                );

                assert( res == 0 );
            }

            if ( par_iterable_as_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iterable_as_array,
                    par_iterable_as_array
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
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
    NUITKA_CANNOT_GET_HERE( function_4_dumps_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_skipkeys );
    par_skipkeys = NULL;

    Py_XDECREF( par_ensure_ascii );
    par_ensure_ascii = NULL;

    Py_XDECREF( par_check_circular );
    par_check_circular = NULL;

    Py_XDECREF( par_allow_nan );
    par_allow_nan = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_separators );
    par_separators = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_bigint_as_string );
    par_bigint_as_string = NULL;

    Py_XDECREF( par_sort_keys );
    par_sort_keys = NULL;

    Py_XDECREF( par_item_sort_key );
    par_item_sort_key = NULL;

    Py_XDECREF( par_for_json );
    par_for_json = NULL;

    Py_XDECREF( par_ignore_nan );
    par_ignore_nan = NULL;

    Py_XDECREF( par_int_as_string_bitcount );
    par_int_as_string_bitcount = NULL;

    Py_XDECREF( par_iterable_as_array );
    par_iterable_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

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

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_skipkeys );
    par_skipkeys = NULL;

    Py_XDECREF( par_ensure_ascii );
    par_ensure_ascii = NULL;

    Py_XDECREF( par_check_circular );
    par_check_circular = NULL;

    Py_XDECREF( par_allow_nan );
    par_allow_nan = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_separators );
    par_separators = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_bigint_as_string );
    par_bigint_as_string = NULL;

    Py_XDECREF( par_sort_keys );
    par_sort_keys = NULL;

    Py_XDECREF( par_item_sort_key );
    par_item_sort_key = NULL;

    Py_XDECREF( par_for_json );
    par_for_json = NULL;

    Py_XDECREF( par_ignore_nan );
    par_ignore_nan = NULL;

    Py_XDECREF( par_int_as_string_bitcount );
    par_int_as_string_bitcount = NULL;

    Py_XDECREF( par_iterable_as_array );
    par_iterable_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_dumps_of_simplejson );
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


static PyObject *impl_function_5_load_of_simplejson( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_cls = python_pars[ 2 ];
    PyObject *par_object_hook = python_pars[ 3 ];
    PyObject *par_parse_float = python_pars[ 4 ];
    PyObject *par_parse_int = python_pars[ 5 ];
    PyObject *par_parse_constant = python_pars[ 6 ];
    PyObject *par_object_pairs_hook = python_pars[ 7 ];
    PyObject *par_use_decimal = python_pars[ 8 ];
    PyObject *par_namedtuple_as_object = python_pars[ 9 ];
    PyObject *par_tuple_as_array = python_pars[ 10 ];
    PyObject *par_kw = python_pars[ 11 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d60dbe24da9e301f8cf16c7a1f24606a, module_simplejson );
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_loads );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_loads );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "loads" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_fp;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 455;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 8 );
    tmp_dict_key_1 = const_str_plain_encoding;
    tmp_dict_value_1 = par_encoding;

    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_cls;
    tmp_dict_value_2 = par_cls;

    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_object_hook;
    tmp_dict_value_3 = par_object_hook;

    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_parse_float;
    tmp_dict_value_4 = par_parse_float;

    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_parse_int;
    tmp_dict_value_5 = par_parse_int;

    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_plain_parse_constant;
    tmp_dict_value_6 = par_parse_constant;

    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_object_pairs_hook;
    tmp_dict_value_7 = par_object_pairs_hook;

    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_use_decimal;
    tmp_dict_value_8 = par_use_decimal;

    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dircall_arg4_1 = par_kw;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl_function_7_complex_call_helper_pos_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
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
            if ( par_fp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fp,
                    par_fp
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

            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
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

            if ( par_object_pairs_hook )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_pairs_hook,
                    par_object_pairs_hook
                );

                assert( res == 0 );
            }

            if ( par_use_decimal )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_decimal,
                    par_use_decimal
                );

                assert( res == 0 );
            }

            if ( par_namedtuple_as_object )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_namedtuple_as_object,
                    par_namedtuple_as_object
                );

                assert( res == 0 );
            }

            if ( par_tuple_as_array )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tuple_as_array,
                    par_tuple_as_array
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
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
    NUITKA_CANNOT_GET_HERE( function_5_load_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    Py_XDECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

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

    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    CHECK_OBJECT( (PyObject *)par_namedtuple_as_object );
    Py_DECREF( par_namedtuple_as_object );
    par_namedtuple_as_object = NULL;

    CHECK_OBJECT( (PyObject *)par_tuple_as_array );
    Py_DECREF( par_tuple_as_array );
    par_tuple_as_array = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_load_of_simplejson );
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


static PyObject *impl_function_6_loads_of_simplejson( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_cls = python_pars[ 2 ];
    PyObject *par_object_hook = python_pars[ 3 ];
    PyObject *par_parse_float = python_pars[ 4 ];
    PyObject *par_parse_int = python_pars[ 5 ];
    PyObject *par_parse_constant = python_pars[ 6 ];
    PyObject *par_object_pairs_hook = python_pars[ 7 ];
    PyObject *par_use_decimal = python_pars[ 8 ];
    PyObject *par_kw = python_pars[ 9 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    int tmp_and_left_truth_6;
    int tmp_and_left_truth_7;
    int tmp_and_left_truth_8;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_left_value_7;
    PyObject *tmp_and_left_value_8;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_and_right_value_7;
    PyObject *tmp_and_right_value_8;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4891e6c38a17c49a5c1dae1fec9e26a8, module_simplejson );
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
    tmp_compexpr_left_1 = par_cls;

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_2 = par_encoding;

    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_2 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_compexpr_left_3 = par_object_hook;

    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_3 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    assert( !(tmp_and_left_truth_3 == -1) );
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_compexpr_left_4 = par_parse_int;

    tmp_compexpr_right_4 = Py_None;
    tmp_and_left_value_4 = BOOL_FROM( tmp_compexpr_left_4 == tmp_compexpr_right_4 );
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    assert( !(tmp_and_left_truth_4 == -1) );
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_compexpr_left_5 = par_parse_float;

    tmp_compexpr_right_5 = Py_None;
    tmp_and_left_value_5 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    assert( !(tmp_and_left_truth_5 == -1) );
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_compexpr_left_6 = par_parse_constant;

    tmp_compexpr_right_6 = Py_None;
    tmp_and_left_value_6 = BOOL_FROM( tmp_compexpr_left_6 == tmp_compexpr_right_6 );
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    assert( !(tmp_and_left_truth_6 == -1) );
    if ( tmp_and_left_truth_6 == 1 )
    {
        goto and_right_6;
    }
    else
    {
        goto and_left_6;
    }
    and_right_6:;
    tmp_compexpr_left_7 = par_object_pairs_hook;

    tmp_compexpr_right_7 = Py_None;
    tmp_and_left_value_7 = BOOL_FROM( tmp_compexpr_left_7 == tmp_compexpr_right_7 );
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    assert( !(tmp_and_left_truth_7 == -1) );
    if ( tmp_and_left_truth_7 == 1 )
    {
        goto and_right_7;
    }
    else
    {
        goto and_left_7;
    }
    and_right_7:;
    tmp_operand_name_1 = par_use_decimal;

    tmp_and_left_value_8 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_8 == 1 )
    {
        goto and_right_8;
    }
    else
    {
        goto and_left_8;
    }
    and_right_8:;
    tmp_operand_name_2 = par_kw;

    tmp_and_right_value_8 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_right_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_7 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_and_right_value_7 = tmp_and_left_value_8;
    and_end_8:;
    tmp_and_right_value_6 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    tmp_and_right_value_6 = tmp_and_left_value_7;
    and_end_7:;
    tmp_and_right_value_5 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    tmp_and_right_value_5 = tmp_and_left_value_6;
    and_end_6:;
    tmp_and_right_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_and_right_value_4 = tmp_and_left_value_5;
    and_end_5:;
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
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


        exception_lineno = 515;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_decoder );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_decoder );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_default_decoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 516;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_s;

    frame_function->f_lineno = 516;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_cls;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 517;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecoder );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecoder );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 518;
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_cls;
        par_cls = tmp_assign_source_1;
        Py_INCREF( par_cls );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_2 = par_object_hook;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 519;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_1 = par_object_hook;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = par_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_object_hook;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_compare_left_3 = par_object_pairs_hook;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_pairs_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_2 = par_object_pairs_hook;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "object_pairs_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = par_kw;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_object_pairs_hook;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_compare_left_4 = par_parse_float;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_float" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 523;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_ass_subvalue_3 = par_parse_float;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_float" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 524;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_3 = par_kw;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 524;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_parse_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 524;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_compare_left_5 = par_parse_int;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_int" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 525;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_ass_subvalue_4 = par_parse_int;

    if ( tmp_ass_subvalue_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_int" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_4 = par_kw;

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_parse_int;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_compare_left_6 = par_parse_constant;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_constant" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_ass_subvalue_5 = par_parse_constant;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_constant" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_5 = par_kw;

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_plain_parse_constant;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 528;
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    tmp_cond_value_2 = par_use_decimal;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "use_decimal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 529;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 529;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_compare_left_7 = par_parse_float;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_float" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_isnot_6 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if ( tmp_isnot_6 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_make_exception_arg_1 = const_str_digest_021b885e98285b326436109d09a4f0c5;
    frame_function->f_lineno = 531;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 531;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_9:;
    tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_Decimal );

    if (unlikely( tmp_ass_subvalue_6 == NULL ))
    {
        tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal );
    }

    if ( tmp_ass_subvalue_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Decimal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 532;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_6 = par_kw;

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 532;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = const_str_plain_parse_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_dircall_arg1_1 = par_cls;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 533;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_encoding;
    tmp_dict_value_1 = par_encoding;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 533;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dircall_arg3_1 = par_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 533;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_2 = impl_function_6_complex_call_helper_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_s;

    frame_function->f_lineno = 533;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
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
            if ( par_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
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

            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
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

            if ( par_object_pairs_hook )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_object_pairs_hook,
                    par_object_pairs_hook
                );

                assert( res == 0 );
            }

            if ( par_use_decimal )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_decimal,
                    par_use_decimal
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
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
    NUITKA_CANNOT_GET_HERE( function_6_loads_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_object_hook );
    par_object_hook = NULL;

    Py_XDECREF( par_parse_float );
    par_parse_float = NULL;

    Py_XDECREF( par_parse_int );
    par_parse_int = NULL;

    Py_XDECREF( par_parse_constant );
    par_parse_constant = NULL;

    Py_XDECREF( par_object_pairs_hook );
    par_object_pairs_hook = NULL;

    Py_XDECREF( par_use_decimal );
    par_use_decimal = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_loads_of_simplejson );
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


static PyObject *impl_function_7__toggle_speedups_of_simplejson( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_enabled = python_pars[ 0 ];
    PyObject *var_dec = NULL;
    PyObject *var_enc = NULL;
    PyObject *var_scan = NULL;
    PyObject *var_c_make_encoder = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_locals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
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
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c2a8a9ecf871ec160e95bc62506ce2c3, module_simplejson );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_enabled )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_enabled,
            par_enabled
        );

        assert( res == 0 );
    }

    if ( var_dec )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dec,
            var_dec
        );

        assert( res == 0 );
    }

    if ( var_enc )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_enc,
            var_enc
        );

        assert( res == 0 );
    }

    if ( var_scan )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_scan,
            var_scan
        );

        assert( res == 0 );
    }

    if ( var_c_make_encoder )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_c_make_encoder,
            var_c_make_encoder
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 537;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_decoder_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_decoder );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 537;
        goto frame_exception_exit_1;
    }
    assert( var_dec == NULL );
    var_dec = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ( par_enabled )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_enabled,
            par_enabled
        );

        assert( res == 0 );
    }

    if ( var_dec )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_dec,
            var_dec
        );

        assert( res == 0 );
    }

    if ( var_enc )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_enc,
            var_enc
        );

        assert( res == 0 );
    }

    if ( var_scan )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_scan,
            var_scan
        );

        assert( res == 0 );
    }

    if ( var_c_make_encoder )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_c_make_encoder,
            var_c_make_encoder
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 538;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_empty, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_encoder_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_encoder );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        goto frame_exception_exit_1;
    }
    assert( var_enc == NULL );
    var_enc = tmp_assign_source_2;

    tmp_import_globals_3 = ((PyModuleObject *)module_simplejson)->md_dict;
    tmp_import_locals_3 = PyDict_New();
    if ( par_enabled )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_enabled,
            par_enabled
        );

        assert( res == 0 );
    }

    if ( var_dec )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_dec,
            var_dec
        );

        assert( res == 0 );
    }

    if ( var_enc )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_enc,
            var_enc
        );

        assert( res == 0 );
    }

    if ( var_scan )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_scan,
            var_scan
        );

        assert( res == 0 );
    }

    if ( var_c_make_encoder )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_c_make_encoder,
            var_c_make_encoder
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 539;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_empty, tmp_import_globals_3, tmp_import_locals_3, const_tuple_str_plain_scanner_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_scanner );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
        goto frame_exception_exit_1;
    }
    assert( var_scan == NULL );
    var_scan = tmp_assign_source_3;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__import_c_make_encoder );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__import_c_make_encoder );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_import_c_make_encoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 540;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 540;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        goto frame_exception_exit_1;
    }
    assert( var_c_make_encoder == NULL );
    var_c_make_encoder = tmp_assign_source_4;

    tmp_cond_value_1 = par_enabled;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 541;
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
    tmp_source_name_1 = var_dec;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_c_scanstring );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 542;
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
    tmp_source_name_2 = var_dec;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_py_scanstring );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assattr_name_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assattr_target_1 = var_dec;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_scanstring, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 542;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = var_c_make_encoder;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c_make_encoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = var_enc;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_c_make_encoder, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 543;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_enc;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 544;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_c_encode_basestring_ascii );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 545;
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
    tmp_source_name_4 = var_enc;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 545;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_py_encode_basestring_ascii );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assattr_name_3 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assattr_target_3 = var_enc;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 544;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_encode_basestring_ascii, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 545;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_5 = var_scan;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_c_make_scanner );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 546;
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
    tmp_source_name_6 = var_scan;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_py_make_scanner );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_assattr_name_4 = tmp_or_left_value_3;
    or_end_3:;
    tmp_assattr_target_4 = var_scan;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_make_scanner, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 546;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_7 = var_dec;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 548;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_py_scanstring );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = var_dec;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 548;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_scanstring, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 548;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = var_enc;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 549;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_c_make_encoder, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = var_enc;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_py_encode_basestring_ascii );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = var_enc;

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_encode_basestring_ascii, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_source_name_9 = var_scan;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_py_make_scanner );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = var_scan;

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_make_scanner, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    branch_end_1:;
    tmp_source_name_10 = var_scan;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 552;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_make_scanner );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = var_dec;

    if ( tmp_assattr_target_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 552;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_make_scanner, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 552;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecoder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecoder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 554;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_959a39584b85e1964750ccd746043bed );
    frame_function->f_lineno = 557;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 557;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_decoder, tmp_assign_source_5 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONEncoder );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONEncoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 560;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = PyDict_Copy( const_dict_37e83e69aa1ba56e46454396202513d2 );
    frame_function->f_lineno = 568;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 568;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_encoder, tmp_assign_source_6 );

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
            if ( par_enabled )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_enabled,
                    par_enabled
                );

                assert( res == 0 );
            }

            if ( var_dec )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dec,
                    var_dec
                );

                assert( res == 0 );
            }

            if ( var_enc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_enc,
                    var_enc
                );

                assert( res == 0 );
            }

            if ( var_scan )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scan,
                    var_scan
                );

                assert( res == 0 );
            }

            if ( var_c_make_encoder )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_make_encoder,
                    var_c_make_encoder
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
    NUITKA_CANNOT_GET_HERE( function_7__toggle_speedups_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_enabled );
    par_enabled = NULL;

    Py_XDECREF( var_dec );
    var_dec = NULL;

    Py_XDECREF( var_enc );
    var_enc = NULL;

    Py_XDECREF( var_scan );
    var_scan = NULL;

    Py_XDECREF( var_c_make_encoder );
    var_c_make_encoder = NULL;

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

    Py_XDECREF( par_enabled );
    par_enabled = NULL;

    Py_XDECREF( var_dec );
    var_dec = NULL;

    Py_XDECREF( var_enc );
    var_enc = NULL;

    Py_XDECREF( var_scan );
    var_scan = NULL;

    Py_XDECREF( var_c_make_encoder );
    var_c_make_encoder = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7__toggle_speedups_of_simplejson );
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


static PyObject *impl_function_8_simple_first_of_simplejson( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_kv = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_da212f967c5a94b2b31b602c70645352, module_simplejson );
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_subscribed_name_1 = par_kv;

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_list );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_dict );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_2 = par_kv;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kv" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
            if ( par_kv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kv,
                    par_kv
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
    NUITKA_CANNOT_GET_HERE( function_8_simple_first_of_simplejson );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_kv );
    par_kv = NULL;

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

    Py_XDECREF( par_kv );
    par_kv = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_simple_first_of_simplejson );
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



static PyObject *MAKE_FUNCTION_function_1__import_OrderedDict_of_simplejson(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1__import_OrderedDict_of_simplejson,
        const_str_plain__import_OrderedDict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1550a19a89afc5f13297f35819854f08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__import_c_make_encoder_of_simplejson(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2__import_c_make_encoder_of_simplejson,
        const_str_plain__import_c_make_encoder,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6ce3086fe54d6adedf01148fc6ea4083,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_dump_of_simplejson( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_dump_of_simplejson,
        const_str_plain_dump,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4c7649adb62522d39921860f0ecd5a09,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_42256fcacc1ac14f73f19092740ce8f7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_dumps_of_simplejson( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_dumps_of_simplejson,
        const_str_plain_dumps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_85001b88ce5c9c18a13eceedae7fd235,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_056dff25d5325386a052ec3e062023a0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_load_of_simplejson( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_load_of_simplejson,
        const_str_plain_load,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d60dbe24da9e301f8cf16c7a1f24606a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_b9349770d86089b862f8cef6382c2931
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_loads_of_simplejson( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6_loads_of_simplejson,
        const_str_plain_loads,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4891e6c38a17c49a5c1dae1fec9e26a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_48c897e0fc561f1b02560db1fa883cf7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__toggle_speedups_of_simplejson(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7__toggle_speedups_of_simplejson,
        const_str_plain__toggle_speedups,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c2a8a9ecf871ec160e95bc62506ce2c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_simple_first_of_simplejson(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_simple_first_of_simplejson,
        const_str_plain_simple_first,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_da212f967c5a94b2b31b602c70645352,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_simplejson,
        const_str_digest_6fd554b5d4a4ecd210f80190483f7b16
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_simplejson =
{
    PyModuleDef_HEAD_INIT,
    "simplejson",   /* m_name */
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

MOD_INIT_DECL( simplejson )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_simplejson );
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

    // puts( "in initsimplejson" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_simplejson = Py_InitModule4(
        "simplejson",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_simplejson = PyModule_Create( &mdef_simplejson );
#endif

    moduledict_simplejson = (PyDictObject *)((PyModuleObject *)module_simplejson)->md_dict;

    CHECK_OBJECT( module_simplejson );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_simplejson, module_simplejson );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_simplejson );

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
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_5f19295486f8c25cc6fdf18d2edc0f0a;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_11ef09aa53c219bd9ad5d5116682ed3e;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_3511a98d7dd469c6c3cd992ec005bdf1_list );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_simplejson;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_3d141c97fd8feb4dac3a776ad5e63133;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_f84a2984e85a27a6b972ac8cc2d191e4_list );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_29128799e6868180fe0bd02edfedaa2d;
    UPDATE_STRING_DICT0( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_9 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_e354709b61156e0db43e15fa2acb7aaa, module_simplejson );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 109;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_decimal, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_Decimal_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Decimal );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_Decimal, tmp_assign_source_10 );
    tmp_import_globals_2 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 111;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_scanner, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_JSONDecodeError_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_JSONDecodeError );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecodeError, tmp_assign_source_11 );
    tmp_import_globals_3 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 112;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_decoder, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_JSONDecoder_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_JSONDecoder );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecoder, tmp_assign_source_12 );
    tmp_import_globals_4 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 113;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_encoder, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_JSONEncoder );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder, tmp_assign_source_13 );
    tmp_import_globals_5 = ((PyModuleObject *)module_simplejson)->md_dict;
    frame_module->f_lineno = 113;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_encoder, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_JSONEncoder_str_plain_JSONEncoderForHTML_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_JSONEncoderForHTML );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoderForHTML, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_function_1__import_OrderedDict_of_simplejson(  );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__import_OrderedDict, tmp_assign_source_15 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__import_OrderedDict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__import_OrderedDict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_import_OrderedDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 121;
    tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_function_2__import_c_make_encoder_of_simplejson(  );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__import_c_make_encoder, tmp_assign_source_17 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONEncoder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONEncoder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONEncoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_1dbee11ab85c09603c4a3e72ea590cea );
    frame_module->f_lineno = 147;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_encoder, tmp_assign_source_18 );
    tmp_defaults_1 = const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple;
    tmp_assign_source_19 = MAKE_FUNCTION_function_3_dump_of_simplejson( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_dump, tmp_assign_source_19 );
    tmp_defaults_2 = const_tuple_a4762a9bb6b415647962bfe521f8eaab_tuple;
    tmp_assign_source_20 = MAKE_FUNCTION_function_4_dumps_of_simplejson( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_dumps, tmp_assign_source_20 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_JSONDecoder );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JSONDecoder );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JSONDecoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = PyDict_Copy( const_dict_959a39584b85e1964750ccd746043bed );
    frame_module->f_lineno = 401;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__default_decoder, tmp_assign_source_21 );

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
    tmp_defaults_3 = const_tuple_none_none_none_none_none_none_none_false_true_true_tuple;
    tmp_assign_source_22 = MAKE_FUNCTION_function_5_load_of_simplejson( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_load, tmp_assign_source_22 );
    tmp_defaults_4 = const_tuple_none_none_none_none_none_none_none_false_tuple;
    tmp_assign_source_23 = MAKE_FUNCTION_function_6_loads_of_simplejson( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_loads, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_function_7__toggle_speedups_of_simplejson(  );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain__toggle_speedups, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_8_simple_first_of_simplejson(  );
    UPDATE_STRING_DICT1( moduledict_simplejson, (Nuitka_StringObject *)const_str_plain_simple_first, tmp_assign_source_25 );

    return MOD_RETURN_VALUE( module_simplejson );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
