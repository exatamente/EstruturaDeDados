#include "window_newproduct.h"
#include "ui_window_newproduct.h"

Window_NewProduct::Window_NewProduct(QWidget *parent, Hash* warehouse, LDE* warehouseControl) :
    QDialog(parent),
    ui(new Ui::Window_NewProduct)
{
    ui->setupUi(this);
    connect(this, SIGNAL(AddProductInTree(QString, QString, QString)),parent,SLOT(AddProductInTree(QString, QString, QString)));
    this->warehouse = warehouse;
    this->warehouseControl = warehouseControl;
    setComboBoxItens();
}

Window_NewProduct::~Window_NewProduct()
{
    delete ui;
}

void Window_NewProduct::on_pushButton_clicked()
{
    if(ui->Input_Nome->text().isEmpty()) {
        ui->Input_Nome->setStyleSheet("background-color: rgba(255,0,0,0.5)");
        QMessageBox::warning(this, "Impossivel completar Operação","O campo nome é obrigatório");
    } else {
        Stock* stock = warehouse->Get(ui->Input_Estoque->currentText().toStdString());
        std::string name = ui->Input_Nome->text().toStdString();
        double price = ui->Input_Preco->value();
        int id = ui->Input_ID->value();
        for (int i=0;i<ui->Input_Qtd->value();i++){
            (stock->Add(new Product(name, price, id+i)));
            emit AddProductInTree(QString::fromStdString(stock->getName()), QString::fromStdString(name), QString::number(id+i));
        }
        this->close();
    }
}

void Window_NewProduct::setComboBoxItens()
{
    int size = warehouseControl->GetN();
    for (int i = 0; i < size; ++i) {
        QString name = QString::fromUtf8((*warehouseControl)[i].getName().c_str());
        if ((*warehouseControl)[i].getStockLevel() == Stock::StockLevelCritic)
            ui->Input_Estoque->addItem( QIcon(":/imgs/imgs/red.ico"), name );
        else if ((*warehouseControl)[i].getStockLevel() == Stock::StockLevelLimit)
            ui->Input_Estoque->addItem( QIcon(":/imgs/imgs/yellow.ico"), name );
        else if ((*warehouseControl)[i].getStockLevel() == Stock::StockLevelWarning)
            ui->Input_Estoque->addItem( QIcon(":/imgs/imgs/aqua.ico"), name );
        else
            ui->Input_Estoque->addItem( QIcon(":/imgs/imgs/green.ico"), name );
    }
}

void Window_NewProduct::on_Input_Estoque_currentIndexChanged(const QString &stockName)
{
    Stock* stock = warehouse->Get(stockName.toStdString());
    int spaces = stock->getCap() - stock->getQtt();
    ui->Input_Qtd->setRange(0,spaces);
    ui->pushButton->setEnabled(spaces>0);
}
