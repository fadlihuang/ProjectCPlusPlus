#ifndef FOR_HOUSE_H
#define FOR_HOUSE_H

#include "item.h"

class For_house : public Item
{
private:
    int cos;//значение уюта за предмет
public:
    For_house();
    For_house(QString name_itemH, QString desc, float cost, int cos);
    For_house(QString name_itemH, float cost, int cos);

    int getCos() const;

    void setCos(int cos);
};

#endif // FOR_HOUSE_H
