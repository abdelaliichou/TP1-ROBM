// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
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
#include "robm_interfaces/msg/detail/rover_motors_cmd__struct.h"
#include "robm_interfaces/msg/detail/rover_motors_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robm_interfaces__msg__rover_motors_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("robm_interfaces.msg._rover_motors_cmd", (char *)PyUnicode_1BYTE_DATA(module_attr), 37) == 0);
    assert(strncmp("RoverMotorsCmd", (char *)PyUnicode_1BYTE_DATA(name_attr), 14) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  robm_interfaces__msg__RoverMotorsCmd * ros_message = _ros_message;
  {  // front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robm_interfaces__msg__rover_motors_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoverMotorsCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robm_interfaces.msg._rover_motors_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoverMotorsCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robm_interfaces__msg__RoverMotorsCmd * ros_message = (robm_interfaces__msg__RoverMotorsCmd *)raw_ros_message;
  {  // front_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
