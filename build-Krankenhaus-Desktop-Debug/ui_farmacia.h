/********************************************************************************
** Form generated from reading UI file 'farmacia.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FARMACIA_H
#define UI_FARMACIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Farmacia
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *panel;
    QLabel *label_14;
    QLineEdit *medicamento;
    QPushButton *regresar;
    QPushButton *anterior;
    QPushButton *siguiente;
    QPushButton *editar;
    QPushButton *nuevo;
    QPushButton *eliminar;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *medicamento_2;
    QLineEdit *medicamento_3;

    void setupUi(QWidget *Farmacia)
    {
        if (Farmacia->objectName().isEmpty())
            Farmacia->setObjectName(QStringLiteral("Farmacia"));
        Farmacia->resize(903, 430);
        label = new QLabel(Farmacia);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 901, 431));
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/black-minimalistic_00416715.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Farmacia);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 251, 61));
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"	font-size: 50px;\n"
"	color: skyblue;\n"
"   font: bold;\n"
"}"));
        panel = new QFrame(Farmacia);
        panel->setObjectName(QStringLiteral("panel"));
        panel->setGeometry(QRect(30, 70, 841, 311));
        panel->setStyleSheet(QLatin1String("#panel{\n"
"	background-color: rgba(50,50,100,0.5);\n"
"   border-radius: 25px;\n"
"}"));
        panel->setFrameShape(QFrame::StyledPanel);
        panel->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(panel);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 10, 211, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_14->setFont(font);
        medicamento = new QLineEdit(panel);
        medicamento->setObjectName(QStringLiteral("medicamento"));
        medicamento->setGeometry(QRect(10, 40, 341, 27));
        medicamento->setStyleSheet(QLatin1String("#medicamento{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        medicamento->setAlignment(Qt::AlignCenter);
        medicamento->setReadOnly(true);
        regresar = new QPushButton(panel);
        regresar->setObjectName(QStringLiteral("regresar"));
        regresar->setGeometry(QRect(700, 80, 121, 31));
        regresar->setCursor(QCursor(Qt::PointingHandCursor));
        regresar->setStyleSheet(QLatin1String("#regresar{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#regresar:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        anterior = new QPushButton(panel);
        anterior->setObjectName(QStringLiteral("anterior"));
        anterior->setGeometry(QRect(420, 40, 121, 31));
        anterior->setCursor(QCursor(Qt::PointingHandCursor));
        anterior->setStyleSheet(QLatin1String("#anterior{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#anterior:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        siguiente = new QPushButton(panel);
        siguiente->setObjectName(QStringLiteral("siguiente"));
        siguiente->setGeometry(QRect(560, 40, 121, 31));
        siguiente->setCursor(QCursor(Qt::PointingHandCursor));
        siguiente->setStyleSheet(QLatin1String("#siguiente{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#siguiente:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        editar = new QPushButton(panel);
        editar->setObjectName(QStringLiteral("editar"));
        editar->setGeometry(QRect(700, 40, 121, 31));
        editar->setCursor(QCursor(Qt::PointingHandCursor));
        editar->setStyleSheet(QLatin1String("#editar{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#editar:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        nuevo = new QPushButton(panel);
        nuevo->setObjectName(QStringLiteral("nuevo"));
        nuevo->setGeometry(QRect(420, 80, 121, 31));
        nuevo->setCursor(QCursor(Qt::PointingHandCursor));
        nuevo->setStyleSheet(QLatin1String("#nuevo{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#nuevo:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        eliminar = new QPushButton(panel);
        eliminar->setObjectName(QStringLiteral("eliminar"));
        eliminar->setGeometry(QRect(560, 80, 121, 31));
        eliminar->setCursor(QCursor(Qt::PointingHandCursor));
        eliminar->setStyleSheet(QLatin1String("#eliminar{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#eliminar:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        label_15 = new QLabel(panel);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 180, 211, 31));
        label_15->setFont(font);
        label_16 = new QLabel(panel);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 90, 211, 31));
        label_16->setFont(font);
        medicamento_2 = new QLineEdit(panel);
        medicamento_2->setObjectName(QStringLiteral("medicamento_2"));
        medicamento_2->setGeometry(QRect(10, 220, 341, 27));
        medicamento_2->setStyleSheet(QLatin1String("#medicamento_2{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        medicamento_2->setAlignment(Qt::AlignCenter);
        medicamento_2->setReadOnly(true);
        medicamento_3 = new QLineEdit(panel);
        medicamento_3->setObjectName(QStringLiteral("medicamento_3"));
        medicamento_3->setGeometry(QRect(10, 130, 341, 27));
        medicamento_3->setStyleSheet(QLatin1String("#medicamento_3{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        medicamento_3->setAlignment(Qt::AlignCenter);
        medicamento_3->setReadOnly(true);

        retranslateUi(Farmacia);

        QMetaObject::connectSlotsByName(Farmacia);
    } // setupUi

    void retranslateUi(QWidget *Farmacia)
    {
        Farmacia->setWindowTitle(QApplication::translate("Farmacia", "Form", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Farmacia", "Farmacia", 0));
        label_14->setText(QApplication::translate("Farmacia", "Medicamento:", 0));
        regresar->setText(QApplication::translate("Farmacia", "Menu", 0));
        anterior->setText(QApplication::translate("Farmacia", "Anterior", 0));
        siguiente->setText(QApplication::translate("Farmacia", "Siguiente", 0));
        editar->setText(QApplication::translate("Farmacia", "Editar", 0));
        nuevo->setText(QApplication::translate("Farmacia", "Nuevo", 0));
        eliminar->setText(QApplication::translate("Farmacia", "Eliminar", 0));
        label_15->setText(QApplication::translate("Farmacia", "Cantidad:", 0));
        label_16->setText(QApplication::translate("Farmacia", "Tipo de medicamento:", 0));
    } // retranslateUi

};

namespace Ui {
    class Farmacia: public Ui_Farmacia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FARMACIA_H
