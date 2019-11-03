#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frameArmazem->setVisible(false);
    ui->frameEstoque->setVisible(false);
    ui->frameProduto->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddRoot(QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    itm->setText(1, Description);
}

void MainWindow::AddChild(QTreeWidgetItem *parent, QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, Description);
    parent->addChild(itm);
}


void MainWindow::on_actionArmazem_triggered()
{
    ui->actionArmazem->setEnabled(false);
    ui->actionEstoque->setEnabled(true);
    warehouse = new Hash(26);
    warehouseControl= new LDE();
    QMessageBox::about(this,"Success","Armazém criado com sucesso!");
    counter = 0;
    AddRoot("Armazém", "");
}

void MainWindow::on_actionEstoque_triggered()
{
    Window_NewStock newStockWindow(this,warehouse, warehouseControl);
    newStockWindow.exec();
    ui->actionProduto->setEnabled( counter > 0 );

}

void MainWindow::Increment() { counter++; }

void MainWindow::on_actionProduto_triggered()
{

    Window_NewProduct newProductWindow(this, warehouse, warehouseControl);
    newProductWindow.exec();
}

void MainWindow::AddInTree(QString name, QString description) { AddChild(ui->treeWidget->itemAt(0,0),name,description); }

void MainWindow::AddProductInTree(QString stockName, QString name, QString description)
{
    QTreeWidgetItemIterator it(ui->treeWidget->itemAt(0,0));
    while (*it) {
        (*it)->text(0);
        if ((*it)->text(0) == stockName){
            AddChild(*it,name,"ID - "+description);
            std::string text = (*it)->text(1).toStdString();
            QString max = QString::fromStdString(text.substr(text.find("/")+1));
            int prev = std::stoi( text.substr(0,text.find("/")+1) );
            QString newText = QString::number( 1 + prev )+"/"+max;
            (*it)->setText(1,newText);
            on_treeWidget_itemPressed(*it, 0);
        }
        ++it;
    }
}

void MainWindow::on_treeWidget_itemPressed(QTreeWidgetItem *item, int column)
{
    // pega o pai
    QTreeWidgetItem* parent = item->parent();
    parentAux = parent;
    itmAux= item;
    //mostra quem está selecionado
    ui->InfoNome->setText(item->text(0));

    // descobre se é armazem, estoque ou produto
    if (!parent){ // Armazem
        ui->frameArmazem->setVisible(true);
        ui->frameEstoque->setVisible(false);
        ui->frameProduto->setVisible(false);
        ui->lcdNumber->display(warehouse->getNumel());
    }
    else{
        ui->frameArmazem->setVisible(false);
        if (parent->text(0).compare("Armazém")==0){ // Estoque
            ui->frameEstoque->setVisible(true);
            ui->frameProduto->setVisible(false);
            Stock* estoque = warehouse->Get(item->text(0).toStdString());
            estoqueAux = estoque;
            deleteAux = estoque->getName();
            ui->lcdCapEstoque->display( QString::number( estoque->getCap() ) );
            ui->lcdQttEstoque->display( QString::number( estoque->getQtt() ) );
            ui->lcdValorEstoque->display( QString::number( estoque->getPrice() ) );

            if (estoque->getStockLevel() == Stock::StockLevelCritic)
                ui->ImgSituation->setPixmap(QPixmap(":/imgs/imgs/red.ico"));
            else if (estoque->getStockLevel() == Stock::StockLevelLimit)
                ui->ImgSituation->setPixmap(QPixmap(":/imgs/imgs/yellow.ico"));
            else if (estoque->getStockLevel() == Stock::StockLevelWarning)
                ui->ImgSituation->setPixmap(QPixmap(":/imgs/imgs/aqua.ico"));
            else
                ui->ImgSituation->setPixmap(QPixmap(":/imgs/imgs/green.ico"));

            QString estrutura = (estoque->getStructure() == Stock::StructureQueue) ? "Fila" : "Pilha";
            ui->EstruturaEstoque->setText(estrutura);


        } else { // Produto
            ui->frameProduto->setVisible(true);
            ui->frameEstoque->setVisible(false);
            Stock* estoque = warehouse->Get(parent->text(0).toStdString());
            estoqueAux = estoque;
            Product produto = estoque->get(item->text(0).toStdString());
            deleteAux = produto.getName();
            ui->NomeEstoqueProduto->setText(QString::fromStdString(estoque->getName()));
            ui->lcdIDProduto->display((int)produto.getId());
            ui->lcdPriceProduto->display(produto.getPrice());
        }
    }

}

void MainWindow::on_ButtonRemoverProduto_clicked()
{
    bool ok;
    Product p = estoqueAux->Remove(ok);
    if (!ok){
        QMessageBox::warning(this,"Falha na remoção","O estoque está vazio...");
    } else {
        QMessageBox::about(this,"Sucesso","O produto "+QString::fromStdString(p.getName())+ " (ID: "+QString::number(p.getId())+") foi removido.");
        QTreeWidgetItemIterator it(itmAux->child(0));
        if (estoqueAux->getStructure()==Stock::StructureQueue) delete itmAux->child(0);
        else delete itmAux->child(itmAux->childCount()-1);
        itmAux->setText(1, QString::number(estoqueAux->getQtt())+"/"+QString::number(estoqueAux->getCap())  );
    }
    on_treeWidget_itemPressed(itmAux, 0);
}

void MainWindow::on_ButtonRemoverEstoque_clicked()
{
    warehouse->Remove(deleteAux);
    warehouseControl->Atualiza(deleteAux);
    ui->actionProduto->setEnabled( warehouse->getNumel() > 0 );
    delete itmAux;
    ui->frameEstoque->setVisible(false);
    ui->InfoNome->setText("");
}

void MainWindow::on_pushButton_clicked()
{
    delete warehouseControl;
    delete warehouse;
    ui->frameArmazem->setVisible(false);
    ui->InfoNome->setText("");
    delete ui->treeWidget->itemAt(0,0);
    ui->actionArmazem->setEnabled(true);
    ui->actionEstoque->setEnabled(false);
    ui->actionProduto->setEnabled(false);
}
