#ifndef ITEM_H
#define ITEM_H
//Волошин Алексей. Item - наследник Object, родитель последующих классов
#include "object.h"

class Item : public Object
{
protected:
        float cost;
public:
    Item();
    Item(QString name_item, QString desc, float cost);
    Item(QString name_item, float cost);

    virtual QString getName() const override;
    virtual QString getDesc() const override;
    virtual QString getType() const override;
    float getCost() const;

    virtual void setName(QString name_item) override;
    virtual void setDesc(QString desc) override;
    virtual void setType(QString type) override;
    void setCost(float cost);
};

#endif // ITEM_H
