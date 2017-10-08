/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame1;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame3;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(759, 465);
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QString::fromUtf8("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        frame = new QFrame(OverviewPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame1 = new QFrame(frame);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        verticalLayout_2 = new QVBoxLayout(frame1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(frame1);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame2 = new QFrame(widget);
        frame2->setObjectName(QString::fromUtf8("frame2"));
        horizontalLayout_4 = new QHBoxLayout(frame2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame2);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Open Sans"));
        font1.setPointSize(11);
        labelWalletStatus->setFont(font1);
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(frame2);

        frame3 = new QFrame(widget);
        frame3->setObjectName(QString::fromUtf8("frame3"));
        formLayout_2 = new QFormLayout(frame3);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        label = new QLabel(frame3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        labelBalance = new QLabel(frame3);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0 DIME"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label_3 = new QLabel(frame3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(frame3);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0 DIME"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(frame3);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Open Sans"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        labelImmatureText->setFont(font2);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(frame3);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Open Sans"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        labelImmature->setFont(font3);
        labelImmature->setText(QString::fromUtf8("0 DIME"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelImmature);


        verticalLayout_4->addWidget(frame3);


        verticalLayout_2->addWidget(widget);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(frame1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_9);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_3);

        frame4 = new QFrame(frame);
        frame4->setObjectName(QString::fromUtf8("frame4"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Open Sans"));
        frame4->setFont(font4);
        verticalLayout_3 = new QVBoxLayout(frame4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_2 = new QWidget(frame4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame5 = new QFrame(widget_2);
        frame5->setObjectName(QString::fromUtf8("frame5"));
        horizontalLayout_2 = new QHBoxLayout(frame5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_4 = new QLabel(frame5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame5);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setFont(font1);
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);


        verticalLayout->addWidget(frame5);

        listTransactions = new QListView(widget_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Franklin Gothic Medium Cond"));
        font5.setPointSize(9);
        listTransactions->setFont(font5);
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(frame4);


        topLayout->addWidget(frame);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "Wallet", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>The displayed information may be out of date. Your wallet automatically synchronizes with the Dimecoin network after a connection is established, but this process has not completed yet.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Balance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent transactions</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>The displayed information may be out of date. Your wallet automatically synchronizes with the Dimecoin network after a connection is established, but this process has not completed yet.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
