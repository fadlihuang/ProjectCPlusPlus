#include "item.h"

Item::Item()
    :Object()
{
    type = "item";
    cost = 0;
}

Item::Item(QString name_item, QString desc, float cost)
    :Object(name_item, desc)
{
    this->cost = cost;
    type = "item";
}

Item::Item(QString name_item, float cost)
    :Object(name_item)
{
    this->cost = cost;
    type = "item";
}

QString Item::getName() const
{
    return name;
}

QString Item::getDesc() const
{
    return description;
}

QString Item::getType() const
{
    return type;
}

float Item::getCost() const
{
    return cost;
}

void Item::setName(QString name_item)
{
   name = name_item;
}

void Item::setDesc(QString desc)
{
    description = desc;
}

void Item::setType(QString type)//Не имеет смысла?:)
{
    this->type = type;
}

void Item::setCost(float cost)
{
    this->cost = cost;
}
