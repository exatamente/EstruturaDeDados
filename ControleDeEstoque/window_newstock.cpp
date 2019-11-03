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
    connect(this, SIGNAL(AddInTree(QString, QString)),parent,SLOT(AddInTree(QString, QString)));
}

Window_NewStock::~Window_NewStock()
{
    delete ui;
}

void Window_NewStock::on_ButtonAdicionar_clicked()
{
    if(ui->InputNome->text().isEmpty()) {
        ui->InputNome->setStyleSheet("background-color: rgba(255,0,0,0.5)");
        QMessageBox::warning(this, "Impossivel completar Operação","O campo nome é obrigatório");
    } else {
        int max = ui->InputMax->value();
        int min = ui->InputMin->value();
        std::string name = ui->InputNome->text().toStdString();
        Stock::Structure structure = (ui->InputArmazenagem->currentText().toStdString().compare("Fila") == 0 ) ?  Stock::StructureQueue : Stock::StructureStack;
        std::string structureString = (structure == Stock::StructureStack) ? "Stack" : "Queue";
        Stock* stock = new Stock(structure,name, max, min);
        warehouse->Add(stock);
        warehouseControl->Atualiza();
        warehouseControl->Insere(stock);
        emit AddInTree(QString::fromStdString(name),"0/"+QString::number(max));
        emit Increment();
        this->close();
    }
}

void Window_NewStock::on_InputMin_valueChanged(int value)
{
    ui->InputMax->setMinimum(value);
}
