#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

/*! \brief Code for the buttons
 *
 */

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

/**
 * prints pushbutton1
 *@param button is pushed
 */

void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}

/*!
 * \brief prints pushbutton2
 */

void MainWindow::on_pushButton_2_clicked()
{
    std::cout << "pushbutton2 " << std::endl;
}

/*!
 * \brief prints pushbutton3
 */

void MainWindow::on_pushButton_3_clicked()
{
    std::cout << "pushbutton3 " << std::endl;
}
