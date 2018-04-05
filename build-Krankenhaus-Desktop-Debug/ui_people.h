/********************************************************************************
** Form generated from reading UI file 'people.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLE_H
#define UI_PEOPLE_H

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

class Ui_People
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *panel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *nombres;
    QLineEdit *apellidos;
    QLineEdit *edad;
    QLineEdit *sexo;
    QLineEdit *telefono;
    QLineEdit *direccion;
    QLineEdit *cama;
    QLineEdit *historial;
    QLineEdit *ingreso;
    QLineEdit *familiar;
    QLineEdit *sala;
    QLineEdit *medicamento;
    QLineEdit *medico;
    QPushButton *regresar;
    QPushButton *anterior;
    QPushButton *siguiente;
    QPushButton *editar;
    QPushButton *nuevo;
    QPushButton *eliminar;

    void setupUi(QWidget *People)
    {
        if (People->objectName().isEmpty())
            People->setObjectName(QStringLiteral("People"));
        People->setWindowModality(Qt::WindowModal);
        People->resize(911, 647);
        label = new QLabel(People);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 911, 651));
        label->setFrameShadow(QFrame::Raised);
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/39918066-minimal-wallpapers.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(People);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 10, 301, 71));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"	font-size: 50px;\n"
"	color: skyblue;\n"
"   font: bold;\n"
"}"));
        panel = new QFrame(People);
        panel->setObjectName(QStringLiteral("panel"));
        panel->setGeometry(QRect(40, 80, 841, 521));
        panel->setStyleSheet(QLatin1String("#panel{\n"
"	background-color: rgba(0,0,0,0.5);\n"
"   border-radius: 25px;\n"
"}"));
        panel->setFrameShape(QFrame::StyledPanel);
        panel->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(panel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 211, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(panel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 70, 211, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(panel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 130, 211, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(panel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 190, 211, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(panel);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 250, 211, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(panel);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 310, 211, 31));
        label_8->setFont(font1);
        label_9 = new QLabel(panel);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 370, 211, 31));
        label_9->setFont(font1);
        label_10 = new QLabel(panel);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(460, 10, 211, 31));
        label_10->setFont(font1);
        label_11 = new QLabel(panel);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(460, 70, 211, 31));
        label_11->setFont(font1);
        label_12 = new QLabel(panel);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(460, 130, 211, 31));
        label_12->setFont(font1);
        label_13 = new QLabel(panel);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(460, 190, 211, 31));
        label_13->setFont(font1);
        label_14 = new QLabel(panel);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(460, 250, 211, 31));
        label_14->setFont(font1);
        label_15 = new QLabel(panel);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(460, 310, 211, 31));
        label_15->setFont(font1);
        nombres = new QLineEdit(panel);
        nombres->setObjectName(QStringLiteral("nombres"));
        nombres->setGeometry(QRect(30, 40, 341, 27));
        nombres->setStyleSheet(QLatin1String("#nombres{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        nombres->setAlignment(Qt::AlignCenter);
        nombres->setReadOnly(true);
        apellidos = new QLineEdit(panel);
        apellidos->setObjectName(QStringLiteral("apellidos"));
        apellidos->setGeometry(QRect(30, 100, 341, 27));
        apellidos->setStyleSheet(QLatin1String("#apellidos{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        apellidos->setCursorPosition(0);
        apellidos->setAlignment(Qt::AlignCenter);
        apellidos->setReadOnly(true);
        edad = new QLineEdit(panel);
        edad->setObjectName(QStringLiteral("edad"));
        edad->setGeometry(QRect(30, 160, 341, 27));
        edad->setStyleSheet(QLatin1String("#edad{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        edad->setAlignment(Qt::AlignCenter);
        edad->setReadOnly(true);
        sexo = new QLineEdit(panel);
        sexo->setObjectName(QStringLiteral("sexo"));
        sexo->setGeometry(QRect(30, 220, 341, 27));
        sexo->setStyleSheet(QLatin1String("#sexo{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        sexo->setAlignment(Qt::AlignCenter);
        sexo->setReadOnly(true);
        telefono = new QLineEdit(panel);
        telefono->setObjectName(QStringLiteral("telefono"));
        telefono->setGeometry(QRect(30, 280, 341, 27));
        telefono->setStyleSheet(QLatin1String("#telefono{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        telefono->setAlignment(Qt::AlignCenter);
        telefono->setReadOnly(true);
        direccion = new QLineEdit(panel);
        direccion->setObjectName(QStringLiteral("direccion"));
        direccion->setGeometry(QRect(30, 340, 341, 27));
        direccion->setStyleSheet(QLatin1String("#direccion{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        direccion->setAlignment(Qt::AlignCenter);
        direccion->setReadOnly(true);
        cama = new QLineEdit(panel);
        cama->setObjectName(QStringLiteral("cama"));
        cama->setGeometry(QRect(30, 400, 341, 27));
        cama->setStyleSheet(QLatin1String("#cama{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        cama->setAlignment(Qt::AlignCenter);
        cama->setReadOnly(true);
        historial = new QLineEdit(panel);
        historial->setObjectName(QStringLiteral("historial"));
        historial->setGeometry(QRect(480, 40, 341, 27));
        historial->setStyleSheet(QLatin1String("#historial{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        historial->setAlignment(Qt::AlignCenter);
        historial->setReadOnly(true);
        ingreso = new QLineEdit(panel);
        ingreso->setObjectName(QStringLiteral("ingreso"));
        ingreso->setGeometry(QRect(480, 100, 341, 27));
        ingreso->setStyleSheet(QLatin1String("#ingreso{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        ingreso->setAlignment(Qt::AlignCenter);
        ingreso->setReadOnly(true);
        familiar = new QLineEdit(panel);
        familiar->setObjectName(QStringLiteral("familiar"));
        familiar->setGeometry(QRect(480, 160, 341, 27));
        familiar->setStyleSheet(QLatin1String("#familiar{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        familiar->setAlignment(Qt::AlignCenter);
        familiar->setReadOnly(true);
        sala = new QLineEdit(panel);
        sala->setObjectName(QStringLiteral("sala"));
        sala->setGeometry(QRect(480, 220, 341, 27));
        sala->setStyleSheet(QLatin1String("#sala{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        sala->setAlignment(Qt::AlignCenter);
        sala->setReadOnly(true);
        medicamento = new QLineEdit(panel);
        medicamento->setObjectName(QStringLiteral("medicamento"));
        medicamento->setGeometry(QRect(480, 280, 341, 27));
        medicamento->setStyleSheet(QLatin1String("#medicamento{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        medicamento->setAlignment(Qt::AlignCenter);
        medicamento->setReadOnly(true);
        medico = new QLineEdit(panel);
        medico->setObjectName(QStringLiteral("medico"));
        medico->setGeometry(QRect(480, 340, 341, 27));
        medico->setStyleSheet(QLatin1String("#medico{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        medico->setAlignment(Qt::AlignCenter);
        medico->setReadOnly(true);
        regresar = new QPushButton(panel);
        regresar->setObjectName(QStringLiteral("regresar"));
        regresar->setGeometry(QRect(700, 470, 121, 31));
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
        anterior->setGeometry(QRect(440, 430, 121, 31));
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
        siguiente->setGeometry(QRect(570, 430, 121, 31));
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
        editar->setGeometry(QRect(700, 430, 121, 31));
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
        nuevo->setGeometry(QRect(440, 470, 121, 31));
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
        eliminar->setGeometry(QRect(570, 470, 121, 31));
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

        retranslateUi(People);

        QMetaObject::connectSlotsByName(People);
    } // setupUi

    void retranslateUi(QWidget *People)
    {
        People->setWindowTitle(QApplication::translate("People", "Krankenhaus", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("People", "PACIENTES", 0));
        label_3->setText(QApplication::translate("People", "Nombres: ", 0));
        label_4->setText(QApplication::translate("People", "Apellidos:", 0));
        label_5->setText(QApplication::translate("People", "Edad:", 0));
        label_6->setText(QApplication::translate("People", "Sexo:", 0));
        label_7->setText(QApplication::translate("People", "Telefono:", 0));
        label_8->setText(QApplication::translate("People", "Direccion:", 0));
        label_9->setText(QApplication::translate("People", "No. Cama:", 0));
        label_10->setText(QApplication::translate("People", "Historial:", 0));
        label_11->setText(QApplication::translate("People", "Fecha Ingreso:", 0));
        label_12->setText(QApplication::translate("People", "Familiar:", 0));
        label_13->setText(QApplication::translate("People", "Sala:", 0));
        label_14->setText(QApplication::translate("People", "Medicamento:", 0));
        label_15->setText(QApplication::translate("People", "Medico:", 0));
        regresar->setText(QApplication::translate("People", "Menu", 0));
        anterior->setText(QApplication::translate("People", "Anterior", 0));
        siguiente->setText(QApplication::translate("People", "Siguiente", 0));
        editar->setText(QApplication::translate("People", "Editar", 0));
        nuevo->setText(QApplication::translate("People", "Nuevo", 0));
        eliminar->setText(QApplication::translate("People", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class People: public Ui_People {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_H
