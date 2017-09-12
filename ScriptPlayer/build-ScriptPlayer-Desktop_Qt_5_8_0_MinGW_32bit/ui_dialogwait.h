/********************************************************************************
** Form generated from reading UI file 'dialogwait.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWAIT_H
#define UI_DIALOGWAIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogWait
{
public:
    QLabel *label;

    void setupUi(QDialog *DialogWait)
    {
        if (DialogWait->objectName().isEmpty())
            DialogWait->setObjectName(QStringLiteral("DialogWait"));
        DialogWait->resize(171, 91);
        DialogWait->setMinimumSize(QSize(171, 91));
        DialogWait->setMaximumSize(QSize(171, 91));
        DialogWait->setContextMenuPolicy(Qt::NoContextMenu);
        DialogWait->setWindowOpacity(0.75);
        DialogWait->setAutoFillBackground(false);
        DialogWait->setModal(true);
        label = new QLabel(DialogWait);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 181, 31));

        retranslateUi(DialogWait);

        QMetaObject::connectSlotsByName(DialogWait);
    } // setupUi

    void retranslateUi(QDialog *DialogWait)
    {
        DialogWait->setWindowTitle(QApplication::translate("DialogWait", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogWait", "\345\267\245\344\275\234\344\270\255\357\274\214\350\257\267\347\250\215\345\200\231", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogWait: public Ui_DialogWait {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWAIT_H
