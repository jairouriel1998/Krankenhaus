/********************************************************************************
** Form generated from reading UI file 'salas.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALAS_H
#define UI_SALAS_H

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

class Ui_salas
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *panel;
    QLabel *label_3;
    QLineEdit *nombres;
    QPushButton *regresar;
    QPushButton *anterior;
    QPushButton *siguiente;
    QPushButton *editar;
    QPushButton *nuevo;
    QPushButton *eliminar;
    QLabel *label_4;
    QLineEdit *nombres_2;

    void setupUi(QWidget *salas)
    {
        if (salas->objectName().isEmpty())
            salas->setObjectName(QStringLiteral("salas"));
        salas->setWindowModality(Qt::WindowModal);
        salas->resize(895, 436);
        label = new QLabel(salas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 901, 441));
        label->setPixmap(QPixmap(QString::fromUtf8("../imagenes/Pictures-download-abstract-minimalist-wallpaper-HD.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(salas);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 20, 141, 51));
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"	font-size: 50px;\n"
"	color: skyblue;\n"
"   font: bold;\n"
"}"));
        panel = new QFrame(salas);
        panel->setObjectName(QStringLiteral("panel"));
        panel->setGeometry(QRect(20, 80, 841, 301));
        panel->setStyleSheet(QLatin1String("#panel{\n"
"	background-color: rgba(50,50,100,0.5);\n"
"   border-radius: 25px;\n"
"}"));
        panel->setFrameShape(QFrame::StyledPanel);
        panel->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(panel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 211, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
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
        label_4 = new QLabel(panel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 90, 211, 31));
        label_4->setFont(font);
        nombres_2 = new QLineEdit(panel);
        nombres_2->setObjectName(QStringLiteral("nombres_2"));
        nombres_2->setGeometry(QRect(20, 130, 351, 27));
        nombres_2->setStyleSheet(QLatin1String("#nombres_2{\n"
"	background-color: rgba(100,100,200,0.4);\n"
"   color: white;\n"
"   border-radius: 10px;\n"
"}"));
        nombres_2->setAlignment(Qt::AlignCenter);
        nombres_2->setReadOnly(true);

        retranslateUi(salas);

        QMetaObject::connectSlotsByName(salas);
    } // setupUi

    void retranslateUi(QWidget *salas)
    {
        salas->setWindowTitle(QApplication::translate("salas", "Form", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("salas", "Salas", 0));
        label_3->setText(QApplication::translate("salas", "Numero:", 0));
        regresar->setText(QApplication::translate("salas", "Menu", 0));
        anterior->setText(QApplication::translate("salas", "Anterior", 0));
        siguiente->setText(QApplication::translate("salas", "Siguiente", 0));
        editar->setText(QApplication::translate("salas", "Editar", 0));
        nuevo->setText(QApplication::translate("salas", "Nuevo", 0));
        eliminar->setText(QApplication::translate("salas", "Eliminar", 0));
        label_4->setText(QApplication::translate("salas", "Tipo de sala:", 0));
    } // retranslateUi

};

namespace Ui {
    class salas: public Ui_salas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALAS_H
