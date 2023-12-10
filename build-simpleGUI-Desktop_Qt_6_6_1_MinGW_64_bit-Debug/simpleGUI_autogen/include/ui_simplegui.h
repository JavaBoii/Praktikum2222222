/********************************************************************************
** Form generated from reading UI file 'simplegui.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEGUI_H
#define UI_SIMPLEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_simpleGUI
{
public:
    QWidget *centralwidget;
    QSpinBox *spinBox_2;
    QLCDNumber *lcdNumber_4;
    QWidget *widget;
    QFormLayout *formLayout;
    QVBoxLayout *INPUT;
    QLabel *label;
    QSpinBox *spinBox;
    QGridLayout *OUTPUTS;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QVBoxLayout *END;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *simpleGUI)
    {
        if (simpleGUI->objectName().isEmpty())
            simpleGUI->setObjectName("simpleGUI");
        simpleGUI->resize(706, 362);
        centralwidget = new QWidget(simpleGUI);
        centralwidget->setObjectName("centralwidget");
        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(550, 160, 42, 25));
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName("lcdNumber_4");
        lcdNumber_4->setGeometry(QRect(540, 210, 64, 23));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 431, 321));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetMaximumSize);
        formLayout->setContentsMargins(0, 0, 0, 0);
        INPUT = new QVBoxLayout();
        INPUT->setObjectName("INPUT");
        INPUT->setContentsMargins(-1, -1, -1, 20);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        INPUT->addWidget(label);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(99999);

        INPUT->addWidget(spinBox);


        formLayout->setLayout(0, QFormLayout::SpanningRole, INPUT);

        OUTPUTS = new QGridLayout();
        OUTPUTS->setObjectName("OUTPUTS");
        OUTPUTS->setHorizontalSpacing(6);
        OUTPUTS->setVerticalSpacing(22);
        OUTPUTS->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lcdNumber_2 = new QLCDNumber(widget);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setDigitCount(32);
        lcdNumber_2->setMode(QLCDNumber::Oct);

        horizontalLayout_2->addWidget(lcdNumber_2);


        OUTPUTS->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        lcdNumber_3 = new QLCDNumber(widget);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setDigitCount(32);
        lcdNumber_3->setMode(QLCDNumber::Hex);

        horizontalLayout_3->addWidget(lcdNumber_3);


        OUTPUTS->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setDigitCount(32);
        lcdNumber->setMode(QLCDNumber::Bin);

        horizontalLayout->addWidget(lcdNumber);


        OUTPUTS->addLayout(horizontalLayout, 1, 0, 1, 1);


        formLayout->setLayout(1, QFormLayout::SpanningRole, OUTPUTS);

        END = new QVBoxLayout();
        END->setObjectName("END");
        END->setSizeConstraint(QLayout::SetDefaultConstraint);
        END->setContentsMargins(5, 10, 5, -1);
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(true);

        END->addWidget(checkBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        END->addWidget(pushButton);


        formLayout->setLayout(3, QFormLayout::SpanningRole, END);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);

        simpleGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(simpleGUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 706, 21));
        simpleGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(simpleGUI);
        statusbar->setObjectName("statusbar");
        simpleGUI->setStatusBar(statusbar);

        retranslateUi(simpleGUI);
        QObject::connect(spinBox, &QSpinBox::valueChanged, lcdNumber, qOverload<>(&QLCDNumber::setDecMode));
        QObject::connect(spinBox, &QSpinBox::valueChanged, lcdNumber_2, qOverload<>(&QLCDNumber::setOctMode));
        QObject::connect(spinBox, &QSpinBox::valueChanged, lcdNumber_3, qOverload<>(&QLCDNumber::setHexMode));
        QObject::connect(pushButton, &QPushButton::clicked, simpleGUI, qOverload<>(&QMainWindow::close));
        QObject::connect(checkBox, &QCheckBox::toggled, spinBox, &QSpinBox::setDisabled);
        QObject::connect(spinBox, &QSpinBox::valueChanged, lcdNumber, qOverload<>(&QLCDNumber::update));
        QObject::connect(spinBox_2, &QSpinBox::valueChanged, lcdNumber_4, qOverload<>(&QLCDNumber::setDecMode));

        QMetaObject::connectSlotsByName(simpleGUI);
    } // setupUi

    void retranslateUi(QMainWindow *simpleGUI)
    {
        simpleGUI->setWindowTitle(QCoreApplication::translate("simpleGUI", "simpleGUI", nullptr));
        label->setText(QCoreApplication::translate("simpleGUI", "Welcome to the number conversion program", nullptr));
        label_3->setText(QCoreApplication::translate("simpleGUI", "Octal  =", nullptr));
        label_4->setText(QCoreApplication::translate("simpleGUI", "Hexadecimal  =", nullptr));
        label_2->setText(QCoreApplication::translate("simpleGUI", "Binary   =", nullptr));
        checkBox->setText(QCoreApplication::translate("simpleGUI", "Disable/Enable Spin Box", nullptr));
        pushButton->setText(QCoreApplication::translate("simpleGUI", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class simpleGUI: public Ui_simpleGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEGUI_H
