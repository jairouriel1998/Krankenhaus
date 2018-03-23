/********************************************************************************
** Form generated from reading UI file 'krankenhaus.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KRANKENHAUS_H
#define UI_KRANKENHAUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Krankenhaus
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Krankenhaus)
    {
        if (Krankenhaus->objectName().isEmpty())
            Krankenhaus->setObjectName(QStringLiteral("Krankenhaus"));
        Krankenhaus->resize(400, 300);
        menuBar = new QMenuBar(Krankenhaus);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Krankenhaus->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Krankenhaus);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Krankenhaus->addToolBar(mainToolBar);
        centralWidget = new QWidget(Krankenhaus);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Krankenhaus->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Krankenhaus);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Krankenhaus->setStatusBar(statusBar);

        retranslateUi(Krankenhaus);

        QMetaObject::connectSlotsByName(Krankenhaus);
    } // setupUi

    void retranslateUi(QMainWindow *Krankenhaus)
    {
        Krankenhaus->setWindowTitle(QApplication::translate("Krankenhaus", "Krankenhaus", 0));
    } // retranslateUi

};

namespace Ui {
    class Krankenhaus: public Ui_Krankenhaus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KRANKENHAUS_H
