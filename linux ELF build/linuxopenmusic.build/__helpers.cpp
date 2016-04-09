// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.hpp"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 10 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 10; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 10 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 10 * sizeof(PyObject *) );
            memcpy( python_pars + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 10 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 10 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 10; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 10 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 10 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 10 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 10 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            10
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 10 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS20( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 20; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 20 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 20; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 20 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 20 * sizeof(PyObject *) );
            memcpy( python_pars + 20, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 20 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 20 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 20; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 20 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 20 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 20, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 20 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 20 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (20 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 20 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (20 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 20 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            20
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 20 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}
/* Code to register embedded modules for meta path based loading if any. */
#if 1 == 1

#include "nuitka/unfreezing.hpp"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( OpenSSL );
MOD_INIT_DECL( OpenSSL$SSL );
MOD_INIT_DECL( OpenSSL$_util );
MOD_INIT_DECL( OpenSSL$crypto );
MOD_INIT_DECL( OpenSSL$rand );
MOD_INIT_DECL( OpenSSL$version );
MOD_INIT_DECL( bs4 );
MOD_INIT_DECL( bs4$builder );
MOD_INIT_DECL( bs4$builder$_html5lib );
MOD_INIT_DECL( bs4$builder$_htmlparser );
MOD_INIT_DECL( bs4$builder$_lxml );
MOD_INIT_DECL( bs4$dammit );
MOD_INIT_DECL( bs4$element );
MOD_INIT_DECL( chardet );
MOD_INIT_DECL( chardet$big5freq );
MOD_INIT_DECL( chardet$big5prober );
MOD_INIT_DECL( chardet$chardistribution );
MOD_INIT_DECL( chardet$charsetgroupprober );
MOD_INIT_DECL( chardet$charsetprober );
MOD_INIT_DECL( chardet$codingstatemachine );
MOD_INIT_DECL( chardet$compat );
MOD_INIT_DECL( chardet$constants );
MOD_INIT_DECL( chardet$cp949prober );
MOD_INIT_DECL( chardet$escprober );
MOD_INIT_DECL( chardet$escsm );
MOD_INIT_DECL( chardet$eucjpprober );
MOD_INIT_DECL( chardet$euckrfreq );
MOD_INIT_DECL( chardet$euckrprober );
MOD_INIT_DECL( chardet$euctwfreq );
MOD_INIT_DECL( chardet$euctwprober );
MOD_INIT_DECL( chardet$gb2312freq );
MOD_INIT_DECL( chardet$gb2312prober );
MOD_INIT_DECL( chardet$hebrewprober );
MOD_INIT_DECL( chardet$jisfreq );
MOD_INIT_DECL( chardet$jpcntx );
MOD_INIT_DECL( chardet$langbulgarianmodel );
MOD_INIT_DECL( chardet$langcyrillicmodel );
MOD_INIT_DECL( chardet$langgreekmodel );
MOD_INIT_DECL( chardet$langhebrewmodel );
MOD_INIT_DECL( chardet$langhungarianmodel );
MOD_INIT_DECL( chardet$langthaimodel );
MOD_INIT_DECL( chardet$latin1prober );
MOD_INIT_DECL( chardet$mbcharsetprober );
MOD_INIT_DECL( chardet$mbcsgroupprober );
MOD_INIT_DECL( chardet$mbcssm );
MOD_INIT_DECL( chardet$sbcharsetprober );
MOD_INIT_DECL( chardet$sbcsgroupprober );
MOD_INIT_DECL( chardet$sjisprober );
MOD_INIT_DECL( chardet$universaldetector );
MOD_INIT_DECL( chardet$utf8prober );
MOD_INIT_DECL( cryptography );
MOD_INIT_DECL( cryptography$__about__ );
MOD_INIT_DECL( cryptography$exceptions );
MOD_INIT_DECL( cryptography$hazmat );
MOD_INIT_DECL( cryptography$hazmat$bindings );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$_conditional );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$binding );
MOD_INIT_DECL( cryptography$utils );
MOD_INIT_DECL( grab );
MOD_INIT_DECL( grab$base );
MOD_INIT_DECL( grab$const );
MOD_INIT_DECL( grab$cookie );
MOD_INIT_DECL( grab$deprecated );
MOD_INIT_DECL( grab$document );
MOD_INIT_DECL( grab$error );
MOD_INIT_DECL( grab$proxylist );
MOD_INIT_DECL( grab$upload );
MOD_INIT_DECL( grab$util );
MOD_INIT_DECL( grab$util$warning );
MOD_INIT_DECL( humanize );
MOD_INIT_DECL( humanize$compat );
MOD_INIT_DECL( humanize$filesize );
MOD_INIT_DECL( humanize$i18n );
MOD_INIT_DECL( humanize$number );
MOD_INIT_DECL( humanize$time );
MOD_INIT_DECL( lxml );
MOD_INIT_DECL( lxml$cssselect );
MOD_INIT_DECL( lxml$html );
MOD_INIT_DECL( lxml$html$_setmixin );
MOD_INIT_DECL( lxml$html$clean );
MOD_INIT_DECL( lxml$html$defs );
MOD_INIT_DECL( packaging );
MOD_INIT_DECL( packaging$__about__ );
MOD_INIT_DECL( pip );
MOD_INIT_DECL( pip$_vendor );
MOD_INIT_DECL( pip$_vendor$_markerlib );
MOD_INIT_DECL( pip$_vendor$_markerlib$markers );
MOD_INIT_DECL( pip$_vendor$cachecontrol );
MOD_INIT_DECL( pip$_vendor$cachecontrol$adapter );
MOD_INIT_DECL( pip$_vendor$cachecontrol$cache );
MOD_INIT_DECL( pip$_vendor$cachecontrol$caches );
MOD_INIT_DECL( pip$_vendor$cachecontrol$caches$file_cache );
MOD_INIT_DECL( pip$_vendor$cachecontrol$caches$redis_cache );
MOD_INIT_DECL( pip$_vendor$cachecontrol$compat );
MOD_INIT_DECL( pip$_vendor$cachecontrol$controller );
MOD_INIT_DECL( pip$_vendor$cachecontrol$filewrapper );
MOD_INIT_DECL( pip$_vendor$cachecontrol$serialize );
MOD_INIT_DECL( pip$_vendor$cachecontrol$wrapper );
MOD_INIT_DECL( pip$_vendor$colorama );
MOD_INIT_DECL( pip$_vendor$colorama$ansi );
MOD_INIT_DECL( pip$_vendor$colorama$ansitowin32 );
MOD_INIT_DECL( pip$_vendor$colorama$initialise );
MOD_INIT_DECL( pip$_vendor$colorama$win32 );
MOD_INIT_DECL( pip$_vendor$colorama$winterm );
MOD_INIT_DECL( pip$_vendor$distlib );
MOD_INIT_DECL( pip$_vendor$distlib$_backport );
MOD_INIT_DECL( pip$_vendor$distlib$_backport$shutil );
MOD_INIT_DECL( pip$_vendor$distlib$_backport$sysconfig );
MOD_INIT_DECL( pip$_vendor$distlib$_backport$tarfile );
MOD_INIT_DECL( pip$_vendor$distlib$compat );
MOD_INIT_DECL( pip$_vendor$distlib$markers );
MOD_INIT_DECL( pip$_vendor$distlib$resources );
MOD_INIT_DECL( pip$_vendor$distlib$scripts );
MOD_INIT_DECL( pip$_vendor$distlib$util );
MOD_INIT_DECL( pip$_vendor$html5lib );
MOD_INIT_DECL( pip$_vendor$html5lib$constants );
MOD_INIT_DECL( pip$_vendor$html5lib$filters );
MOD_INIT_DECL( pip$_vendor$html5lib$filters$_base );
MOD_INIT_DECL( pip$_vendor$html5lib$filters$alphabeticalattributes );
MOD_INIT_DECL( pip$_vendor$html5lib$filters$inject_meta_charset );
MOD_INIT_DECL( pip$_vendor$html5lib$filters$optionaltags );
MOD_INIT_DECL( pip$_vendor$html5lib$filters$sanitizer );
MOD_INIT_DECL( pip$_vendor$html5lib$filters$whitespace );
MOD_INIT_DECL( pip$_vendor$html5lib$html5parser );
MOD_INIT_DECL( pip$_vendor$html5lib$ihatexml );
MOD_INIT_DECL( pip$_vendor$html5lib$inputstream );
MOD_INIT_DECL( pip$_vendor$html5lib$sanitizer );
MOD_INIT_DECL( pip$_vendor$html5lib$serializer );
MOD_INIT_DECL( pip$_vendor$html5lib$serializer$htmlserializer );
MOD_INIT_DECL( pip$_vendor$html5lib$tokenizer );
MOD_INIT_DECL( pip$_vendor$html5lib$treebuilders );
MOD_INIT_DECL( pip$_vendor$html5lib$treebuilders$_base );
MOD_INIT_DECL( pip$_vendor$html5lib$treebuilders$dom );
MOD_INIT_DECL( pip$_vendor$html5lib$treebuilders$etree );
MOD_INIT_DECL( pip$_vendor$html5lib$treebuilders$etree_lxml );
MOD_INIT_DECL( pip$_vendor$html5lib$treewalkers );
MOD_INIT_DECL( pip$_vendor$html5lib$treewalkers$_base );
MOD_INIT_DECL( pip$_vendor$html5lib$treewalkers$etree );
MOD_INIT_DECL( pip$_vendor$html5lib$treewalkers$genshistream );
MOD_INIT_DECL( pip$_vendor$html5lib$treewalkers$lxmletree );
MOD_INIT_DECL( pip$_vendor$html5lib$trie );
MOD_INIT_DECL( pip$_vendor$html5lib$trie$_base );
MOD_INIT_DECL( pip$_vendor$html5lib$trie$datrie );
MOD_INIT_DECL( pip$_vendor$html5lib$trie$py );
MOD_INIT_DECL( pip$_vendor$html5lib$utils );
MOD_INIT_DECL( pip$_vendor$ipaddress );
MOD_INIT_DECL( pip$_vendor$lockfile );
MOD_INIT_DECL( pip$_vendor$lockfile$linklockfile );
MOD_INIT_DECL( pip$_vendor$lockfile$mkdirlockfile );
MOD_INIT_DECL( pip$_vendor$lockfile$sqlitelockfile );
MOD_INIT_DECL( pip$_vendor$packaging );
MOD_INIT_DECL( pip$_vendor$packaging$__about__ );
MOD_INIT_DECL( pip$_vendor$packaging$_compat );
MOD_INIT_DECL( pip$_vendor$packaging$_structures );
MOD_INIT_DECL( pip$_vendor$packaging$specifiers );
MOD_INIT_DECL( pip$_vendor$packaging$utils );
MOD_INIT_DECL( pip$_vendor$packaging$version );
MOD_INIT_DECL( pip$_vendor$pkg_resources );
MOD_INIT_DECL( pip$_vendor$progress );
MOD_INIT_DECL( pip$_vendor$progress$bar );
MOD_INIT_DECL( pip$_vendor$progress$helpers );
MOD_INIT_DECL( pip$_vendor$progress$spinner );
MOD_INIT_DECL( pip$_vendor$requests );
MOD_INIT_DECL( pip$_vendor$requests$adapters );
MOD_INIT_DECL( pip$_vendor$requests$api );
MOD_INIT_DECL( pip$_vendor$requests$auth );
MOD_INIT_DECL( pip$_vendor$requests$certs );
MOD_INIT_DECL( pip$_vendor$requests$compat );
MOD_INIT_DECL( pip$_vendor$requests$cookies );
MOD_INIT_DECL( pip$_vendor$requests$exceptions );
MOD_INIT_DECL( pip$_vendor$requests$hooks );
MOD_INIT_DECL( pip$_vendor$requests$models );
MOD_INIT_DECL( pip$_vendor$requests$packages );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$big5freq );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$big5prober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$chardistribution );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$charsetgroupprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$charsetprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$codingstatemachine );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$compat );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$constants );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$cp949prober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$escprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$escsm );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$eucjpprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$euckrfreq );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$euckrprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$euctwfreq );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$euctwprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$gb2312freq );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$gb2312prober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$hebrewprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$jisfreq );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$jpcntx );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$langbulgarianmodel );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$langcyrillicmodel );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$langgreekmodel );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$langhebrewmodel );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$langhungarianmodel );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$langthaimodel );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$latin1prober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$mbcharsetprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$mbcsgroupprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$mbcssm );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$sbcharsetprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$sbcsgroupprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$sjisprober );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$universaldetector );
MOD_INIT_DECL( pip$_vendor$requests$packages$chardet$utf8prober );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3 );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$_collections );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$connection );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$connectionpool );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$contrib );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$contrib$pyopenssl );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$exceptions );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$fields );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$filepost );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$packages );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$packages$ordered_dict );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$packages$six );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$packages$ssl_match_hostname );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$packages$ssl_match_hostname$_implementation );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$poolmanager );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$request );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$response );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util$connection );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util$request );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util$response );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util$retry );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util$ssl_ );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util$timeout );
MOD_INIT_DECL( pip$_vendor$requests$packages$urllib3$util$url );
MOD_INIT_DECL( pip$_vendor$requests$sessions );
MOD_INIT_DECL( pip$_vendor$requests$status_codes );
MOD_INIT_DECL( pip$_vendor$requests$structures );
MOD_INIT_DECL( pip$_vendor$requests$utils );
MOD_INIT_DECL( pip$_vendor$retrying );
MOD_INIT_DECL( pip$_vendor$six );
MOD_INIT_DECL( pip$basecommand );
MOD_INIT_DECL( pip$baseparser );
MOD_INIT_DECL( pip$cmdoptions );
MOD_INIT_DECL( pip$commands );
MOD_INIT_DECL( pip$commands$completion );
MOD_INIT_DECL( pip$commands$download );
MOD_INIT_DECL( pip$commands$freeze );
MOD_INIT_DECL( pip$commands$hash );
MOD_INIT_DECL( pip$commands$help );
MOD_INIT_DECL( pip$commands$install );
MOD_INIT_DECL( pip$commands$list );
MOD_INIT_DECL( pip$commands$search );
MOD_INIT_DECL( pip$commands$show );
MOD_INIT_DECL( pip$commands$uninstall );
MOD_INIT_DECL( pip$commands$wheel );
MOD_INIT_DECL( pip$compat );
MOD_INIT_DECL( pip$compat$dictconfig );
MOD_INIT_DECL( pip$compat$ordereddict );
MOD_INIT_DECL( pip$download );
MOD_INIT_DECL( pip$exceptions );
MOD_INIT_DECL( pip$index );
MOD_INIT_DECL( pip$locations );
MOD_INIT_DECL( pip$models );
MOD_INIT_DECL( pip$models$index );
MOD_INIT_DECL( pip$operations );
MOD_INIT_DECL( pip$operations$freeze );
MOD_INIT_DECL( pip$pep425tags );
MOD_INIT_DECL( pip$req );
MOD_INIT_DECL( pip$req$req_file );
MOD_INIT_DECL( pip$req$req_install );
MOD_INIT_DECL( pip$req$req_set );
MOD_INIT_DECL( pip$req$req_uninstall );
MOD_INIT_DECL( pip$status_codes );
MOD_INIT_DECL( pip$utils );
MOD_INIT_DECL( pip$utils$appdirs );
MOD_INIT_DECL( pip$utils$build );
MOD_INIT_DECL( pip$utils$deprecation );
MOD_INIT_DECL( pip$utils$encoding );
MOD_INIT_DECL( pip$utils$filesystem );
MOD_INIT_DECL( pip$utils$hashes );
MOD_INIT_DECL( pip$utils$logging );
MOD_INIT_DECL( pip$utils$outdated );
MOD_INIT_DECL( pip$utils$setuptools_build );
MOD_INIT_DECL( pip$utils$ui );
MOD_INIT_DECL( pip$vcs );
MOD_INIT_DECL( pip$vcs$bazaar );
MOD_INIT_DECL( pip$vcs$git );
MOD_INIT_DECL( pip$vcs$mercurial );
MOD_INIT_DECL( pip$vcs$subversion );
MOD_INIT_DECL( pip$wheel );
MOD_INIT_DECL( pkg_resources );
MOD_INIT_DECL( pkg_resources$extern );
MOD_INIT_DECL( pyasn1 );
MOD_INIT_DECL( pyasn1$codec );
MOD_INIT_DECL( pyasn1$codec$ber );
MOD_INIT_DECL( pyasn1$codec$ber$decoder );
MOD_INIT_DECL( pyasn1$codec$ber$eoo );
MOD_INIT_DECL( pyasn1$codec$cer );
MOD_INIT_DECL( pyasn1$codec$cer$decoder );
MOD_INIT_DECL( pyasn1$codec$der );
MOD_INIT_DECL( pyasn1$codec$der$decoder );
MOD_INIT_DECL( pyasn1$compat );
MOD_INIT_DECL( pyasn1$compat$octets );
MOD_INIT_DECL( pyasn1$debug );
MOD_INIT_DECL( pyasn1$error );
MOD_INIT_DECL( pyasn1$type );
MOD_INIT_DECL( pyasn1$type$base );
MOD_INIT_DECL( pyasn1$type$char );
MOD_INIT_DECL( pyasn1$type$constraint );
MOD_INIT_DECL( pyasn1$type$error );
MOD_INIT_DECL( pyasn1$type$namedtype );
MOD_INIT_DECL( pyasn1$type$namedval );
MOD_INIT_DECL( pyasn1$type$tag );
MOD_INIT_DECL( pyasn1$type$tagmap );
MOD_INIT_DECL( pyasn1$type$univ );
MOD_INIT_DECL( pyasn1$type$useful );
MOD_INIT_DECL( selection );
MOD_INIT_DECL( selection$backend );
MOD_INIT_DECL( selection$base );
MOD_INIT_DECL( selection$error );
MOD_INIT_DECL( setuptools );
MOD_INIT_DECL( setuptools$archive_util );
MOD_INIT_DECL( setuptools$command );
MOD_INIT_DECL( setuptools$command$bdist_egg );
MOD_INIT_DECL( setuptools$command$easy_install );
MOD_INIT_DECL( setuptools$command$egg_info );
MOD_INIT_DECL( setuptools$command$install_scripts );
MOD_INIT_DECL( setuptools$command$sdist );
MOD_INIT_DECL( setuptools$command$setopt );
MOD_INIT_DECL( setuptools$depends );
MOD_INIT_DECL( setuptools$dist );
MOD_INIT_DECL( setuptools$extension );
MOD_INIT_DECL( setuptools$extern );
MOD_INIT_DECL( setuptools$msvc9_support );
MOD_INIT_DECL( setuptools$package_index );
MOD_INIT_DECL( setuptools$py26compat );
MOD_INIT_DECL( setuptools$py27compat );
MOD_INIT_DECL( setuptools$py31compat );
MOD_INIT_DECL( setuptools$sandbox );
MOD_INIT_DECL( setuptools$ssl_support );
MOD_INIT_DECL( setuptools$unicode_utils );
MOD_INIT_DECL( setuptools$utils );
MOD_INIT_DECL( setuptools$version );
MOD_INIT_DECL( setuptools$windows_support );
MOD_INIT_DECL( simplejson );
MOD_INIT_DECL( simplejson$compat );
MOD_INIT_DECL( simplejson$decoder );
MOD_INIT_DECL( simplejson$encoder );
MOD_INIT_DECL( simplejson$ordered_dict );
MOD_INIT_DECL( simplejson$scanner );
MOD_INIT_DECL( six );
MOD_INIT_DECL( transliterate );
MOD_INIT_DECL( transliterate$backports );
MOD_INIT_DECL( transliterate$backports$collections );
MOD_INIT_DECL( transliterate$base );
MOD_INIT_DECL( transliterate$conf );
MOD_INIT_DECL( transliterate$defaults );
MOD_INIT_DECL( transliterate$discover );
MOD_INIT_DECL( transliterate$exceptions );
MOD_INIT_DECL( transliterate$helpers );
MOD_INIT_DECL( transliterate$utils );
MOD_INIT_DECL( urllib3 );
MOD_INIT_DECL( urllib3$_collections );
MOD_INIT_DECL( urllib3$connection );
MOD_INIT_DECL( urllib3$connectionpool );
MOD_INIT_DECL( urllib3$exceptions );
MOD_INIT_DECL( urllib3$fields );
MOD_INIT_DECL( urllib3$filepost );
MOD_INIT_DECL( urllib3$packages );
MOD_INIT_DECL( urllib3$packages$ordered_dict );
MOD_INIT_DECL( urllib3$packages$six );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname$_implementation );
MOD_INIT_DECL( urllib3$poolmanager );
MOD_INIT_DECL( urllib3$request );
MOD_INIT_DECL( urllib3$response );
MOD_INIT_DECL( urllib3$util );
MOD_INIT_DECL( urllib3$util$connection );
MOD_INIT_DECL( urllib3$util$request );
MOD_INIT_DECL( urllib3$util$response );
MOD_INIT_DECL( urllib3$util$retry );
MOD_INIT_DECL( urllib3$util$ssl_ );
MOD_INIT_DECL( urllib3$util$timeout );
MOD_INIT_DECL( urllib3$util$url );
MOD_INIT_DECL( weblib );
MOD_INIT_DECL( weblib$const );
MOD_INIT_DECL( weblib$encoding );
MOD_INIT_DECL( weblib$error );
MOD_INIT_DECL( weblib$etree );
MOD_INIT_DECL( weblib$files );
MOD_INIT_DECL( weblib$html );
MOD_INIT_DECL( weblib$http );
MOD_INIT_DECL( weblib$logs );
MOD_INIT_DECL( weblib$py3k_support );
MOD_INIT_DECL( weblib$rex );
MOD_INIT_DECL( weblib$structured );
MOD_INIT_DECL( weblib$text );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"OpenSSL", MOD_INIT_NAME( OpenSSL ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"OpenSSL.SSL", MOD_INIT_NAME( OpenSSL$SSL ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL._util", MOD_INIT_NAME( OpenSSL$_util ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL.crypto", MOD_INIT_NAME( OpenSSL$crypto ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL.rand", MOD_INIT_NAME( OpenSSL$rand ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenSSL.version", MOD_INIT_NAME( OpenSSL$version ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bs4", MOD_INIT_NAME( bs4 ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"bs4.builder", MOD_INIT_NAME( bs4$builder ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"bs4.builder._html5lib", MOD_INIT_NAME( bs4$builder$_html5lib ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bs4.builder._htmlparser", MOD_INIT_NAME( bs4$builder$_htmlparser ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bs4.builder._lxml", MOD_INIT_NAME( bs4$builder$_lxml ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bs4.dammit", MOD_INIT_NAME( bs4$dammit ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bs4.element", MOD_INIT_NAME( bs4$element ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet", MOD_INIT_NAME( chardet ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"chardet.big5freq", MOD_INIT_NAME( chardet$big5freq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.big5prober", MOD_INIT_NAME( chardet$big5prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.chardistribution", MOD_INIT_NAME( chardet$chardistribution ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.charsetgroupprober", MOD_INIT_NAME( chardet$charsetgroupprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.charsetprober", MOD_INIT_NAME( chardet$charsetprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.codingstatemachine", MOD_INIT_NAME( chardet$codingstatemachine ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.compat", MOD_INIT_NAME( chardet$compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.constants", MOD_INIT_NAME( chardet$constants ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.cp949prober", MOD_INIT_NAME( chardet$cp949prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.escprober", MOD_INIT_NAME( chardet$escprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.escsm", MOD_INIT_NAME( chardet$escsm ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.eucjpprober", MOD_INIT_NAME( chardet$eucjpprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euckrfreq", MOD_INIT_NAME( chardet$euckrfreq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euckrprober", MOD_INIT_NAME( chardet$euckrprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euctwfreq", MOD_INIT_NAME( chardet$euctwfreq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euctwprober", MOD_INIT_NAME( chardet$euctwprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.gb2312freq", MOD_INIT_NAME( chardet$gb2312freq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.gb2312prober", MOD_INIT_NAME( chardet$gb2312prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.hebrewprober", MOD_INIT_NAME( chardet$hebrewprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.jisfreq", MOD_INIT_NAME( chardet$jisfreq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.jpcntx", MOD_INIT_NAME( chardet$jpcntx ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langbulgarianmodel", MOD_INIT_NAME( chardet$langbulgarianmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langcyrillicmodel", MOD_INIT_NAME( chardet$langcyrillicmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langgreekmodel", MOD_INIT_NAME( chardet$langgreekmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langhebrewmodel", MOD_INIT_NAME( chardet$langhebrewmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langhungarianmodel", MOD_INIT_NAME( chardet$langhungarianmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langthaimodel", MOD_INIT_NAME( chardet$langthaimodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.latin1prober", MOD_INIT_NAME( chardet$latin1prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcharsetprober", MOD_INIT_NAME( chardet$mbcharsetprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcsgroupprober", MOD_INIT_NAME( chardet$mbcsgroupprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcssm", MOD_INIT_NAME( chardet$mbcssm ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sbcharsetprober", MOD_INIT_NAME( chardet$sbcharsetprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sbcsgroupprober", MOD_INIT_NAME( chardet$sbcsgroupprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sjisprober", MOD_INIT_NAME( chardet$sjisprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.universaldetector", MOD_INIT_NAME( chardet$universaldetector ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.utf8prober", MOD_INIT_NAME( chardet$utf8prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography", MOD_INIT_NAME( cryptography ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.__about__", MOD_INIT_NAME( cryptography$__about__ ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.exceptions", MOD_INIT_NAME( cryptography$exceptions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat", MOD_INIT_NAME( cryptography$hazmat ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.bindings", MOD_INIT_NAME( cryptography$hazmat$bindings ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.bindings.openssl", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cryptography.hazmat.bindings.openssl._conditional", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$_conditional ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.hazmat.bindings.openssl.binding", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$binding ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography.utils", MOD_INIT_NAME( cryptography$utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab", MOD_INIT_NAME( grab ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"grab.base", MOD_INIT_NAME( grab$base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab.const", MOD_INIT_NAME( grab$const ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab.cookie", MOD_INIT_NAME( grab$cookie ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab.deprecated", MOD_INIT_NAME( grab$deprecated ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab.document", MOD_INIT_NAME( grab$document ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab.error", MOD_INIT_NAME( grab$error ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab.proxylist", MOD_INIT_NAME( grab$proxylist ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab.upload", MOD_INIT_NAME( grab$upload ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"grab.util", MOD_INIT_NAME( grab$util ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"grab.util.warning", MOD_INIT_NAME( grab$util$warning ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"humanize", MOD_INIT_NAME( humanize ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"humanize.compat", MOD_INIT_NAME( humanize$compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"humanize.filesize", MOD_INIT_NAME( humanize$filesize ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"humanize.i18n", MOD_INIT_NAME( humanize$i18n ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"humanize.number", MOD_INIT_NAME( humanize$number ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"humanize.time", MOD_INIT_NAME( humanize$time ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"lxml", MOD_INIT_NAME( lxml ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"lxml.cssselect", MOD_INIT_NAME( lxml$cssselect ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"lxml.html", MOD_INIT_NAME( lxml$html ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"lxml.html._setmixin", MOD_INIT_NAME( lxml$html$_setmixin ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"lxml.html.clean", MOD_INIT_NAME( lxml$html$clean ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"lxml.html.defs", MOD_INIT_NAME( lxml$html$defs ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"packaging", MOD_INIT_NAME( packaging ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"packaging.__about__", MOD_INIT_NAME( packaging$__about__ ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip", MOD_INIT_NAME( pip ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor", MOD_INIT_NAME( pip$_vendor ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor._markerlib", MOD_INIT_NAME( pip$_vendor$_markerlib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor._markerlib.markers", MOD_INIT_NAME( pip$_vendor$_markerlib$markers ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol", MOD_INIT_NAME( pip$_vendor$cachecontrol ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.cachecontrol.adapter", MOD_INIT_NAME( pip$_vendor$cachecontrol$adapter ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol.cache", MOD_INIT_NAME( pip$_vendor$cachecontrol$cache ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol.caches", MOD_INIT_NAME( pip$_vendor$cachecontrol$caches ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.cachecontrol.caches.file_cache", MOD_INIT_NAME( pip$_vendor$cachecontrol$caches$file_cache ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol.caches.redis_cache", MOD_INIT_NAME( pip$_vendor$cachecontrol$caches$redis_cache ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol.compat", MOD_INIT_NAME( pip$_vendor$cachecontrol$compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol.controller", MOD_INIT_NAME( pip$_vendor$cachecontrol$controller ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol.filewrapper", MOD_INIT_NAME( pip$_vendor$cachecontrol$filewrapper ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol.serialize", MOD_INIT_NAME( pip$_vendor$cachecontrol$serialize ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.cachecontrol.wrapper", MOD_INIT_NAME( pip$_vendor$cachecontrol$wrapper ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.colorama", MOD_INIT_NAME( pip$_vendor$colorama ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.colorama.ansi", MOD_INIT_NAME( pip$_vendor$colorama$ansi ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.colorama.ansitowin32", MOD_INIT_NAME( pip$_vendor$colorama$ansitowin32 ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.colorama.initialise", MOD_INIT_NAME( pip$_vendor$colorama$initialise ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.colorama.win32", MOD_INIT_NAME( pip$_vendor$colorama$win32 ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.colorama.winterm", MOD_INIT_NAME( pip$_vendor$colorama$winterm ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.distlib", MOD_INIT_NAME( pip$_vendor$distlib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.distlib._backport", MOD_INIT_NAME( pip$_vendor$distlib$_backport ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.distlib._backport.shutil", MOD_INIT_NAME( pip$_vendor$distlib$_backport$shutil ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.distlib._backport.sysconfig", MOD_INIT_NAME( pip$_vendor$distlib$_backport$sysconfig ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.distlib._backport.tarfile", MOD_INIT_NAME( pip$_vendor$distlib$_backport$tarfile ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.distlib.compat", MOD_INIT_NAME( pip$_vendor$distlib$compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.distlib.markers", MOD_INIT_NAME( pip$_vendor$distlib$markers ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.distlib.resources", MOD_INIT_NAME( pip$_vendor$distlib$resources ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.distlib.scripts", MOD_INIT_NAME( pip$_vendor$distlib$scripts ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.distlib.util", MOD_INIT_NAME( pip$_vendor$distlib$util ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib", MOD_INIT_NAME( pip$_vendor$html5lib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.html5lib.constants", MOD_INIT_NAME( pip$_vendor$html5lib$constants ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.filters", MOD_INIT_NAME( pip$_vendor$html5lib$filters ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.html5lib.filters._base", MOD_INIT_NAME( pip$_vendor$html5lib$filters$_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.filters.alphabeticalattributes", MOD_INIT_NAME( pip$_vendor$html5lib$filters$alphabeticalattributes ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.filters.inject_meta_charset", MOD_INIT_NAME( pip$_vendor$html5lib$filters$inject_meta_charset ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.filters.optionaltags", MOD_INIT_NAME( pip$_vendor$html5lib$filters$optionaltags ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.filters.sanitizer", MOD_INIT_NAME( pip$_vendor$html5lib$filters$sanitizer ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.filters.whitespace", MOD_INIT_NAME( pip$_vendor$html5lib$filters$whitespace ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.html5parser", MOD_INIT_NAME( pip$_vendor$html5lib$html5parser ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.ihatexml", MOD_INIT_NAME( pip$_vendor$html5lib$ihatexml ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.inputstream", MOD_INIT_NAME( pip$_vendor$html5lib$inputstream ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.sanitizer", MOD_INIT_NAME( pip$_vendor$html5lib$sanitizer ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.serializer", MOD_INIT_NAME( pip$_vendor$html5lib$serializer ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.html5lib.serializer.htmlserializer", MOD_INIT_NAME( pip$_vendor$html5lib$serializer$htmlserializer ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.tokenizer", MOD_INIT_NAME( pip$_vendor$html5lib$tokenizer ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.treebuilders", MOD_INIT_NAME( pip$_vendor$html5lib$treebuilders ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.html5lib.treebuilders._base", MOD_INIT_NAME( pip$_vendor$html5lib$treebuilders$_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.treebuilders.dom", MOD_INIT_NAME( pip$_vendor$html5lib$treebuilders$dom ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.treebuilders.etree", MOD_INIT_NAME( pip$_vendor$html5lib$treebuilders$etree ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.treebuilders.etree_lxml", MOD_INIT_NAME( pip$_vendor$html5lib$treebuilders$etree_lxml ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.treewalkers", MOD_INIT_NAME( pip$_vendor$html5lib$treewalkers ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.html5lib.treewalkers._base", MOD_INIT_NAME( pip$_vendor$html5lib$treewalkers$_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.treewalkers.etree", MOD_INIT_NAME( pip$_vendor$html5lib$treewalkers$etree ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.treewalkers.genshistream", MOD_INIT_NAME( pip$_vendor$html5lib$treewalkers$genshistream ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.treewalkers.lxmletree", MOD_INIT_NAME( pip$_vendor$html5lib$treewalkers$lxmletree ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.trie", MOD_INIT_NAME( pip$_vendor$html5lib$trie ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.html5lib.trie._base", MOD_INIT_NAME( pip$_vendor$html5lib$trie$_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.trie.datrie", MOD_INIT_NAME( pip$_vendor$html5lib$trie$datrie ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.trie.py", MOD_INIT_NAME( pip$_vendor$html5lib$trie$py ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.html5lib.utils", MOD_INIT_NAME( pip$_vendor$html5lib$utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.ipaddress", MOD_INIT_NAME( pip$_vendor$ipaddress ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.lockfile", MOD_INIT_NAME( pip$_vendor$lockfile ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.lockfile.linklockfile", MOD_INIT_NAME( pip$_vendor$lockfile$linklockfile ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.lockfile.mkdirlockfile", MOD_INIT_NAME( pip$_vendor$lockfile$mkdirlockfile ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.lockfile.sqlitelockfile", MOD_INIT_NAME( pip$_vendor$lockfile$sqlitelockfile ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.packaging", MOD_INIT_NAME( pip$_vendor$packaging ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.packaging.__about__", MOD_INIT_NAME( pip$_vendor$packaging$__about__ ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.packaging._compat", MOD_INIT_NAME( pip$_vendor$packaging$_compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.packaging._structures", MOD_INIT_NAME( pip$_vendor$packaging$_structures ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.packaging.specifiers", MOD_INIT_NAME( pip$_vendor$packaging$specifiers ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.packaging.utils", MOD_INIT_NAME( pip$_vendor$packaging$utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.packaging.version", MOD_INIT_NAME( pip$_vendor$packaging$version ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.pkg_resources", MOD_INIT_NAME( pip$_vendor$pkg_resources ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.progress", MOD_INIT_NAME( pip$_vendor$progress ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.progress.bar", MOD_INIT_NAME( pip$_vendor$progress$bar ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.progress.helpers", MOD_INIT_NAME( pip$_vendor$progress$helpers ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.progress.spinner", MOD_INIT_NAME( pip$_vendor$progress$spinner ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests", MOD_INIT_NAME( pip$_vendor$requests ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.requests.adapters", MOD_INIT_NAME( pip$_vendor$requests$adapters ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.api", MOD_INIT_NAME( pip$_vendor$requests$api ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.auth", MOD_INIT_NAME( pip$_vendor$requests$auth ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.certs", MOD_INIT_NAME( pip$_vendor$requests$certs ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.compat", MOD_INIT_NAME( pip$_vendor$requests$compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.cookies", MOD_INIT_NAME( pip$_vendor$requests$cookies ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.exceptions", MOD_INIT_NAME( pip$_vendor$requests$exceptions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.hooks", MOD_INIT_NAME( pip$_vendor$requests$hooks ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.models", MOD_INIT_NAME( pip$_vendor$requests$models ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages", MOD_INIT_NAME( pip$_vendor$requests$packages ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.requests.packages.chardet", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.requests.packages.chardet.big5freq", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$big5freq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.big5prober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$big5prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.chardistribution", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$chardistribution ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.charsetgroupprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$charsetgroupprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.charsetprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$charsetprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.codingstatemachine", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$codingstatemachine ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.compat", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.constants", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$constants ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.cp949prober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$cp949prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.escprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$escprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.escsm", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$escsm ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.eucjpprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$eucjpprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.euckrfreq", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$euckrfreq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.euckrprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$euckrprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.euctwfreq", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$euctwfreq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.euctwprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$euctwprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.gb2312freq", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$gb2312freq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.gb2312prober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$gb2312prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.hebrewprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$hebrewprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.jisfreq", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$jisfreq ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.jpcntx", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$jpcntx ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.langbulgarianmodel", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$langbulgarianmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.langcyrillicmodel", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$langcyrillicmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.langgreekmodel", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$langgreekmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.langhebrewmodel", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$langhebrewmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.langhungarianmodel", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$langhungarianmodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.langthaimodel", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$langthaimodel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.latin1prober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$latin1prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.mbcharsetprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$mbcharsetprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.mbcsgroupprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$mbcsgroupprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.mbcssm", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$mbcssm ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.sbcharsetprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$sbcharsetprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.sbcsgroupprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$sbcsgroupprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.sjisprober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$sjisprober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.universaldetector", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$universaldetector ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.chardet.utf8prober", MOD_INIT_NAME( pip$_vendor$requests$packages$chardet$utf8prober ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3 ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.requests.packages.urllib3._collections", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$_collections ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.connection", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$connection ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.connectionpool", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$connectionpool ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.contrib", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$contrib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.requests.packages.urllib3.contrib.pyopenssl", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$contrib$pyopenssl ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.exceptions", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$exceptions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.fields", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$fields ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.filepost", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$filepost ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.packages", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$packages ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.requests.packages.urllib3.packages.ordered_dict", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$packages$ordered_dict ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.packages.six", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$packages$six ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.packages.ssl_match_hostname", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$packages$ssl_match_hostname ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.requests.packages.urllib3.packages.ssl_match_hostname._implementation", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$packages$ssl_match_hostname$_implementation ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.poolmanager", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$poolmanager ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.request", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$request ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.response", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$response ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.util", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$util ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip._vendor.requests.packages.urllib3.util.connection", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$util$connection ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.util.request", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$util$request ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.util.response", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$util$response ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.util.retry", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$util$retry ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.util.ssl_", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$util$ssl_ ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.util.timeout", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$util$timeout ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.packages.urllib3.util.url", MOD_INIT_NAME( pip$_vendor$requests$packages$urllib3$util$url ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.sessions", MOD_INIT_NAME( pip$_vendor$requests$sessions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.status_codes", MOD_INIT_NAME( pip$_vendor$requests$status_codes ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.structures", MOD_INIT_NAME( pip$_vendor$requests$structures ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.requests.utils", MOD_INIT_NAME( pip$_vendor$requests$utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.retrying", MOD_INIT_NAME( pip$_vendor$retrying ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip._vendor.six", MOD_INIT_NAME( pip$_vendor$six ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.basecommand", MOD_INIT_NAME( pip$basecommand ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.baseparser", MOD_INIT_NAME( pip$baseparser ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.cmdoptions", MOD_INIT_NAME( pip$cmdoptions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands", MOD_INIT_NAME( pip$commands ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip.commands.completion", MOD_INIT_NAME( pip$commands$completion ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.download", MOD_INIT_NAME( pip$commands$download ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.freeze", MOD_INIT_NAME( pip$commands$freeze ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.hash", MOD_INIT_NAME( pip$commands$hash ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.help", MOD_INIT_NAME( pip$commands$help ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.install", MOD_INIT_NAME( pip$commands$install ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.list", MOD_INIT_NAME( pip$commands$list ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.search", MOD_INIT_NAME( pip$commands$search ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.show", MOD_INIT_NAME( pip$commands$show ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.uninstall", MOD_INIT_NAME( pip$commands$uninstall ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.commands.wheel", MOD_INIT_NAME( pip$commands$wheel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.compat", MOD_INIT_NAME( pip$compat ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip.compat.dictconfig", MOD_INIT_NAME( pip$compat$dictconfig ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.compat.ordereddict", MOD_INIT_NAME( pip$compat$ordereddict ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.download", MOD_INIT_NAME( pip$download ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.exceptions", MOD_INIT_NAME( pip$exceptions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.index", MOD_INIT_NAME( pip$index ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.locations", MOD_INIT_NAME( pip$locations ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.models", MOD_INIT_NAME( pip$models ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip.models.index", MOD_INIT_NAME( pip$models$index ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.operations", MOD_INIT_NAME( pip$operations ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip.operations.freeze", MOD_INIT_NAME( pip$operations$freeze ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.pep425tags", MOD_INIT_NAME( pip$pep425tags ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.req", MOD_INIT_NAME( pip$req ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip.req.req_file", MOD_INIT_NAME( pip$req$req_file ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.req.req_install", MOD_INIT_NAME( pip$req$req_install ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.req.req_set", MOD_INIT_NAME( pip$req$req_set ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.req.req_uninstall", MOD_INIT_NAME( pip$req$req_uninstall ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.status_codes", MOD_INIT_NAME( pip$status_codes ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils", MOD_INIT_NAME( pip$utils ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip.utils.appdirs", MOD_INIT_NAME( pip$utils$appdirs ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.build", MOD_INIT_NAME( pip$utils$build ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.deprecation", MOD_INIT_NAME( pip$utils$deprecation ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.encoding", MOD_INIT_NAME( pip$utils$encoding ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.filesystem", MOD_INIT_NAME( pip$utils$filesystem ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.hashes", MOD_INIT_NAME( pip$utils$hashes ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.logging", MOD_INIT_NAME( pip$utils$logging ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.outdated", MOD_INIT_NAME( pip$utils$outdated ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.setuptools_build", MOD_INIT_NAME( pip$utils$setuptools_build ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.utils.ui", MOD_INIT_NAME( pip$utils$ui ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.vcs", MOD_INIT_NAME( pip$vcs ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pip.vcs.bazaar", MOD_INIT_NAME( pip$vcs$bazaar ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.vcs.git", MOD_INIT_NAME( pip$vcs$git ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.vcs.mercurial", MOD_INIT_NAME( pip$vcs$mercurial ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.vcs.subversion", MOD_INIT_NAME( pip$vcs$subversion ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pip.wheel", MOD_INIT_NAME( pip$wheel ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pkg_resources", MOD_INIT_NAME( pkg_resources ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pkg_resources.extern", MOD_INIT_NAME( pkg_resources$extern ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyasn1", MOD_INIT_NAME( pyasn1 ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyasn1.codec", MOD_INIT_NAME( pyasn1$codec ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyasn1.codec.ber", MOD_INIT_NAME( pyasn1$codec$ber ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyasn1.codec.ber.decoder", MOD_INIT_NAME( pyasn1$codec$ber$decoder ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.ber.eoo", MOD_INIT_NAME( pyasn1$codec$ber$eoo ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.cer", MOD_INIT_NAME( pyasn1$codec$cer ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyasn1.codec.cer.decoder", MOD_INIT_NAME( pyasn1$codec$cer$decoder ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.codec.der", MOD_INIT_NAME( pyasn1$codec$der ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyasn1.codec.der.decoder", MOD_INIT_NAME( pyasn1$codec$der$decoder ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.compat", MOD_INIT_NAME( pyasn1$compat ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyasn1.compat.octets", MOD_INIT_NAME( pyasn1$compat$octets ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.debug", MOD_INIT_NAME( pyasn1$debug ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.error", MOD_INIT_NAME( pyasn1$error ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type", MOD_INIT_NAME( pyasn1$type ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyasn1.type.base", MOD_INIT_NAME( pyasn1$type$base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.char", MOD_INIT_NAME( pyasn1$type$char ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.constraint", MOD_INIT_NAME( pyasn1$type$constraint ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.error", MOD_INIT_NAME( pyasn1$type$error ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.namedtype", MOD_INIT_NAME( pyasn1$type$namedtype ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.namedval", MOD_INIT_NAME( pyasn1$type$namedval ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.tag", MOD_INIT_NAME( pyasn1$type$tag ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.tagmap", MOD_INIT_NAME( pyasn1$type$tagmap ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.univ", MOD_INIT_NAME( pyasn1$type$univ ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyasn1.type.useful", MOD_INIT_NAME( pyasn1$type$useful ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"selection", MOD_INIT_NAME( selection ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"selection.backend", MOD_INIT_NAME( selection$backend ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"selection.base", MOD_INIT_NAME( selection$base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"selection.error", MOD_INIT_NAME( selection$error ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools", MOD_INIT_NAME( setuptools ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.archive_util", MOD_INIT_NAME( setuptools$archive_util ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command", MOD_INIT_NAME( setuptools$command ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.command.bdist_egg", MOD_INIT_NAME( setuptools$command$bdist_egg ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.easy_install", MOD_INIT_NAME( setuptools$command$easy_install ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.egg_info", MOD_INIT_NAME( setuptools$command$egg_info ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.install_scripts", MOD_INIT_NAME( setuptools$command$install_scripts ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.sdist", MOD_INIT_NAME( setuptools$command$sdist ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.setopt", MOD_INIT_NAME( setuptools$command$setopt ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.depends", MOD_INIT_NAME( setuptools$depends ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.dist", MOD_INIT_NAME( setuptools$dist ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.extension", MOD_INIT_NAME( setuptools$extension ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.extern", MOD_INIT_NAME( setuptools$extern ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.msvc9_support", MOD_INIT_NAME( setuptools$msvc9_support ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.package_index", MOD_INIT_NAME( setuptools$package_index ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.py26compat", MOD_INIT_NAME( setuptools$py26compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.py27compat", MOD_INIT_NAME( setuptools$py27compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.py31compat", MOD_INIT_NAME( setuptools$py31compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.sandbox", MOD_INIT_NAME( setuptools$sandbox ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.ssl_support", MOD_INIT_NAME( setuptools$ssl_support ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.unicode_utils", MOD_INIT_NAME( setuptools$unicode_utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.utils", MOD_INIT_NAME( setuptools$utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.version", MOD_INIT_NAME( setuptools$version ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.windows_support", MOD_INIT_NAME( setuptools$windows_support ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"simplejson", MOD_INIT_NAME( simplejson ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"simplejson.compat", MOD_INIT_NAME( simplejson$compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"simplejson.decoder", MOD_INIT_NAME( simplejson$decoder ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"simplejson.encoder", MOD_INIT_NAME( simplejson$encoder ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"simplejson.ordered_dict", MOD_INIT_NAME( simplejson$ordered_dict ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"simplejson.scanner", MOD_INIT_NAME( simplejson$scanner ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"six", MOD_INIT_NAME( six ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"transliterate", MOD_INIT_NAME( transliterate ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"transliterate.backports", MOD_INIT_NAME( transliterate$backports ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"transliterate.backports.collections", MOD_INIT_NAME( transliterate$backports$collections ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"transliterate.base", MOD_INIT_NAME( transliterate$base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"transliterate.conf", MOD_INIT_NAME( transliterate$conf ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"transliterate.defaults", MOD_INIT_NAME( transliterate$defaults ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"transliterate.discover", MOD_INIT_NAME( transliterate$discover ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"transliterate.exceptions", MOD_INIT_NAME( transliterate$exceptions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"transliterate.helpers", MOD_INIT_NAME( transliterate$helpers ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"transliterate.utils", MOD_INIT_NAME( transliterate$utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3", MOD_INIT_NAME( urllib3 ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3._collections", MOD_INIT_NAME( urllib3$_collections ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.connection", MOD_INIT_NAME( urllib3$connection ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.connectionpool", MOD_INIT_NAME( urllib3$connectionpool ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.exceptions", MOD_INIT_NAME( urllib3$exceptions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.fields", MOD_INIT_NAME( urllib3$fields ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.filepost", MOD_INIT_NAME( urllib3$filepost ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages", MOD_INIT_NAME( urllib3$packages ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.packages.ordered_dict", MOD_INIT_NAME( urllib3$packages$ordered_dict ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages.six", MOD_INIT_NAME( urllib3$packages$six ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages.ssl_match_hostname", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.packages.ssl_match_hostname._implementation", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname$_implementation ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.poolmanager", MOD_INIT_NAME( urllib3$poolmanager ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.request", MOD_INIT_NAME( urllib3$request ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.response", MOD_INIT_NAME( urllib3$response ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util", MOD_INIT_NAME( urllib3$util ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.util.connection", MOD_INIT_NAME( urllib3$util$connection ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.request", MOD_INIT_NAME( urllib3$util$request ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.response", MOD_INIT_NAME( urllib3$util$response ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.retry", MOD_INIT_NAME( urllib3$util$retry ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.ssl_", MOD_INIT_NAME( urllib3$util$ssl_ ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.timeout", MOD_INIT_NAME( urllib3$util$timeout ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.url", MOD_INIT_NAME( urllib3$util$url ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib", MOD_INIT_NAME( weblib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"weblib.const", MOD_INIT_NAME( weblib$const ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.encoding", MOD_INIT_NAME( weblib$encoding ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.error", MOD_INIT_NAME( weblib$error ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.etree", MOD_INIT_NAME( weblib$etree ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.files", MOD_INIT_NAME( weblib$files ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.html", MOD_INIT_NAME( weblib$html ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.http", MOD_INIT_NAME( weblib$http ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.logs", MOD_INIT_NAME( weblib$logs ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.py3k_support", MOD_INIT_NAME( weblib$py3k_support ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.rex", MOD_INIT_NAME( weblib$rex ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.structured", MOD_INIT_NAME( weblib$structured ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weblib.text", MOD_INIT_NAME( weblib$text ), NULL, 0, NUITKA_COMPILED_MODULE },
    { NULL, NULL, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
#else

void setupMetaPathBasedLoader( void )
{
}

#endif
