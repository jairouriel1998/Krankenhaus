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
    QPushButton *ir_empleados;
    QPushButton *ir_farmacia;
    QPushButton *ir_salas;
    QPushButton *salir;

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
        label_2->setGeometry(QRect(0, 20, 901, 101));
        QFont font;
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"	font-size: 72px;\n"
"	color:white;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        ir_pacientes = new QPushButton(centralWidget);
        ir_pacientes->setObjectName(QStringLiteral("ir_pacientes"));
        ir_pacientes->setEnabled(true);
        ir_pacientes->setGeometry(QRect(30, 150, 191, 61));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        ir_pacientes->setFont(font1);
        ir_pacientes->setCursor(QCursor(Qt::PointingHandCursor));
        ir_pacientes->setStyleSheet(QLatin1String("#ir_pacientes{\n"
"	background-color: rgba(160, 0, 100, 0.2);\n"
"	font: bold 25px;\n"
"	border-radius: 20px;\n"
"	color: violet;\n"
"}\n"
"\n"
"#ir_pacientes:hover{\n"
"	background-color: rgba(160, 0, 100, 0.8);\n"
"}"));
        ir_empleados = new QPushButton(centralWidget);
        ir_empleados->setObjectName(QStringLiteral("ir_empleados"));
        ir_empleados->setGeometry(QRect(670, 150, 191, 61));
        ir_empleados->setFont(font1);
        ir_empleados->setCursor(QCursor(Qt::PointingHandCursor));
        ir_empleados->setStyleSheet(QLatin1String("#ir_empleados{\n"
"	background-color: rgba(160, 0, 100, 0.2);\n"
"	font: bold 25px;\n"
"	border-radius: 20px;\n"
"	color: violet;\n"
"}\n"
"\n"
"#ir_empleados:hover{\n"
"	background-color: rgba(160, 0, 100, 0.8);\n"
"}"));
        ir_farmacia = new QPushButton(centralWidget);
        ir_farmacia->setObjectName(QStringLiteral("ir_farmacia"));
        ir_farmacia->setGeometry(QRect(30, 270, 191, 61));
        ir_farmacia->setFont(font1);
        ir_farmacia->setCursor(QCursor(Qt::PointingHandCursor));
        ir_farmacia->setStyleSheet(QLatin1String("#ir_farmacia{\n"
"	background-color: rgba(160, 0, 100, 0.2);\n"
"	font: bold 25px;\n"
"	border-radius: 20px;\n"
"	color: violet;\n"
"}\n"
"\n"
"#ir_farmacia:hover{\n"
"	background-color: rgba(160, 0, 100, 0.8);\n"
"}"));
        ir_salas = new QPushButton(centralWidget);
        ir_salas->setObjectName(QStringLiteral("ir_salas"));
        ir_salas->setGeometry(QRect(670, 270, 191, 61));
        ir_salas->setFont(font1);
        ir_salas->setCursor(QCursor(Qt::PointingHandCursor));
        ir_salas->setStyleSheet(QLatin1String("#ir_salas{\n"
"	background-color: rgba(160, 0, 100, 0.2);\n"
"	font: bold 25px;\n"
"	border-radius: 20px;\n"
"	color: violet;\n"
"}\n"
"\n"
"#ir_salas:hover{\n"
"	background-color: rgba(160, 0, 100, 0.8);\n"
"}"));
        salir = new QPushButton(centralWidget);
        salir->setObjectName(QStringLiteral("salir"));
        salir->setGeometry(QRect(360, 430, 191, 61));
        salir->setFont(font1);
        salir->setCursor(QCursor(Qt::PointingHandCursor));
        salir->setStyleSheet(QLatin1String("#salir{\n"
"	background-color: rgba(160, 0, 100, 0.2);\n"
"	font: bold 25px;\n"
"	border-radius: 20px;\n"
"	color: violet;\n"
"}\n"
"\n"
"#salir:hover{\n"
"	background-color: rgba(160, 0, 100, 0.8);\n"
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
        ir_empleados->setText(QApplication::translate("Krankenhaus", "Empleados", 0));
        ir_farmacia->setText(QApplication::translate("Krankenhaus", "Farmacia", 0));
        ir_salas->setText(QApplication::translate("Krankenhaus", "Salas", 0));
        salir->setText(QApplication::translate("Krankenhaus", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class Krankenhaus: public Ui_Krankenhaus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KRANKENHAUS_H
