#ifndef WINDOW_NEWPRODUCT_H
#define WINDOW_NEWPRODUCT_H

#include <QDialog>

namespace Ui {
class Window_NewProduct;
}

class Window_NewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit Window_NewProduct(QWidget *parent = nullptr);
    ~Window_NewProduct();

private:
    Ui::Window_NewProduct *ui;
};

#endif // WINDOW_NEWPRODUCT_H
