#include "window_newstock.h"
#include "ui_window_newstock.h"

Window_NewStock::Window_NewStock(QWidget *parent,  Hash* warehouse, LDE* warehouseControl) :
    QDialog(parent),
    ui(new Ui::Window_NewStock)
{
    ui->setupUi(this);
    this->warehouse = warehouse;
    this->warehouseControl = warehouseControl;
    connect(this, SIGNAL(Increment()), parent, SLOT(Increment()));
}

Window_NewStock::~Window_NewStock()
{
    delete ui;
}

void Window_NewStock::on_ButtonAdicionar_clicked()
{
    if(ui->InputNome->text().isEmpty()) {
        ui->InputNome->setStyleSheet("background-color: rgba(255,0,0,0.5)");
    } else {
        int max = ui->InputMax->value();
        int min = ui->InputMin->value();
        std::string name = ui->InputNome->text().toStdString();
        Stock::Structure structure = (ui->InputArmazenagem->currentText().compare("Pilha") ) ?  Stock::StructureQueue : Stock::StructureStack;
        std::string structureString = (structure == Stock::StructureStack) ? "Stack" : "Queue";
        Stock* stock = new Stock(structure,name, max, min);
        warehouse->Add(stock);
        warehouseControl->Atualiza();
        warehouseControl->Insere(stock);
        emit Increment();
        this->close();
    }
}
