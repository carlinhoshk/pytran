#include <Python.h>

// Função wrapper que chama o programa Fortran
static PyObject* executar_programa(PyObject* self, PyObject* args) {
    system("./hello");
    Py_RETURN_NONE;
}

// Lista de métodos disponíveis na biblioteca
static PyMethodDef minha_biblioteca_methods[] = {
    {"executar_programa", executar_programa, METH_NOARGS, "Executa o programa Fortran"},
    {NULL, NULL, 0, NULL}
};

// Função de inicialização da biblioteca
static struct PyModuleDef minha_biblioteca_module = {
    PyModuleDef_HEAD_INIT,
    "minha_biblioteca",
    NULL,
    -1,
    minha_biblioteca_methods
};

// Função de inicialização da biblioteca
PyMODINIT_FUNC PyInit_minha_biblioteca(void) {
    return PyModule_Create(&minha_biblioteca_module);
}
