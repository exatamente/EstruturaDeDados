#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <headers/Hash.h>
#include <headers/LDE.h>
#include "window_newstock.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    Hash* warehouse;
    LDE* warehouseControl;
    int counter;
    ~MainWindow();

private slots:
    void on_actionArmazem_triggered();
    void on_actionEstoque_triggered();
    void Increment();

private:
    Ui::MainWindow *ui;
    Window_NewStock* newStockWindow;
};
#endif // MAINWINDOW_H
