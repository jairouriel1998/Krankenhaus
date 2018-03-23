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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Krankenhaus
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *ir_pacientes;

    void setupUi(QMainWindow *Krankenhaus)
    {
        if (Krankenhaus->objectName().isEmpty())
            Krankenhaus->setObjectName(QStringLiteral("Krankenhaus"));
        Krankenhaus->setWindowModality(Qt::WindowModal);
        Krankenhaus->resize(901, 511);
        centralWidget = new QWidget(Krankenhaus);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 901, 511));
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/ltmWANZ.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 20, 511, 51));
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"	font-size: 60px;\n"
"	color: purple;\n"
"}"));
        ir_pacientes = new QPushButton(centralWidget);
        ir_pacientes->setObjectName(QStringLiteral("ir_pacientes"));
        ir_pacientes->setGeometry(QRect(30, 150, 191, 61));
        ir_pacientes->setCursor(QCursor(Qt::PointingHandCursor));
        ir_pacientes->setStyleSheet(QLatin1String("#ir_pacientes{\n"
"	background-color: rgba(160, 0, 100, 0.2);\n"
"	font: bold 25px;\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"#ir_pacientes :hover{\n"
"	background-color: rgba(160, 0, 100, 0.8);\n"
"	cursor: pointer;\n"
"}"));
        Krankenhaus->setCentralWidget(centralWidget);

        retranslateUi(Krankenhaus);

        QMetaObject::connectSlotsByName(Krankenhaus);
    } // setupUi

    void retranslateUi(QMainWindow *Krankenhaus)
    {
        Krankenhaus->setWindowTitle(QApplication::translate("Krankenhaus", "Krankenhaus", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Krankenhaus", "KRANKENHAUS", 0));
        ir_pacientes->setText(QApplication::translate("Krankenhaus", "Pacientes", 0));
    } // retranslateUi

};

namespace Ui {
    class Krankenhaus: public Ui_Krankenhaus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KRANKENHAUS_H
