// Generated code for Python source for module 'pip.commands.install'
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

// The _module_pip$commands$install is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pip$commands$install;
PyDictObject *moduledict_pip$commands$install;

// The module constants used
extern PyObject *const_str_plain_PreviousBuildDirError;
extern PyObject *const_str_digest_637e094086206aa48f958ea784474ff5;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_3947609ab6f8fe84850f6ac0115f517d;
static PyObject *const_tuple_str_digest_135e666a68f715c28639db5600f07706_tuple;
extern PyObject *const_str_plain_isdir;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_move;
extern PyObject *const_str_plain_action;
extern PyObject *const_str_plain_isolated_mode;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_tuple_3ec2428f4a644bd18899e87b892dad33_tuple;
extern PyObject *const_str_plain_home;
extern PyObject *const_str_plain_CommandError;
extern PyObject *const_str_plain_sorted;
static PyObject *const_str_digest_571eccf4664cb01ecea1867fcbf66f8d;
extern PyObject *const_dict_empty;
static PyObject *const_dict_a279234e2f8d30d1ff9e730c1e9d7960;
static PyObject *const_tuple_str_digest_c2f8520385159b1df2ec4892d8ea77d8_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_0818d8693596db669a829c5829034c92;
static PyObject *const_str_digest_d31a91bed2dfb044e59b0515f17bdeb8;
static PyObject *const_dict_95aa9cf3226a0f4b2db16a30e28ab328;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_use_wheel;
extern PyObject *const_str_plain_as_egg;
extern PyObject *const_str_plain_format_control;
static PyObject *const_str_digest_7f2379161944df16b846f44ec2be505c;
extern PyObject *const_str_plain_prefix;
extern PyObject *const_str_plain_tempfile;
extern PyObject *const_str_digest_ceace3d1f97b667025f1cf3df650d730;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_no_use_wheel;
static PyObject *const_str_digest_6b23d8f64a4ba0749ef89078f2b649e8;
extern PyObject *const_str_plain_abspath;
static PyObject *const_str_digest_6abfe00898ef16ea042adfa90f188aa2;
extern PyObject *const_str_plain_items;
static PyObject *const_str_digest_135e666a68f715c28639db5600f07706;
extern PyObject *const_str_plain_add_option;
extern PyObject *const_str_plain_installed_version;
static PyObject *const_str_digest_fcb9b55a56f16e6c7f0f7f51e901327c;
extern PyObject *const_str_plain_os;
static PyObject *const_tuple_4ad0a860ee0bc10fad8bc046b10a5a0d_tuple;
static PyObject *const_str_digest_886b4251622bf24b457f0915c5a509e2;
static PyObject *const_tuple_0552d9f4bc86f1625250fa9d9325548c_tuple;
static PyObject *const_str_digest_4dbce035297735adbb10e1c38acf4aa3;
extern PyObject *const_str_plain___enter__;
static PyObject *const_tuple_str_digest_59a4231c382a652cf807ac2f9d516957_tuple;
extern PyObject *const_str_plain_allow_external;
extern PyObject *const_str_plain_constraints;
extern PyObject *const_str_digest_5c000c80cf7576905a2bde598f54d340;
static PyObject *const_dict_7e7fbc7670dd64abee463c1e205a9a8a;
extern PyObject *const_str_digest_edf28cad80d50ad84fac18b31a3f079c;
static PyObject *const_str_digest_b4c962529ce782619e9008a18e802fb9;
extern PyObject *const_str_plain_wheel_cache;
static PyObject *const_str_digest_59a4231c382a652cf807ac2f9d516957;
static PyObject *const_tuple_str_digest_18f02276f2e4f023cddecd03521aa178_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_05dd2e2cb8586daa5d8648c6854aecd4;
static PyObject *const_str_plain_target_item_dir;
extern PyObject *const_str_digest_78cf780b09dc1ccf59c7d685f7acdfb7;
static PyObject *const_tuple_d940e5ccc46ed15a88d831cd604a7783_tuple;
extern PyObject *const_str_plain_islink;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_9b713651f39d61c5adeb425fd6b1f2fd;
extern PyObject *const_str_plain_root;
extern PyObject *const_str_digest_6e575d6c6f99cdb34a4675d19bd3b73d;
extern PyObject *const_str_digest_c2f8520385159b1df2ec4892d8ea77d8;
extern PyObject *const_str_digest_d2cd8f4b4d5abe2821545108ddbe2fdf;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_wb;
static PyObject *const_dict_5aa3ab99059e917f8291f569734e22b2;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_store_false;
extern PyObject *const_str_plain_ignore_dependencies;
static PyObject *const_str_digest_f963dcc12572f4563d9b1dd633527d9d;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_only_binary;
extern PyObject *const_str_plain_target_dir;
extern PyObject *const_str_plain_build_options;
extern PyObject *const_str_digest_b3bd0cb72a9d271b3c1bcdde6005fc27;
extern PyObject *const_str_plain_use_user_site;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_dict_6a47a7e58cec4a8cd3cfc8ba4daecfae;
static PyObject *const_dict_46ff1743457fe72042c2690a5eec407e;
extern PyObject *const_str_plain_allow_unverified;
static PyObject *const_tuple_str_digest_f7b3789adde1f85f1378f30a3aacf48f_tuple;
extern PyObject *const_str_plain__build_package_finder;
static PyObject *const_str_digest_632ede6995a0bd4cdd6210bbc21e8c25;
extern PyObject *const_str_plain_build_delete;
extern PyObject *const_str_plain_allow_all_external;
static PyObject *const_str_plain_root_path;
extern PyObject *const_str_digest_ea9f6a94cd15091336877b2bef8d5279;
static PyObject *const_dict_1d978a5ebb48992e4a35370a5eff8f07;
static PyObject *const_str_digest_f96b836c3442c26262d958736cd2bcaa;
static PyObject *const_tuple_str_plain_virtualenv_no_global_str_plain_distutils_scheme_tuple;
extern PyObject *const_str_plain_src;
extern PyObject *const_tuple_str_plain_RequirementSet_tuple;
static PyObject *const_dict_2d3d63dd179c4dbba41717686fea0849;
extern PyObject *const_str_plain_path;
static PyObject *const_tuple_str_digest_ea9f6a94cd15091336877b2bef8d5279_tuple;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_pip;
extern PyObject *const_tuple_str_plain_ensure_dir_tuple;
extern PyObject *const_str_plain_isolated;
extern PyObject *const_str_plain_no_binary;
extern PyObject *const_str_digest_c465d3dc09c953b203483b132348d30a;
static PyObject *const_str_digest_99b3d7997fef639e2b840a3a70637ed2;
extern PyObject *const_str_plain_index_opts;
extern PyObject *const_str_digest_c0738af5e840c8be1c2e73773ab92b81;
static PyObject *const_str_digest_0351eba37eda487388c21f03b980fc12;
extern PyObject *const_str_plain_InstallationError;
static PyObject *const_str_plain_prefix_path;
extern PyObject *const_str_plain_resolve_wheel_no_use_binary;
extern PyObject *const_str_plain_BuildDirectory;
extern PyObject *const_str_plain_index_group;
extern PyObject *const_str_digest_a5dd75e6df71aa4856d52b5db87c61ba;
static PyObject *const_str_digest_d4d2fad040d35670ce7e728dca4e0f7e;
extern PyObject *const_str_plain_prepare_files;
extern PyObject *const_str_plain_listdir;
extern PyObject *const_str_plain_cmd_opts;
extern PyObject *const_str_plain_autobuilding;
extern PyObject *const_str_plain_reqs;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_ignore_installed;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_dir;
extern PyObject *const_tuple_str_digest_a5dd75e6df71aa4856d52b5db87c61ba_tuple;
extern PyObject *const_str_plain_wheel;
extern PyObject *const_str_plain___loader__;
static PyObject *const_tuple_e98bdafc22497b62a91216d8a484b4cf_tuple;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_session;
extern PyObject *const_str_digest_a9257a08f76d8d1251a0057ea9ff2f3a;
extern PyObject *const_str_plain_attrgetter;
extern PyObject *const_str_plain_lib_dir;
static PyObject *const_str_digest_18249baabb1909c5dc1a247e5b9c2e03;
static PyObject *const_dict_61a63e76d33118456e07ae96ceaee7f2;
static PyObject *const_tuple_str_digest_c465d3dc09c953b203483b132348d30a_tuple;
extern PyObject *const_str_plain_parser;
static PyObject *const_tuple_bb91e1b704d92dab8752f5382d555398_tuple;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_insert_option_group;
extern PyObject *const_str_plain_rmtree;
extern PyObject *const_str_plain_remove;
extern PyObject *const_str_plain_pre;
extern PyObject *const_str_plain_successfully_installed;
extern PyObject *const_str_plain_src_dir;
extern PyObject *const_str_plain_no_clean;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain_WheelCache;
extern PyObject *const_tuple_str_plain_cmdoptions_tuple;
extern PyObject *const_str_plain_populate_requirement_set;
static PyObject *const_tuple_str_digest_0fc315e29ee372193320ccfc2fcbae81_tuple;
extern PyObject *const_str_plain_ensure_dir;
extern PyObject *const_str_plain_has_requirements;
extern PyObject *const_str_digest_b96ce5eb1890e4c30e23fc327e9ea9f2;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_finder;
static PyObject *const_str_digest_f7b3789adde1f85f1378f30a3aacf48f;
extern PyObject *const_str_plain_exists;
extern PyObject *const_str_plain_requirements;
extern PyObject *const_str_digest_52caf01cd7a3dcea98b7ec82b4c9ab5e;
extern PyObject *const_str_plain_purelib;
extern PyObject *const_str_plain_downloaded;
static PyObject *const_str_digest_91b25d2c848606c1f0662d7380289f36;
extern PyObject *const_str_plain_upgrade;
extern PyObject *const_str_plain_check_path_owner;
extern PyObject *const_str_plain_installed;
extern PyObject *const_str_plain_install_options;
extern PyObject *const_str_digest_8a157ee225289d3ca975ac1348a8c847;
extern PyObject *const_str_plain_dest;
extern PyObject *const_str_plain_warning;
extern PyObject *const_str_plain_cache_dir;
extern PyObject *const_str_plain__build_session;
extern PyObject *const_str_plain_RequirementCommand;
extern PyObject *const_str_plain_shutil;
extern PyObject *const_str_digest_5ec1282353051301ac716f71f067cae9;
static PyObject *const_tuple_str_digest_6e575d6c6f99cdb34a4675d19bd3b73d_tuple;
extern PyObject *const_str_plain_metavar;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_digest_8d6802b3b87f410fcc1456f7e0b80bc5_tuple;
static PyObject *const_str_digest_3a6be5fbce52fb991daa17572a12f443;
static PyObject *const_str_digest_7c994cf6035f98022a5edd9f881f7eec;
extern PyObject *const_str_plain_global_options;
extern PyObject *const_str_plain_req;
extern PyObject *const_str_plain_RequirementSet;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_no_deps;
extern PyObject *const_str_plain_make_option_group;
extern PyObject *const_str_plain_store_true;
static PyObject *const_str_digest_5843bfc1d5ef4e036530fc3741be5d54;
extern PyObject *const_str_plain_install;
extern PyObject *const_str_digest_39d9d95763d4a31151bd623e3cb14ec1;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_18f02276f2e4f023cddecd03521aa178;
extern PyObject *const_str_plain_kw;
static PyObject *const_str_digest_59859f73ac9e852f31ad1e0e17633e44;
extern PyObject *const_str_plain_check_install_build_global;
extern PyObject *const_str_plain_WheelBuilder;
extern PyObject *const_str_plain_RemovedInPip10Warning;
static PyObject *const_str_digest_0a52e5ef04c0a6420e21985eed2f2d41;
static PyObject *const_str_digest_18735540509c92c2510663c7da6c6606;
extern PyObject *const_str_plain_virtualenv_no_global;
extern PyObject *const_str_plain_build_dir;
extern PyObject *const_str_plain_editable;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_distutils_scheme;
extern PyObject *const_tuple_str_plain_BuildDirectory_tuple;
extern PyObject *const_str_plain_download_dir;
static PyObject *const_tuple_296b4a0af5161e4220b486f670e61253_tuple;
static PyObject *const_tuple_str_digest_91b25d2c848606c1f0662d7380289f36_tuple;
static PyObject *const_str_digest_b0cda810db769d309abd6adae73ca53d;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_digest_b345f7ac08de941e36d960ec9fd0356a;
extern PyObject *const_str_plain_mkdtemp;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_digest_32275709d296345a6ef0130003c86b26;
extern PyObject *const_str_plain_cleanup_files;
extern PyObject *const_tuple_str_plain_name_tuple;
static PyObject *const_str_digest_605798629272de8a3d06310f5be5f7a9;
static PyObject *const_str_digest_b3c888e0c557fb25ae69929900b8d74c;
extern PyObject *const_tuple_str_plain_check_path_owner_tuple;
extern PyObject *const_str_plain_InstallCommand;
static PyObject *const_str_plain_temp_target_dir;
extern PyObject *const_tuple_str_plain_RemovedInPip10Warning_tuple;
static PyObject *const_dict_181da08e23a24bf863ba2bf9cd9ac719;
extern PyObject *const_str_plain_operator;
extern PyObject *const_tuple_str_plain_WheelCache_str_plain_WheelBuilder_tuple;
extern PyObject *const_str_plain_successfully_downloaded;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_build;
extern PyObject *const_str_plain_cmdoptions;
extern PyObject *const_str_plain_force_reinstall;
extern PyObject *const_str_plain_delete;
static PyObject *const_str_digest_e6c4052c4e85481a55da1f87da3750bf;
static PyObject *const_str_digest_b4d3d82bbfc242b1215f1cf8e16a5250;
extern PyObject *const_str_digest_8d6802b3b87f410fcc1456f7e0b80bc5;
extern PyObject *const_str_plain_requirement_set;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_info;
static PyObject *const_str_digest_0fc315e29ee372193320ccfc2fcbae81;
extern PyObject *const_str_plain_usage;
static PyObject *const_dict_a5461b8c4c28d5188c61394a04351bc0;
static PyObject *const_dict_3d996c0c52a914b397674d56fff3b4af;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_str_plain_RequirementCommand_tuple;
extern PyObject *const_str_plain_help;
extern PyObject *const_str_plain_require_hashes;
extern PyObject *const_str_plain_pycompile;
static PyObject *const_dict_30b670c75ced549f08680590df2cde82;
extern PyObject *const_str_plain_summary;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_3947609ab6f8fe84850f6ac0115f517d = UNSTREAM_STRING( &constant_bin[ 520732 ], 56, 0 );
    const_tuple_str_digest_135e666a68f715c28639db5600f07706_tuple = PyTuple_New( 1 );
    const_str_digest_135e666a68f715c28639db5600f07706 = UNSTREAM_STRING( &constant_bin[ 520788 ], 5, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_135e666a68f715c28639db5600f07706_tuple, 0, const_str_digest_135e666a68f715c28639db5600f07706 ); Py_INCREF( const_str_digest_135e666a68f715c28639db5600f07706 );
    const_str_digest_571eccf4664cb01ecea1867fcbf66f8d = UNSTREAM_STRING( &constant_bin[ 520793 ], 2, 0 );
    const_dict_a279234e2f8d30d1ff9e730c1e9d7960 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_a279234e2f8d30d1ff9e730c1e9d7960, const_str_plain_default, Py_None );
    const_str_digest_b3c888e0c557fb25ae69929900b8d74c = UNSTREAM_STRING( &constant_bin[ 520795 ], 61, 0 );
    PyDict_SetItem( const_dict_a279234e2f8d30d1ff9e730c1e9d7960, const_str_plain_help, const_str_digest_b3c888e0c557fb25ae69929900b8d74c );
    const_str_plain_root_path = UNSTREAM_STRING( &constant_bin[ 520856 ], 9, 1 );
    PyDict_SetItem( const_dict_a279234e2f8d30d1ff9e730c1e9d7960, const_str_plain_dest, const_str_plain_root_path );
    PyDict_SetItem( const_dict_a279234e2f8d30d1ff9e730c1e9d7960, const_str_plain_metavar, const_str_plain_dir );
    assert( PyDict_Size( const_dict_a279234e2f8d30d1ff9e730c1e9d7960 ) == 4 );
    const_tuple_str_digest_c2f8520385159b1df2ec4892d8ea77d8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c2f8520385159b1df2ec4892d8ea77d8_tuple, 0, const_str_digest_c2f8520385159b1df2ec4892d8ea77d8 ); Py_INCREF( const_str_digest_c2f8520385159b1df2ec4892d8ea77d8 );
    const_str_digest_d31a91bed2dfb044e59b0515f17bdeb8 = UNSTREAM_STRING( &constant_bin[ 520865 ], 329, 0 );
    const_dict_95aa9cf3226a0f4b2db16a30e28ab328 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_95aa9cf3226a0f4b2db16a30e28ab328, const_str_plain_action, const_str_plain_store_false );
    PyDict_SetItem( const_dict_95aa9cf3226a0f4b2db16a30e28ab328, const_str_plain_dest, const_str_plain_compile );
    const_str_digest_f96b836c3442c26262d958736cd2bcaa = UNSTREAM_STRING( &constant_bin[ 521194 ], 30, 0 );
    PyDict_SetItem( const_dict_95aa9cf3226a0f4b2db16a30e28ab328, const_str_plain_help, const_str_digest_f96b836c3442c26262d958736cd2bcaa );
    assert( PyDict_Size( const_dict_95aa9cf3226a0f4b2db16a30e28ab328 ) == 3 );
    const_str_digest_7f2379161944df16b846f44ec2be505c = UNSTREAM_STRING( &constant_bin[ 521224 ], 14, 0 );
    const_str_digest_6b23d8f64a4ba0749ef89078f2b649e8 = UNSTREAM_STRING( &constant_bin[ 521238 ], 7, 0 );
    const_str_digest_6abfe00898ef16ea042adfa90f188aa2 = UNSTREAM_STRING( &constant_bin[ 521245 ], 137, 0 );
    const_str_digest_fcb9b55a56f16e6c7f0f7f51e901327c = UNSTREAM_STRING( &constant_bin[ 521382 ], 20, 0 );
    const_tuple_4ad0a860ee0bc10fad8bc046b10a5a0d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4ad0a860ee0bc10fad8bc046b10a5a0d_tuple, 0, const_str_digest_b345f7ac08de941e36d960ec9fd0356a ); Py_INCREF( const_str_digest_b345f7ac08de941e36d960ec9fd0356a );
    const_str_digest_9b713651f39d61c5adeb425fd6b1f2fd = UNSTREAM_STRING( &constant_bin[ 521224 ], 10, 0 );
    PyTuple_SET_ITEM( const_tuple_4ad0a860ee0bc10fad8bc046b10a5a0d_tuple, 1, const_str_digest_9b713651f39d61c5adeb425fd6b1f2fd ); Py_INCREF( const_str_digest_9b713651f39d61c5adeb425fd6b1f2fd );
    PyTuple_SET_ITEM( const_tuple_4ad0a860ee0bc10fad8bc046b10a5a0d_tuple, 2, const_str_digest_7f2379161944df16b846f44ec2be505c ); Py_INCREF( const_str_digest_7f2379161944df16b846f44ec2be505c );
    PyTuple_SET_ITEM( const_tuple_4ad0a860ee0bc10fad8bc046b10a5a0d_tuple, 3, const_str_digest_fcb9b55a56f16e6c7f0f7f51e901327c ); Py_INCREF( const_str_digest_fcb9b55a56f16e6c7f0f7f51e901327c );
    const_str_digest_886b4251622bf24b457f0915c5a509e2 = UNSTREAM_STRING( &constant_bin[ 521402 ], 226, 0 );
    const_tuple_0552d9f4bc86f1625250fa9d9325548c_tuple = PyTuple_New( 2 );
    const_str_digest_59859f73ac9e852f31ad1e0e17633e44 = UNSTREAM_STRING( &constant_bin[ 60410 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_0552d9f4bc86f1625250fa9d9325548c_tuple, 0, const_str_digest_59859f73ac9e852f31ad1e0e17633e44 ); Py_INCREF( const_str_digest_59859f73ac9e852f31ad1e0e17633e44 );
    const_str_digest_0351eba37eda487388c21f03b980fc12 = UNSTREAM_STRING( &constant_bin[ 521628 ], 8, 0 );
    PyTuple_SET_ITEM( const_tuple_0552d9f4bc86f1625250fa9d9325548c_tuple, 1, const_str_digest_0351eba37eda487388c21f03b980fc12 ); Py_INCREF( const_str_digest_0351eba37eda487388c21f03b980fc12 );
    const_str_digest_4dbce035297735adbb10e1c38acf4aa3 = UNSTREAM_STRING( &constant_bin[ 521636 ], 96, 0 );
    const_tuple_str_digest_59a4231c382a652cf807ac2f9d516957_tuple = PyTuple_New( 1 );
    const_str_digest_59a4231c382a652cf807ac2f9d516957 = UNSTREAM_STRING( &constant_bin[ 521732 ], 86, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_59a4231c382a652cf807ac2f9d516957_tuple, 0, const_str_digest_59a4231c382a652cf807ac2f9d516957 ); Py_INCREF( const_str_digest_59a4231c382a652cf807ac2f9d516957 );
    const_dict_7e7fbc7670dd64abee463c1e205a9a8a = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_7e7fbc7670dd64abee463c1e205a9a8a, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_7e7fbc7670dd64abee463c1e205a9a8a, const_str_plain_dest, const_str_plain_as_egg );
    PyDict_SetItem( const_dict_7e7fbc7670dd64abee463c1e205a9a8a, const_str_plain_help, const_str_digest_886b4251622bf24b457f0915c5a509e2 );
    assert( PyDict_Size( const_dict_7e7fbc7670dd64abee463c1e205a9a8a ) == 3 );
    const_str_digest_b4c962529ce782619e9008a18e802fb9 = UNSTREAM_STRING( &constant_bin[ 521818 ], 23, 0 );
    const_tuple_str_digest_18f02276f2e4f023cddecd03521aa178_tuple = PyTuple_New( 1 );
    const_str_digest_18f02276f2e4f023cddecd03521aa178 = UNSTREAM_STRING( &constant_bin[ 521841 ], 90, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_18f02276f2e4f023cddecd03521aa178_tuple, 0, const_str_digest_18f02276f2e4f023cddecd03521aa178 ); Py_INCREF( const_str_digest_18f02276f2e4f023cddecd03521aa178 );
    const_str_digest_05dd2e2cb8586daa5d8648c6854aecd4 = UNSTREAM_STRING( &constant_bin[ 521931 ], 53, 0 );
    const_str_plain_target_item_dir = UNSTREAM_STRING( &constant_bin[ 521984 ], 15, 1 );
    const_tuple_d940e5ccc46ed15a88d831cd604a7783_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_d940e5ccc46ed15a88d831cd604a7783_tuple, 0, const_str_plain_InstallationError ); Py_INCREF( const_str_plain_InstallationError );
    PyTuple_SET_ITEM( const_tuple_d940e5ccc46ed15a88d831cd604a7783_tuple, 1, const_str_plain_CommandError ); Py_INCREF( const_str_plain_CommandError );
    PyTuple_SET_ITEM( const_tuple_d940e5ccc46ed15a88d831cd604a7783_tuple, 2, const_str_plain_PreviousBuildDirError ); Py_INCREF( const_str_plain_PreviousBuildDirError );
    const_dict_5aa3ab99059e917f8291f569734e22b2 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_5aa3ab99059e917f8291f569734e22b2, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_5aa3ab99059e917f8291f569734e22b2, const_str_plain_dest, const_str_plain_upgrade );
    const_str_digest_f963dcc12572f4563d9b1dd633527d9d = UNSTREAM_STRING( &constant_bin[ 521999 ], 146, 0 );
    PyDict_SetItem( const_dict_5aa3ab99059e917f8291f569734e22b2, const_str_plain_help, const_str_digest_f963dcc12572f4563d9b1dd633527d9d );
    assert( PyDict_Size( const_dict_5aa3ab99059e917f8291f569734e22b2 ) == 3 );
    const_dict_6a47a7e58cec4a8cd3cfc8ba4daecfae = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_6a47a7e58cec4a8cd3cfc8ba4daecfae, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_6a47a7e58cec4a8cd3cfc8ba4daecfae, const_str_plain_dest, const_str_plain_force_reinstall );
    const_str_digest_7c994cf6035f98022a5edd9f881f7eec = UNSTREAM_STRING( &constant_bin[ 522145 ], 75, 0 );
    PyDict_SetItem( const_dict_6a47a7e58cec4a8cd3cfc8ba4daecfae, const_str_plain_help, const_str_digest_7c994cf6035f98022a5edd9f881f7eec );
    assert( PyDict_Size( const_dict_6a47a7e58cec4a8cd3cfc8ba4daecfae ) == 3 );
    const_dict_46ff1743457fe72042c2690a5eec407e = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_46ff1743457fe72042c2690a5eec407e, const_str_plain_default, Py_None );
    const_str_digest_b0cda810db769d309abd6adae73ca53d = UNSTREAM_STRING( &constant_bin[ 522220 ], 73, 0 );
    PyDict_SetItem( const_dict_46ff1743457fe72042c2690a5eec407e, const_str_plain_help, const_str_digest_b0cda810db769d309abd6adae73ca53d );
    const_str_plain_prefix_path = UNSTREAM_STRING( &constant_bin[ 522293 ], 11, 1 );
    PyDict_SetItem( const_dict_46ff1743457fe72042c2690a5eec407e, const_str_plain_dest, const_str_plain_prefix_path );
    PyDict_SetItem( const_dict_46ff1743457fe72042c2690a5eec407e, const_str_plain_metavar, const_str_plain_dir );
    assert( PyDict_Size( const_dict_46ff1743457fe72042c2690a5eec407e ) == 4 );
    const_tuple_str_digest_f7b3789adde1f85f1378f30a3aacf48f_tuple = PyTuple_New( 1 );
    const_str_digest_f7b3789adde1f85f1378f30a3aacf48f = UNSTREAM_STRING( &constant_bin[ 522304 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f7b3789adde1f85f1378f30a3aacf48f_tuple, 0, const_str_digest_f7b3789adde1f85f1378f30a3aacf48f ); Py_INCREF( const_str_digest_f7b3789adde1f85f1378f30a3aacf48f );
    const_str_digest_632ede6995a0bd4cdd6210bbc21e8c25 = UNSTREAM_STRING( &constant_bin[ 522313 ], 23, 0 );
    const_dict_1d978a5ebb48992e4a35370a5eff8f07 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_1d978a5ebb48992e4a35370a5eff8f07, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_1d978a5ebb48992e4a35370a5eff8f07, const_str_plain_dest, const_str_plain_ignore_installed );
    PyDict_SetItem( const_dict_1d978a5ebb48992e4a35370a5eff8f07, const_str_plain_help, const_str_digest_05dd2e2cb8586daa5d8648c6854aecd4 );
    assert( PyDict_Size( const_dict_1d978a5ebb48992e4a35370a5eff8f07 ) == 3 );
    const_tuple_str_plain_virtualenv_no_global_str_plain_distutils_scheme_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_virtualenv_no_global_str_plain_distutils_scheme_tuple, 0, const_str_plain_virtualenv_no_global ); Py_INCREF( const_str_plain_virtualenv_no_global );
    PyTuple_SET_ITEM( const_tuple_str_plain_virtualenv_no_global_str_plain_distutils_scheme_tuple, 1, const_str_plain_distutils_scheme ); Py_INCREF( const_str_plain_distutils_scheme );
    const_dict_2d3d63dd179c4dbba41717686fea0849 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_2d3d63dd179c4dbba41717686fea0849, const_str_plain_autobuilding, Py_True );
    assert( PyDict_Size( const_dict_2d3d63dd179c4dbba41717686fea0849 ) == 1 );
    const_tuple_str_digest_ea9f6a94cd15091336877b2bef8d5279_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ea9f6a94cd15091336877b2bef8d5279_tuple, 0, const_str_digest_ea9f6a94cd15091336877b2bef8d5279 ); Py_INCREF( const_str_digest_ea9f6a94cd15091336877b2bef8d5279 );
    const_str_digest_99b3d7997fef639e2b840a3a70637ed2 = UNSTREAM_STRING( &constant_bin[ 260601 ], 2, 0 );
    const_str_digest_d4d2fad040d35670ce7e728dca4e0f7e = UNSTREAM_STRING( &constant_bin[ 522336 ], 25, 0 );
    const_tuple_e98bdafc22497b62a91216d8a484b4cf_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 522361 ], 222 );
    const_str_digest_18249baabb1909c5dc1a247e5b9c2e03 = UNSTREAM_STRING( &constant_bin[ 522583 ], 132, 0 );
    const_dict_61a63e76d33118456e07ae96ceaee7f2 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_61a63e76d33118456e07ae96ceaee7f2, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_61a63e76d33118456e07ae96ceaee7f2, const_str_plain_default, Py_True );
    PyDict_SetItem( const_dict_61a63e76d33118456e07ae96ceaee7f2, const_str_plain_dest, const_str_plain_compile );
    PyDict_SetItem( const_dict_61a63e76d33118456e07ae96ceaee7f2, const_str_plain_help, const_str_digest_b4c962529ce782619e9008a18e802fb9 );
    assert( PyDict_Size( const_dict_61a63e76d33118456e07ae96ceaee7f2 ) == 4 );
    const_tuple_str_digest_c465d3dc09c953b203483b132348d30a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c465d3dc09c953b203483b132348d30a_tuple, 0, const_str_digest_c465d3dc09c953b203483b132348d30a ); Py_INCREF( const_str_digest_c465d3dc09c953b203483b132348d30a );
    const_tuple_bb91e1b704d92dab8752f5382d555398_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_bb91e1b704d92dab8752f5382d555398_tuple, 0, const_str_digest_571eccf4664cb01ecea1867fcbf66f8d ); Py_INCREF( const_str_digest_571eccf4664cb01ecea1867fcbf66f8d );
    const_str_digest_605798629272de8a3d06310f5be5f7a9 = UNSTREAM_STRING( &constant_bin[ 522715 ], 18, 0 );
    PyTuple_SET_ITEM( const_tuple_bb91e1b704d92dab8752f5382d555398_tuple, 1, const_str_digest_605798629272de8a3d06310f5be5f7a9 ); Py_INCREF( const_str_digest_605798629272de8a3d06310f5be5f7a9 );
    const_tuple_str_digest_0fc315e29ee372193320ccfc2fcbae81_tuple = PyTuple_New( 1 );
    const_str_digest_0fc315e29ee372193320ccfc2fcbae81 = UNSTREAM_STRING( &constant_bin[ 522733 ], 61, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0fc315e29ee372193320ccfc2fcbae81_tuple, 0, const_str_digest_0fc315e29ee372193320ccfc2fcbae81 ); Py_INCREF( const_str_digest_0fc315e29ee372193320ccfc2fcbae81 );
    const_str_digest_91b25d2c848606c1f0662d7380289f36 = UNSTREAM_STRING( &constant_bin[ 522794 ], 17, 0 );
    const_tuple_str_digest_6e575d6c6f99cdb34a4675d19bd3b73d_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6e575d6c6f99cdb34a4675d19bd3b73d_tuple, 0, const_str_digest_6e575d6c6f99cdb34a4675d19bd3b73d ); Py_INCREF( const_str_digest_6e575d6c6f99cdb34a4675d19bd3b73d );
    const_tuple_str_digest_8d6802b3b87f410fcc1456f7e0b80bc5_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8d6802b3b87f410fcc1456f7e0b80bc5_tuple, 0, const_str_digest_8d6802b3b87f410fcc1456f7e0b80bc5 ); Py_INCREF( const_str_digest_8d6802b3b87f410fcc1456f7e0b80bc5 );
    const_str_digest_3a6be5fbce52fb991daa17572a12f443 = UNSTREAM_STRING( &constant_bin[ 522811 ], 75, 0 );
    const_str_digest_5843bfc1d5ef4e036530fc3741be5d54 = UNSTREAM_STRING( &constant_bin[ 522886 ], 18, 0 );
    const_str_digest_0a52e5ef04c0a6420e21985eed2f2d41 = UNSTREAM_STRING( &constant_bin[ 522904 ], 184, 0 );
    const_str_digest_18735540509c92c2510663c7da6c6606 = UNSTREAM_STRING( &constant_bin[ 523088 ], 17, 0 );
    const_tuple_296b4a0af5161e4220b486f670e61253_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_296b4a0af5161e4220b486f670e61253_tuple, 0, const_str_digest_99b3d7997fef639e2b840a3a70637ed2 ); Py_INCREF( const_str_digest_99b3d7997fef639e2b840a3a70637ed2 );
    const_str_digest_e6c4052c4e85481a55da1f87da3750bf = UNSTREAM_STRING( &constant_bin[ 522855 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_296b4a0af5161e4220b486f670e61253_tuple, 1, const_str_digest_e6c4052c4e85481a55da1f87da3750bf ); Py_INCREF( const_str_digest_e6c4052c4e85481a55da1f87da3750bf );
    const_tuple_str_digest_91b25d2c848606c1f0662d7380289f36_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_91b25d2c848606c1f0662d7380289f36_tuple, 0, const_str_digest_91b25d2c848606c1f0662d7380289f36 ); Py_INCREF( const_str_digest_91b25d2c848606c1f0662d7380289f36 );
    const_str_plain_temp_target_dir = UNSTREAM_STRING( &constant_bin[ 522403 ], 15, 1 );
    const_dict_181da08e23a24bf863ba2bf9cd9ac719 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_181da08e23a24bf863ba2bf9cd9ac719, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_181da08e23a24bf863ba2bf9cd9ac719, const_str_plain_dest, const_str_plain_use_user_site );
    PyDict_SetItem( const_dict_181da08e23a24bf863ba2bf9cd9ac719, const_str_plain_help, const_str_digest_0a52e5ef04c0a6420e21985eed2f2d41 );
    assert( PyDict_Size( const_dict_181da08e23a24bf863ba2bf9cd9ac719 ) == 3 );
    const_str_digest_b4d3d82bbfc242b1215f1cf8e16a5250 = UNSTREAM_STRING( &constant_bin[ 523105 ], 165, 0 );
    const_dict_a5461b8c4c28d5188c61394a04351bc0 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_a5461b8c4c28d5188c61394a04351bc0, const_str_plain_default, Py_None );
    PyDict_SetItem( const_dict_a5461b8c4c28d5188c61394a04351bc0, const_str_plain_help, const_str_digest_4dbce035297735adbb10e1c38acf4aa3 );
    PyDict_SetItem( const_dict_a5461b8c4c28d5188c61394a04351bc0, const_str_plain_dest, const_str_plain_download_dir );
    PyDict_SetItem( const_dict_a5461b8c4c28d5188c61394a04351bc0, const_str_plain_metavar, const_str_plain_dir );
    assert( PyDict_Size( const_dict_a5461b8c4c28d5188c61394a04351bc0 ) == 4 );
    const_dict_3d996c0c52a914b397674d56fff3b4af = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_3d996c0c52a914b397674d56fff3b4af, const_str_plain_build_options, const_list_empty );
    PyDict_SetItem( const_dict_3d996c0c52a914b397674d56fff3b4af, const_str_plain_global_options, const_list_empty );
    assert( PyDict_Size( const_dict_3d996c0c52a914b397674d56fff3b4af ) == 2 );
    const_dict_30b670c75ced549f08680590df2cde82 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_30b670c75ced549f08680590df2cde82, const_str_plain_default, Py_None );
    PyDict_SetItem( const_dict_30b670c75ced549f08680590df2cde82, const_str_plain_help, const_str_digest_b4d3d82bbfc242b1215f1cf8e16a5250 );
    PyDict_SetItem( const_dict_30b670c75ced549f08680590df2cde82, const_str_plain_dest, const_str_plain_target_dir );
    PyDict_SetItem( const_dict_30b670c75ced549f08680590df2cde82, const_str_plain_metavar, const_str_plain_dir );
    assert( PyDict_Size( const_dict_30b670c75ced549f08680590df2cde82 ) == 4 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pip$commands$install( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ce200d93b1cc0cf14c94bc5e0e0d4b9c;
static PyCodeObject *codeobj_821ea81a88b9b707ff9a63493b1c7ec1;
static PyCodeObject *codeobj_63ae969c1398aad51a1280212cefc09f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3947609ab6f8fe84850f6ac0115f517d;
    codeobj_ce200d93b1cc0cf14c94bc5e0e0d4b9c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 54, const_tuple_3ec2428f4a644bd18899e87b892dad33_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_821ea81a88b9b707ff9a63493b1c7ec1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_install, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_63ae969c1398aad51a1280212cefc09f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 178, const_tuple_e98bdafc22497b62a91216d8a484b4cf_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_InstallCommand_of_pip$commands$install( PyObject **python_pars, PyObject *&closure_pip$commands$install_class_creation_1__bases, PyObject *&closure_pip$commands$install_class_creation_1__class_decl_dict, PyObject *&closure_pip$commands$install_class_creation_1__metaclass, PyObject *&closure_pip$commands$install_class_creation_1__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_function_1_listcontraction_of_function_2_run_of_class_1_InstallCommand_of_pip$commands$install( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl_function_1_complex_call_helper_star_list_star_dict_of___internal__( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_InstallCommand_of_pip$commands$install(  );


static PyObject *MAKE_FUNCTION_function_2_run_of_class_1_InstallCommand_of_pip$commands$install(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_InstallCommand_of_pip$commands$install( PyObject **python_pars, PyObject *&closure_pip$commands$install_class_creation_1__bases, PyObject *&closure_pip$commands$install_class_creation_1__class_decl_dict, PyObject *&closure_pip$commands$install_class_creation_1__metaclass, PyObject *&closure_pip$commands$install_class_creation_1__prepared )
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
    PyObject *var_name = NULL;
    PyObject *var_usage = NULL;
    PyObject *var_summary = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_run = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = closure_pip$commands$install_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_c2f8520385159b1df2ec4892d8ea77d8;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d31a91bed2dfb044e59b0515f17bdeb8;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_InstallCommand;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = const_str_plain_install;
    assert( var_name == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_name = tmp_assign_source_4;

    tmp_assign_source_5 = const_str_digest_8a157ee225289d3ca975ac1348a8c847;
    assert( var_usage == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_usage = tmp_assign_source_5;

    tmp_assign_source_6 = const_str_digest_18735540509c92c2510663c7da6c6606;
    assert( var_summary == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_summary = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_1___init___of_class_1_InstallCommand_of_pip$commands$install(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_2_run_of_class_1_InstallCommand_of_pip$commands$install(  );
    assert( var_run == NULL );
    var_run = tmp_assign_source_8;

    // Tried code:
    tmp_called_name_1 = closure_pip$commands$install_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_InstallCommand;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = closure_pip$commands$install_class_creation_1__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_name, var_name );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_usage, var_usage );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_summary, var_summary );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___init__, var___init__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_run, var_run );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = closure_pip$commands$install_class_creation_1__class_decl_dict;

    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_9;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_InstallCommand_of_pip$commands$install );
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

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_usage );
    var_usage = NULL;

    Py_XDECREF( var_summary );
    var_summary = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_run );
    var_run = NULL;

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

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_usage );
    var_usage = NULL;

    Py_XDECREF( var_summary );
    var_summary = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_run );
    var_run = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_InstallCommand_of_pip$commands$install );
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


static PyObject *impl_function_1___init___of_class_1_InstallCommand_of_pip$commands$install( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kw = python_pars[ 2 ];
    PyObject *var_cmd_opts = NULL;
    PyObject *var_index_opts = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
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
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_object_name_1;
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
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ce200d93b1cc0cf14c94bc5e0e0d4b9c, module_pip$commands$install );
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
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_InstallCommand );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InstallCommand );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InstallCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kw;

    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl_function_1_complex_call_helper_star_list_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cmd_opts );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( var_cmd_opts == NULL );
    var_cmd_opts = tmp_assign_source_1;

    tmp_source_name_3 = var_cmd_opts;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add_option );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_constraints );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 59;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = var_cmd_opts;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add_option );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_editable );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 60;
    tmp_args_element_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 60;
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


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = var_cmd_opts;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_add_option );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_requirements );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 61;
    tmp_args_element_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = var_cmd_opts;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_add_option );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_build_dir );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 62;
    tmp_args_element_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_cmd_opts;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_add_option );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_0552d9f4bc86f1625250fa9d9325548c_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_30b670c75ced549f08680590df2cde82 );
    frame_function->f_lineno = 69;
    tmp_unused = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = var_cmd_opts;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_add_option );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = const_tuple_4ad0a860ee0bc10fad8bc046b10a5a0d_tuple;
    tmp_kw_name_2 = PyDict_Copy( const_dict_a5461b8c4c28d5188c61394a04351bc0 );
    frame_function->f_lineno = 80;
    tmp_unused = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = var_cmd_opts;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_add_option );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_src );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 84;
    tmp_args_element_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_12 );
    Py_DECREF( tmp_called_name_12 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = var_cmd_opts;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_add_option );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = const_tuple_296b4a0af5161e4220b486f670e61253_tuple;
    tmp_kw_name_3 = PyDict_Copy( const_dict_5aa3ab99059e917f8291f569734e22b2 );
    frame_function->f_lineno = 90;
    tmp_unused = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_16 = var_cmd_opts;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_add_option );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_args_name_4 = const_tuple_str_digest_91b25d2c848606c1f0662d7380289f36_tuple;
    tmp_kw_name_4 = PyDict_Copy( const_dict_6a47a7e58cec4a8cd3cfc8ba4daecfae );
    frame_function->f_lineno = 99;
    tmp_unused = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_17 = var_cmd_opts;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_add_option );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_args_name_5 = const_tuple_bb91e1b704d92dab8752f5382d555398_tuple;
    tmp_kw_name_5 = PyDict_Copy( const_dict_1d978a5ebb48992e4a35370a5eff8f07 );
    frame_function->f_lineno = 106;
    tmp_unused = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_18 = var_cmd_opts;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_add_option );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_no_deps );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 108;
    tmp_args_element_name_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_17 );
    Py_DECREF( tmp_called_name_17 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = var_cmd_opts;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_add_option );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_install_options );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 110;
    tmp_args_element_name_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_19 );
    Py_DECREF( tmp_called_name_19 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_22 = var_cmd_opts;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_add_option );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_global_options );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 111;
    tmp_args_element_name_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_21 );
    Py_DECREF( tmp_called_name_21 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_24 = var_cmd_opts;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_add_option );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_args_name_6 = const_tuple_str_digest_a5dd75e6df71aa4856d52b5db87c61ba_tuple;
    tmp_kw_name_6 = PyDict_Copy( const_dict_181da08e23a24bf863ba2bf9cd9ac719 );
    frame_function->f_lineno = 117;
    tmp_unused = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_25 = var_cmd_opts;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_add_option );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    tmp_args_name_7 = const_tuple_str_digest_135e666a68f715c28639db5600f07706_tuple;
    tmp_kw_name_7 = PyDict_Copy( const_dict_7e7fbc7670dd64abee463c1e205a9a8a );
    frame_function->f_lineno = 126;
    tmp_unused = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_kw_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_26 = var_cmd_opts;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_add_option );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_args_name_8 = const_tuple_str_digest_ea9f6a94cd15091336877b2bef8d5279_tuple;
    tmp_kw_name_8 = PyDict_Copy( const_dict_a279234e2f8d30d1ff9e730c1e9d7960 );
    frame_function->f_lineno = 136;
    tmp_unused = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_kw_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_27 = var_cmd_opts;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_add_option );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_args_name_9 = const_tuple_str_digest_8d6802b3b87f410fcc1456f7e0b80bc5_tuple;
    tmp_kw_name_9 = PyDict_Copy( const_dict_46ff1743457fe72042c2690a5eec407e );
    frame_function->f_lineno = 144;
    tmp_unused = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_25 );
    Py_DECREF( tmp_kw_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_28 = var_cmd_opts;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_add_option );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_args_name_10 = const_tuple_str_digest_c465d3dc09c953b203483b132348d30a_tuple;
    tmp_kw_name_10 = PyDict_Copy( const_dict_61a63e76d33118456e07ae96ceaee7f2 );
    frame_function->f_lineno = 152;
    tmp_unused = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_kw_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_29 = var_cmd_opts;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_add_option );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_args_name_11 = const_tuple_str_digest_6e575d6c6f99cdb34a4675d19bd3b73d_tuple;
    tmp_kw_name_11 = PyDict_Copy( const_dict_95aa9cf3226a0f4b2db16a30e28ab328 );
    frame_function->f_lineno = 159;
    tmp_unused = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_kw_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_30 = var_cmd_opts;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_add_option );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_use_wheel );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 162;
    tmp_args_element_name_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_29 );
    Py_DECREF( tmp_called_name_29 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_32 = var_cmd_opts;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_add_option );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_no_use_wheel );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_30 );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 163;
    tmp_args_element_name_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_31 );
    Py_DECREF( tmp_called_name_31 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_30 );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 163;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_34 = var_cmd_opts;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_add_option );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_no_binary );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 164;
    tmp_args_element_name_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_33 );
    Py_DECREF( tmp_called_name_33 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_36 = var_cmd_opts;

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_add_option );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_only_binary );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );

        exception_lineno = 165;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 165;
    tmp_args_element_name_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_35 );
    Py_DECREF( tmp_called_name_35 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );

        exception_lineno = 165;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 165;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_38 = var_cmd_opts;

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_add_option );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_39 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_pre );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_36 );

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 166;
    tmp_args_element_name_13 = CALL_FUNCTION_NO_ARGS( tmp_called_name_37 );
    Py_DECREF( tmp_called_name_37 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_36 );

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_40 = var_cmd_opts;

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_add_option );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_41 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_no_clean );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_38 );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 167;
    tmp_args_element_name_14 = CALL_FUNCTION_NO_ARGS( tmp_called_name_39 );
    Py_DECREF( tmp_called_name_39 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_38 );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_42 = var_cmd_opts;

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_add_option );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_called_name_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_require_hashes );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_40 );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 168;
    tmp_args_element_name_15 = CALL_FUNCTION_NO_ARGS( tmp_called_name_41 );
    Py_DECREF( tmp_called_name_41 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_40 );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_called_name_40 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_make_option_group );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_45 == NULL ))
    {
        tmp_source_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_called_name_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_index_group );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_42 );

        exception_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_source_name_46 = par_self;

    if ( tmp_source_name_46 == NULL )
    {
        Py_DECREF( tmp_called_name_42 );
        Py_DECREF( tmp_args_element_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_parser );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_42 );
        Py_DECREF( tmp_args_element_name_16 );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    Py_DECREF( tmp_args_element_name_16 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    assert( var_index_opts == NULL );
    var_index_opts = tmp_assign_source_2;

    tmp_source_name_48 = par_self;

    if ( tmp_source_name_48 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_source_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_parser );
    if ( tmp_source_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_insert_option_group );
    Py_DECREF( tmp_source_name_47 );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = const_int_0;
    tmp_args_element_name_19 = var_index_opts;

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_43 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_50 = par_self;

    if ( tmp_source_name_50 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_source_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_parser );
    if ( tmp_source_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_insert_option_group );
    Py_DECREF( tmp_source_name_49 );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = const_int_0;
    tmp_args_element_name_21 = var_cmd_opts;

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_44 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cmd_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
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

            if ( var_cmd_opts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cmd_opts,
                    var_cmd_opts
                );

                assert( res == 0 );
            }

            if ( var_index_opts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_index_opts,
                    var_index_opts
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_cmd_opts );
    var_cmd_opts = NULL;

    Py_XDECREF( var_index_opts );
    var_index_opts = NULL;

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

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_cmd_opts );
    var_cmd_opts = NULL;

    Py_XDECREF( var_index_opts );
    var_index_opts = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_InstallCommand_of_pip$commands$install );
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


static PyObject *impl_function_2_run_of_class_1_InstallCommand_of_pip$commands$install( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_options = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_install_options = NULL;
    PyObject *var_temp_target_dir = NULL;
    PyObject *var_global_options = NULL;
    PyObject *var_session = NULL;
    PyObject *var_finder = NULL;
    PyObject *var_build_delete = NULL;
    PyObject *var_wheel_cache = NULL;
    PyObject *var_build_dir = NULL;
    PyObject *var_requirement_set = NULL;
    PyObject *var_wb = NULL;
    PyObject *var_reqs = NULL;
    PyObject *var_items = NULL;
    PyObject *var_req = NULL;
    PyObject *var_item = NULL;
    PyObject *var_installed = NULL;
    PyObject *var_downloaded = NULL;
    PyObject *var_lib_dir = NULL;
    PyObject *var_target_item_dir = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_2__exit = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__indicator = NULL;
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
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
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
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
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
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_args_element_name_47;
    PyObject *tmp_args_element_name_48;
    PyObject *tmp_args_element_name_49;
    PyObject *tmp_args_element_name_50;
    PyObject *tmp_args_element_name_51;
    PyObject *tmp_args_element_name_52;
    PyObject *tmp_args_element_name_53;
    PyObject *tmp_args_element_name_54;
    PyObject *tmp_args_element_name_55;
    PyObject *tmp_args_element_name_56;
    PyObject *tmp_args_element_name_57;
    PyObject *tmp_args_element_name_58;
    PyObject *tmp_args_element_name_59;
    PyObject *tmp_args_element_name_60;
    PyObject *tmp_args_element_name_61;
    PyObject *tmp_args_element_name_62;
    PyObject *tmp_args_element_name_63;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
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
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    PyObject *tmp_called_name_49;
    PyObject *tmp_called_name_50;
    PyObject *tmp_called_name_51;
    PyObject *tmp_called_name_52;
    PyObject *tmp_called_name_53;
    PyObject *tmp_called_name_54;
    PyObject *tmp_called_name_55;
    PyObject *tmp_called_name_56;
    PyObject *tmp_called_name_57;
    PyObject *tmp_called_name_58;
    PyObject *tmp_called_name_59;
    PyObject *tmp_called_name_60;
    PyObject *tmp_called_name_61;
    PyObject *tmp_called_name_62;
    PyObject *tmp_called_name_63;
    PyObject *tmp_called_name_64;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
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
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
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
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dircall_arg1_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    bool tmp_is_6;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_operand_name_5;
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
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_source_name_94;
    PyObject *tmp_source_name_95;
    PyObject *tmp_source_name_96;
    PyObject *tmp_source_name_97;
    PyObject *tmp_source_name_98;
    PyObject *tmp_source_name_99;
    PyObject *tmp_source_name_100;
    PyObject *tmp_source_name_101;
    PyObject *tmp_source_name_102;
    PyObject *tmp_source_name_103;
    PyObject *tmp_source_name_104;
    PyObject *tmp_source_name_105;
    PyObject *tmp_source_name_106;
    PyObject *tmp_source_name_107;
    PyObject *tmp_source_name_108;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_63ae969c1398aad51a1280212cefc09f, module_pip$commands$install );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_resolve_wheel_no_use_binary );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_options;

    frame_function->f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmdoptions );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmdoptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_check_install_build_global );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_options;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_options;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_allow_external );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 182;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_warn );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_b3bd0cb72a9d271b3c1bcdde6005fc27;
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RemovedInPip10Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_5 = par_options;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_allow_all_external );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 190;
        goto frame_exception_exit_1;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_warn );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_digest_edf28cad80d50ad84fac18b31a3f079c;
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RemovedInPip10Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 195;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_7 = par_options;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_allow_unverified );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_warn );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_digest_637e094086206aa48f958ea784474ff5;
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RemovedInPip10Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_9 = par_options;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_download_dir );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_warn );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = const_str_digest_6abfe00898ef16ea042adfa90f188aa2;
    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RemovedInPip10Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_options;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ignore_installed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_source_name_11 = par_options;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_build_dir );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_options;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_build_dir );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_options;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_build_dir, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_no_5:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_path );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_options;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_src_dir );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_options;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_src_dir, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_18 = par_options;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_install_options );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 219;
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
    tmp_or_right_value_1 = PyList_New( 0 );
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_install_options == NULL );
    var_install_options = tmp_assign_source_1;

    tmp_source_name_19 = par_options;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_use_user_site );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_20 = par_options;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_prefix_path );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_CommandError );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CommandError );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CommandError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 223;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_digest_59a4231c382a652cf807ac2f9d516957_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 223;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_virtualenv_no_global );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_virtualenv_no_global );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "virtualenv_no_global" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 226;
    tmp_cond_value_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_10 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_InstallationError );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InstallationError );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InstallationError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 228;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_digest_18f02276f2e4f023cddecd03521aa178_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 228;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_source_name_21 = var_install_options;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "install_options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 231;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_str_digest_a5dd75e6df71aa4856d52b5db87c61ba_tuple, 0 ) );

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_22 = var_install_options;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "install_options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_append );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 232;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_str_digest_f7b3789adde1f85f1378f30a3aacf48f_tuple, 0 ) );

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_assign_source_2 = Py_None;
    assert( var_temp_target_dir == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_temp_target_dir = tmp_assign_source_2;

    tmp_source_name_23 = par_options;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_target_dir );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assattr_name_4 = Py_True;
    tmp_assattr_target_4 = par_options;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ignore_installed, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_tempfile );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tempfile );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tempfile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_mkdtemp );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 237;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_14 );
    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_temp_target_dir;
        var_temp_target_dir = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_path );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = par_options;

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_target_dir );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_options;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_target_dir, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_path );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_exists );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = par_options;

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_target_dir );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 239;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        goto frame_exception_exit_1;
    }

    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_path );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_isdir );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = par_options;

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_target_dir );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_10 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_10 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_CommandError );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CommandError );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CommandError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 242;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, &PyTuple_GET_ITEM( const_tuple_str_digest_0fc315e29ee372193320ccfc2fcbae81_tuple, 0 ) );

    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 242;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_10:;
    tmp_source_name_34 = var_install_options;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "install_options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_append );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_6b23d8f64a4ba0749ef89078f2b649e8;
    tmp_right_name_1 = var_temp_target_dir;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "temp_target_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );

        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;
    tmp_source_name_35 = par_options;

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_global_options );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 247;
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
    tmp_or_right_value_2 = PyList_New( 0 );
    tmp_assign_source_4 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assign_source_4 = tmp_or_left_value_2;
    or_end_2:;
    assert( var_global_options == NULL );
    var_global_options = tmp_assign_source_4;

    // Tried code:
    tmp_source_name_36 = par_self;

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain__build_session );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_2;
    }
    tmp_args_element_name_17 = par_options;

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 249;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_2;
    }
    assert( tmp_with_2__source == NULL );
    tmp_with_2__source = tmp_assign_source_5;

    tmp_source_name_37 = tmp_with_2__source;

    tmp_assign_source_6 = LOOKUP_SPECIAL( tmp_source_name_37, const_str_plain___exit__ );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_2;
    }
    assert( tmp_with_2__exit == NULL );
    tmp_with_2__exit = tmp_assign_source_6;

    tmp_source_name_38 = tmp_with_2__source;

    tmp_called_name_21 = LOOKUP_SPECIAL( tmp_source_name_38, const_str_plain___enter__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 249;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_21 );
    Py_DECREF( tmp_called_name_21 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_2;
    }
    assert( tmp_with_2__enter == NULL );
    tmp_with_2__enter = tmp_assign_source_7;

    tmp_assign_source_8 = Py_True;
    assert( tmp_with_2__indicator == NULL );
    Py_INCREF( tmp_assign_source_8 );
    tmp_with_2__indicator = tmp_assign_source_8;

    tmp_assign_source_9 = tmp_with_2__enter;

    assert( var_session == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_session = tmp_assign_source_9;

    // Tried code:
    // Tried code:
    tmp_source_name_39 = par_self;

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        goto try_except_handler_4;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__build_package_finder );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_4;
    }
    tmp_args_element_name_18 = par_options;

    if ( tmp_args_element_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        goto try_except_handler_4;
    }

    tmp_args_element_name_19 = var_session;

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        goto try_except_handler_4;
    }

    frame_function->f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_4;
    }
    assert( var_finder == NULL );
    var_finder = tmp_assign_source_10;

    tmp_source_name_40 = par_options;

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        goto try_except_handler_4;
    }

    tmp_or_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_no_clean );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto try_except_handler_4;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 252;
        goto try_except_handler_4;
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
    tmp_source_name_41 = par_options;

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        goto try_except_handler_4;
    }

    tmp_or_right_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_build_dir );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto try_except_handler_4;
    }
    tmp_operand_name_2 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_operand_name_2 = tmp_or_left_value_3;
    or_end_3:;
    tmp_assign_source_11 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto try_except_handler_4;
    }
    assert( var_build_delete == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_build_delete = tmp_assign_source_11;

    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_WheelCache );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WheelCache );
    }

    if ( tmp_called_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WheelCache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        goto try_except_handler_4;
    }

    tmp_source_name_42 = par_options;

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        goto try_except_handler_4;
    }

    tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_cache_dir );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_4;
    }
    tmp_source_name_43 = par_options;

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_args_element_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        goto try_except_handler_4;
    }

    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_format_control );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_20 );

        exception_lineno = 253;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_4;
    }
    assert( var_wheel_cache == NULL );
    var_wheel_cache = tmp_assign_source_12;

    tmp_source_name_44 = par_options;

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto try_except_handler_4;
    }

    tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_cache_dir );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto try_except_handler_4;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 254;
        goto try_except_handler_4;
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
    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_check_path_owner );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_path_owner );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "check_path_owner" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto try_except_handler_4;
    }

    tmp_source_name_45 = par_options;

    if ( tmp_source_name_45 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto try_except_handler_4;
    }

    tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_cache_dir );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 254;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto try_except_handler_4;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    Py_DECREF( tmp_operand_name_3 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto try_except_handler_4;
    }
    Py_INCREF( tmp_and_right_value_2 );
    tmp_cond_value_11 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_11 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 254;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        goto try_except_handler_4;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_warning );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto try_except_handler_4;
    }
    tmp_args_element_name_23 = const_str_digest_52caf01cd7a3dcea98b7ec82b4c9ab5e;
    tmp_source_name_47 = par_options;

    if ( tmp_source_name_47 == NULL )
    {
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto try_except_handler_4;
    }

    tmp_args_element_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_cache_dir );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_25 );

        exception_lineno = 261;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 261;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_options;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        goto try_except_handler_4;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_cache_dir, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        goto try_except_handler_4;
    }
    branch_no_11:;
    // Tried code:
    tmp_called_name_26 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_BuildDirectory );

    if (unlikely( tmp_called_name_26 == NULL ))
    {
        tmp_called_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuildDirectory );
    }

    if ( tmp_called_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuildDirectory" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto try_except_handler_5;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_48 = par_options;

    if ( tmp_source_name_48 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto try_except_handler_5;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_build_dir );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 265;
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_delete;
    tmp_dict_value_1 = var_build_delete;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "build_delete" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        goto try_except_handler_5;
    }

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 266;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_5;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_13;

    tmp_source_name_49 = tmp_with_1__source;

    tmp_assign_source_14 = LOOKUP_SPECIAL( tmp_source_name_49, const_str_plain___exit__ );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_5;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_14;

    tmp_source_name_50 = tmp_with_1__source;

    tmp_called_name_27 = LOOKUP_SPECIAL( tmp_source_name_50, const_str_plain___enter__ );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 266;
    tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS( tmp_called_name_27 );
    Py_DECREF( tmp_called_name_27 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_5;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_15;

    tmp_assign_source_16 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_16 );
    tmp_with_1__indicator = tmp_assign_source_16;

    tmp_assign_source_17 = tmp_with_1__enter;

    assert( var_build_dir == NULL );
    Py_INCREF( tmp_assign_source_17 );
    var_build_dir = tmp_assign_source_17;

    // Tried code:
    // Tried code:
    tmp_called_name_28 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RequirementSet );

    if (unlikely( tmp_called_name_28 == NULL ))
    {
        tmp_called_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequirementSet );
    }

    if ( tmp_called_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequirementSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        goto try_except_handler_7;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 15 );
    tmp_dict_key_2 = const_str_plain_build_dir;
    tmp_dict_value_2 = var_build_dir;

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_src_dir;
    tmp_source_name_51 = par_options;

    if ( tmp_source_name_51 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        goto try_except_handler_7;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_src_dir );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 269;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_download_dir;
    tmp_source_name_52 = par_options;

    if ( tmp_source_name_52 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        goto try_except_handler_7;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_download_dir );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 270;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_upgrade;
    tmp_source_name_53 = par_options;

    if ( tmp_source_name_53 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        goto try_except_handler_7;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_upgrade );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 271;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_key_6 = const_str_plain_as_egg;
    tmp_source_name_54 = par_options;

    if ( tmp_source_name_54 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        goto try_except_handler_7;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_as_egg );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 272;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    tmp_dict_key_7 = const_str_plain_ignore_installed;
    tmp_source_name_55 = par_options;

    if ( tmp_source_name_55 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        goto try_except_handler_7;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_ignore_installed );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 273;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    tmp_dict_key_8 = const_str_plain_ignore_dependencies;
    tmp_source_name_56 = par_options;

    if ( tmp_source_name_56 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        goto try_except_handler_7;
    }

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_ignore_dependencies );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 274;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    tmp_dict_key_9 = const_str_plain_force_reinstall;
    tmp_source_name_57 = par_options;

    if ( tmp_source_name_57 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        goto try_except_handler_7;
    }

    tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_force_reinstall );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 275;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    tmp_dict_key_10 = const_str_plain_use_user_site;
    tmp_source_name_58 = par_options;

    if ( tmp_source_name_58 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        goto try_except_handler_7;
    }

    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_use_user_site );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 276;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    tmp_dict_key_11 = const_str_plain_target_dir;
    tmp_dict_value_11 = var_temp_target_dir;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "temp_target_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        goto try_except_handler_7;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_key_12 = const_str_plain_session;
    tmp_dict_value_12 = var_session;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        goto try_except_handler_7;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_key_13 = const_str_plain_pycompile;
    tmp_source_name_59 = par_options;

    if ( tmp_source_name_59 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        goto try_except_handler_7;
    }

    tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_compile );
    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 279;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    tmp_dict_key_14 = const_str_plain_isolated;
    tmp_source_name_60 = par_options;

    if ( tmp_source_name_60 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        goto try_except_handler_7;
    }

    tmp_dict_value_14 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_isolated_mode );
    if ( tmp_dict_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 280;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_14, tmp_dict_value_14 );
    Py_DECREF( tmp_dict_value_14 );
    tmp_dict_key_15 = const_str_plain_wheel_cache;
    tmp_dict_value_15 = var_wheel_cache;

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wheel_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        goto try_except_handler_7;
    }

    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_15, tmp_dict_value_15 );
    tmp_dict_key_16 = const_str_plain_require_hashes;
    tmp_source_name_61 = par_options;

    if ( tmp_source_name_61 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        goto try_except_handler_7;
    }

    tmp_dict_value_16 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_require_hashes );
    if ( tmp_dict_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 282;
        goto try_except_handler_7;
    }
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_16, tmp_dict_value_16 );
    Py_DECREF( tmp_dict_value_16 );
    frame_function->f_lineno = 282;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_28, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto try_except_handler_7;
    }
    assert( var_requirement_set == NULL );
    var_requirement_set = tmp_assign_source_18;

    tmp_source_name_62 = par_self;

    if ( tmp_source_name_62 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        goto try_except_handler_7;
    }

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_populate_requirement_set );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_7;
    }
    tmp_args_element_name_25 = var_requirement_set;

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto try_except_handler_7;
    }

    tmp_args_element_name_26 = par_args;

    tmp_args_element_name_27 = par_options;

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto try_except_handler_7;
    }

    tmp_args_element_name_28 = var_finder;

    if ( tmp_args_element_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "finder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto try_except_handler_7;
    }

    tmp_args_element_name_29 = var_session;

    if ( tmp_args_element_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto try_except_handler_7;
    }

    tmp_source_name_63 = par_self;

    if ( tmp_source_name_63 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto try_except_handler_7;
    }

    tmp_args_element_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_name );
    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_29 );

        exception_lineno = 286;
        goto try_except_handler_7;
    }
    tmp_args_element_name_31 = var_wheel_cache;

    if ( tmp_args_element_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        Py_DECREF( tmp_args_element_name_30 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wheel_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        goto try_except_handler_7;
    }

    frame_function->f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_64 = var_requirement_set;

    if ( tmp_source_name_64 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        goto try_except_handler_7;
    }

    tmp_cond_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_has_requirements );
    if ( tmp_cond_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto try_except_handler_7;
    }
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_12 );

        exception_lineno = 290;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_no_12;
    }
    else
    {
        goto branch_yes_12;
    }
    branch_yes_12:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_6;
    branch_no_12:;
    // Tried code:
    // Tried code:
    tmp_source_name_65 = par_options;

    if ( tmp_source_name_65 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        goto try_except_handler_9;
    }

    tmp_or_left_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_download_dir );
    if ( tmp_or_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto try_except_handler_9;
    }
    tmp_or_left_truth_4 = CHECK_IF_TRUE( tmp_or_left_value_4 );
    if ( tmp_or_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_4 );

        exception_lineno = 294;
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
    tmp_operand_name_4 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_wheel );

    if (unlikely( tmp_operand_name_4 == NULL ))
    {
        tmp_operand_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wheel );
    }

    if ( tmp_operand_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wheel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        goto try_except_handler_9;
    }

    tmp_or_left_value_5 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    if ( tmp_or_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto try_except_handler_9;
    }
    tmp_or_left_truth_5 = CHECK_IF_TRUE( tmp_or_left_value_5 );
    if ( tmp_or_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
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
    tmp_source_name_66 = par_options;

    if ( tmp_source_name_66 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        goto try_except_handler_9;
    }

    tmp_operand_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_cache_dir );
    if ( tmp_operand_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto try_except_handler_9;
    }
    tmp_or_right_value_5 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_5 );
    Py_DECREF( tmp_operand_name_5 );
    if ( tmp_or_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto try_except_handler_9;
    }
    tmp_or_right_value_4 = tmp_or_right_value_5;
    goto or_end_5;
    or_left_5:;
    tmp_or_right_value_4 = tmp_or_left_value_5;
    or_end_5:;
    Py_INCREF( tmp_or_right_value_4 );
    tmp_cond_value_13 = tmp_or_right_value_4;
    goto or_end_4;
    or_left_4:;
    tmp_cond_value_13 = tmp_or_left_value_4;
    or_end_4:;
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_13 );

        exception_lineno = 294;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_67 = var_requirement_set;

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        goto try_except_handler_9;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_prepare_files );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto try_except_handler_9;
    }
    tmp_args_element_name_32 = var_finder;

    if ( tmp_args_element_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "finder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        goto try_except_handler_9;
    }

    frame_function->f_lineno = 299;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_13;
    branch_no_13:;
    tmp_called_name_31 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_WheelBuilder );

    if (unlikely( tmp_called_name_31 == NULL ))
    {
        tmp_called_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WheelBuilder );
    }

    if ( tmp_called_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WheelBuilder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        goto try_except_handler_9;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_requirement_set;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_finder;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "finder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_3 = DEEP_COPY( const_dict_3d996c0c52a914b397674d56fff3b4af );
    frame_function->f_lineno = 306;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_31, tmp_args_name_2, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto try_except_handler_9;
    }
    assert( var_wb == NULL );
    var_wb = tmp_assign_source_19;

    tmp_source_name_68 = var_wb;

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_build );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto try_except_handler_9;
    }
    tmp_kw_name_4 = PyDict_Copy( const_dict_2d3d63dd179c4dbba41717686fea0849 );
    frame_function->f_lineno = 310;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_32, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_32 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    branch_end_13:;
    tmp_source_name_69 = par_options;

    if ( tmp_source_name_69 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        goto try_except_handler_9;
    }

    tmp_cond_value_14 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_download_dir );
    if ( tmp_cond_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        goto try_except_handler_9;
    }
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_14 );

        exception_lineno = 312;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_no_14;
    }
    else
    {
        goto branch_yes_14;
    }
    branch_yes_14:;
    tmp_source_name_70 = var_requirement_set;

    if ( tmp_source_name_70 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        goto try_except_handler_9;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_install );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        goto try_except_handler_9;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_install_options;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "install_options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_global_options;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "global_options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
    tmp_kw_name_5 = _PyDict_NewPresized( 2 );
    tmp_dict_key_17 = const_str_plain_root;
    tmp_source_name_71 = par_options;

    if ( tmp_source_name_71 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        goto try_except_handler_9;
    }

    tmp_dict_value_17 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_root_path );
    if ( tmp_dict_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_33 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 316;
        goto try_except_handler_9;
    }
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_value_17 );
    tmp_dict_key_18 = const_str_plain_prefix;
    tmp_source_name_72 = par_options;

    if ( tmp_source_name_72 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        goto try_except_handler_9;
    }

    tmp_dict_value_18 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_prefix_path );
    if ( tmp_dict_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_33 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 317;
        goto try_except_handler_9;
    }
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_18, tmp_dict_value_18 );
    Py_DECREF( tmp_dict_value_18 );
    frame_function->f_lineno = 317;
    tmp_unused = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_3, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_33 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_34 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_34 != NULL );
    tmp_args_name_4 = PyTuple_New( 1 );
    tmp_source_name_73 = var_requirement_set;

    if ( tmp_source_name_73 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 320;
        goto try_except_handler_9;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_successfully_installed );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );

        exception_lineno = 320;
        goto try_except_handler_9;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
    tmp_kw_name_6 = _PyDict_NewPresized( 1 );
    tmp_dict_key_19 = const_str_plain_key;
    tmp_source_name_74 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_operator );

    if (unlikely( tmp_source_name_74 == NULL ))
    {
        tmp_source_name_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
    }

    if ( tmp_source_name_74 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "operator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 321;
        goto try_except_handler_9;
    }

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_attrgetter );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_6 );

        exception_lineno = 321;
        goto try_except_handler_9;
    }
    frame_function->f_lineno = 321;
    tmp_dict_value_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, &PyTuple_GET_ITEM( const_tuple_str_plain_name_tuple, 0 ) );

    Py_DECREF( tmp_called_name_35 );
    if ( tmp_dict_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_6 );

        exception_lineno = 321;
        goto try_except_handler_9;
    }
    PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_19, tmp_dict_value_19 );
    Py_DECREF( tmp_dict_value_19 );
    frame_function->f_lineno = 321;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_34, tmp_args_name_4, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto try_except_handler_9;
    }
    assert( var_reqs == NULL );
    var_reqs = tmp_assign_source_20;

    tmp_assign_source_21 = PyList_New( 0 );
    assert( var_items == NULL );
    var_items = tmp_assign_source_21;

    tmp_iter_arg_1 = var_reqs;

    tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        goto try_except_handler_9;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_22;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 323;
            goto try_except_handler_10;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_assign_source_24 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_req;
        var_req = tmp_assign_source_24;
        Py_INCREF( var_req );
        Py_XDECREF( old );
    }

    tmp_source_name_75 = var_req;

    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_name );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto try_except_handler_10;
    }
    {
        PyObject *old = var_item;
        var_item = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_hasattr_source_1 = var_req;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 326;
        goto try_except_handler_11;
    }

    tmp_hasattr_attr_1 = const_str_plain_installed_version;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_76 = var_req;

    if ( tmp_source_name_76 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 327;
        goto try_except_handler_11;
    }

    tmp_cond_value_15 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_installed_version );
    if ( tmp_cond_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        goto try_except_handler_11;
    }
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_15 );

        exception_lineno = 327;
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_left_name_2 = var_item;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        goto try_except_handler_11;
    }

    tmp_left_name_3 = const_str_chr_45;
    tmp_source_name_77 = var_req;

    if ( tmp_source_name_77 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        goto try_except_handler_11;
    }

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_installed_version );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_11;
    }
    tmp_right_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_11;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_26 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_11;
    }
    var_item = tmp_assign_source_26;

    branch_no_16:;
    branch_no_15:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_11:;
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
    tmp_compare_right_1 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto try_except_handler_12;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_17;
    }
    else
    {
        goto branch_yes_17;
    }
    branch_yes_17:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_12;
    branch_no_17:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_12:;
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

    goto try_except_handler_10;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_78 = var_items;

    if ( tmp_source_name_78 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "items" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        goto try_except_handler_10;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_append );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto try_except_handler_10;
    }
    tmp_args_element_name_33 = var_item;

    if ( tmp_args_element_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        goto try_except_handler_10;
    }

    frame_function->f_lineno = 331;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        goto try_except_handler_10;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_10:;
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

    goto try_except_handler_9;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_79 = const_str_space;
    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_join );
    assert( tmp_called_name_37 != NULL );
    tmp_args_element_name_34 = var_items;

    if ( tmp_args_element_name_34 == NULL )
    {
        Py_DECREF( tmp_called_name_37 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "items" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 332;
        goto try_except_handler_9;
    }

    frame_function->f_lineno = 332;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        goto try_except_handler_9;
    }
    assert( var_installed == NULL );
    var_installed = tmp_assign_source_27;

    tmp_cond_value_16 = var_installed;

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_80 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_80 == NULL ))
    {
        tmp_source_name_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_80 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 334;
        goto try_except_handler_9;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_info );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        goto try_except_handler_9;
    }
    tmp_args_element_name_35 = const_str_digest_d4d2fad040d35670ce7e728dca4e0f7e;
    tmp_args_element_name_36 = var_installed;

    if ( tmp_args_element_name_36 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "installed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 334;
        goto try_except_handler_9;
    }

    frame_function->f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    branch_no_18:;
    goto branch_end_14;
    branch_no_14:;
    tmp_source_name_81 = const_str_space;
    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_join );
    assert( tmp_called_name_39 != NULL );
    tmp_source_name_82 = var_requirement_set;

    if ( tmp_source_name_82 == NULL )
    {
        Py_DECREF( tmp_called_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        goto try_except_handler_9;
    }

    tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_successfully_downloaded );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 338;
        goto try_except_handler_9;
    }
    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 337;
        goto try_except_handler_9;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_args_element_name_37 = impl_function_1_listcontraction_of_function_2_run_of_class_1_InstallCommand_of_pip$commands$install( dir_call_args );
    }
    if ( tmp_args_element_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 337;
        goto try_except_handler_9;
    }
    frame_function->f_lineno = 337;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_called_name_39 );
    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto try_except_handler_9;
    }
    assert( var_downloaded == NULL );
    var_downloaded = tmp_assign_source_28;

    tmp_cond_value_17 = var_downloaded;

    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_source_name_83 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_83 == NULL ))
    {
        tmp_source_name_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_83 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        goto try_except_handler_9;
    }

    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_info );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        goto try_except_handler_9;
    }
    tmp_args_element_name_38 = const_str_digest_0818d8693596db669a829c5829034c92;
    tmp_args_element_name_39 = var_downloaded;

    if ( tmp_args_element_name_39 == NULL )
    {
        Py_DECREF( tmp_called_name_40 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "downloaded" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        goto try_except_handler_9;
    }

    frame_function->f_lineno = 342;
    {
        PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_called_name_40 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    branch_no_19:;
    branch_end_14:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_PreviousBuildDirError );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PreviousBuildDirError );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PreviousBuildDirError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        goto try_except_handler_13;
    }

    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto try_except_handler_13;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_assattr_name_7 = Py_True;
    tmp_assattr_target_7 = par_options;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        goto try_except_handler_13;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_no_clean, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        goto try_except_handler_13;
    }
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_13;
    goto branch_end_20;
    branch_no_20:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_13;
    branch_end_20:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // Exception handler code:
    try_except_handler_13:;
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

    goto try_except_handler_8;
    // End of try:
    // End of try:
    try_end_4:;
    goto try_end_5;
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
    tmp_source_name_84 = par_options;

    if ( tmp_source_name_84 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        goto try_except_handler_14;
    }

    tmp_cond_value_18 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_no_clean );
    if ( tmp_cond_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_14;
    }
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_18 );

        exception_lineno = 349;
        goto try_except_handler_14;
    }
    Py_DECREF( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_no_21;
    }
    else
    {
        goto branch_yes_21;
    }
    branch_yes_21:;
    tmp_source_name_85 = var_requirement_set;

    if ( tmp_source_name_85 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        goto try_except_handler_14;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_cleanup_files );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_14;
    }
    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_41 );
    Py_DECREF( tmp_called_name_41 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_14;
    }
    Py_DECREF( tmp_unused );
    branch_no_21:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // Exception handler code:
    try_except_handler_14:;
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

    goto try_except_handler_7;
    // End of try:
    // End of try:
    try_end_5:;
    tmp_source_name_86 = par_options;

    if ( tmp_source_name_86 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        goto try_except_handler_7;
    }

    tmp_cond_value_19 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_no_clean );
    if ( tmp_cond_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_7;
    }
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_19 );

        exception_lineno = 349;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == 1 )
    {
        goto branch_no_22;
    }
    else
    {
        goto branch_yes_22;
    }
    branch_yes_22:;
    tmp_source_name_87 = var_requirement_set;

    if ( tmp_source_name_87 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        goto try_except_handler_7;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_cleanup_files );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_42 );
    Py_DECREF( tmp_called_name_42 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_22:;
    goto try_end_6;
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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_BaseException;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_15;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_assign_source_29 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        tmp_with_1__indicator = tmp_assign_source_29;
        Py_INCREF( tmp_with_1__indicator );
        Py_XDECREF( old );
    }

    tmp_called_name_43 = tmp_with_1__exit;

    tmp_args_element_name_40 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_41 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_42 = PyThreadState_GET()->exc_traceback;
    frame_function->f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42 };
        tmp_cond_value_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_43, call_args );
    }

    if ( tmp_cond_value_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_15;
    }
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_20 );

        exception_lineno = 350;
        goto try_except_handler_15;
    }
    Py_DECREF( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == 1 )
    {
        goto branch_no_24;
    }
    else
    {
        goto branch_yes_24;
    }
    branch_yes_24:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_15;
    branch_no_24:;
    goto branch_end_23;
    branch_no_23:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_15;
    branch_end_23:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // End of try:
    try_end_6:;
    goto try_end_8;
    // Return handler code:
    try_return_handler_6:;
    tmp_compare_left_4 = tmp_with_1__indicator;

    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_called_name_44 = tmp_with_1__exit;

    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_44, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_25:;
    goto try_return_handler_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    tmp_compare_left_5 = tmp_with_1__indicator;

    tmp_compare_right_5 = Py_True;
    tmp_is_2 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_2 )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_called_name_45 = tmp_with_1__exit;

    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_45, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_10 );
        Py_XDECREF( exception_keeper_value_10 );
        Py_XDECREF( exception_keeper_tb_10 );

        exception_lineno = 350;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_26:;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_5;
    // End of try:
    try_end_8:;
    tmp_compare_left_6 = tmp_with_1__indicator;

    tmp_compare_right_6 = Py_True;
    tmp_is_3 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if ( tmp_is_3 )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_called_name_46 = tmp_with_1__exit;

    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_46, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_27:;
    goto try_end_9;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_4;
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

    goto try_end_10;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    exception_preserved_type_5 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_5 );
    exception_preserved_value_5 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_5 );
    exception_preserved_tb_5 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_5 );

    if ( exception_keeper_tb_12 == NULL )
    {
        exception_keeper_tb_12 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_12 );
    }
    else if ( exception_keeper_lineno_12 != -1 )
    {
        exception_keeper_tb_12 = ADD_TRACEBACK( exception_keeper_tb_12, frame_function, exception_keeper_lineno_12 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
    PyException_SetTraceback( exception_keeper_value_12, (PyObject *)exception_keeper_tb_12 );
    PUBLISH_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
    // Tried code:
    tmp_compare_left_7 = PyThreadState_GET()->exc_type;
    tmp_compare_right_7 = PyExc_BaseException;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_16;
    }
    if ( tmp_exc_match_exception_match_4 == 1 )
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_assign_source_30 = Py_False;
    {
        PyObject *old = tmp_with_2__indicator;
        tmp_with_2__indicator = tmp_assign_source_30;
        Py_INCREF( tmp_with_2__indicator );
        Py_XDECREF( old );
    }

    tmp_called_name_47 = tmp_with_2__exit;

    tmp_args_element_name_43 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_44 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_45 = PyThreadState_GET()->exc_traceback;
    frame_function->f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
        tmp_cond_value_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_47, call_args );
    }

    if ( tmp_cond_value_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_16;
    }
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_21 );

        exception_lineno = 350;
        goto try_except_handler_16;
    }
    Py_DECREF( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == 1 )
    {
        goto branch_no_29;
    }
    else
    {
        goto branch_yes_29;
    }
    branch_yes_29:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_16;
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_16;
    branch_end_28:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5 );
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_3;
    // End of try:
    try_end_11:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5 );
    goto try_end_10;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // End of try:
    try_end_10:;
    goto try_end_12;
    // Return handler code:
    try_return_handler_3:;
    tmp_compare_left_8 = tmp_with_2__indicator;

    tmp_compare_right_8 = Py_True;
    tmp_is_4 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    if ( tmp_is_4 )
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    tmp_called_name_48 = tmp_with_2__exit;

    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_48, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_30:;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    tmp_compare_left_9 = tmp_with_2__indicator;

    tmp_compare_right_9 = Py_True;
    tmp_is_5 = ( tmp_compare_left_9 == tmp_compare_right_9 );
    if ( tmp_is_5 )
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    tmp_called_name_49 = tmp_with_2__exit;

    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_49, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_14 );
        Py_XDECREF( exception_keeper_value_14 );
        Py_XDECREF( exception_keeper_tb_14 );

        exception_lineno = 350;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_31:;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_2;
    // End of try:
    try_end_12:;
    tmp_compare_left_10 = tmp_with_2__indicator;

    tmp_compare_right_10 = Py_True;
    tmp_is_6 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    if ( tmp_is_6 )
    {
        goto branch_yes_32;
    }
    else
    {
        goto branch_no_32;
    }
    branch_yes_32:;
    tmp_called_name_50 = tmp_with_2__exit;

    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_50, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_32:;
    goto try_end_13;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    Py_XDECREF( tmp_with_2__indicator );
    tmp_with_2__indicator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    Py_XDECREF( tmp_with_2__indicator );
    tmp_with_2__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    Py_XDECREF( tmp_with_2__indicator );
    tmp_with_2__indicator = NULL;

    tmp_source_name_88 = par_options;

    if ( tmp_source_name_88 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_22 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_target_dir );
    if ( tmp_cond_value_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_22 );

        exception_lineno = 352;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == 1 )
    {
        goto branch_yes_33;
    }
    else
    {
        goto branch_no_33;
    }
    branch_yes_33:;
    tmp_called_name_51 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_ensure_dir );

    if (unlikely( tmp_called_name_51 == NULL ))
    {
        tmp_called_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ensure_dir );
    }

    if ( tmp_called_name_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ensure_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_source_name_89 = par_options;

    if ( tmp_source_name_89 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_target_dir );
    if ( tmp_args_element_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_46 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_51, call_args );
    }

    Py_DECREF( tmp_args_element_name_46 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_52 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_distutils_scheme );

    if (unlikely( tmp_called_name_52 == NULL ))
    {
        tmp_called_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils_scheme );
    }

    if ( tmp_called_name_52 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "distutils_scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_args_name_5 = const_tuple_str_empty_tuple;
    tmp_kw_name_7 = _PyDict_NewPresized( 1 );
    tmp_dict_key_20 = const_str_plain_home;
    tmp_dict_value_20 = var_temp_target_dir;

    if ( tmp_dict_value_20 == NULL )
    {
        Py_DECREF( tmp_kw_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "temp_target_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_20, tmp_dict_value_20 );
    frame_function->f_lineno = 355;
    tmp_subscribed_name_1 = CALL_FUNCTION( tmp_called_name_52, tmp_args_name_5, tmp_kw_name_7 );
    Py_DECREF( tmp_kw_name_7 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_purelib;
    tmp_assign_source_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    assert( var_lib_dir == NULL );
    var_lib_dir = tmp_assign_source_31;

    tmp_source_name_90 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_90 == NULL ))
    {
        tmp_source_name_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_90 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        goto frame_exception_exit_1;
    }

    tmp_called_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_listdir );
    if ( tmp_called_name_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_47 = var_lib_dir;

    if ( tmp_args_element_name_47 == NULL )
    {
        Py_DECREF( tmp_called_name_53 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lib_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_47 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, call_args );
    }

    Py_DECREF( tmp_called_name_53 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_32;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_33 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 357;
            goto try_except_handler_17;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    tmp_assign_source_34 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_item;
        var_item = tmp_assign_source_34;
        Py_INCREF( var_item );
        Py_XDECREF( old );
    }

    tmp_source_name_92 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_92 == NULL ))
    {
        tmp_source_name_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_92 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        goto try_except_handler_17;
    }

    tmp_source_name_91 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_path );
    if ( tmp_source_name_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto try_except_handler_17;
    }
    tmp_called_name_54 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_join );
    Py_DECREF( tmp_source_name_91 );
    if ( tmp_called_name_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto try_except_handler_17;
    }
    tmp_source_name_93 = par_options;

    if ( tmp_source_name_93 == NULL )
    {
        Py_DECREF( tmp_called_name_54 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        goto try_except_handler_17;
    }

    tmp_args_element_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_target_dir );
    if ( tmp_args_element_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_54 );

        exception_lineno = 358;
        goto try_except_handler_17;
    }
    tmp_args_element_name_49 = var_item;

    if ( tmp_args_element_name_49 == NULL )
    {
        Py_DECREF( tmp_called_name_54 );
        Py_DECREF( tmp_args_element_name_48 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 358;
    {
        PyObject *call_args[] = { tmp_args_element_name_48, tmp_args_element_name_49 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_54, call_args );
    }

    Py_DECREF( tmp_called_name_54 );
    Py_DECREF( tmp_args_element_name_48 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto try_except_handler_17;
    }
    {
        PyObject *old = var_target_item_dir;
        var_target_item_dir = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    tmp_source_name_95 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_95 == NULL ))
    {
        tmp_source_name_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_95 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        goto try_except_handler_17;
    }

    tmp_source_name_94 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_path );
    if ( tmp_source_name_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto try_except_handler_17;
    }
    tmp_called_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_exists );
    Py_DECREF( tmp_source_name_94 );
    if ( tmp_called_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto try_except_handler_17;
    }
    tmp_args_element_name_50 = var_target_item_dir;

    if ( tmp_args_element_name_50 == NULL )
    {
        Py_DECREF( tmp_called_name_55 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "target_item_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 359;
    {
        PyObject *call_args[] = { tmp_args_element_name_50 };
        tmp_cond_value_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_55, call_args );
    }

    Py_DECREF( tmp_called_name_55 );
    if ( tmp_cond_value_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto try_except_handler_17;
    }
    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_23 );

        exception_lineno = 359;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == 1 )
    {
        goto branch_yes_34;
    }
    else
    {
        goto branch_no_34;
    }
    branch_yes_34:;
    tmp_source_name_96 = par_options;

    if ( tmp_source_name_96 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        goto try_except_handler_17;
    }

    tmp_cond_value_24 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_upgrade );
    if ( tmp_cond_value_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto try_except_handler_17;
    }
    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_24 );

        exception_lineno = 360;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == 1 )
    {
        goto branch_no_35;
    }
    else
    {
        goto branch_yes_35;
    }
    branch_yes_35:;
    tmp_source_name_97 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_97 == NULL ))
    {
        tmp_source_name_97 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_97 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        goto try_except_handler_17;
    }

    tmp_called_name_56 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_warning );
    if ( tmp_called_name_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        goto try_except_handler_17;
    }
    tmp_args_element_name_51 = const_str_digest_3a6be5fbce52fb991daa17572a12f443;
    tmp_args_element_name_52 = var_target_item_dir;

    if ( tmp_args_element_name_52 == NULL )
    {
        Py_DECREF( tmp_called_name_56 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "target_item_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 364;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 364;
    {
        PyObject *call_args[] = { tmp_args_element_name_51, tmp_args_element_name_52 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_56, call_args );
    }

    Py_DECREF( tmp_called_name_56 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    goto loop_start_2;
    branch_no_35:;
    tmp_source_name_99 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_99 == NULL ))
    {
        tmp_source_name_99 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_99 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 367;
        goto try_except_handler_17;
    }

    tmp_source_name_98 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_path );
    if ( tmp_source_name_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto try_except_handler_17;
    }
    tmp_called_name_57 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_islink );
    Py_DECREF( tmp_source_name_98 );
    if ( tmp_called_name_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto try_except_handler_17;
    }
    tmp_args_element_name_53 = var_target_item_dir;

    if ( tmp_args_element_name_53 == NULL )
    {
        Py_DECREF( tmp_called_name_57 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "target_item_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 367;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 367;
    {
        PyObject *call_args[] = { tmp_args_element_name_53 };
        tmp_cond_value_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_57, call_args );
    }

    Py_DECREF( tmp_called_name_57 );
    if ( tmp_cond_value_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto try_except_handler_17;
    }
    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_25 );

        exception_lineno = 367;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == 1 )
    {
        goto branch_yes_36;
    }
    else
    {
        goto branch_no_36;
    }
    branch_yes_36:;
    tmp_source_name_100 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_100 == NULL ))
    {
        tmp_source_name_100 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_100 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 368;
        goto try_except_handler_17;
    }

    tmp_called_name_58 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain_warning );
    if ( tmp_called_name_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto try_except_handler_17;
    }
    tmp_args_element_name_54 = const_str_digest_18249baabb1909c5dc1a247e5b9c2e03;
    tmp_args_element_name_55 = var_target_item_dir;

    if ( tmp_args_element_name_55 == NULL )
    {
        Py_DECREF( tmp_called_name_58 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "target_item_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_54, tmp_args_element_name_55 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_58, call_args );
    }

    Py_DECREF( tmp_called_name_58 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    goto loop_start_2;
    branch_no_36:;
    tmp_source_name_102 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_102 == NULL ))
    {
        tmp_source_name_102 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_102 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 376;
        goto try_except_handler_17;
    }

    tmp_source_name_101 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_path );
    if ( tmp_source_name_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto try_except_handler_17;
    }
    tmp_called_name_59 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_isdir );
    Py_DECREF( tmp_source_name_101 );
    if ( tmp_called_name_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto try_except_handler_17;
    }
    tmp_args_element_name_56 = var_target_item_dir;

    if ( tmp_args_element_name_56 == NULL )
    {
        Py_DECREF( tmp_called_name_59 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "target_item_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 376;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_args_element_name_56 };
        tmp_cond_value_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_59, call_args );
    }

    Py_DECREF( tmp_called_name_59 );
    if ( tmp_cond_value_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto try_except_handler_17;
    }
    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_26 );

        exception_lineno = 376;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == 1 )
    {
        goto branch_yes_37;
    }
    else
    {
        goto branch_no_37;
    }
    branch_yes_37:;
    tmp_source_name_103 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_shutil );

    if (unlikely( tmp_source_name_103 == NULL ))
    {
        tmp_source_name_103 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shutil );
    }

    if ( tmp_source_name_103 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shutil" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        goto try_except_handler_17;
    }

    tmp_called_name_60 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain_rmtree );
    if ( tmp_called_name_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto try_except_handler_17;
    }
    tmp_args_element_name_57 = var_target_item_dir;

    if ( tmp_args_element_name_57 == NULL )
    {
        Py_DECREF( tmp_called_name_60 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "target_item_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 377;
    {
        PyObject *call_args[] = { tmp_args_element_name_57 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_60, call_args );
    }

    Py_DECREF( tmp_called_name_60 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_37;
    branch_no_37:;
    tmp_source_name_104 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_104 == NULL ))
    {
        tmp_source_name_104 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_104 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 379;
        goto try_except_handler_17;
    }

    tmp_called_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_remove );
    if ( tmp_called_name_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto try_except_handler_17;
    }
    tmp_args_element_name_58 = var_target_item_dir;

    if ( tmp_args_element_name_58 == NULL )
    {
        Py_DECREF( tmp_called_name_61 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "target_item_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 379;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 379;
    {
        PyObject *call_args[] = { tmp_args_element_name_58 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_61, call_args );
    }

    Py_DECREF( tmp_called_name_61 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    branch_end_37:;
    branch_no_34:;
    tmp_source_name_105 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_shutil );

    if (unlikely( tmp_source_name_105 == NULL ))
    {
        tmp_source_name_105 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shutil );
    }

    if ( tmp_source_name_105 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shutil" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        goto try_except_handler_17;
    }

    tmp_called_name_62 = LOOKUP_ATTRIBUTE( tmp_source_name_105, const_str_plain_move );
    if ( tmp_called_name_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        goto try_except_handler_17;
    }
    tmp_source_name_107 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_107 == NULL ))
    {
        tmp_source_name_107 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_107 == NULL )
    {
        Py_DECREF( tmp_called_name_62 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        goto try_except_handler_17;
    }

    tmp_source_name_106 = LOOKUP_ATTRIBUTE( tmp_source_name_107, const_str_plain_path );
    if ( tmp_source_name_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_62 );

        exception_lineno = 382;
        goto try_except_handler_17;
    }
    tmp_called_name_63 = LOOKUP_ATTRIBUTE( tmp_source_name_106, const_str_plain_join );
    Py_DECREF( tmp_source_name_106 );
    if ( tmp_called_name_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_62 );

        exception_lineno = 382;
        goto try_except_handler_17;
    }
    tmp_args_element_name_60 = var_lib_dir;

    if ( tmp_args_element_name_60 == NULL )
    {
        Py_DECREF( tmp_called_name_62 );
        Py_DECREF( tmp_called_name_63 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lib_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        goto try_except_handler_17;
    }

    tmp_args_element_name_61 = var_item;

    if ( tmp_args_element_name_61 == NULL )
    {
        Py_DECREF( tmp_called_name_62 );
        Py_DECREF( tmp_called_name_63 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 382;
    {
        PyObject *call_args[] = { tmp_args_element_name_60, tmp_args_element_name_61 };
        tmp_args_element_name_59 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_63, call_args );
    }

    Py_DECREF( tmp_called_name_63 );
    if ( tmp_args_element_name_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_62 );

        exception_lineno = 382;
        goto try_except_handler_17;
    }
    tmp_args_element_name_62 = var_target_item_dir;

    if ( tmp_args_element_name_62 == NULL )
    {
        Py_DECREF( tmp_called_name_62 );
        Py_DECREF( tmp_args_element_name_59 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "target_item_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        goto try_except_handler_17;
    }

    frame_function->f_lineno = 383;
    {
        PyObject *call_args[] = { tmp_args_element_name_59, tmp_args_element_name_62 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_62, call_args );
    }

    Py_DECREF( tmp_called_name_62 );
    Py_DECREF( tmp_args_element_name_59 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto try_except_handler_17;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_108 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_shutil );

    if (unlikely( tmp_source_name_108 == NULL ))
    {
        tmp_source_name_108 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shutil );
    }

    if ( tmp_source_name_108 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shutil" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    tmp_called_name_64 = LOOKUP_ATTRIBUTE( tmp_source_name_108, const_str_plain_rmtree );
    if ( tmp_called_name_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_63 = var_temp_target_dir;

    if ( tmp_args_element_name_63 == NULL )
    {
        Py_DECREF( tmp_called_name_64 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "temp_target_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_args_element_name_63 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_64, call_args );
    }

    Py_DECREF( tmp_called_name_64 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_33:;
    tmp_return_value = var_requirement_set;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "requirement_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_options,
                    par_options
                );

                assert( res == 0 );
            }

            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( var_install_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_install_options,
                    var_install_options
                );

                assert( res == 0 );
            }

            if ( var_temp_target_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_temp_target_dir,
                    var_temp_target_dir
                );

                assert( res == 0 );
            }

            if ( var_global_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_global_options,
                    var_global_options
                );

                assert( res == 0 );
            }

            if ( var_session )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_session,
                    var_session
                );

                assert( res == 0 );
            }

            if ( var_finder )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_finder,
                    var_finder
                );

                assert( res == 0 );
            }

            if ( var_build_delete )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_delete,
                    var_build_delete
                );

                assert( res == 0 );
            }

            if ( var_wheel_cache )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wheel_cache,
                    var_wheel_cache
                );

                assert( res == 0 );
            }

            if ( var_build_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_dir,
                    var_build_dir
                );

                assert( res == 0 );
            }

            if ( var_requirement_set )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_requirement_set,
                    var_requirement_set
                );

                assert( res == 0 );
            }

            if ( var_wb )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wb,
                    var_wb
                );

                assert( res == 0 );
            }

            if ( var_reqs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_reqs,
                    var_reqs
                );

                assert( res == 0 );
            }

            if ( var_items )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_items,
                    var_items
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

            if ( var_item )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item,
                    var_item
                );

                assert( res == 0 );
            }

            if ( var_installed )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_installed,
                    var_installed
                );

                assert( res == 0 );
            }

            if ( var_downloaded )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_downloaded,
                    var_downloaded
                );

                assert( res == 0 );
            }

            if ( var_lib_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lib_dir,
                    var_lib_dir
                );

                assert( res == 0 );
            }

            if ( var_target_item_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_target_item_dir,
                    var_target_item_dir
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
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_install_options );
    var_install_options = NULL;

    Py_XDECREF( var_temp_target_dir );
    var_temp_target_dir = NULL;

    Py_XDECREF( var_global_options );
    var_global_options = NULL;

    Py_XDECREF( var_session );
    var_session = NULL;

    Py_XDECREF( var_finder );
    var_finder = NULL;

    Py_XDECREF( var_build_delete );
    var_build_delete = NULL;

    Py_XDECREF( var_wheel_cache );
    var_wheel_cache = NULL;

    Py_XDECREF( var_build_dir );
    var_build_dir = NULL;

    Py_XDECREF( var_requirement_set );
    var_requirement_set = NULL;

    Py_XDECREF( var_wb );
    var_wb = NULL;

    Py_XDECREF( var_reqs );
    var_reqs = NULL;

    Py_XDECREF( var_items );
    var_items = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_installed );
    var_installed = NULL;

    Py_XDECREF( var_downloaded );
    var_downloaded = NULL;

    Py_XDECREF( var_lib_dir );
    var_lib_dir = NULL;

    Py_XDECREF( var_target_item_dir );
    var_target_item_dir = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_install_options );
    var_install_options = NULL;

    Py_XDECREF( var_temp_target_dir );
    var_temp_target_dir = NULL;

    Py_XDECREF( var_global_options );
    var_global_options = NULL;

    Py_XDECREF( var_session );
    var_session = NULL;

    Py_XDECREF( var_finder );
    var_finder = NULL;

    Py_XDECREF( var_build_delete );
    var_build_delete = NULL;

    Py_XDECREF( var_wheel_cache );
    var_wheel_cache = NULL;

    Py_XDECREF( var_build_dir );
    var_build_dir = NULL;

    Py_XDECREF( var_requirement_set );
    var_requirement_set = NULL;

    Py_XDECREF( var_wb );
    var_wb = NULL;

    Py_XDECREF( var_reqs );
    var_reqs = NULL;

    Py_XDECREF( var_items );
    var_items = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_installed );
    var_installed = NULL;

    Py_XDECREF( var_downloaded );
    var_downloaded = NULL;

    Py_XDECREF( var_lib_dir );
    var_lib_dir = NULL;

    Py_XDECREF( var_target_item_dir );
    var_target_item_dir = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
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


NUITKA_LOCAL_MODULE PyObject *impl_function_1_listcontraction_of_function_2_run_of_class_1_InstallCommand_of_pip$commands$install( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = python_pars[ 0 ];
    PyObject *var_req = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = par_$0;

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
            PyThreadState_GET()->frame->f_lineno = 337;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    {
        PyObject *old = var_req;
        var_req = tmp_assign_source_3;
        Py_INCREF( var_req );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_contraction_result;

    tmp_source_name_1 = var_req;

    tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_listcontraction_of_function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    goto try_return_handler_1;
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

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_listcontraction_of_function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

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

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_listcontraction_of_function_2_run_of_class_1_InstallCommand_of_pip$commands$install );
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



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_InstallCommand_of_pip$commands$install(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_InstallCommand_of_pip$commands$install,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_632ede6995a0bd4cdd6210bbc21e8c25,
#endif
        codeobj_ce200d93b1cc0cf14c94bc5e0e0d4b9c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$commands$install,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_run_of_class_1_InstallCommand_of_pip$commands$install(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_run_of_class_1_InstallCommand_of_pip$commands$install,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        const_str_digest_5843bfc1d5ef4e036530fc3741be5d54,
#endif
        codeobj_63ae969c1398aad51a1280212cefc09f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pip$commands$install,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pip$commands$install =
{
    PyModuleDef_HEAD_INIT,
    "pip.commands.install",   /* m_name */
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

MOD_INIT_DECL( pip$commands$install )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pip$commands$install );
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

    // puts( "in initpip$commands$install" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pip$commands$install = Py_InitModule4(
        "pip.commands.install",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pip$commands$install = PyModule_Create( &mdef_pip$commands$install );
#endif

    moduledict_pip$commands$install = (PyDictObject *)((PyModuleObject *)module_pip$commands$install)->md_dict;

    CHECK_OBJECT( module_pip$commands$install );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c2f8520385159b1df2ec4892d8ea77d8, module_pip$commands$install );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pip$commands$install );

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
    PyObject *tmp_pip$commands$install_class_creation_1__bases = NULL;
    PyObject *tmp_pip$commands$install_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pip$commands$install_class_creation_1__metaclass = NULL;
    PyObject *tmp_pip$commands$install_class_creation_1__prepared = NULL;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
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
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
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
    UPDATE_STRING_DICT0( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3947609ab6f8fe84850f6ac0115f517d;
    UPDATE_STRING_DICT0( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_32275709d296345a6ef0130003c86b26;
    UPDATE_STRING_DICT0( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_821ea81a88b9b707ff9a63493b1c7ec1, module_pip$commands$install );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_operator, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_operator, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_tempfile, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_tempfile, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_shutil, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_shutil, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_11 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_11 );
    // Tried code:
    tmp_import_globals_7 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 10;
    tmp_assign_source_12 = IMPORT_MODULE( const_str_plain_wheel, tmp_import_globals_7, tmp_import_globals_7, Py_None, const_int_0 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_wheel, tmp_assign_source_12 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_module, exception_keeper_lineno_1 );
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


        exception_lineno = 11;
        goto try_except_handler_2;
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
    tmp_assign_source_13 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_wheel, tmp_assign_source_13 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pip$commands$install );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_import_globals_8 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c0738af5e840c8be1c2e73773ab92b81, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_RequirementSet_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_RequirementSet );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RequirementSet, tmp_assign_source_14 );
    tmp_import_globals_9 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_ceace3d1f97b667025f1cf3df650d730, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_RequirementCommand_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_RequirementCommand );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RequirementCommand, tmp_assign_source_15 );
    tmp_import_globals_10 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_39d9d95763d4a31151bd623e3cb14ec1, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_virtualenv_no_global_str_plain_distutils_scheme_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_virtualenv_no_global );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_virtualenv_no_global, tmp_assign_source_16 );
    tmp_import_globals_11 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_39d9d95763d4a31151bd623e3cb14ec1, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_virtualenv_no_global_str_plain_distutils_scheme_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_distutils_scheme );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_distutils_scheme, tmp_assign_source_17 );
    tmp_import_globals_12 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_a9257a08f76d8d1251a0057ea9ff2f3a, tmp_import_globals_12, tmp_import_globals_12, const_tuple_d940e5ccc46ed15a88d831cd604a7783_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_InstallationError );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_InstallationError, tmp_assign_source_18 );
    tmp_import_globals_13 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_a9257a08f76d8d1251a0057ea9ff2f3a, tmp_import_globals_13, tmp_import_globals_13, const_tuple_d940e5ccc46ed15a88d831cd604a7783_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_CommandError );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_CommandError, tmp_assign_source_19 );
    tmp_import_globals_14 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_a9257a08f76d8d1251a0057ea9ff2f3a, tmp_import_globals_14, tmp_import_globals_14, const_tuple_d940e5ccc46ed15a88d831cd604a7783_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_PreviousBuildDirError );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_PreviousBuildDirError, tmp_assign_source_20 );
    tmp_import_globals_15 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_pip, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_cmdoptions_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_cmdoptions );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_cmdoptions, tmp_assign_source_21 );
    tmp_import_globals_16 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_5ec1282353051301ac716f71f067cae9, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_ensure_dir_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ensure_dir );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_ensure_dir, tmp_assign_source_22 );
    tmp_import_globals_17 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_b96ce5eb1890e4c30e23fc327e9ea9f2, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_BuildDirectory_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_BuildDirectory );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_BuildDirectory, tmp_assign_source_23 );
    tmp_import_globals_18 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_d2cd8f4b4d5abe2821545108ddbe2fdf, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_plain_RemovedInPip10Warning_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_RemovedInPip10Warning );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RemovedInPip10Warning, tmp_assign_source_24 );
    tmp_import_globals_19 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_5c000c80cf7576905a2bde598f54d340, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_plain_check_path_owner_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_check_path_owner );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_check_path_owner, tmp_assign_source_25 );
    tmp_import_globals_20 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_78cf780b09dc1ccf59c7d685f7acdfb7, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_plain_WheelCache_str_plain_WheelBuilder_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_WheelCache );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_WheelCache, tmp_assign_source_26 );
    tmp_import_globals_21 = ((PyModuleObject *)module_pip$commands$install)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_78cf780b09dc1ccf59c7d685f7acdfb7, tmp_import_globals_21, tmp_import_globals_21, const_tuple_str_plain_WheelCache_str_plain_WheelBuilder_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_WheelBuilder );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_WheelBuilder, tmp_assign_source_27 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 28;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_c2f8520385159b1df2ec4892d8ea77d8_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_logger, tmp_assign_source_28 );
    // Tried code:
    tmp_assign_source_29 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_RequirementCommand );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequirementCommand );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequirementCommand" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_1 );
    assert( tmp_pip$commands$install_class_creation_1__bases == NULL );
    tmp_pip$commands$install_class_creation_1__bases = tmp_assign_source_29;

    tmp_assign_source_30 = PyDict_New();
    assert( tmp_pip$commands$install_class_creation_1__class_decl_dict == NULL );
    tmp_pip$commands$install_class_creation_1__class_decl_dict = tmp_assign_source_30;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_pip$commands$install_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
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
    tmp_dict_name_1 = tmp_pip$commands$install_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_pip$commands$install_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
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
    tmp_subscribed_name_1 = tmp_pip$commands$install_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_pip$commands$install_class_creation_1__bases;

    tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 31;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_pip$commands$install_class_creation_1__metaclass == NULL );
    tmp_pip$commands$install_class_creation_1__metaclass = tmp_assign_source_31;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_pip$commands$install_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_pip$commands$install_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_hasattr_source_1 = tmp_pip$commands$install_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
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
    tmp_source_name_2 = tmp_pip$commands$install_class_creation_1__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_InstallCommand;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_pip$commands$install_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_pip$commands$install_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 31;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_32 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_pip$commands$install_class_creation_1__prepared == NULL );
    tmp_pip$commands$install_class_creation_1__prepared = tmp_assign_source_32;

    tmp_assign_source_33 = impl_class_1_InstallCommand_of_pip$commands$install( NULL, tmp_pip$commands$install_class_creation_1__bases, tmp_pip$commands$install_class_creation_1__class_decl_dict, tmp_pip$commands$install_class_creation_1__metaclass, tmp_pip$commands$install_class_creation_1__prepared );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_pip$commands$install, (Nuitka_StringObject *)const_str_plain_InstallCommand, tmp_assign_source_33 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_pip$commands$install_class_creation_1__bases );
    tmp_pip$commands$install_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$commands$install_class_creation_1__class_decl_dict );
    tmp_pip$commands$install_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$commands$install_class_creation_1__metaclass );
    tmp_pip$commands$install_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$commands$install_class_creation_1__prepared );
    tmp_pip$commands$install_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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
    Py_XDECREF( tmp_pip$commands$install_class_creation_1__bases );
    tmp_pip$commands$install_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_pip$commands$install_class_creation_1__class_decl_dict );
    tmp_pip$commands$install_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_pip$commands$install_class_creation_1__metaclass );
    tmp_pip$commands$install_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_pip$commands$install_class_creation_1__prepared );
    tmp_pip$commands$install_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_pip$commands$install );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
