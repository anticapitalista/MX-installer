/********************************************************************************
** Form generated from reading UI file 'memain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMAIN_H
#define UI_MEMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeMain
{
public:
    QFrame *mainFrame;
    QFrame *line1;
    QFrame *splashFrame;
    QPushButton *closeButton;
    QTabWidget *mainTabs;
    QWidget *tab;
    QTextEdit *mainHelp;

    void setupUi(QDialog *MeMain)
    {
        if (MeMain->objectName().isEmpty())
            MeMain->setObjectName(QString::fromUtf8("MeMain"));
        MeMain->resize(780, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MeMain->sizePolicy().hasHeightForWidth());
        MeMain->setSizePolicy(sizePolicy);
        MeMain->setMinimumSize(QSize(780, 500));
        MeMain->setMaximumSize(QSize(780, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        MeMain->setWindowIcon(icon);
        mainFrame = new QFrame(MeMain);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setGeometry(QRect(310, 30, 460, 460));
        sizePolicy.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy);
        mainFrame->setMinimumSize(QSize(460, 460));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        mainFrame->setLineWidth(2);
        line1 = new QFrame(mainFrame);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setGeometry(QRect(5, 410, 450, 16));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);
        splashFrame = new QFrame(mainFrame);
        splashFrame->setObjectName(QString::fromUtf8("splashFrame"));
        splashFrame->setGeometry(QRect(5, 5, 450, 405));
        splashFrame->setFrameShape(QFrame::StyledPanel);
        splashFrame->setFrameShadow(QFrame::Plain);
        splashFrame->setLineWidth(0);
        closeButton = new QPushButton(mainFrame);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(10, 425, 100, 27));
        mainTabs = new QTabWidget(MeMain);
        mainTabs->setObjectName(QString::fromUtf8("mainTabs"));
        mainTabs->setGeometry(QRect(6, 8, 298, 485));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainTabs->sizePolicy().hasHeightForWidth());
        mainTabs->setSizePolicy(sizePolicy1);
        mainTabs->setMinimumSize(QSize(298, 485));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        mainHelp = new QTextEdit(tab);
        mainHelp->setObjectName(QString::fromUtf8("mainHelp"));
        mainHelp->setGeometry(QRect(0, 0, 290, 455));
        mainHelp->setMinimumSize(QSize(290, 455));
        mainHelp->setFrameShape(QFrame::StyledPanel);
        mainHelp->setLineWidth(2);
        mainHelp->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        mainHelp->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mainHelp->setReadOnly(true);
        mainTabs->addTab(tab, QString());

        retranslateUi(MeMain);
        QObject::connect(closeButton, SIGNAL(clicked()), MeMain, SLOT(closeClicked()));

        QMetaObject::connectSlotsByName(MeMain);
    } // setupUi

    void retranslateUi(QDialog *MeMain)
    {
        MeMain->setWindowTitle(QApplication::translate("MeMain", "MX Linux Install", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("MeMain", "Close", 0, QApplication::UnicodeUTF8));
        mainTabs->setTabText(mainTabs->indexOf(tab), QApplication::translate("MeMain", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MeMain: public Ui_MeMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMAIN_H
