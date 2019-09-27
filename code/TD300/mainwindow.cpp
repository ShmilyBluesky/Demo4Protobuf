#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user.pb.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_process_clicked()
{
    UserInfo info;
    info.set_username(ui->edit_name->text().toStdString());
    info.set_usersex(ui->edit_sex->text().toStdString());

    QString strResult("");
    strResult += "name: " + QString::fromStdString(info.username());
    strResult += "    sex:" + QString::fromStdString(info.usersex());
    ui->lbl_result->setText(strResult);
}
