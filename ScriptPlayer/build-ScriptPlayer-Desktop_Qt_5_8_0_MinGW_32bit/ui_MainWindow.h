/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_Port;
    QComboBox *comboBox_Port;
    QLabel *label_Port;
    QComboBox *comboBox_PortBaud;
    QLabel *label_PortBaud;
    QPushButton *pushButton_PortRefresh;
    QPushButton *pushButton_Port;
    QTableView *tableView_Script;
    QGroupBox *groupBox_Action;
    QPushButton *pushButton_ScriptLoad;
    QPushButton *pushButton_ScriptStop;
    QPushButton *pushButton_ScriptExec;
    QPlainTextEdit *plainTextEdit_Logs;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(630, 490);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(630, 490));
        MainWindow->setMaximumSize(QSize(630, 490));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_Port = new QGroupBox(centralWidget);
        groupBox_Port->setObjectName(QStringLiteral("groupBox_Port"));
        groupBox_Port->setGeometry(QRect(20, 20, 261, 81));
        comboBox_Port = new QComboBox(groupBox_Port);
        comboBox_Port->setObjectName(QStringLiteral("comboBox_Port"));
        comboBox_Port->setEnabled(false);
        comboBox_Port->setGeometry(QRect(91, 20, 69, 21));
        label_Port = new QLabel(groupBox_Port);
        label_Port->setObjectName(QStringLiteral("label_Port"));
        label_Port->setGeometry(QRect(10, 20, 71, 21));
        label_Port->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_PortBaud = new QComboBox(groupBox_Port);
        comboBox_PortBaud->setObjectName(QStringLiteral("comboBox_PortBaud"));
        comboBox_PortBaud->setEnabled(false);
        comboBox_PortBaud->setGeometry(QRect(91, 50, 69, 21));
        label_PortBaud = new QLabel(groupBox_Port);
        label_PortBaud->setObjectName(QStringLiteral("label_PortBaud"));
        label_PortBaud->setGeometry(QRect(10, 50, 71, 21));
        label_PortBaud->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_PortRefresh = new QPushButton(groupBox_Port);
        pushButton_PortRefresh->setObjectName(QStringLiteral("pushButton_PortRefresh"));
        pushButton_PortRefresh->setGeometry(QRect(170, 19, 61, 23));
        pushButton_Port = new QPushButton(groupBox_Port);
        pushButton_Port->setObjectName(QStringLiteral("pushButton_Port"));
        pushButton_Port->setEnabled(false);
        pushButton_Port->setGeometry(QRect(170, 49, 61, 23));
        tableView_Script = new QTableView(centralWidget);
        tableView_Script->setObjectName(QStringLiteral("tableView_Script"));
        tableView_Script->setEnabled(true);
        tableView_Script->setGeometry(QRect(20, 110, 591, 281));
        tableView_Script->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Script->verticalHeader()->setVisible(false);
        groupBox_Action = new QGroupBox(centralWidget);
        groupBox_Action->setObjectName(QStringLiteral("groupBox_Action"));
        groupBox_Action->setGeometry(QRect(310, 20, 301, 81));
        pushButton_ScriptLoad = new QPushButton(groupBox_Action);
        pushButton_ScriptLoad->setObjectName(QStringLiteral("pushButton_ScriptLoad"));
        pushButton_ScriptLoad->setEnabled(false);
        pushButton_ScriptLoad->setGeometry(QRect(30, 49, 61, 23));
        pushButton_ScriptStop = new QPushButton(groupBox_Action);
        pushButton_ScriptStop->setObjectName(QStringLiteral("pushButton_ScriptStop"));
        pushButton_ScriptStop->setEnabled(false);
        pushButton_ScriptStop->setGeometry(QRect(210, 49, 61, 23));
        pushButton_ScriptExec = new QPushButton(groupBox_Action);
        pushButton_ScriptExec->setObjectName(QStringLiteral("pushButton_ScriptExec"));
        pushButton_ScriptExec->setEnabled(false);
        pushButton_ScriptExec->setGeometry(QRect(120, 49, 61, 23));
        plainTextEdit_Logs = new QPlainTextEdit(centralWidget);
        plainTextEdit_Logs->setObjectName(QStringLiteral("plainTextEdit_Logs"));
        plainTextEdit_Logs->setGeometry(QRect(20, 400, 591, 61));
        plainTextEdit_Logs->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);
        groupBox_Action->raise();
        groupBox_Port->raise();
        tableView_Script->raise();
        plainTextEdit_Logs->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\204\232\346\234\254\346\211\247\350\241\214\345\231\250", Q_NULLPTR));
        groupBox_Port->setTitle(QApplication::translate("MainWindow", "\347\253\257\345\217\243", Q_NULLPTR));
        label_Port->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        comboBox_PortBaud->setCurrentText(QString());
        label_PortBaud->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        pushButton_PortRefresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        pushButton_Port->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        groupBox_Action->setTitle(QApplication::translate("MainWindow", "\350\204\232\346\234\254", Q_NULLPTR));
        pushButton_ScriptLoad->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275", Q_NULLPTR));
        pushButton_ScriptStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
        pushButton_ScriptExec->setText(QApplication::translate("MainWindow", "\346\211\247\350\241\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
