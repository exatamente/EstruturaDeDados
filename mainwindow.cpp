#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_actionArmazem_triggered()
{
    ui->actionArmazem->setEnabled(false);
    ui->actionEstoque->setEnabled(true);
    warehouse = new Hash(26);
    warehouseControl= new LDE();
    QMessageBox::about(this,"Success","Armazém criado com sucesso!");
    counter = 0;
}

void MainWindow::on_actionEstoque_triggered()
{
    newStockWindow = new Window_NewStock(this,warehouse, warehouseControl);
    newStockWindow->exec();
    ui->actionProduto->setEnabled( counter > 0 );
}

void MainWindow::Increment()
{
    counter++;
    std::cout << "Counter: " << counter << std::endl;
}
