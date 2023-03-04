#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "item.h"
#include "for_house.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Check_Item_clicked();

    void on_pushButton_Check_Item_2_clicked();

    void on_pushButton_Check_Item_for_house_clicked();

private:
    Ui::MainWindow *ui;
    Item a = Item("Been", "so delicious", 200);//проверка
    For_house b= For_house("Table", "so susy", 500, 22);
};
#endif // MAINWINDOW_H
