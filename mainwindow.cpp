#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Check_Item_clicked()//Проверка работы класса
{
    ui->label_name->setText(a.getName());
    ui->label_2_cost->setText(QString ().setNum(a.getCost()));
    ui->label_3_desc->setText(a.getDesc());
    ui->label_type->setText(a.getType());
}





void MainWindow::on_pushButton_Check_Item_for_house_clicked()
{
    ui->label_name_for_house->setText(b.getName());
    ui->label_2_cost_for_house->setText(QString ().setNum(b.getCost()));
    ui->label_3_desc_for_house->setText(b.getDesc());
    ui->label_type_for_house->setText(b.getType());
    ui->label_cos_for_house->setText(QString ().setNum(b.getCos()));
}

