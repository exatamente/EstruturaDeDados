#include "window_newproduct.h"
#include "ui_window_newproduct.h"

Window_NewProduct::Window_NewProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_NewProduct)
{
    ui->setupUi(this);
}

Window_NewProduct::~Window_NewProduct()
{
    delete ui;
}
