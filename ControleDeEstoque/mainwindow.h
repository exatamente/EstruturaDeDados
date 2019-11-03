#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <headers/Hash.h>
#include <headers/LDE.h>
#include <window_newstock.h>
#include <window_newproduct.h>
#include <QtCore>
#include <QtGui>
#include <QTreeWidgetItem>

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

private:
    // variaveis auxiliares
    QTreeWidgetItem* parentAux;
    QTreeWidgetItem* itmAux;
    Stock* estoqueAux;
    std::string deleteAux;


private:
    void AddRoot(QString name, QString Description);
    void AddChild(QTreeWidgetItem* parent, QString name, QString Description);
private slots:
    void on_actionArmazem_triggered();
    void on_actionEstoque_triggered();
    void Increment();
    void on_actionProduto_triggered();
    void AddInTree(QString name, QString description);
    void AddProductInTree(QString, QString, QString);

    void on_treeWidget_itemPressed(QTreeWidgetItem *item, int column);

    void on_ButtonRemoverProduto_clicked();

    void on_ButtonRemoverEstoque_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
