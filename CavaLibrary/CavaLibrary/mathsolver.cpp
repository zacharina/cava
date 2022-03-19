#include "pch.h"
#include "mathsolver.h"
#include<iostream>

#define PyInt_AsLong(x) (PyLong_AsLong((x)))

long MathSolver::doMath(std::string filename, std::string method)
{
    const char* c_filename = filename.c_str();
    const char* c_method = method.c_str();
	
    printf("Calling Python to find the sum of 2 and 2.\n");

    // Initialize the Python interpreter.

    Py_Initialize();

    // Create some Python objects that will later be assigned values.

    PyObject* pName, * pModule, * pDict, * pFunc, * pArgs, * pValue;

    // Convert the file name to a Python string.

    pName = PyUnicode_FromString(c_filename);

    // Import the file as a Python module.

    pModule = PyImport_Import(pName);

    // Create a dictionary for the contents of the module.

    pDict = PyModule_GetDict(pModule);

    // Get the add method from the dictionary.

    pFunc = PyDict_GetItemString(pDict, c_method);

    // Create a Python tuple to hold the arguments to the method.

    pArgs = PyTuple_New(2);

    // Convert 2 to a Python integer.

    pValue = PyLong_FromLong(2);

    // Set the Python int as the first and second arguments to the method.

    PyTuple_SetItem(pArgs, 0, pValue);

    PyTuple_SetItem(pArgs, 1, pValue);

    // Call the function with the arguments.

    PyObject* pResult = PyObject_CallObject(pFunc, pArgs);

    // Print a message if calling the method failed.

    if (pResult == NULL)

        printf("Calling the add method failed.\n");

    // Convert the result to a long from a Python object.

    long result = PyInt_AsLong(pResult);

    // Destroy the Python interpreter.

    Py_Finalize();

    // Print the result.

    printf("The result is % d.\n", result);
	std::cin.ignore();
    return result;
}
