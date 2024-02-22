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

void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->setText(ui->pushButton->text());
}


void MainWindow::on_textEdit_copyAvailable(bool b)
{

}


void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->setText(ui->dateEdit->text());
}


void MainWindow::on_pushButton_2_clicked(bool checked)
{

}

