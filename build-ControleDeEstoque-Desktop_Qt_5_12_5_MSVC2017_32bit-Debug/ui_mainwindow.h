/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionArmazem;
    QAction *actionEstoque;
    QAction *actionProduto;
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QFrame *frameArmazem;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QPushButton *pushButton;
    QFrame *frameEstoque;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Verde;
    QLabel *Azul;
    QLabel *Amarelo;
    QLabel *Vermelho;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *ImgSituation;
    QLCDNumber *lcdValorEstoque;
    QLabel *label_5;
    QLCDNumber *lcdQttEstoque;
    QLCDNumber *lcdCapEstoque;
    QLabel *label_13;
    QLabel *EstruturaEstoque;
    QPushButton *ButtonRemoverProduto;
    QPushButton *ButtonRemoverEstoque;
    QLabel *InfoNome;
    QFrame *frameProduto;
    QLabel *label_6;
    QLCDNumber *lcdIDProduto;
    QLabel *label_7;
    QLCDNumber *lcdPriceProduto;
    QLabel *label_8;
    QLabel *NomeEstoqueProduto;
    QMenuBar *menubar;
    QMenu *menuArquivo_FIX;
    QMenu *menuNovo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(906, 495);
        MainWindow->setMouseTracking(false);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionArmazem = new QAction(MainWindow);
        actionArmazem->setObjectName(QString::fromUtf8("actionArmazem"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/imgs/factory-stock-house.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArmazem->setIcon(icon);
        actionEstoque = new QAction(MainWindow);
        actionEstoque->setObjectName(QString::fromUtf8("actionEstoque"));
        actionEstoque->setCheckable(false);
        actionEstoque->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/imgs/boxes.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEstoque->setIcon(icon1);
        actionProduto = new QAction(MainWindow);
        actionProduto->setObjectName(QString::fromUtf8("actionProduto"));
        actionProduto->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/imgs/box.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProduto->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 351, 471));
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        frameArmazem = new QFrame(centralwidget);
        frameArmazem->setObjectName(QString::fromUtf8("frameArmazem"));
        frameArmazem->setGeometry(QRect(350, 80, 561, 391));
        frameArmazem->setFrameShape(QFrame::StyledPanel);
        frameArmazem->setFrameShadow(QFrame::Raised);
        lcdNumber = new QLCDNumber(frameArmazem);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(170, 20, 201, 51));
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(163, 163, 163);"));
        lcdNumber->setLineWidth(3);
        lcdNumber->setDigitCount(10);
        lcdNumber->setProperty("value", QVariant(0.000000000000000));
        label = new QLabel(frameArmazem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 80, 271, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        pushButton = new QPushButton(frameArmazem);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 120, 161, 51));
        frameEstoque = new QFrame(centralwidget);
        frameEstoque->setObjectName(QString::fromUtf8("frameEstoque"));
        frameEstoque->setGeometry(QRect(350, 80, 561, 391));
        frameEstoque->setFrameShape(QFrame::StyledPanel);
        frameEstoque->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frameEstoque);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 211, 31));
        label_3 = new QLabel(frameEstoque);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 181, 21));
        label_4 = new QLabel(frameEstoque);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 160, 91, 31));
        verticalLayoutWidget = new QWidget(frameEstoque);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setEnabled(true);
        verticalLayoutWidget->setGeometry(QRect(20, 210, 21, 111));
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

        verticalLayoutWidget_2 = new QWidget(frameEstoque);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setEnabled(true);
        verticalLayoutWidget_2->setGeometry(QRect(50, 220, 163, 101));
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

        ImgSituation = new QLabel(frameEstoque);
        ImgSituation->setObjectName(QString::fromUtf8("ImgSituation"));
        ImgSituation->setEnabled(true);
        ImgSituation->setGeometry(QRect(110, 159, 31, 31));
        ImgSituation->setStyleSheet(QString::fromUtf8(""));
        ImgSituation->setScaledContents(true);
        lcdValorEstoque = new QLCDNumber(frameEstoque);
        lcdValorEstoque->setObjectName(QString::fromUtf8("lcdValorEstoque"));
        lcdValorEstoque->setGeometry(QRect(220, 40, 141, 23));
        lcdValorEstoque->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border-color: rgb(167, 167, 167);"));
        lcdValorEstoque->setDigitCount(12);
        lcdValorEstoque->setProperty("value", QVariant(0.000000000000000));
        label_5 = new QLabel(frameEstoque);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 90, 31, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        lcdQttEstoque = new QLCDNumber(frameEstoque);
        lcdQttEstoque->setObjectName(QString::fromUtf8("lcdQttEstoque"));
        lcdQttEstoque->setGeometry(QRect(190, 100, 141, 23));
        lcdQttEstoque->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border-color: rgb(167, 167, 167);"));
        lcdQttEstoque->setDigitCount(12);
        lcdCapEstoque = new QLCDNumber(frameEstoque);
        lcdCapEstoque->setObjectName(QString::fromUtf8("lcdCapEstoque"));
        lcdCapEstoque->setGeometry(QRect(360, 100, 141, 23));
        lcdCapEstoque->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border-color: rgb(167, 167, 167);"));
        lcdCapEstoque->setDigitCount(12);
        label_13 = new QLabel(frameEstoque);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 360, 171, 16));
        EstruturaEstoque = new QLabel(frameEstoque);
        EstruturaEstoque->setObjectName(QString::fromUtf8("EstruturaEstoque"));
        EstruturaEstoque->setGeometry(QRect(190, 350, 101, 31));
        EstruturaEstoque->setFont(font);
        ButtonRemoverProduto = new QPushButton(frameEstoque);
        ButtonRemoverProduto->setObjectName(QString::fromUtf8("ButtonRemoverProduto"));
        ButtonRemoverProduto->setGeometry(QRect(330, 190, 131, 61));
        ButtonRemoverEstoque = new QPushButton(frameEstoque);
        ButtonRemoverEstoque->setObjectName(QString::fromUtf8("ButtonRemoverEstoque"));
        ButtonRemoverEstoque->setGeometry(QRect(330, 280, 131, 61));
        InfoNome = new QLabel(centralwidget);
        InfoNome->setObjectName(QString::fromUtf8("InfoNome"));
        InfoNome->setGeometry(QRect(510, 20, 221, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        InfoNome->setFont(font2);
        InfoNome->setAlignment(Qt::AlignCenter);
        frameProduto = new QFrame(centralwidget);
        frameProduto->setObjectName(QString::fromUtf8("frameProduto"));
        frameProduto->setEnabled(true);
        frameProduto->setGeometry(QRect(350, 80, 561, 391));
        frameProduto->setFrameShape(QFrame::StyledPanel);
        frameProduto->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frameProduto);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 40, 181, 16));
        lcdIDProduto = new QLCDNumber(frameProduto);
        lcdIDProduto->setObjectName(QString::fromUtf8("lcdIDProduto"));
        lcdIDProduto->setGeometry(QRect(190, 30, 141, 23));
        lcdIDProduto->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border-color: rgb(167, 167, 167);"));
        lcdIDProduto->setDigitCount(12);
        label_7 = new QLabel(frameProduto);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 100, 71, 16));
        lcdPriceProduto = new QLCDNumber(frameProduto);
        lcdPriceProduto->setObjectName(QString::fromUtf8("lcdPriceProduto"));
        lcdPriceProduto->setGeometry(QRect(190, 100, 141, 23));
        lcdPriceProduto->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border-color: rgb(167, 167, 167);"));
        lcdPriceProduto->setDigitCount(12);
        label_8 = new QLabel(frameProduto);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 170, 151, 16));
        NomeEstoqueProduto = new QLabel(frameProduto);
        NomeEstoqueProduto->setObjectName(QString::fromUtf8("NomeEstoqueProduto"));
        NomeEstoqueProduto->setGeometry(QRect(160, 160, 351, 31));
        NomeEstoqueProduto->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 906, 26));
        menubar->setStyleSheet(QString::fromUtf8(""));
        menuArquivo_FIX = new QMenu(menubar);
        menuArquivo_FIX->setObjectName(QString::fromUtf8("menuArquivo_FIX"));
        menuNovo = new QMenu(menuArquivo_FIX);
        menuNovo->setObjectName(QString::fromUtf8("menuNovo"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuArquivo_FIX->menuAction());
        menuArquivo_FIX->addAction(menuNovo->menuAction());
        menuArquivo_FIX->addSeparator();
        menuNovo->addAction(actionArmazem);
        menuNovo->addSeparator();
        menuNovo->addAction(actionEstoque);
        menuNovo->addSeparator();
        menuNovo->addAction(actionProduto);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Controle de Estoque", nullptr));
        actionArmazem->setText(QApplication::translate("MainWindow", "Armazem", nullptr));
        actionEstoque->setText(QApplication::translate("MainWindow", "Estoque", nullptr));
        actionProduto->setText(QApplication::translate("MainWindow", "Produto", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Informa\303\247\303\243o", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Local", nullptr));
        label->setText(QApplication::translate("MainWindow", "N\303\272mero de estoques no Armaz\303\251m", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Deletar\n"
"Armaz\303\251m", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Valor acumulado em estoque [R$]:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "N\303\272mero de Itens em estoque:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Situa\303\247\303\243o atual:", nullptr));
        Verde->setText(QString());
        Azul->setText(QString());
        Amarelo->setText(QString());
        Vermelho->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Estoque >= 10% do m\303\255nimo", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Estoque < 10% do m\303\255nimo", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Estoque no limite m\303\255nimo", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Estoque abaixo do m\303\255nimo", nullptr));
        ImgSituation->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "/", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Estrutura de Armazenagem:", nullptr));
        EstruturaEstoque->setText(QString());
        ButtonRemoverProduto->setText(QApplication::translate("MainWindow", "Remover\n"
"Produto", nullptr));
        ButtonRemoverEstoque->setText(QApplication::translate("MainWindow", "Deletar\n"
"Estoque", nullptr));
        InfoNome->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "N\303\272mero de identifica\303\247\303\243o (ID):", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Pre\303\247o [R$]: ", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Armazenado no estoque:", nullptr));
        NomeEstoqueProduto->setText(QString());
        menuArquivo_FIX->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
        menuNovo->setTitle(QApplication::translate("MainWindow", "Novo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
