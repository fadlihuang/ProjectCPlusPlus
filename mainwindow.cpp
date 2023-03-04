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


void MainWindow::on_pushButton_Check_Item_clicked()
{
    ui->label_name->setText(a.getName());
    ui->label_2_cost->setText(QString ().setNum(a.getCost()));
    ui->label_3_desc->setText(a.getDesc());
}

