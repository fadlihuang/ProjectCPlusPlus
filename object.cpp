#include "object.h"

Object::Object()
{
    name = "";
    description = "";
    type = "object";
}

Object::Object(QString name_obj, QString desc)
{
    name = name_obj;
    description = desc;
    type = "object";
}

Object::Object(QString name_obj)
{
    name = name_obj;
    description = "";
    type = "object";
}
