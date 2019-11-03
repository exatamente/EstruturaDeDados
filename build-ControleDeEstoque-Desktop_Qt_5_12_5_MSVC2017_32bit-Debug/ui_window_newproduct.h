/********************************************************************************
** Form generated from reading UI file 'window_newproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_NEWPRODUCT_H
#define UI_WINDOW_NEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_NewProduct
{
public:
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *Input_Preco;
    QLineEdit *Input_Nome;
    QLabel *label_3;
    QSpinBox *Input_ID;
    QPushButton *pushButton;
    QComboBox *Input_Estoque;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_12;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Verde;
    QLabel *Azul;
    QLabel *Amarelo;
    QLabel *Vermelho;
    QLabel *label_5;
    QSpinBox *Input_Qtd;

    void setupUi(QDialog *Window_NewProduct)
    {
        if (Window_NewProduct->objectName().isEmpty())
            Window_NewProduct->setObjectName(QString::fromUtf8("Window_NewProduct"));
        Window_NewProduct->resize(400, 300);
        label = new QLabel(Window_NewProduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 111, 16));
        label_2 = new QLabel(Window_NewProduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 71, 16));
        Input_Preco = new QDoubleSpinBox(Window_NewProduct);
        Input_Preco->setObjectName(QString::fromUtf8("Input_Preco"));
        Input_Preco->setGeometry(QRect(120, 50, 111, 22));
        Input_Preco->setDecimals(2);
        Input_Preco->setMaximum(1000000.000000000000000);
        Input_Preco->setSingleStep(0.010000000000000);
        Input_Preco->setValue(0.000000000000000);
        Input_Nome = new QLineEdit(Window_NewProduct);
        Input_Nome->setObjectName(QString::fromUtf8("Input_Nome"));
        Input_Nome->setGeometry(QRect(120, 20, 261, 22));
        label_3 = new QLabel(Window_NewProduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 21, 16));
        Input_ID = new QSpinBox(Window_NewProduct);
        Input_ID->setObjectName(QString::fromUtf8("Input_ID"));
        Input_ID->setGeometry(QRect(120, 80, 111, 22));
        Input_ID->setMinimum(1);
        Input_ID->setMaximum(1000000);
        Input_ID->setValue(1);
        pushButton = new QPushButton(Window_NewProduct);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 240, 93, 28));
        Input_Estoque = new QComboBox(Window_NewProduct);
        Input_Estoque->setObjectName(QString::fromUtf8("Input_Estoque"));
        Input_Estoque->setGeometry(QRect(120, 110, 261, 21));
        Input_Estoque->setEditable(false);
        Input_Estoque->setMaxVisibleItems(1000000);
        Input_Estoque->setInsertPolicy(QComboBox::InsertAlphabetically);
        Input_Estoque->setDuplicatesEnabled(true);
        label_4 = new QLabel(Window_NewProduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 55, 16));
        verticalLayoutWidget_2 = new QWidget(Window_NewProduct);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setEnabled(true);
        verticalLayoutWidget_2->setGeometry(QRect(40, 160, 163, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setEnabled(true);

        verticalLayout_2->addWidget(label_9);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setEnabled(true);

        verticalLayout_2->addWidget(label_11);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(true);

        verticalLayout_2->addWidget(label_10);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setEnabled(true);

        verticalLayout_2->addWidget(label_12);

        verticalLayoutWidget = new QWidget(Window_NewProduct);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setEnabled(true);
        verticalLayoutWidget->setGeometry(QRect(10, 150, 21, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 0);
        Verde = new QLabel(verticalLayoutWidget);
        Verde->setObjectName(QString::fromUtf8("Verde"));
        Verde->setEnabled(true);
        Verde->setStyleSheet(QString::fromUtf8(""));
        Verde->setPixmap(QPixmap(QString::fromUtf8(":/imgs/imgs/green.ico")));
        Verde->setScaledContents(true);

        verticalLayout->addWidget(Verde);

        Azul = new QLabel(verticalLayoutWidget);
        Azul->setObjectName(QString::fromUtf8("Azul"));
        Azul->setEnabled(true);
        Azul->setStyleSheet(QString::fromUtf8(""));
        Azul->setPixmap(QPixmap(QString::fromUtf8(":/imgs/imgs/aqua.ico")));
        Azul->setScaledContents(true);

        verticalLayout->addWidget(Azul);

        Amarelo = new QLabel(verticalLayoutWidget);
        Amarelo->setObjectName(QString::fromUtf8("Amarelo"));
        Amarelo->setEnabled(true);
        Amarelo->setStyleSheet(QString::fromUtf8(""));
        Amarelo->setPixmap(QPixmap(QString::fromUtf8(":/imgs/imgs/yellow.ico")));
        Amarelo->setScaledContents(true);

        verticalLayout->addWidget(Amarelo);

        Vermelho = new QLabel(verticalLayoutWidget);
        Vermelho->setObjectName(QString::fromUtf8("Vermelho"));
        Vermelho->setEnabled(true);
        Vermelho->setStyleSheet(QString::fromUtf8(""));
        Vermelho->setPixmap(QPixmap(QString::fromUtf8(":/imgs/imgs/red.ico")));
        Vermelho->setScaledContents(true);

        verticalLayout->addWidget(Vermelho);

        label_5 = new QLabel(Window_NewProduct);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 180, 81, 16));
        Input_Qtd = new QSpinBox(Window_NewProduct);
        Input_Qtd->setObjectName(QString::fromUtf8("Input_Qtd"));
        Input_Qtd->setGeometry(QRect(300, 180, 81, 21));
        Input_Qtd->setMinimum(1);
        Input_Qtd->setMaximum(1000000);
        Input_Qtd->setValue(1);
        QWidget::setTabOrder(pushButton, Input_Estoque);
        QWidget::setTabOrder(Input_Estoque, Input_Nome);
        QWidget::setTabOrder(Input_Nome, Input_Preco);
        QWidget::setTabOrder(Input_Preco, Input_ID);

        retranslateUi(Window_NewProduct);

        QMetaObject::connectSlotsByName(Window_NewProduct);
    } // setupUi

    void retranslateUi(QDialog *Window_NewProduct)
    {
        Window_NewProduct->setWindowTitle(QApplication::translate("Window_NewProduct", "Dialog", nullptr));
        label->setText(QApplication::translate("Window_NewProduct", "Nome do Produto:", nullptr));
        label_2->setText(QApplication::translate("Window_NewProduct", "Pre\303\247o [R$]:", nullptr));
        Input_Preco->setPrefix(QApplication::translate("Window_NewProduct", "R$ ", nullptr));
        label_3->setText(QApplication::translate("Window_NewProduct", "ID:", nullptr));
        pushButton->setText(QApplication::translate("Window_NewProduct", "Adicionar", nullptr));
#ifndef QT_NO_WHATSTHIS
        Input_Estoque->setWhatsThis(QApplication::translate("Window_NewProduct", "Estoque ao qual o produto pertence", nullptr));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("Window_NewProduct", "Estoque:", nullptr));
        label_9->setText(QApplication::translate("Window_NewProduct", "Estoque >= 10% do m\303\255nimo", nullptr));
        label_11->setText(QApplication::translate("Window_NewProduct", "Estoque < 10% do m\303\255nimo", nullptr));
        label_10->setText(QApplication::translate("Window_NewProduct", "Estoque no limite m\303\255nimo", nullptr));
        label_12->setText(QApplication::translate("Window_NewProduct", "Estoque abaixo do m\303\255nimo", nullptr));
        Verde->setText(QString());
        Azul->setText(QString());
        Amarelo->setText(QString());
        Vermelho->setText(QString());
        label_5->setText(QApplication::translate("Window_NewProduct", "Quantidade:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_NewProduct: public Ui_Window_NewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_NEWPRODUCT_H
