#ifndef WINDOW_NEWPRODUCT_H
#define WINDOW_NEWPRODUCT_H

#include <QDialog>
#include <QMessageBox>
#include <mainwindow.h>

namespace Ui {
class Window_NewProduct;
}

class Window_NewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit Window_NewProduct(QWidget *parent = nullptr,  Hash* warehouse = nullptr, LDE* warehouseControl = nullptr);
    ~Window_NewProduct();

private slots:
    void on_pushButton_clicked();
    void on_Input_Estoque_currentIndexChanged(const QString &arg1);

signals:
    void AddProductInTree(QString stockName, QString name, QString description);

private:
    Ui::Window_NewProduct *ui;
    Hash* warehouse;
    LDE* warehouseControl;

private:
    void setComboBoxItens();
};

#endif // WINDOW_NEWPRODUCT_H
