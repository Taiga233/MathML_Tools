/********************************************************************************
** Form generated from reading UI file 'tools_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLS_WIDGET_H
#define UI_TOOLS_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tools_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBox;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QWidget *Tools_Widget)
    {
        if (Tools_Widget->objectName().isEmpty())
            Tools_Widget->setObjectName(QStringLiteral("Tools_Widget"));
        Tools_Widget->resize(830, 700);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(16);
        Tools_Widget->setFont(font);
        verticalLayout = new QVBoxLayout(Tools_Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Tools_Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(Tools_Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Tools_Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(Tools_Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        textEdit = new QTextEdit(Tools_Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(Tools_Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        spinBox = new QSpinBox(Tools_Widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(6);
        spinBox->setMaximum(128);
        spinBox->setValue(12);

        horizontalLayout_3->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_2 = new QPushButton(Tools_Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 70));

        verticalLayout->addWidget(pushButton_2);

        label_3 = new QLabel(Tools_Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        retranslateUi(Tools_Widget);

        QMetaObject::connectSlotsByName(Tools_Widget);
    } // setupUi

    void retranslateUi(QWidget *Tools_Widget)
    {
        Tools_Widget->setWindowTitle(QApplication::translate("Tools_Widget", "Tools_Widget", 0));
        label->setText(QApplication::translate("Tools_Widget", "select your XML file:", 0));
        pushButton->setText(QApplication::translate("Tools_Widget", "open file...", 0));
        label_2->setText(QApplication::translate("Tools_Widget", "Path:", 0));
        lineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QApplication::translate("Tools_Widget", "<html><head/><body><p>MathML Referance:</p><p><a href=\"https://developer.mozilla.org/en-US/docs/Web/MathML\"><span style=\" text-decoration: underline; color:#0000ff;\">MathML | MDN (mozilla.org)</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        textEdit->setWhatsThis(QApplication::translate("Tools_Widget", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("Tools_Widget", "set formula font size:", 0));
        pushButton_2->setText(QApplication::translate("Tools_Widget", "Show MathML formula", 0));
        label_3->setText(QApplication::translate("Tools_Widget", "Notes", 0));
    } // retranslateUi

};

namespace Ui {
    class Tools_Widget: public Ui_Tools_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLS_WIDGET_H
