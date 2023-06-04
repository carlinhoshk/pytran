#include <Python.h>

// Função wrapper que chama o programa Fortran
static PyObject* executar_programa(PyObject* self, PyObject* args) {
    system("./hello");
    Py_RETURN_NONE;
}

// Lista de métodos disponíveis na biblioteca
static PyMethodDef pytran_methods[] = {
    {"executar_programa", executar_programa, METH_NOARGS, "Executa o programa Fortran"},
    {NULL, NULL, 0, NULL}
};

// Função de inicialização da biblioteca
static struct PyModuleDef pytran_module = {
    PyModuleDef_HEAD_INIT,
    "pytran",
    NULL,
    -1,
    pytran_methods
};

// Função de inicialização da biblioteca
PyMODINIT_FUNC PyInit_pytran(void) {
    return PyModule_Create(&pytran_module);
}
