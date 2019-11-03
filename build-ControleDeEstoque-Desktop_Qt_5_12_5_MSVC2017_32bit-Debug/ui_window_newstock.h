/********************************************************************************
** Form generated from reading UI file 'window_newstock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_NEWSTOCK_H
#define UI_WINDOW_NEWSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_NewStock
{
public:
    QLineEdit *InputNome;
    QSpinBox *InputMin;
    QComboBox *InputArmazenagem;
    QPushButton *ButtonAdicionar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *InputMax;

    void setupUi(QDialog *Window_NewStock)
    {
        if (Window_NewStock->objectName().isEmpty())
            Window_NewStock->setObjectName(QString::fromUtf8("Window_NewStock"));
        Window_NewStock->setEnabled(true);
        Window_NewStock->resize(340, 300);
        Window_NewStock->setMinimumSize(QSize(340, 300));
        Window_NewStock->setMaximumSize(QSize(340, 300));
        InputNome = new QLineEdit(Window_NewStock);
        InputNome->setObjectName(QString::fromUtf8("InputNome"));
        InputNome->setGeometry(QRect(171, 25, 151, 22));
        InputMin = new QSpinBox(Window_NewStock);
        InputMin->setObjectName(QString::fromUtf8("InputMin"));
        InputMin->setGeometry(QRect(171, 131, 71, 22));
        InputMin->setMaximum(100);
        InputMin->setDisplayIntegerBase(10);
        InputArmazenagem = new QComboBox(Window_NewStock);
        InputArmazenagem->addItem(QString());
        InputArmazenagem->addItem(QString());
        InputArmazenagem->setObjectName(QString::fromUtf8("InputArmazenagem"));
        InputArmazenagem->setGeometry(QRect(171, 184, 71, 22));
        ButtonAdicionar = new QPushButton(Window_NewStock);
        ButtonAdicionar->setObjectName(QString::fromUtf8("ButtonAdicionar"));
        ButtonAdicionar->setGeometry(QRect(90, 240, 131, 41));
        widget = new QWidget(Window_NewStock);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 161, 211));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        InputMax = new QSpinBox(Window_NewStock);
        InputMax->setObjectName(QString::fromUtf8("InputMax"));
        InputMax->setGeometry(QRect(171, 78, 71, 22));
        InputMax->setMinimum(1);
        InputMax->setMaximum(100);

        retranslateUi(Window_NewStock);

        QMetaObject::connectSlotsByName(Window_NewStock);
    } // setupUi

    void retranslateUi(QDialog *Window_NewStock)
    {
        Window_NewStock->setWindowTitle(QApplication::translate("Window_NewStock", "Adicionar Estoque", nullptr));
#ifndef QT_NO_WHATSTHIS
        InputNome->setWhatsThis(QApplication::translate("Window_NewStock", "Nome dado para identificar o estoque", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        InputMin->setWhatsThis(QApplication::translate("Window_NewStock", "Estoque m\303\255nimo, limite de 100 produtos", nullptr));
#endif // QT_NO_WHATSTHIS
        InputArmazenagem->setItemText(0, QApplication::translate("Window_NewStock", "Pilha", nullptr));
        InputArmazenagem->setItemText(1, QApplication::translate("Window_NewStock", "Fila", nullptr));

#ifndef QT_NO_WHATSTHIS
        InputArmazenagem->setWhatsThis(QApplication::translate("Window_NewStock", "<html><head/><body><p><span style=\" font-size:10pt;\">Pilha (LIFO) -&gt; Ultimo a entrar \303\251 o primeiro a sair;</span></p><p><span style=\" font-size:10pt;\">Fila (FIFO) -&gt; Primeiro a entrar \303\251 o primeiro a sair;</span></p><p align=\"center\">* A fila \303\251 implementada de forma circular *</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        ButtonAdicionar->setText(QApplication::translate("Window_NewStock", "Adicionar", nullptr));
        label->setText(QApplication::translate("Window_NewStock", "Nome do Estoque:", nullptr));
        label_2->setText(QApplication::translate("Window_NewStock", "Capacidade Maxima:", nullptr));
        label_3->setText(QApplication::translate("Window_NewStock", "Estoque M\303\255nimo:", nullptr));
        label_4->setText(QApplication::translate("Window_NewStock", "Modo de Armazenagem:", nullptr));
#ifndef QT_NO_WHATSTHIS
        InputMax->setWhatsThis(QApplication::translate("Window_NewStock", "Limite m\303\241ximo de 100 produtos", nullptr));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class Window_NewStock: public Ui_Window_NewStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_NEWSTOCK_H
