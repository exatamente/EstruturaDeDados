#ifndef WINDOW_NEWSTOCK_H
#define WINDOW_NEWSTOCK_H

#include <QDialog>
#include <ui_mainwindow.h>

#include <headers/Hash.h>
#include <headers/LDE.h>
#include <headers/Stock.h>

namespace Ui {
class Window_NewStock;
}

class Window_NewStock : public QDialog
{
    Q_OBJECT

public:
    explicit Window_NewStock(QWidget *parent = nullptr, Hash* warehouse = nullptr, LDE* warehouseControl = nullptr);
    ~Window_NewStock();

private slots:
    void on_ButtonAdicionar_clicked();

signals:
    void Increment();

private:
    Ui::Window_NewStock *ui;
    Hash* warehouse;
    LDE* warehouseControl;
};

#endif // WINDOW_NEWSTOCK_H
