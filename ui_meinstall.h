/********************************************************************************
** Form generated from reading UI file 'meinstall.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEINSTALL_H
#define UI_MEINSTALL_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeInstall
{
public:
    QGridLayout *gridLayout;
    QPushButton *nextButton;
    QSpacerItem *spacerItem;
    QPushButton *backButton;
    QStackedWidget *widgetStack;
    QWidget *Step_0;
    QGridLayout *gridLayout1;
    QGroupBox *copyrightBox;
    QGridLayout *gridLayout2;
    QTextEdit *copyrightBrowser;
    QWidget *Step_1;
    QGridLayout *gridLayout3;
    QGroupBox *installationTypeBox;
    QGridLayout *gridLayout4;
    QSpacerItem *spacerItem1;
    QLabel *leaveLabel;
    QLineEdit *freeSpaceEdit;
    QLabel *freeLabel;
    QRadioButton *entireDiskButton;
    QRadioButton *existing_partitionsButton;
    QGroupBox *diskBox;
    QGridLayout *gridLayout5;
    QComboBox *diskCombo;
    QLabel *useDiskLabel;
    QGroupBox *rearrangediskBox;
    QGridLayout *gridLayout6;
    QPushButton *qtpartedButton;
    QLabel *repartitionLabel;
    QSpacerItem *spacerItem2;
    QWidget *Step_2;
    QGridLayout *gridLayout7;
    QSpacerItem *spacerItem3;
    QGroupBox *partsPreferencesBox;
    QGridLayout *gridLayout8;
    QCheckBox *saveHomeCheck;
    QLineEdit *homeLabelEdit;
    QLabel *rootTypeLabel;
    QLineEdit *rootLabelEdit;
    QCheckBox *rootLabelCheck;
    QComboBox *rootTypeCombo;
    QCheckBox *homeLabelCheck;
    QCheckBox *badblocksCheck;
    QGroupBox *rootBox;
    QGridLayout *gridLayout9;
    QLabel *rootLabel;
    QLabel *swapLabel;
    QLabel *homeLabel;
    QComboBox *rootCombo;
    QComboBox *swapCombo;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *homeCombo;
    QWidget *Step_3;
    QGridLayout *gridLayout10;
    QGroupBox *installBox;
    QGridLayout *gridLayout11;
    QSpacerItem *spacerItem4;
    QPushButton *abortInstallButton;
    QSpacerItem *spacerItem5;
    QProgressBar *progressBar;
    QLabel *installLabel;
    QGroupBox *tipsBox;
    QGridLayout *gridLayout12;
    QTextEdit *tipsEdit;
    QWidget *Step_4;
    QGridLayout *gridLayout13;
    QGroupBox *bootMethodGroup;
    QGridLayout *gridLayout14;
    QRadioButton *grubMbrButton;
    QLabel *grubInsLabel;
    QCheckBox *grubCheckBox;
    QComboBox *grubBootCombo;
    QLabel *grubBootDiskLabel;
    QSpacerItem *spacerItem6;
    QRadioButton *grubRootButton;
    QSpacerItem *spacerItem7;
    QWidget *Step_5;
    QGridLayout *gridLayout15;
    QGroupBox *networkServicesBox;
    QGridLayout *gridLayout16;
    QTreeWidget *csView;
    QWidget *Step_6;
    QGridLayout *gridLayout17;
    QGroupBox *networkNamesBox;
    QGridLayout *gridLayout18;
    QLineEdit *computerGroupEdit;
    QLabel *computerGroupLabel;
    QCheckBox *sambaCheckBox;
    QLineEdit *computerDomainEdit;
    QLabel *computerDomainLabel;
    QLineEdit *computerNameEdit;
    QLabel *computerNameLabel;
    QSpacerItem *spacerItem8;
    QSpacerItem *verticalSpacer;
    QWidget *Step_7;
    QGridLayout *gridLayout19;
    QGroupBox *servicesBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *viewServicesButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *setClockBox;
    QGridLayout *gridLayout20;
    QCheckBox *gmtCheckBox;
    QGroupBox *localeBox;
    QGridLayout *gridLayout21;
    QLabel *localeLabel;
    QComboBox *localeCombo;
    QComboBox *keyboardCombo;
    QLabel *keyboardLabel;
    QGroupBox *tzBox;
    QGridLayout *tzGridLayout;
    QLabel *tzLabel;
    QComboBox *timezoneCombo;
    QSpacerItem *verticalSpacer_2;
    QWidget *Step_8;
    QGridLayout *gridLayout22;
    QGroupBox *rootPasswordBox;
    QGridLayout *gridLayout23;
    QLineEdit *rootPasswordEdit2;
    QLineEdit *rootPasswordEdit;
    QLabel *rootPasswordLabel2;
    QLabel *rootPasswordLabel;
    QSpacerItem *spacerItem9;
    QGroupBox *userBox;
    QGridLayout *gridLayout24;
    QLineEdit *userPasswordEdit2;
    QLineEdit *userPasswordEdit;
    QLineEdit *userNameEdit;
    QLabel *userPasswordLabel2;
    QLabel *userPasswordLabel;
    QLabel *userNameLabel;
    QCheckBox *autologinCheckBox;
    QCheckBox *passwordCheckBox;
    QCheckBox *saveDesktopCheckBox;
    QWidget *WStackPage;
    QGridLayout *gridLayout25;
    QGroupBox *reminderBox;
    QGridLayout *gridLayout26;
    QTextEdit *remindersBrowser;

    void setupUi(QWidget *MeInstall)
    {
        if (MeInstall->objectName().isEmpty())
            MeInstall->setObjectName(QString::fromUtf8("MeInstall"));
        MeInstall->resize(450, 405);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MeInstall->sizePolicy().hasHeightForWidth());
        MeInstall->setSizePolicy(sizePolicy);
        MeInstall->setMinimumSize(QSize(450, 405));
        gridLayout = new QGridLayout(MeInstall);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        nextButton = new QPushButton(MeInstall);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setDefault(true);

        gridLayout->addWidget(nextButton, 2, 2, 1, 1);

        spacerItem = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        backButton = new QPushButton(MeInstall);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        gridLayout->addWidget(backButton, 2, 1, 1, 1);

        widgetStack = new QStackedWidget(MeInstall);
        widgetStack->setObjectName(QString::fromUtf8("widgetStack"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetStack->sizePolicy().hasHeightForWidth());
        widgetStack->setSizePolicy(sizePolicy1);
        widgetStack->setMinimumSize(QSize(160, 160));
        Step_0 = new QWidget();
        Step_0->setObjectName(QString::fromUtf8("Step_0"));
        gridLayout1 = new QGridLayout(Step_0);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        copyrightBox = new QGroupBox(Step_0);
        copyrightBox->setObjectName(QString::fromUtf8("copyrightBox"));
        sizePolicy1.setHeightForWidth(copyrightBox->sizePolicy().hasHeightForWidth());
        copyrightBox->setSizePolicy(sizePolicy1);
        gridLayout2 = new QGridLayout(copyrightBox);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        copyrightBrowser = new QTextEdit(copyrightBox);
        copyrightBrowser->setObjectName(QString::fromUtf8("copyrightBrowser"));
        sizePolicy1.setHeightForWidth(copyrightBrowser->sizePolicy().hasHeightForWidth());
        copyrightBrowser->setSizePolicy(sizePolicy1);
        copyrightBrowser->setMinimumSize(QSize(380, 200));
        copyrightBrowser->setMaximumSize(QSize(32767, 32767));
        copyrightBrowser->setAcceptDrops(false);
        copyrightBrowser->setFrameShape(QFrame::StyledPanel);
        copyrightBrowser->setFrameShadow(QFrame::Plain);
        copyrightBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        copyrightBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        copyrightBrowser->setReadOnly(true);

        gridLayout2->addWidget(copyrightBrowser, 0, 0, 1, 1);


        gridLayout1->addWidget(copyrightBox, 0, 0, 1, 1);

        widgetStack->addWidget(Step_0);
        Step_1 = new QWidget();
        Step_1->setObjectName(QString::fromUtf8("Step_1"));
        gridLayout3 = new QGridLayout(Step_1);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        installationTypeBox = new QGroupBox(Step_1);
        installationTypeBox->setObjectName(QString::fromUtf8("installationTypeBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(installationTypeBox->sizePolicy().hasHeightForWidth());
        installationTypeBox->setSizePolicy(sizePolicy2);
        gridLayout4 = new QGridLayout(installationTypeBox);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        spacerItem1 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem1, 1, 0, 1, 1);

        leaveLabel = new QLabel(installationTypeBox);
        leaveLabel->setObjectName(QString::fromUtf8("leaveLabel"));
        leaveLabel->setEnabled(false);
        sizePolicy2.setHeightForWidth(leaveLabel->sizePolicy().hasHeightForWidth());
        leaveLabel->setSizePolicy(sizePolicy2);
        leaveLabel->setWordWrap(false);

        gridLayout4->addWidget(leaveLabel, 1, 1, 1, 1);

        freeSpaceEdit = new QLineEdit(installationTypeBox);
        freeSpaceEdit->setObjectName(QString::fromUtf8("freeSpaceEdit"));
        freeSpaceEdit->setEnabled(false);
        sizePolicy2.setHeightForWidth(freeSpaceEdit->sizePolicy().hasHeightForWidth());
        freeSpaceEdit->setSizePolicy(sizePolicy2);
        freeSpaceEdit->setAlignment(Qt::AlignRight);

        gridLayout4->addWidget(freeSpaceEdit, 1, 2, 1, 1);

        freeLabel = new QLabel(installationTypeBox);
        freeLabel->setObjectName(QString::fromUtf8("freeLabel"));
        freeLabel->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(freeLabel->sizePolicy().hasHeightForWidth());
        freeLabel->setSizePolicy(sizePolicy3);
        freeLabel->setWordWrap(false);

        gridLayout4->addWidget(freeLabel, 1, 3, 1, 1);

        entireDiskButton = new QRadioButton(installationTypeBox);
        entireDiskButton->setObjectName(QString::fromUtf8("entireDiskButton"));
        sizePolicy2.setHeightForWidth(entireDiskButton->sizePolicy().hasHeightForWidth());
        entireDiskButton->setSizePolicy(sizePolicy2);
        entireDiskButton->setChecked(false);

        gridLayout4->addWidget(entireDiskButton, 0, 0, 1, 3);

        existing_partitionsButton = new QRadioButton(installationTypeBox);
        existing_partitionsButton->setObjectName(QString::fromUtf8("existing_partitionsButton"));
        sizePolicy2.setHeightForWidth(existing_partitionsButton->sizePolicy().hasHeightForWidth());
        existing_partitionsButton->setSizePolicy(sizePolicy2);
        existing_partitionsButton->setChecked(true);

        gridLayout4->addWidget(existing_partitionsButton, 2, 0, 1, 3);


        gridLayout3->addWidget(installationTypeBox, 2, 0, 1, 1);

        diskBox = new QGroupBox(Step_1);
        diskBox->setObjectName(QString::fromUtf8("diskBox"));
        sizePolicy2.setHeightForWidth(diskBox->sizePolicy().hasHeightForWidth());
        diskBox->setSizePolicy(sizePolicy2);
        gridLayout5 = new QGridLayout(diskBox);
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(11, 11, 11, 11);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        gridLayout5->setContentsMargins(9, 9, 9, 9);
        diskCombo = new QComboBox(diskBox);
        diskCombo->setObjectName(QString::fromUtf8("diskCombo"));
        sizePolicy2.setHeightForWidth(diskCombo->sizePolicy().hasHeightForWidth());
        diskCombo->setSizePolicy(sizePolicy2);

        gridLayout5->addWidget(diskCombo, 0, 1, 1, 1);

        useDiskLabel = new QLabel(diskBox);
        useDiskLabel->setObjectName(QString::fromUtf8("useDiskLabel"));
        sizePolicy2.setHeightForWidth(useDiskLabel->sizePolicy().hasHeightForWidth());
        useDiskLabel->setSizePolicy(sizePolicy2);
        QFont font;
        useDiskLabel->setFont(font);
        useDiskLabel->setWordWrap(false);

        gridLayout5->addWidget(useDiskLabel, 0, 0, 1, 1);


        gridLayout3->addWidget(diskBox, 0, 0, 1, 1);

        rearrangediskBox = new QGroupBox(Step_1);
        rearrangediskBox->setObjectName(QString::fromUtf8("rearrangediskBox"));
        sizePolicy2.setHeightForWidth(rearrangediskBox->sizePolicy().hasHeightForWidth());
        rearrangediskBox->setSizePolicy(sizePolicy2);
        gridLayout6 = new QGridLayout(rearrangediskBox);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(11, 11, 11, 11);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        gridLayout6->setContentsMargins(9, 9, 9, 9);
        qtpartedButton = new QPushButton(rearrangediskBox);
        qtpartedButton->setObjectName(QString::fromUtf8("qtpartedButton"));
        sizePolicy2.setHeightForWidth(qtpartedButton->sizePolicy().hasHeightForWidth());
        qtpartedButton->setSizePolicy(sizePolicy2);

        gridLayout6->addWidget(qtpartedButton, 0, 1, 1, 1);

        repartitionLabel = new QLabel(rearrangediskBox);
        repartitionLabel->setObjectName(QString::fromUtf8("repartitionLabel"));
        sizePolicy2.setHeightForWidth(repartitionLabel->sizePolicy().hasHeightForWidth());
        repartitionLabel->setSizePolicy(sizePolicy2);
        repartitionLabel->setWordWrap(false);

        gridLayout6->addWidget(repartitionLabel, 0, 0, 1, 1);


        gridLayout3->addWidget(rearrangediskBox, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem2, 3, 0, 1, 1);

        widgetStack->addWidget(Step_1);
        Step_2 = new QWidget();
        Step_2->setObjectName(QString::fromUtf8("Step_2"));
        gridLayout7 = new QGridLayout(Step_2);
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(11, 11, 11, 11);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        gridLayout7->setContentsMargins(9, 9, 9, 9);
        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout7->addItem(spacerItem3, 2, 0, 1, 1);

        partsPreferencesBox = new QGroupBox(Step_2);
        partsPreferencesBox->setObjectName(QString::fromUtf8("partsPreferencesBox"));
        sizePolicy2.setHeightForWidth(partsPreferencesBox->sizePolicy().hasHeightForWidth());
        partsPreferencesBox->setSizePolicy(sizePolicy2);
        gridLayout8 = new QGridLayout(partsPreferencesBox);
        gridLayout8->setSpacing(6);
        gridLayout8->setContentsMargins(11, 11, 11, 11);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        gridLayout8->setContentsMargins(9, 9, 9, 9);
        saveHomeCheck = new QCheckBox(partsPreferencesBox);
        saveHomeCheck->setObjectName(QString::fromUtf8("saveHomeCheck"));
        sizePolicy2.setHeightForWidth(saveHomeCheck->sizePolicy().hasHeightForWidth());
        saveHomeCheck->setSizePolicy(sizePolicy2);

        gridLayout8->addWidget(saveHomeCheck, 0, 0, 1, 2);

        homeLabelEdit = new QLineEdit(partsPreferencesBox);
        homeLabelEdit->setObjectName(QString::fromUtf8("homeLabelEdit"));
        homeLabelEdit->setEnabled(false);
        homeLabelEdit->setText(QString::fromUtf8("homeMX"));

        gridLayout8->addWidget(homeLabelEdit, 3, 1, 1, 1);

        rootTypeLabel = new QLabel(partsPreferencesBox);
        rootTypeLabel->setObjectName(QString::fromUtf8("rootTypeLabel"));
        sizePolicy2.setHeightForWidth(rootTypeLabel->sizePolicy().hasHeightForWidth());
        rootTypeLabel->setSizePolicy(sizePolicy2);
        rootTypeLabel->setMinimumSize(QSize(0, 0));
        rootTypeLabel->setFont(font);
        rootTypeLabel->setWordWrap(false);

        gridLayout8->addWidget(rootTypeLabel, 4, 0, 1, 1);

        rootLabelEdit = new QLineEdit(partsPreferencesBox);
        rootLabelEdit->setObjectName(QString::fromUtf8("rootLabelEdit"));
        rootLabelEdit->setEnabled(false);
        rootLabelEdit->setText(QString::fromUtf8("rootMX"));

        gridLayout8->addWidget(rootLabelEdit, 2, 1, 1, 1);

        rootLabelCheck = new QCheckBox(partsPreferencesBox);
        rootLabelCheck->setObjectName(QString::fromUtf8("rootLabelCheck"));

        gridLayout8->addWidget(rootLabelCheck, 2, 0, 1, 1);

        rootTypeCombo = new QComboBox(partsPreferencesBox);
        rootTypeCombo->setObjectName(QString::fromUtf8("rootTypeCombo"));
        sizePolicy2.setHeightForWidth(rootTypeCombo->sizePolicy().hasHeightForWidth());
        rootTypeCombo->setSizePolicy(sizePolicy2);

        gridLayout8->addWidget(rootTypeCombo, 4, 1, 1, 1);

        homeLabelCheck = new QCheckBox(partsPreferencesBox);
        homeLabelCheck->setObjectName(QString::fromUtf8("homeLabelCheck"));
        homeLabelCheck->setEnabled(true);

        gridLayout8->addWidget(homeLabelCheck, 3, 0, 1, 1);

        badblocksCheck = new QCheckBox(partsPreferencesBox);
        badblocksCheck->setObjectName(QString::fromUtf8("badblocksCheck"));
        sizePolicy2.setHeightForWidth(badblocksCheck->sizePolicy().hasHeightForWidth());
        badblocksCheck->setSizePolicy(sizePolicy2);
        badblocksCheck->setMinimumSize(QSize(0, 0));
        badblocksCheck->setChecked(false);

        gridLayout8->addWidget(badblocksCheck, 1, 0, 1, 2);


        gridLayout7->addWidget(partsPreferencesBox, 1, 0, 1, 1);

        rootBox = new QGroupBox(Step_2);
        rootBox->setObjectName(QString::fromUtf8("rootBox"));
        sizePolicy2.setHeightForWidth(rootBox->sizePolicy().hasHeightForWidth());
        rootBox->setSizePolicy(sizePolicy2);
        gridLayout9 = new QGridLayout(rootBox);
        gridLayout9->setSpacing(6);
        gridLayout9->setContentsMargins(11, 11, 11, 11);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        gridLayout9->setContentsMargins(9, 9, 9, 9);
        rootLabel = new QLabel(rootBox);
        rootLabel->setObjectName(QString::fromUtf8("rootLabel"));
        sizePolicy2.setHeightForWidth(rootLabel->sizePolicy().hasHeightForWidth());
        rootLabel->setSizePolicy(sizePolicy2);
        rootLabel->setFont(font);
        rootLabel->setWordWrap(false);

        gridLayout9->addWidget(rootLabel, 0, 0, 1, 1);

        swapLabel = new QLabel(rootBox);
        swapLabel->setObjectName(QString::fromUtf8("swapLabel"));
        sizePolicy2.setHeightForWidth(swapLabel->sizePolicy().hasHeightForWidth());
        swapLabel->setSizePolicy(sizePolicy2);
        swapLabel->setWordWrap(false);

        gridLayout9->addWidget(swapLabel, 1, 0, 1, 1);

        homeLabel = new QLabel(rootBox);
        homeLabel->setObjectName(QString::fromUtf8("homeLabel"));
        sizePolicy2.setHeightForWidth(homeLabel->sizePolicy().hasHeightForWidth());
        homeLabel->setSizePolicy(sizePolicy2);
        homeLabel->setWordWrap(false);

        gridLayout9->addWidget(homeLabel, 2, 0, 1, 1);

        rootCombo = new QComboBox(rootBox);
        rootCombo->setObjectName(QString::fromUtf8("rootCombo"));
        sizePolicy2.setHeightForWidth(rootCombo->sizePolicy().hasHeightForWidth());
        rootCombo->setSizePolicy(sizePolicy2);

        gridLayout9->addWidget(rootCombo, 0, 1, 1, 2);

        swapCombo = new QComboBox(rootBox);
        swapCombo->setObjectName(QString::fromUtf8("swapCombo"));
        sizePolicy2.setHeightForWidth(swapCombo->sizePolicy().hasHeightForWidth());
        swapCombo->setSizePolicy(sizePolicy2);

        gridLayout9->addWidget(swapCombo, 1, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        homeCombo = new QComboBox(rootBox);
        homeCombo->setObjectName(QString::fromUtf8("homeCombo"));
        sizePolicy2.setHeightForWidth(homeCombo->sizePolicy().hasHeightForWidth());
        homeCombo->setSizePolicy(sizePolicy2);

        gridLayout9->addWidget(homeCombo, 2, 1, 1, 2);


        gridLayout7->addWidget(rootBox, 0, 0, 1, 1);

        widgetStack->addWidget(Step_2);
        Step_3 = new QWidget();
        Step_3->setObjectName(QString::fromUtf8("Step_3"));
        gridLayout10 = new QGridLayout(Step_3);
        gridLayout10->setSpacing(6);
        gridLayout10->setContentsMargins(11, 11, 11, 11);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        gridLayout10->setContentsMargins(9, 9, 9, 9);
        installBox = new QGroupBox(Step_3);
        installBox->setObjectName(QString::fromUtf8("installBox"));
        sizePolicy2.setHeightForWidth(installBox->sizePolicy().hasHeightForWidth());
        installBox->setSizePolicy(sizePolicy2);
        gridLayout11 = new QGridLayout(installBox);
        gridLayout11->setSpacing(6);
        gridLayout11->setContentsMargins(11, 11, 11, 11);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        gridLayout11->setContentsMargins(9, 9, 9, 9);
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout11->addItem(spacerItem4, 2, 0, 1, 1);

        abortInstallButton = new QPushButton(installBox);
        abortInstallButton->setObjectName(QString::fromUtf8("abortInstallButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(abortInstallButton->sizePolicy().hasHeightForWidth());
        abortInstallButton->setSizePolicy(sizePolicy4);
        abortInstallButton->setFocusPolicy(Qt::ClickFocus);

        gridLayout11->addWidget(abortInstallButton, 2, 1, 1, 1);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout11->addItem(spacerItem5, 2, 2, 1, 1);

        progressBar = new QProgressBar(installBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout11->addWidget(progressBar, 1, 0, 1, 3);

        installLabel = new QLabel(installBox);
        installLabel->setObjectName(QString::fromUtf8("installLabel"));
        sizePolicy2.setHeightForWidth(installLabel->sizePolicy().hasHeightForWidth());
        installLabel->setSizePolicy(sizePolicy2);
        installLabel->setAlignment(Qt::AlignCenter);
        installLabel->setWordWrap(false);

        gridLayout11->addWidget(installLabel, 0, 0, 1, 3);


        gridLayout10->addWidget(installBox, 0, 0, 1, 1);

        tipsBox = new QGroupBox(Step_3);
        tipsBox->setObjectName(QString::fromUtf8("tipsBox"));
        sizePolicy1.setHeightForWidth(tipsBox->sizePolicy().hasHeightForWidth());
        tipsBox->setSizePolicy(sizePolicy1);
        gridLayout12 = new QGridLayout(tipsBox);
        gridLayout12->setSpacing(6);
        gridLayout12->setContentsMargins(11, 11, 11, 11);
        gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
        gridLayout12->setContentsMargins(9, 9, 9, 9);
        tipsEdit = new QTextEdit(tipsBox);
        tipsEdit->setObjectName(QString::fromUtf8("tipsEdit"));
        sizePolicy1.setHeightForWidth(tipsEdit->sizePolicy().hasHeightForWidth());
        tipsEdit->setSizePolicy(sizePolicy1);
        tipsEdit->setAcceptDrops(false);
        tipsEdit->setFrameShape(QFrame::StyledPanel);
        tipsEdit->setFrameShadow(QFrame::Plain);
        tipsEdit->setUndoRedoEnabled(false);
        tipsEdit->setReadOnly(true);

        gridLayout12->addWidget(tipsEdit, 0, 0, 1, 1);


        gridLayout10->addWidget(tipsBox, 1, 0, 1, 1);

        widgetStack->addWidget(Step_3);
        Step_4 = new QWidget();
        Step_4->setObjectName(QString::fromUtf8("Step_4"));
        gridLayout13 = new QGridLayout(Step_4);
        gridLayout13->setSpacing(6);
        gridLayout13->setContentsMargins(11, 11, 11, 11);
        gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
        gridLayout13->setContentsMargins(9, 9, 9, 9);
        bootMethodGroup = new QGroupBox(Step_4);
        bootMethodGroup->setObjectName(QString::fromUtf8("bootMethodGroup"));
        sizePolicy2.setHeightForWidth(bootMethodGroup->sizePolicy().hasHeightForWidth());
        bootMethodGroup->setSizePolicy(sizePolicy2);
        gridLayout14 = new QGridLayout(bootMethodGroup);
        gridLayout14->setSpacing(6);
        gridLayout14->setContentsMargins(11, 11, 11, 11);
        gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
        gridLayout14->setContentsMargins(9, 9, 9, 9);
        grubMbrButton = new QRadioButton(bootMethodGroup);
        grubMbrButton->setObjectName(QString::fromUtf8("grubMbrButton"));
        grubMbrButton->setMinimumSize(QSize(80, 0));
        grubMbrButton->setMouseTracking(true);
        grubMbrButton->setAutoFillBackground(false);
        grubMbrButton->setChecked(true);
        grubMbrButton->setAutoRepeat(false);
        grubMbrButton->setAutoExclusive(true);

        gridLayout14->addWidget(grubMbrButton, 1, 2, 1, 1);

        grubInsLabel = new QLabel(bootMethodGroup);
        grubInsLabel->setObjectName(QString::fromUtf8("grubInsLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(grubInsLabel->sizePolicy().hasHeightForWidth());
        grubInsLabel->setSizePolicy(sizePolicy5);
        grubInsLabel->setMaximumSize(QSize(100, 16777215));
        grubInsLabel->setWordWrap(false);

        gridLayout14->addWidget(grubInsLabel, 1, 1, 1, 1);

        grubCheckBox = new QCheckBox(bootMethodGroup);
        grubCheckBox->setObjectName(QString::fromUtf8("grubCheckBox"));
        sizePolicy2.setHeightForWidth(grubCheckBox->sizePolicy().hasHeightForWidth());
        grubCheckBox->setSizePolicy(sizePolicy2);
        grubCheckBox->setChecked(true);

        gridLayout14->addWidget(grubCheckBox, 0, 0, 1, 4);

        grubBootCombo = new QComboBox(bootMethodGroup);
        grubBootCombo->setObjectName(QString::fromUtf8("grubBootCombo"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(grubBootCombo->sizePolicy().hasHeightForWidth());
        grubBootCombo->setSizePolicy(sizePolicy6);
        grubBootCombo->setMinimumSize(QSize(0, 0));
        grubBootCombo->setMaximumSize(QSize(250, 16777215));

        gridLayout14->addWidget(grubBootCombo, 2, 2, 1, 2);

        grubBootDiskLabel = new QLabel(bootMethodGroup);
        grubBootDiskLabel->setObjectName(QString::fromUtf8("grubBootDiskLabel"));
        sizePolicy5.setHeightForWidth(grubBootDiskLabel->sizePolicy().hasHeightForWidth());
        grubBootDiskLabel->setSizePolicy(sizePolicy5);
        grubBootDiskLabel->setFont(font);
        grubBootDiskLabel->setWordWrap(false);

        gridLayout14->addWidget(grubBootDiskLabel, 2, 1, 1, 1);

        spacerItem6 = new QSpacerItem(16, 71, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout14->addItem(spacerItem6, 1, 0, 3, 1);

        grubRootButton = new QRadioButton(bootMethodGroup);
        grubRootButton->setObjectName(QString::fromUtf8("grubRootButton"));
        grubRootButton->setMinimumSize(QSize(80, 0));
        grubRootButton->setChecked(false);

        gridLayout14->addWidget(grubRootButton, 1, 3, 1, 1);


        gridLayout13->addWidget(bootMethodGroup, 0, 0, 1, 1);

        spacerItem7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout13->addItem(spacerItem7, 1, 0, 1, 1);

        widgetStack->addWidget(Step_4);
        Step_5 = new QWidget();
        Step_5->setObjectName(QString::fromUtf8("Step_5"));
        gridLayout15 = new QGridLayout(Step_5);
        gridLayout15->setSpacing(6);
        gridLayout15->setContentsMargins(11, 11, 11, 11);
        gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
        gridLayout15->setContentsMargins(9, 9, 9, 9);
        networkServicesBox = new QGroupBox(Step_5);
        networkServicesBox->setObjectName(QString::fromUtf8("networkServicesBox"));
        sizePolicy1.setHeightForWidth(networkServicesBox->sizePolicy().hasHeightForWidth());
        networkServicesBox->setSizePolicy(sizePolicy1);
        gridLayout16 = new QGridLayout(networkServicesBox);
        gridLayout16->setSpacing(6);
        gridLayout16->setContentsMargins(11, 11, 11, 11);
        gridLayout16->setObjectName(QString::fromUtf8("gridLayout16"));
        gridLayout16->setContentsMargins(9, 9, 9, 9);
        csView = new QTreeWidget(networkServicesBox);
        csView->setObjectName(QString::fromUtf8("csView"));
        sizePolicy1.setHeightForWidth(csView->sizePolicy().hasHeightForWidth());
        csView->setSizePolicy(sizePolicy1);
        csView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        csView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        csView->setAlternatingRowColors(true);
        csView->setRootIsDecorated(true);

        gridLayout16->addWidget(csView, 0, 0, 1, 1);


        gridLayout15->addWidget(networkServicesBox, 0, 0, 1, 1);

        widgetStack->addWidget(Step_5);
        Step_6 = new QWidget();
        Step_6->setObjectName(QString::fromUtf8("Step_6"));
        gridLayout17 = new QGridLayout(Step_6);
        gridLayout17->setSpacing(6);
        gridLayout17->setContentsMargins(11, 11, 11, 11);
        gridLayout17->setObjectName(QString::fromUtf8("gridLayout17"));
        gridLayout17->setContentsMargins(9, 9, 9, 9);
        networkNamesBox = new QGroupBox(Step_6);
        networkNamesBox->setObjectName(QString::fromUtf8("networkNamesBox"));
        sizePolicy2.setHeightForWidth(networkNamesBox->sizePolicy().hasHeightForWidth());
        networkNamesBox->setSizePolicy(sizePolicy2);
        gridLayout18 = new QGridLayout(networkNamesBox);
        gridLayout18->setSpacing(6);
        gridLayout18->setContentsMargins(11, 11, 11, 11);
        gridLayout18->setObjectName(QString::fromUtf8("gridLayout18"));
        gridLayout18->setContentsMargins(9, 9, 9, 9);
        computerGroupEdit = new QLineEdit(networkNamesBox);
        computerGroupEdit->setObjectName(QString::fromUtf8("computerGroupEdit"));
        sizePolicy2.setHeightForWidth(computerGroupEdit->sizePolicy().hasHeightForWidth());
        computerGroupEdit->setSizePolicy(sizePolicy2);

        gridLayout18->addWidget(computerGroupEdit, 3, 2, 1, 1);

        computerGroupLabel = new QLabel(networkNamesBox);
        computerGroupLabel->setObjectName(QString::fromUtf8("computerGroupLabel"));
        sizePolicy2.setHeightForWidth(computerGroupLabel->sizePolicy().hasHeightForWidth());
        computerGroupLabel->setSizePolicy(sizePolicy2);
        computerGroupLabel->setWordWrap(false);

        gridLayout18->addWidget(computerGroupLabel, 3, 1, 1, 1);

        sambaCheckBox = new QCheckBox(networkNamesBox);
        sambaCheckBox->setObjectName(QString::fromUtf8("sambaCheckBox"));
        sizePolicy2.setHeightForWidth(sambaCheckBox->sizePolicy().hasHeightForWidth());
        sambaCheckBox->setSizePolicy(sizePolicy2);
        sambaCheckBox->setChecked(true);

        gridLayout18->addWidget(sambaCheckBox, 2, 0, 1, 3);

        computerDomainEdit = new QLineEdit(networkNamesBox);
        computerDomainEdit->setObjectName(QString::fromUtf8("computerDomainEdit"));
        sizePolicy2.setHeightForWidth(computerDomainEdit->sizePolicy().hasHeightForWidth());
        computerDomainEdit->setSizePolicy(sizePolicy2);

        gridLayout18->addWidget(computerDomainEdit, 1, 2, 1, 1);

        computerDomainLabel = new QLabel(networkNamesBox);
        computerDomainLabel->setObjectName(QString::fromUtf8("computerDomainLabel"));
        sizePolicy2.setHeightForWidth(computerDomainLabel->sizePolicy().hasHeightForWidth());
        computerDomainLabel->setSizePolicy(sizePolicy2);
        computerDomainLabel->setWordWrap(false);

        gridLayout18->addWidget(computerDomainLabel, 1, 0, 1, 2);

        computerNameEdit = new QLineEdit(networkNamesBox);
        computerNameEdit->setObjectName(QString::fromUtf8("computerNameEdit"));
        sizePolicy2.setHeightForWidth(computerNameEdit->sizePolicy().hasHeightForWidth());
        computerNameEdit->setSizePolicy(sizePolicy2);

        gridLayout18->addWidget(computerNameEdit, 0, 2, 1, 1);

        computerNameLabel = new QLabel(networkNamesBox);
        computerNameLabel->setObjectName(QString::fromUtf8("computerNameLabel"));
        sizePolicy2.setHeightForWidth(computerNameLabel->sizePolicy().hasHeightForWidth());
        computerNameLabel->setSizePolicy(sizePolicy2);
        computerNameLabel->setWordWrap(false);

        gridLayout18->addWidget(computerNameLabel, 0, 0, 1, 2);

        spacerItem8 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout18->addItem(spacerItem8, 3, 0, 1, 1);


        gridLayout17->addWidget(networkNamesBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout17->addItem(verticalSpacer, 1, 0, 1, 1);

        widgetStack->addWidget(Step_6);
        Step_7 = new QWidget();
        Step_7->setObjectName(QString::fromUtf8("Step_7"));
        gridLayout19 = new QGridLayout(Step_7);
        gridLayout19->setSpacing(6);
        gridLayout19->setContentsMargins(11, 11, 11, 11);
        gridLayout19->setObjectName(QString::fromUtf8("gridLayout19"));
        gridLayout19->setContentsMargins(9, 9, 9, 9);
        servicesBox = new QGroupBox(Step_7);
        servicesBox->setObjectName(QString::fromUtf8("servicesBox"));
        sizePolicy2.setHeightForWidth(servicesBox->sizePolicy().hasHeightForWidth());
        servicesBox->setSizePolicy(sizePolicy2);
        servicesBox->setMinimumSize(QSize(0, 40));
        horizontalLayout = new QHBoxLayout(servicesBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        viewServicesButton = new QPushButton(servicesBox);
        viewServicesButton->setObjectName(QString::fromUtf8("viewServicesButton"));

        horizontalLayout->addWidget(viewServicesButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout19->addWidget(servicesBox, 3, 0, 1, 1);

        setClockBox = new QGroupBox(Step_7);
        setClockBox->setObjectName(QString::fromUtf8("setClockBox"));
        sizePolicy2.setHeightForWidth(setClockBox->sizePolicy().hasHeightForWidth());
        setClockBox->setSizePolicy(sizePolicy2);
        gridLayout20 = new QGridLayout(setClockBox);
        gridLayout20->setSpacing(6);
        gridLayout20->setContentsMargins(11, 11, 11, 11);
        gridLayout20->setObjectName(QString::fromUtf8("gridLayout20"));
        gridLayout20->setContentsMargins(9, 9, 9, 9);
        gmtCheckBox = new QCheckBox(setClockBox);
        gmtCheckBox->setObjectName(QString::fromUtf8("gmtCheckBox"));

        gridLayout20->addWidget(gmtCheckBox, 0, 0, 1, 2);


        gridLayout19->addWidget(setClockBox, 1, 0, 1, 1);

        localeBox = new QGroupBox(Step_7);
        localeBox->setObjectName(QString::fromUtf8("localeBox"));
        sizePolicy2.setHeightForWidth(localeBox->sizePolicy().hasHeightForWidth());
        localeBox->setSizePolicy(sizePolicy2);
        gridLayout21 = new QGridLayout(localeBox);
        gridLayout21->setSpacing(6);
        gridLayout21->setContentsMargins(11, 11, 11, 11);
        gridLayout21->setObjectName(QString::fromUtf8("gridLayout21"));
        gridLayout21->setContentsMargins(9, 9, 9, 9);
        localeLabel = new QLabel(localeBox);
        localeLabel->setObjectName(QString::fromUtf8("localeLabel"));
        sizePolicy2.setHeightForWidth(localeLabel->sizePolicy().hasHeightForWidth());
        localeLabel->setSizePolicy(sizePolicy2);
        localeLabel->setFont(font);
        localeLabel->setWordWrap(false);

        gridLayout21->addWidget(localeLabel, 1, 0, 1, 1);

        localeCombo = new QComboBox(localeBox);
        localeCombo->setObjectName(QString::fromUtf8("localeCombo"));
        sizePolicy2.setHeightForWidth(localeCombo->sizePolicy().hasHeightForWidth());
        localeCombo->setSizePolicy(sizePolicy2);

        gridLayout21->addWidget(localeCombo, 1, 1, 1, 1);

        keyboardCombo = new QComboBox(localeBox);
        keyboardCombo->setObjectName(QString::fromUtf8("keyboardCombo"));
        sizePolicy2.setHeightForWidth(keyboardCombo->sizePolicy().hasHeightForWidth());
        keyboardCombo->setSizePolicy(sizePolicy2);

        gridLayout21->addWidget(keyboardCombo, 0, 1, 1, 1);

        keyboardLabel = new QLabel(localeBox);
        keyboardLabel->setObjectName(QString::fromUtf8("keyboardLabel"));
        sizePolicy2.setHeightForWidth(keyboardLabel->sizePolicy().hasHeightForWidth());
        keyboardLabel->setSizePolicy(sizePolicy2);
        keyboardLabel->setFont(font);
        keyboardLabel->setWordWrap(false);

        gridLayout21->addWidget(keyboardLabel, 0, 0, 1, 1);


        gridLayout19->addWidget(localeBox, 0, 0, 1, 1);

        tzBox = new QGroupBox(Step_7);
        tzBox->setObjectName(QString::fromUtf8("tzBox"));
        sizePolicy2.setHeightForWidth(tzBox->sizePolicy().hasHeightForWidth());
        tzBox->setSizePolicy(sizePolicy2);
        tzGridLayout = new QGridLayout(tzBox);
        tzGridLayout->setSpacing(6);
        tzGridLayout->setContentsMargins(11, 11, 11, 11);
        tzGridLayout->setObjectName(QString::fromUtf8("tzGridLayout"));
        tzLabel = new QLabel(tzBox);
        tzLabel->setObjectName(QString::fromUtf8("tzLabel"));

        tzGridLayout->addWidget(tzLabel, 0, 0, 1, 1);

        timezoneCombo = new QComboBox(tzBox);
        timezoneCombo->setObjectName(QString::fromUtf8("timezoneCombo"));

        tzGridLayout->addWidget(timezoneCombo, 0, 1, 1, 1);


        gridLayout19->addWidget(tzBox, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout19->addItem(verticalSpacer_2, 4, 0, 1, 1);

        widgetStack->addWidget(Step_7);
        Step_8 = new QWidget();
        Step_8->setObjectName(QString::fromUtf8("Step_8"));
        gridLayout22 = new QGridLayout(Step_8);
        gridLayout22->setSpacing(6);
        gridLayout22->setContentsMargins(11, 11, 11, 11);
        gridLayout22->setObjectName(QString::fromUtf8("gridLayout22"));
        gridLayout22->setContentsMargins(9, 9, 9, 9);
        rootPasswordBox = new QGroupBox(Step_8);
        rootPasswordBox->setObjectName(QString::fromUtf8("rootPasswordBox"));
        sizePolicy2.setHeightForWidth(rootPasswordBox->sizePolicy().hasHeightForWidth());
        rootPasswordBox->setSizePolicy(sizePolicy2);
        gridLayout23 = new QGridLayout(rootPasswordBox);
        gridLayout23->setSpacing(6);
        gridLayout23->setContentsMargins(11, 11, 11, 11);
        gridLayout23->setObjectName(QString::fromUtf8("gridLayout23"));
        gridLayout23->setContentsMargins(9, 9, 9, 9);
        rootPasswordEdit2 = new QLineEdit(rootPasswordBox);
        rootPasswordEdit2->setObjectName(QString::fromUtf8("rootPasswordEdit2"));
        sizePolicy2.setHeightForWidth(rootPasswordEdit2->sizePolicy().hasHeightForWidth());
        rootPasswordEdit2->setSizePolicy(sizePolicy2);
        rootPasswordEdit2->setEchoMode(QLineEdit::Password);

        gridLayout23->addWidget(rootPasswordEdit2, 1, 1, 1, 1);

        rootPasswordEdit = new QLineEdit(rootPasswordBox);
        rootPasswordEdit->setObjectName(QString::fromUtf8("rootPasswordEdit"));
        sizePolicy2.setHeightForWidth(rootPasswordEdit->sizePolicy().hasHeightForWidth());
        rootPasswordEdit->setSizePolicy(sizePolicy2);
        rootPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout23->addWidget(rootPasswordEdit, 0, 1, 1, 1);

        rootPasswordLabel2 = new QLabel(rootPasswordBox);
        rootPasswordLabel2->setObjectName(QString::fromUtf8("rootPasswordLabel2"));
        sizePolicy2.setHeightForWidth(rootPasswordLabel2->sizePolicy().hasHeightForWidth());
        rootPasswordLabel2->setSizePolicy(sizePolicy2);
        rootPasswordLabel2->setWordWrap(false);

        gridLayout23->addWidget(rootPasswordLabel2, 1, 0, 1, 1);

        rootPasswordLabel = new QLabel(rootPasswordBox);
        rootPasswordLabel->setObjectName(QString::fromUtf8("rootPasswordLabel"));
        sizePolicy2.setHeightForWidth(rootPasswordLabel->sizePolicy().hasHeightForWidth());
        rootPasswordLabel->setSizePolicy(sizePolicy2);
        rootPasswordLabel->setWordWrap(false);

        gridLayout23->addWidget(rootPasswordLabel, 0, 0, 1, 1);


        gridLayout22->addWidget(rootPasswordBox, 1, 0, 1, 1);

        spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout22->addItem(spacerItem9, 5, 0, 1, 1);

        userBox = new QGroupBox(Step_8);
        userBox->setObjectName(QString::fromUtf8("userBox"));
        sizePolicy2.setHeightForWidth(userBox->sizePolicy().hasHeightForWidth());
        userBox->setSizePolicy(sizePolicy2);
        gridLayout24 = new QGridLayout(userBox);
        gridLayout24->setSpacing(6);
        gridLayout24->setContentsMargins(11, 11, 11, 11);
        gridLayout24->setObjectName(QString::fromUtf8("gridLayout24"));
        gridLayout24->setContentsMargins(9, 9, 9, 9);
        userPasswordEdit2 = new QLineEdit(userBox);
        userPasswordEdit2->setObjectName(QString::fromUtf8("userPasswordEdit2"));
        sizePolicy2.setHeightForWidth(userPasswordEdit2->sizePolicy().hasHeightForWidth());
        userPasswordEdit2->setSizePolicy(sizePolicy2);
        userPasswordEdit2->setEchoMode(QLineEdit::Password);

        gridLayout24->addWidget(userPasswordEdit2, 2, 1, 1, 1);

        userPasswordEdit = new QLineEdit(userBox);
        userPasswordEdit->setObjectName(QString::fromUtf8("userPasswordEdit"));
        sizePolicy2.setHeightForWidth(userPasswordEdit->sizePolicy().hasHeightForWidth());
        userPasswordEdit->setSizePolicy(sizePolicy2);
        userPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout24->addWidget(userPasswordEdit, 1, 1, 1, 1);

        userNameEdit = new QLineEdit(userBox);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));
        sizePolicy2.setHeightForWidth(userNameEdit->sizePolicy().hasHeightForWidth());
        userNameEdit->setSizePolicy(sizePolicy2);

        gridLayout24->addWidget(userNameEdit, 0, 1, 1, 1);

        userPasswordLabel2 = new QLabel(userBox);
        userPasswordLabel2->setObjectName(QString::fromUtf8("userPasswordLabel2"));
        sizePolicy2.setHeightForWidth(userPasswordLabel2->sizePolicy().hasHeightForWidth());
        userPasswordLabel2->setSizePolicy(sizePolicy2);
        userPasswordLabel2->setWordWrap(false);

        gridLayout24->addWidget(userPasswordLabel2, 2, 0, 1, 1);

        userPasswordLabel = new QLabel(userBox);
        userPasswordLabel->setObjectName(QString::fromUtf8("userPasswordLabel"));
        sizePolicy2.setHeightForWidth(userPasswordLabel->sizePolicy().hasHeightForWidth());
        userPasswordLabel->setSizePolicy(sizePolicy2);
        userPasswordLabel->setWordWrap(false);

        gridLayout24->addWidget(userPasswordLabel, 1, 0, 1, 1);

        userNameLabel = new QLabel(userBox);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        sizePolicy2.setHeightForWidth(userNameLabel->sizePolicy().hasHeightForWidth());
        userNameLabel->setSizePolicy(sizePolicy2);
        userNameLabel->setWordWrap(false);

        gridLayout24->addWidget(userNameLabel, 0, 0, 1, 1);


        gridLayout22->addWidget(userBox, 0, 0, 1, 1);

        autologinCheckBox = new QCheckBox(Step_8);
        autologinCheckBox->setObjectName(QString::fromUtf8("autologinCheckBox"));

        gridLayout22->addWidget(autologinCheckBox, 3, 0, 1, 1);

        passwordCheckBox = new QCheckBox(Step_8);
        passwordCheckBox->setObjectName(QString::fromUtf8("passwordCheckBox"));

        gridLayout22->addWidget(passwordCheckBox, 2, 0, 1, 1);

        saveDesktopCheckBox = new QCheckBox(Step_8);
        saveDesktopCheckBox->setObjectName(QString::fromUtf8("saveDesktopCheckBox"));

        gridLayout22->addWidget(saveDesktopCheckBox, 4, 0, 1, 1);

        widgetStack->addWidget(Step_8);
        WStackPage = new QWidget();
        WStackPage->setObjectName(QString::fromUtf8("WStackPage"));
        gridLayout25 = new QGridLayout(WStackPage);
        gridLayout25->setSpacing(6);
        gridLayout25->setContentsMargins(11, 11, 11, 11);
        gridLayout25->setObjectName(QString::fromUtf8("gridLayout25"));
        gridLayout25->setContentsMargins(9, 9, 9, 9);
        reminderBox = new QGroupBox(WStackPage);
        reminderBox->setObjectName(QString::fromUtf8("reminderBox"));
        sizePolicy1.setHeightForWidth(reminderBox->sizePolicy().hasHeightForWidth());
        reminderBox->setSizePolicy(sizePolicy1);
        gridLayout26 = new QGridLayout(reminderBox);
        gridLayout26->setSpacing(6);
        gridLayout26->setContentsMargins(11, 11, 11, 11);
        gridLayout26->setObjectName(QString::fromUtf8("gridLayout26"));
        gridLayout26->setContentsMargins(9, 9, 9, 9);
        remindersBrowser = new QTextEdit(reminderBox);
        remindersBrowser->setObjectName(QString::fromUtf8("remindersBrowser"));
        sizePolicy1.setHeightForWidth(remindersBrowser->sizePolicy().hasHeightForWidth());
        remindersBrowser->setSizePolicy(sizePolicy1);
        remindersBrowser->setMinimumSize(QSize(0, 0));
        remindersBrowser->setMaximumSize(QSize(32767, 32767));
        remindersBrowser->setAcceptDrops(false);
        remindersBrowser->setFrameShape(QFrame::StyledPanel);
        remindersBrowser->setFrameShadow(QFrame::Plain);
        remindersBrowser->setUndoRedoEnabled(false);
        remindersBrowser->setReadOnly(true);

        gridLayout26->addWidget(remindersBrowser, 0, 0, 1, 1);


        gridLayout25->addWidget(reminderBox, 0, 0, 1, 1);

        widgetStack->addWidget(WStackPage);

        gridLayout->addWidget(widgetStack, 0, 0, 1, 3);

        QWidget::setTabOrder(copyrightBrowser, backButton);
        QWidget::setTabOrder(backButton, nextButton);
        QWidget::setTabOrder(nextButton, diskCombo);
        QWidget::setTabOrder(diskCombo, qtpartedButton);
        QWidget::setTabOrder(qtpartedButton, entireDiskButton);
        QWidget::setTabOrder(entireDiskButton, freeSpaceEdit);
        QWidget::setTabOrder(freeSpaceEdit, existing_partitionsButton);
        QWidget::setTabOrder(existing_partitionsButton, rootCombo);
        QWidget::setTabOrder(rootCombo, swapCombo);
        QWidget::setTabOrder(swapCombo, homeCombo);
        QWidget::setTabOrder(homeCombo, saveHomeCheck);
        QWidget::setTabOrder(saveHomeCheck, badblocksCheck);
        QWidget::setTabOrder(badblocksCheck, rootTypeCombo);
        QWidget::setTabOrder(rootTypeCombo, abortInstallButton);
        QWidget::setTabOrder(abortInstallButton, tipsEdit);
        QWidget::setTabOrder(tipsEdit, grubCheckBox);
        QWidget::setTabOrder(grubCheckBox, grubMbrButton);
        QWidget::setTabOrder(grubMbrButton, grubBootCombo);
        QWidget::setTabOrder(grubBootCombo, csView);
        QWidget::setTabOrder(csView, computerNameEdit);
        QWidget::setTabOrder(computerNameEdit, computerDomainEdit);
        QWidget::setTabOrder(computerDomainEdit, sambaCheckBox);
        QWidget::setTabOrder(sambaCheckBox, computerGroupEdit);
        QWidget::setTabOrder(computerGroupEdit, keyboardCombo);
        QWidget::setTabOrder(keyboardCombo, localeCombo);
        QWidget::setTabOrder(localeCombo, gmtCheckBox);
        QWidget::setTabOrder(gmtCheckBox, userNameEdit);
        QWidget::setTabOrder(userNameEdit, userPasswordEdit);
        QWidget::setTabOrder(userPasswordEdit, userPasswordEdit2);
        QWidget::setTabOrder(userPasswordEdit2, rootPasswordEdit);
        QWidget::setTabOrder(rootPasswordEdit, rootPasswordEdit2);
        QWidget::setTabOrder(rootPasswordEdit2, autologinCheckBox);
        QWidget::setTabOrder(autologinCheckBox, remindersBrowser);

        retranslateUi(MeInstall);
        QObject::connect(grubMbrButton, SIGNAL(toggled(bool)), grubBootDiskLabel, SLOT(setEnabled(bool)));
        QObject::connect(grubMbrButton, SIGNAL(toggled(bool)), grubBootCombo, SLOT(setEnabled(bool)));
        QObject::connect(grubCheckBox, SIGNAL(toggled(bool)), grubInsLabel, SLOT(setEnabled(bool)));
        QObject::connect(grubCheckBox, SIGNAL(toggled(bool)), grubMbrButton, SLOT(setEnabled(bool)));
        QObject::connect(grubCheckBox, SIGNAL(toggled(bool)), grubBootDiskLabel, SLOT(setEnabled(bool)));
        QObject::connect(grubCheckBox, SIGNAL(toggled(bool)), grubBootCombo, SLOT(setEnabled(bool)));
        QObject::connect(entireDiskButton, SIGNAL(toggled(bool)), leaveLabel, SLOT(setEnabled(bool)));
        QObject::connect(entireDiskButton, SIGNAL(toggled(bool)), freeSpaceEdit, SLOT(setEnabled(bool)));
        QObject::connect(entireDiskButton, SIGNAL(toggled(bool)), freeLabel, SLOT(setEnabled(bool)));
        QObject::connect(rootLabelCheck, SIGNAL(toggled(bool)), rootLabelEdit, SLOT(setEnabled(bool)));
        QObject::connect(homeLabelCheck, SIGNAL(toggled(bool)), homeLabelEdit, SLOT(setEnabled(bool)));

        widgetStack->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MeInstall);
    } // setupUi

    void retranslateUi(QWidget *MeInstall)
    {
        MeInstall->setWindowTitle(QApplication::translate("MeInstall", "MeInstall", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("MeInstall", "Next >", 0, QApplication::UnicodeUTF8));
        nextButton->setShortcut(QApplication::translate("MeInstall", "Alt+N", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("MeInstall", "< Back", 0, QApplication::UnicodeUTF8));
        backButton->setShortcut(QApplication::translate("MeInstall", "Alt+K", 0, QApplication::UnicodeUTF8));
        copyrightBox->setTitle(QApplication::translate("MeInstall", "Terms of Use", 0, QApplication::UnicodeUTF8));
        copyrightBrowser->setHtml(QApplication::translate("MeInstall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">MX Linux is an independent linux distribution based on Debian Stable</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">MX Linux uses some components from MEPIS Linux which are re"
                        "leased under an Apache free license. Some MEPIS components have been modified for MX Linux.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Enjoy using MX Linux.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        installationTypeBox->setTitle(QApplication::translate("MeInstall", "1c. Select type of installation", 0, QApplication::UnicodeUTF8));
        leaveLabel->setText(QApplication::translate("MeInstall", "Leave free space up to:", 0, QApplication::UnicodeUTF8));
        freeLabel->setText(QApplication::translate("MeInstall", "MB ", 0, QApplication::UnicodeUTF8));
        entireDiskButton->setText(QApplication::translate("MeInstall", "Auto-install using entire disk ", 0, QApplication::UnicodeUTF8));
        existing_partitionsButton->setText(QApplication::translate("MeInstall", "Custom install on existing partitions", 0, QApplication::UnicodeUTF8));
        diskBox->setTitle(QApplication::translate("MeInstall", "1a. Choose disk for installation", 0, QApplication::UnicodeUTF8));
        useDiskLabel->setText(QApplication::translate("MeInstall", "Use disk:", 0, QApplication::UnicodeUTF8));
        rearrangediskBox->setTitle(QApplication::translate("MeInstall", "1b. Rearrange disk partitions (optional)", 0, QApplication::UnicodeUTF8));
        qtpartedButton->setText(QApplication::translate("MeInstall", "Run partition tool...", 0, QApplication::UnicodeUTF8));
        repartitionLabel->setText(QApplication::translate("MeInstall", "Modify partitions:", 0, QApplication::UnicodeUTF8));
        partsPreferencesBox->setTitle(QApplication::translate("MeInstall", "2b. Preferences", 0, QApplication::UnicodeUTF8));
        saveHomeCheck->setText(QApplication::translate("MeInstall", "Preserve data in /home (if upgrading)", 0, QApplication::UnicodeUTF8));
        rootTypeLabel->setText(QApplication::translate("MeInstall", "Filesystem type:", 0, QApplication::UnicodeUTF8));
        rootLabelEdit->setPlaceholderText(QString());
        rootLabelCheck->setText(QApplication::translate("MeInstall", "Change default / (root) partition label:", 0, QApplication::UnicodeUTF8));
        rootTypeCombo->clear();
        rootTypeCombo->insertItems(0, QStringList()
         << QApplication::translate("MeInstall", "ext4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeInstall", "ext3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeInstall", "ext2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeInstall", "jfs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeInstall", "xfs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeInstall", "btrfs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeInstall", "reiserfs", 0, QApplication::UnicodeUTF8)
        );
        homeLabelCheck->setText(QApplication::translate("MeInstall", "Change default /home partition label:", 0, QApplication::UnicodeUTF8));
        badblocksCheck->setText(QApplication::translate("MeInstall", "Check for badblocks (takes longer)", 0, QApplication::UnicodeUTF8));
        rootBox->setTitle(QApplication::translate("MeInstall", "2a. Choose partitions", 0, QApplication::UnicodeUTF8));
        rootLabel->setText(QApplication::translate("MeInstall", "/ (root) partition:", 0, QApplication::UnicodeUTF8));
        swapLabel->setText(QApplication::translate("MeInstall", "swap partition:", 0, QApplication::UnicodeUTF8));
        homeLabel->setText(QApplication::translate("MeInstall", "/home partition:", 0, QApplication::UnicodeUTF8));
        homeCombo->clear();
        homeCombo->insertItems(0, QStringList()
         << QApplication::translate("MeInstall", "root", 0, QApplication::UnicodeUTF8)
        );
        installBox->setTitle(QApplication::translate("MeInstall", "3. Installation in progress", 0, QApplication::UnicodeUTF8));
        abortInstallButton->setText(QApplication::translate("MeInstall", "Abort", 0, QApplication::UnicodeUTF8));
        abortInstallButton->setShortcut(QApplication::translate("MeInstall", "Alt+A", 0, QApplication::UnicodeUTF8));
        installLabel->setText(QApplication::translate("MeInstall", "Ready to install MX Linux filesystem", 0, QApplication::UnicodeUTF8));
        tipsBox->setTitle(QApplication::translate("MeInstall", "Tips", 0, QApplication::UnicodeUTF8));
        bootMethodGroup->setTitle(QApplication::translate("MeInstall", "4. Select Boot Method", 0, QApplication::UnicodeUTF8));
        grubMbrButton->setText(QApplication::translate("MeInstall", "MBR", 0, QApplication::UnicodeUTF8));
        grubMbrButton->setShortcut(QApplication::translate("MeInstall", "Alt+B", 0, QApplication::UnicodeUTF8));
        grubInsLabel->setText(QApplication::translate("MeInstall", "Install on:", 0, QApplication::UnicodeUTF8));
        grubCheckBox->setText(QApplication::translate("MeInstall", "Install GRUB for MX Linux and Windows", 0, QApplication::UnicodeUTF8));
        grubCheckBox->setShortcut(QApplication::translate("MeInstall", "Alt+A", 0, QApplication::UnicodeUTF8));
        grubBootDiskLabel->setText(QApplication::translate("MeInstall", "System boot disk:", 0, QApplication::UnicodeUTF8));
        grubRootButton->setText(QApplication::translate("MeInstall", "root", 0, QApplication::UnicodeUTF8));
        networkServicesBox->setTitle(QApplication::translate("MeInstall", "Common Services to Enable", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = csView->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MeInstall", "Description", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MeInstall", "Service", 0, QApplication::UnicodeUTF8));
        networkNamesBox->setTitle(QApplication::translate("MeInstall", "5. Computer Network Names", 0, QApplication::UnicodeUTF8));
        computerGroupEdit->setText(QApplication::translate("MeInstall", "Workgroup", 0, QApplication::UnicodeUTF8));
        computerGroupLabel->setText(QApplication::translate("MeInstall", "Workgroup:", 0, QApplication::UnicodeUTF8));
        sambaCheckBox->setText(QApplication::translate("MeInstall", "SaMBa Server for MS Networking", 0, QApplication::UnicodeUTF8));
        computerDomainEdit->setText(QApplication::translate("MeInstall", "example.dom", 0, QApplication::UnicodeUTF8));
        computerDomainLabel->setText(QApplication::translate("MeInstall", "Computer domain:", 0, QApplication::UnicodeUTF8));
        computerNameEdit->setText(QApplication::translate("MeInstall", "mx1", 0, QApplication::UnicodeUTF8));
        computerNameEdit->setPlaceholderText(QString());
        computerNameLabel->setText(QApplication::translate("MeInstall", "Computer name:", 0, QApplication::UnicodeUTF8));
        servicesBox->setTitle(QApplication::translate("MeInstall", "6d. Service Settings (advanced)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewServicesButton->setToolTip(QApplication::translate("MeInstall", "Adjust which services should run at startup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        viewServicesButton->setText(QApplication::translate("MeInstall", "View", 0, QApplication::UnicodeUTF8));
        setClockBox->setTitle(QApplication::translate("MeInstall", "6b. Configure Clock", 0, QApplication::UnicodeUTF8));
        gmtCheckBox->setText(QApplication::translate("MeInstall", "System clock uses LOCAL", 0, QApplication::UnicodeUTF8));
        localeBox->setTitle(QApplication::translate("MeInstall", "6a. Localization Defaults", 0, QApplication::UnicodeUTF8));
        localeLabel->setText(QApplication::translate("MeInstall", "Locale:", 0, QApplication::UnicodeUTF8));
        keyboardLabel->setText(QApplication::translate("MeInstall", "Keyboard:", 0, QApplication::UnicodeUTF8));
        tzBox->setTitle(QApplication::translate("MeInstall", "6c. Timezone Settings", 0, QApplication::UnicodeUTF8));
        tzLabel->setText(QApplication::translate("MeInstall", "Timezone:", 0, QApplication::UnicodeUTF8));
        rootPasswordBox->setTitle(QApplication::translate("MeInstall", "7b. Root (administrator) Account", 0, QApplication::UnicodeUTF8));
        rootPasswordEdit2->setText(QString());
        rootPasswordEdit->setText(QString());
        rootPasswordLabel2->setText(QApplication::translate("MeInstall", "Confirm root password:", 0, QApplication::UnicodeUTF8));
        rootPasswordLabel->setText(QApplication::translate("MeInstall", "Root password:", 0, QApplication::UnicodeUTF8));
        userBox->setTitle(QApplication::translate("MeInstall", "7a. Default User Account", 0, QApplication::UnicodeUTF8));
        userPasswordEdit2->setText(QString());
        userPasswordEdit->setText(QString());
        userNameEdit->setText(QString());
        userNameEdit->setPlaceholderText(QApplication::translate("MeInstall", "username", 0, QApplication::UnicodeUTF8));
        userPasswordLabel2->setText(QApplication::translate("MeInstall", "Confirm user password:", 0, QApplication::UnicodeUTF8));
        userPasswordLabel->setText(QApplication::translate("MeInstall", "Default user password:", 0, QApplication::UnicodeUTF8));
        userNameLabel->setText(QApplication::translate("MeInstall", "Default user login name:", 0, QApplication::UnicodeUTF8));
        autologinCheckBox->setText(QApplication::translate("MeInstall", "Autologin", 0, QApplication::UnicodeUTF8));
        passwordCheckBox->setText(QApplication::translate("MeInstall", "Show passwords", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        saveDesktopCheckBox->setToolTip(QApplication::translate("MeInstall", "Desktop modification made in the live environment will be carried over to the installed OS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        saveDesktopCheckBox->setText(QApplication::translate("MeInstall", "Save live desktop changes", 0, QApplication::UnicodeUTF8));
        reminderBox->setTitle(QApplication::translate("MeInstall", "Reminders", 0, QApplication::UnicodeUTF8));
        remindersBrowser->setHtml(QApplication::translate("MeInstall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; font-weight:600;\">Support MX Linux</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">MX Linux is supported by people like you. Some help others at the support forum - http://antix.freeforums.org, - http://forum.mepiscommunity.org or translate help files into different languages, or make suggestions, write documentation, or help test new software.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MeInstall: public Ui_MeInstall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEINSTALL_H
