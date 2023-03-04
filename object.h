#ifndef OBJECT_H
#define OBJECT_H
#include <QString>
#include <QDate>
//Волошин Алексей. Абстрактный класс, родитель всех классов

class Object
{
protected:
    QString name;//название обьекта
    QString description;//описание
    QString type;//тип(Object)
public:
    Object();
    Object(QString name_obj, QString desc);
    Object(QString name_obj);

    virtual QString getName() const = 0;
    virtual QString getDesc() const = 0;
    virtual QString getType() const = 0;

    virtual void setName(QString name_obj) = 0;
    virtual void setDesc(QString desc) = 0;
    virtual void setType(QString type) = 0;

};

#endif // OBJECT_H
