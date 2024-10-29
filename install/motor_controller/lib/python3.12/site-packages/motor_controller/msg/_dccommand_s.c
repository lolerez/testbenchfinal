// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "motor_controller/msg/detail/dccommand__struct.h"
#include "motor_controller/msg/detail/dccommand__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool motor_controller__msg__dccommand__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("motor_controller.msg._dccommand.Dccommand", full_classname_dest, 41) == 0);
  }
  motor_controller__msg__Dccommand * ros_message = _ros_message;
  {  // motorbl
    PyObject * field = PyObject_GetAttrString(_pymsg, "motorbl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motorbl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motorbr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motorbr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motorbr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motorfl
    PyObject * field = PyObject_GetAttrString(_pymsg, "motorfl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motorfl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motorfr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motorfr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motorfr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * motor_controller__msg__dccommand__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Dccommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("motor_controller.msg._dccommand");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Dccommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  motor_controller__msg__Dccommand * ros_message = (motor_controller__msg__Dccommand *)raw_ros_message;
  {  // motorbl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motorbl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motorbl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motorbr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motorbr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motorbr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motorfl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motorfl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motorfl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motorfr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motorfr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motorfr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
