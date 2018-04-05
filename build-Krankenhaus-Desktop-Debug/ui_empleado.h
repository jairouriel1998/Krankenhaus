/********************************************************************************
** Form generated from reading UI file 'empleado.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLEADO_H
#define UI_EMPLEADO_H

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

class Ui_Empleado
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
    QLabel *label_10;
    QLineEdit *nombres;
    QLineEdit *apellidos;
    QLineEdit *edad;
    QLineEdit *sexo;
    QLineEdit *telefono;
    QLineEdit *direccion;
    QLineEdit *historial;
    QPushButton *eliminar_4;
    QPushButton *siguiente_4;
    QPushButton *editar_4;
    QPushButton *nuevo_4;
    QPushButton *anterior_4;
    QPushButton *regresar_4;

    void setupUi(QWidget *Empleado)
    {
        if (Empleado->objectName().isEmpty())
            Empleado->setObjectName(QStringLiteral("Empleado"));
        Empleado->resize(890, 612);
        label = new QLabel(Empleado);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 891, 611));
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/Dark-minimalist-wallpapers-free-download.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(Empleado);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 10, 241, 71));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"	font-size: 50px;\n"
"	color: purple;\n"
"   font: bold;\n"
"}\n"
"	"));
        panel = new QFrame(Empleado);
        panel->setObjectName(QStringLiteral("panel"));
        panel->setGeometry(QRect(40, 80, 811, 481));
        panel->setStyleSheet(QLatin1String("#panel{\n"
"	background-color: rgba(0,0,0,0.8);\n"
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
        label_4->setGeometry(QRect(420, 10, 211, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(panel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 90, 211, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(panel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(420, 90, 211, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(panel);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 170, 211, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(panel);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 170, 211, 31));
        label_8->setFont(font1);
        label_10 = new QLabel(panel);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 250, 211, 31));
        label_10->setFont(font1);
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
        apellidos->setGeometry(QRect(420, 40, 341, 27));
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
        edad->setGeometry(QRect(20, 130, 341, 27));
        edad->setStyleSheet(QLatin1String("#edad{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        edad->setAlignment(Qt::AlignCenter);
        edad->setReadOnly(true);
        sexo = new QLineEdit(panel);
        sexo->setObjectName(QStringLiteral("sexo"));
        sexo->setGeometry(QRect(420, 130, 341, 27));
        sexo->setStyleSheet(QLatin1String("#sexo{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        sexo->setAlignment(Qt::AlignCenter);
        sexo->setReadOnly(true);
        telefono = new QLineEdit(panel);
        telefono->setObjectName(QStringLiteral("telefono"));
        telefono->setGeometry(QRect(20, 210, 341, 27));
        telefono->setStyleSheet(QLatin1String("#telefono{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        telefono->setAlignment(Qt::AlignCenter);
        telefono->setReadOnly(true);
        direccion = new QLineEdit(panel);
        direccion->setObjectName(QStringLiteral("direccion"));
        direccion->setGeometry(QRect(420, 210, 341, 27));
        direccion->setStyleSheet(QLatin1String("#direccion{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        direccion->setAlignment(Qt::AlignCenter);
        direccion->setReadOnly(true);
        historial = new QLineEdit(panel);
        historial->setObjectName(QStringLiteral("historial"));
        historial->setGeometry(QRect(20, 290, 341, 27));
        historial->setStyleSheet(QLatin1String("#historial{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        historial->setAlignment(Qt::AlignCenter);
        historial->setReadOnly(true);
        eliminar_4 = new QPushButton(panel);
        eliminar_4->setObjectName(QStringLiteral("eliminar_4"));
        eliminar_4->setGeometry(QRect(530, 410, 121, 31));
        eliminar_4->setCursor(QCursor(Qt::PointingHandCursor));
        eliminar_4->setStyleSheet(QLatin1String("#eliminar_4{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#eliminar_4:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        siguiente_4 = new QPushButton(panel);
        siguiente_4->setObjectName(QStringLiteral("siguiente_4"));
        siguiente_4->setGeometry(QRect(530, 360, 121, 31));
        siguiente_4->setCursor(QCursor(Qt::PointingHandCursor));
        siguiente_4->setStyleSheet(QLatin1String("#siguiente_4{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#siguiente_4:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        editar_4 = new QPushButton(panel);
        editar_4->setObjectName(QStringLiteral("editar_4"));
        editar_4->setGeometry(QRect(660, 360, 121, 31));
        editar_4->setCursor(QCursor(Qt::PointingHandCursor));
        editar_4->setStyleSheet(QLatin1String("#editar_4{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#editar_4:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        nuevo_4 = new QPushButton(panel);
        nuevo_4->setObjectName(QStringLiteral("nuevo_4"));
        nuevo_4->setGeometry(QRect(400, 410, 121, 31));
        nuevo_4->setCursor(QCursor(Qt::PointingHandCursor));
        nuevo_4->setStyleSheet(QLatin1String("#nuevo_4{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#nuevo_4:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        anterior_4 = new QPushButton(panel);
        anterior_4->setObjectName(QStringLiteral("anterior_4"));
        anterior_4->setGeometry(QRect(400, 360, 121, 31));
        anterior_4->setCursor(QCursor(Qt::PointingHandCursor));
        anterior_4->setStyleSheet(QLatin1String("#anterior_4{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#anterior_4:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        regresar_4 = new QPushButton(panel);
        regresar_4->setObjectName(QStringLiteral("regresar_4"));
        regresar_4->setGeometry(QRect(660, 410, 121, 31));
        regresar_4->setCursor(QCursor(Qt::PointingHandCursor));
        regresar_4->setStyleSheet(QLatin1String("#regresar_4{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}\n"
"\n"
"#regresar_4:hover{\n"
"	background-color: rgba(100,100,200,0.8);\n"
"   cursor: pointer;\n"
"}"));
        label->raise();
        label_2->raise();
        panel->raise();

        retranslateUi(Empleado);

        QMetaObject::connectSlotsByName(Empleado);
    } // setupUi

    void retranslateUi(QWidget *Empleado)
    {
        Empleado->setWindowTitle(QApplication::translate("Empleado", "Form", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Empleado", "Empleado", 0));
        label_3->setText(QApplication::translate("Empleado", "Nombres: ", 0));
        label_4->setText(QApplication::translate("Empleado", "Apellidos:", 0));
        label_5->setText(QApplication::translate("Empleado", "Edad:", 0));
        label_6->setText(QApplication::translate("Empleado", "Sexo:", 0));
        label_7->setText(QApplication::translate("Empleado", "Telefono:", 0));
        label_8->setText(QApplication::translate("Empleado", "Direccion:", 0));
        label_10->setText(QApplication::translate("Empleado", "Salario:", 0));
        eliminar_4->setText(QApplication::translate("Empleado", "Eliminar", 0));
        siguiente_4->setText(QApplication::translate("Empleado", "Siguiente", 0));
        editar_4->setText(QApplication::translate("Empleado", "Editar", 0));
        nuevo_4->setText(QApplication::translate("Empleado", "Nuevo", 0));
        anterior_4->setText(QApplication::translate("Empleado", "Anterior", 0));
        regresar_4->setText(QApplication::translate("Empleado", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class Empleado: public Ui_Empleado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLEADO_H
