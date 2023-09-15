/********************************************************************************
** Form generated from reading UI file 'double_link.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOUBLE_LINK_H
#define UI_DOUBLE_LINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Double_link
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *headEdit;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLineEdit *frontEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLineEdit *nextEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Double_link)
    {
        if (Double_link->objectName().isEmpty())
            Double_link->setObjectName(QString::fromUtf8("Double_link"));
        Double_link->resize(916, 679);
        horizontalLayout = new QHBoxLayout(Double_link);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(Double_link);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 254, 254);\n"
"\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;\n"
"\n"
"border-bottom-left-radius:10px;\n"
"\n"
"border-bottom-right-radius:10px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color:rgb(244, 244, 244)"));

        gridLayout->addWidget(graphicsView, 1, 1, 1, 1);

        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 606));
        widget->setMaximumSize(QSize(167, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        headEdit = new QLineEdit(widget);
        headEdit->setObjectName(QString::fromUtf8("headEdit"));

        verticalLayout->addWidget(headEdit);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        frontEdit = new QLineEdit(widget);
        frontEdit->setObjectName(QString::fromUtf8("frontEdit"));

        verticalLayout->addWidget(frontEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        nextEdit = new QLineEdit(widget);
        nextEdit->setObjectName(QString::fromUtf8("nextEdit"));

        verticalLayout->addWidget(nextEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        treeWidget = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(24, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(20, 20));
        pushButton_2->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);


        horizontalLayout->addWidget(frame);


        retranslateUi(Double_link);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Double_link, SLOT(showMinimized()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Double_link, SLOT(close()));

        QMetaObject::connectSlotsByName(Double_link);
    } // setupUi

    void retranslateUi(QDialog *Double_link)
    {
        Double_link->setWindowTitle(QApplication::translate("Double_link", "Dialog", nullptr));
        label->setText(QApplication::translate("Double_link", "\345\244\264\350\212\202\347\202\271", nullptr));
        label_2->setText(QApplication::translate("Double_link", "\345\211\215\351\251\261\346\214\207\351\222\210", nullptr));
        label_3->setText(QApplication::translate("Double_link", "\345\220\216\347\273\247\346\214\207\351\222\210", nullptr));
        pushButton->setText(QApplication::translate("Double_link", "\345\210\267\346\226\260", nullptr));
        pushButton_2->setText(QApplication::translate("Double_link", "-", nullptr));
        pushButton_3->setText(QApplication::translate("Double_link", "\303\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Double_link: public Ui_Double_link {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOUBLE_LINK_H
