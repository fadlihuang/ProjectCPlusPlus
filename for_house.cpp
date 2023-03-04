#include "for_house.h"

For_house::For_house()
    :Item()
{
    cos = 0;
    type = "for_house";
}

For_house::For_house(QString name_itemH, QString desc, float cost, int cos)
    :Item(name_itemH, desc, cost)
{
    this->cos = cos;
    type = "for_house";
}

For_house::For_house(QString name_itemH, float cost, int cos)
    :Item(name_itemH, cost)
{
    this->cos = cos;
    type = "for_house";
}

int For_house::getCos() const
{
    return cos;
}

void For_house::setCos(int cos)
{
    this->cos = cos;
}
