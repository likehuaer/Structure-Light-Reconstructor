/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionOpenCamera;
    QAction *actionProjector;
    QAction *actionCalib;
    QAction *actionScan;
    QAction *actionReconstruct;
    QAction *actionSet;
    QAction *actionEnglish;
    QAction *actionChinese;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QWidget *displayWidget;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_12;
    QLabel *label;
    QSpinBox *pSizeValue;
    QSpacerItem *verticalSpacer_15;
    QHBoxLayout *displayLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLabel *currentPhotoLabel;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_15;
    QLabel *explainLabel;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *horizontalSpacer_14;
    QSplitter *splitter_4;
    QPushButton *captureButton;
    QPushButton *redoButton;
    QPushButton *calibButton;
    QWidget *tab_2;
    QPushButton *startScanButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *findPointButton;
    QLabel *label_3;
    QSpinBox *thresholdBox;
    QWidget *tab_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuCustomize;
    QMenu *menuLanguage;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_7;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *leftViewLabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *leftCaptureLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_9;
    QSplitter *splitter;
    QLabel *label_5;
    QSpinBox *snapSpeedBox;
    QLabel *label_6;
    QSlider *leftExSlider;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_10;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_10;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *rightViewLabel;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *horizontalSpacer_11;
    QSplitter *splitter_2;
    QLabel *label_7;
    QSpinBox *spinBox;
    QLabel *label_8;
    QSlider *rightExSlider;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_12;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QLabel *rightCaptureLabel;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(996, 693);
        QIcon icon;
        icon.addFile(QStringLiteral(":/splash.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(false);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setBold(true);
        font.setWeight(75);
        actionNew->setFont(font);
        actionNew->setMenuRole(QAction::TextHeuristicRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionOpen->setFont(font);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionExit->setFont(font);
        actionOpenCamera = new QAction(MainWindow);
        actionOpenCamera->setObjectName(QStringLiteral("actionOpenCamera"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenCamera->setIcon(icon4);
        actionOpenCamera->setFont(font);
        actionProjector = new QAction(MainWindow);
        actionProjector->setObjectName(QStringLiteral("actionProjector"));
        actionProjector->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/projon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/projoff.png"), QSize(), QIcon::Normal, QIcon::On);
        actionProjector->setIcon(icon5);
        actionProjector->setFont(font);
        actionCalib = new QAction(MainWindow);
        actionCalib->setObjectName(QStringLiteral("actionCalib"));
        QIcon icon6;
        QString iconThemeName = QStringLiteral("Calibration");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QStringLiteral(":/calib.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCalib->setIcon(icon6);
        actionCalib->setFont(font);
        actionScan = new QAction(MainWindow);
        actionScan->setObjectName(QStringLiteral("actionScan"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/scan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScan->setIcon(icon7);
        actionScan->setFont(font);
        actionReconstruct = new QAction(MainWindow);
        actionReconstruct->setObjectName(QStringLiteral("actionReconstruct"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/reconstruct.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReconstruct->setIcon(icon8);
        actionReconstruct->setFont(font);
        actionSet = new QAction(MainWindow);
        actionSet->setObjectName(QStringLiteral("actionSet"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet->setIcon(icon9);
        actionSet->setFont(font);
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionEnglish->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/english.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnglish->setIcon(icon10);
        actionEnglish->setFont(font);
        actionChinese = new QAction(MainWindow);
        actionChinese->setObjectName(QStringLiteral("actionChinese"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/china.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChinese->setIcon(icon11);
        actionChinese->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(290, 500));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        centralWidget = new QWidget(centralwidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setMinimumSize(QSize(358, 0));
        centralWidget->setSizeIncrement(QSize(0, 0));
        centralWidget->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(1, 1, 1, 0);
        displayWidget = new QWidget(centralWidget);
        displayWidget->setObjectName(QStringLiteral("displayWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(displayWidget->sizePolicy().hasHeightForWidth());
        displayWidget->setSizePolicy(sizePolicy2);
        displayWidget->setContextMenuPolicy(Qt::NoContextMenu);
        displayWidget->setAutoFillBackground(false);
        displayWidget->setStyleSheet(QStringLiteral(""));
        gridLayout_13 = new QGridLayout(displayWidget);
        gridLayout_13->setSpacing(1);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 1, 0, 1);
        groupBox_3 = new QGroupBox(displayWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        groupBox_3->setStyleSheet(QStringLiteral("background-color: rgb(147, 221, 221);"));
        groupBox_3->setTitle(QStringLiteral(""));
        gridLayout_12 = new QGridLayout(groupBox_3);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_12->addWidget(label, 0, 0, 1, 1);

        pSizeValue = new QSpinBox(groupBox_3);
        pSizeValue->setObjectName(QStringLiteral("pSizeValue"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pSizeValue->sizePolicy().hasHeightForWidth());
        pSizeValue->setSizePolicy(sizePolicy4);
        pSizeValue->setAlignment(Qt::AlignCenter);
        pSizeValue->setSuffix(QStringLiteral("(pix)"));
        pSizeValue->setMinimum(1);
        pSizeValue->setMaximum(20);
        pSizeValue->setValue(5);

        gridLayout_12->addWidget(pSizeValue, 1, 0, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 227, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_15, 2, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_3, 0, 0, 1, 1);

        displayLayout = new QHBoxLayout();
        displayLayout->setSpacing(0);
        displayLayout->setObjectName(QStringLiteral("displayLayout"));

        gridLayout_13->addLayout(displayLayout, 0, 1, 1, 1);


        gridLayout_2->addWidget(displayWidget, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 75 9pt \"Calibri\";"));

        horizontalLayout_2->addWidget(label_2);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setStyleSheet(QStringLiteral("font: 75 9pt \"Calibri\";"));
        progressBar->setValue(0);
        progressBar->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(progressBar);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy5);
        tabWidget->setMinimumSize(QSize(350, 275));
        tabWidget->setToolTipDuration(0);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(111, 215, 253);\n"
"font: 9pt \"Calibri\";"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_11 = new QGridLayout(tab);
        gridLayout_11->setSpacing(3);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);

        currentPhotoLabel = new QLabel(tab);
        currentPhotoLabel->setObjectName(QStringLiteral("currentPhotoLabel"));
        currentPhotoLabel->setLayoutDirection(Qt::LeftToRight);
        currentPhotoLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        currentPhotoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(currentPhotoLabel);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout->addWidget(label_11);


        gridLayout_11->addLayout(horizontalLayout, 0, 0, 1, 4);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_15, 0, 4, 1, 1);

        explainLabel = new QLabel(tab);
        explainLabel->setObjectName(QStringLiteral("explainLabel"));
        sizePolicy.setHeightForWidth(explainLabel->sizePolicy().hasHeightForWidth());
        explainLabel->setSizePolicy(sizePolicy);
        explainLabel->setMinimumSize(QSize(100, 200));
        explainLabel->setMaximumSize(QSize(400, 300));
        explainLabel->setStyleSheet(QStringLiteral("background-color: rgbrgbrgb(238, 238, 238);"));
        explainLabel->setFrameShape(QFrame::NoFrame);
        explainLabel->setScaledContents(true);
        explainLabel->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(explainLabel, 1, 0, 3, 1);

        verticalSpacer_13 = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_13, 1, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_13, 2, 1, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_14, 3, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(36, 76, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_14, 2, 4, 1, 1);

        splitter_4 = new QSplitter(tab);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        captureButton = new QPushButton(splitter_4);
        captureButton->setObjectName(QStringLiteral("captureButton"));
        splitter_4->addWidget(captureButton);
        redoButton = new QPushButton(splitter_4);
        redoButton->setObjectName(QStringLiteral("redoButton"));
        splitter_4->addWidget(redoButton);
        calibButton = new QPushButton(splitter_4);
        calibButton->setObjectName(QStringLiteral("calibButton"));
        calibButton->setEnabled(true);
        splitter_4->addWidget(calibButton);

        gridLayout_11->addWidget(splitter_4, 2, 2, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        startScanButton = new QPushButton(tab_2);
        startScanButton->setObjectName(QStringLiteral("startScanButton"));
        startScanButton->setEnabled(false);
        startScanButton->setGeometry(QRect(10, 60, 75, 23));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 222, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        findPointButton = new QPushButton(layoutWidget);
        findPointButton->setObjectName(QStringLiteral("findPointButton"));
        findPointButton->setEnabled(false);

        horizontalLayout_3->addWidget(findPointButton);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        thresholdBox = new QSpinBox(layoutWidget);
        thresholdBox->setObjectName(QStringLiteral("thresholdBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(thresholdBox->sizePolicy().hasHeightForWidth());
        thresholdBox->setSizePolicy(sizePolicy6);
        thresholdBox->setMaximum(255);
        thresholdBox->setValue(60);

        horizontalLayout_3->addWidget(thresholdBox);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout->addWidget(centralWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 996, 23));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0.501, 0, 0.523, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(14, 96, 243, 255));
        gradient.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0.501, 0, 0.523, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(14, 96, 243, 255));
        gradient1.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0.501, 0, 0.523, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(14, 96, 243, 255));
        gradient2.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0.501, 0, 0.523, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(14, 96, 243, 255));
        gradient3.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0.501, 0, 0.523, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(14, 96, 243, 255));
        gradient4.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(0.501, 0, 0.523, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(14, 96, 243, 255));
        gradient5.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient6(0.501, 0, 0.523, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(14, 96, 243, 255));
        gradient6.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush7(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient7(0.501, 0, 0.523, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(14, 96, 243, 255));
        gradient7.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush8(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        QLinearGradient gradient8(0.501, 0, 0.523, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(14, 96, 243, 255));
        gradient8.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush9(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        menubar->setPalette(palette);
        menubar->setAutoFillBackground(false);
        menubar->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.501, y1:0, x2:0.523, y2:1, stop:0 rgba(14, 96, 243, 255), stop:0.732955 rgba(0, 150, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        menuFile->setFont(font1);
        menuFile->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(130, 197, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));
        menuCustomize = new QMenu(menubar);
        menuCustomize->setObjectName(QStringLiteral("menuCustomize"));
        menuCustomize->setStyleSheet(QLatin1String("background-color: rgb(130, 197, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));
        menuLanguage = new QMenu(menuCustomize);
        menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
        menuLanguage->setFont(font);
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        statusBar->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(96, 220, 255, 218), stop:1 rgba(26, 132, 255, 213));"));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.522409, y1:0.244, x2:0.5, y2:1, stop:0 rgba(71, 166, 255, 255), stop:0.977273 rgba(115, 217, 255, 255));"));
        toolBar->setMovable(true);
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::TopToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(312, 528));
        dockWidget->setStyleSheet(QStringLiteral("font: 9pt \"Calibri\";"));
        dockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_7 = new QGridLayout(dockWidgetContents);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(1);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(dockWidgetContents);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy7);
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        leftViewLabel = new QLabel(widget_3);
        leftViewLabel->setObjectName(QStringLiteral("leftViewLabel"));
        sizePolicy.setHeightForWidth(leftViewLabel->sizePolicy().hasHeightForWidth());
        leftViewLabel->setSizePolicy(sizePolicy);
        leftViewLabel->setMaximumSize(QSize(400, 320));
        leftViewLabel->setStyleSheet(QStringLiteral("border:1px solid deepskyblue;"));
        leftViewLabel->setFrameShape(QFrame::Box);
        leftViewLabel->setScaledContents(true);
        leftViewLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(leftViewLabel, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_7->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(dockWidgetContents);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy7.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy7);
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        leftCaptureLabel = new QLabel(widget_4);
        leftCaptureLabel->setObjectName(QStringLiteral("leftCaptureLabel"));
        sizePolicy.setHeightForWidth(leftCaptureLabel->sizePolicy().hasHeightForWidth());
        leftCaptureLabel->setSizePolicy(sizePolicy);
        leftCaptureLabel->setMaximumSize(QSize(400, 320));
        leftCaptureLabel->setStyleSheet(QStringLiteral("border:1px solid deepskyblue;"));
        leftCaptureLabel->setScaledContents(true);
        leftCaptureLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(leftCaptureLabel, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_4, 2, 1, 1, 1);


        gridLayout_7->addWidget(widget_4, 2, 0, 1, 1);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy7.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy7);
        groupBox->setMaximumSize(QSize(111111, 70));
        groupBox->setStyleSheet(QLatin1String("font: 9pt \"Calibri\";\n"
"background-color: rgbrgb(111, 215, 253)"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_9 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_9, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_9, 1, 0, 2, 1);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter);
        label_5->setObjectName(QStringLiteral("label_5"));
        splitter->addWidget(label_5);
        snapSpeedBox = new QSpinBox(splitter);
        snapSpeedBox->setObjectName(QStringLiteral("snapSpeedBox"));
        snapSpeedBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        snapSpeedBox->setMinimum(1);
        snapSpeedBox->setMaximum(99);
        snapSpeedBox->setValue(30);
        splitter->addWidget(snapSpeedBox);
        label_6 = new QLabel(splitter);
        label_6->setObjectName(QStringLiteral("label_6"));
        splitter->addWidget(label_6);
        leftExSlider = new QSlider(splitter);
        leftExSlider->setObjectName(QStringLiteral("leftExSlider"));
        leftExSlider->setEnabled(false);
        leftExSlider->setMinimum(0);
        leftExSlider->setMaximum(3);
        leftExSlider->setPageStep(1);
        leftExSlider->setValue(1);
        leftExSlider->setOrientation(Qt::Horizontal);
        leftExSlider->setTickPosition(QSlider::TicksBothSides);
        leftExSlider->setTickInterval(0);
        splitter->addWidget(leftExSlider);

        gridLayout_8->addWidget(splitter, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_10, 1, 2, 2, 1);

        verticalSpacer_10 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_10, 2, 1, 1, 1);


        gridLayout_7->addWidget(groupBox, 1, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(310, 500));
        dockWidget_2->setStyleSheet(QStringLiteral("font: 9pt \"Calibri\";"));
        dockWidget_2->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
        dockWidget_2->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        gridLayout_10 = new QGridLayout(dockWidgetContents_3);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(0);
        gridLayout_10->setVerticalSpacing(1);
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(dockWidgetContents_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(widget_6);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_5->addItem(verticalSpacer_5, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        rightViewLabel = new QLabel(widget_6);
        rightViewLabel->setObjectName(QStringLiteral("rightViewLabel"));
        sizePolicy.setHeightForWidth(rightViewLabel->sizePolicy().hasHeightForWidth());
        rightViewLabel->setSizePolicy(sizePolicy);
        rightViewLabel->setMaximumSize(QSize(400, 320));
        rightViewLabel->setStyleSheet(QStringLiteral("border:1px solid deepskyblue;"));
        rightViewLabel->setScaledContents(true);
        rightViewLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(rightViewLabel, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_5->addItem(verticalSpacer_6, 2, 1, 1, 1);


        gridLayout_10->addWidget(widget_6, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy7.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy7);
        groupBox_2->setMaximumSize(QSize(111111, 70));
        groupBox_2->setStyleSheet(QLatin1String("font: 9pt \"Calibri\";\n"
"background-color: rgbrgb(111, 215, 253)"));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_11 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_11, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_11, 1, 0, 2, 1);

        splitter_2 = new QSplitter(groupBox_2);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        splitter_2->addWidget(label_7);
        spinBox = new QSpinBox(splitter_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox->setMinimum(1);
        spinBox->setValue(30);
        splitter_2->addWidget(spinBox);
        label_8 = new QLabel(splitter_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        splitter_2->addWidget(label_8);
        rightExSlider = new QSlider(splitter_2);
        rightExSlider->setObjectName(QStringLiteral("rightExSlider"));
        rightExSlider->setEnabled(false);
        rightExSlider->setMinimum(0);
        rightExSlider->setMaximum(3);
        rightExSlider->setPageStep(1);
        rightExSlider->setValue(1);
        rightExSlider->setOrientation(Qt::Horizontal);
        rightExSlider->setTickPosition(QSlider::TicksBothSides);
        splitter_2->addWidget(rightExSlider);

        gridLayout_9->addWidget(splitter_2, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_12, 1, 2, 2, 1);

        verticalSpacer_12 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_12, 2, 1, 1, 1);


        gridLayout_10->addWidget(groupBox_2, 1, 0, 1, 1);

        widget_5 = new QWidget(dockWidgetContents_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy8);
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_6->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        rightCaptureLabel = new QLabel(widget_5);
        rightCaptureLabel->setObjectName(QStringLiteral("rightCaptureLabel"));
        sizePolicy.setHeightForWidth(rightCaptureLabel->sizePolicy().hasHeightForWidth());
        rightCaptureLabel->setSizePolicy(sizePolicy);
        rightCaptureLabel->setMaximumSize(QSize(400, 320));
        rightCaptureLabel->setStyleSheet(QStringLiteral("border:1px solid deepskyblue;"));
        rightCaptureLabel->setScaledContents(true);
        rightCaptureLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(rightCaptureLabel, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_6->addItem(verticalSpacer_8, 2, 1, 1, 1);


        gridLayout_10->addWidget(widget_5, 2, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);
#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(snapSpeedBox);
        label_6->setBuddy(leftExSlider);
        label_7->setBuddy(spinBox);
        label_8->setBuddy(rightExSlider);
#endif // QT_NO_SHORTCUT

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuCustomize->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuCustomize->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionChinese);
        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actionOpenCamera);
        toolBar->addSeparator();
        toolBar->addAction(actionProjector);
        toolBar->addSeparator();
        toolBar->addAction(actionCalib);
        toolBar->addSeparator();
        toolBar->addAction(actionScan);
        toolBar->addSeparator();
        toolBar->addAction(actionReconstruct);
        toolBar->addSeparator();
        toolBar->addAction(actionSet);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(snapSpeedBox, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), snapSpeedBox, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "NEU 3D Reconstructor", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New Project", 0));
        actionNew->setIconText(QApplication::translate("MainWindow", "  New  ", 0));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Create a new project</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNew->setStatusTip(QApplication::translate("MainWindow", "Create a new folder to contain project.", 0));
#endif // QT_NO_STATUSTIP
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open Project", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Open project</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionExit->setIconText(QApplication::translate("MainWindow", "  Exit  ", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Exit", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "Close the program.", 0));
#endif // QT_NO_STATUSTIP
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0));
        actionOpenCamera->setText(QApplication::translate("MainWindow", "Camera", 0));
#ifndef QT_NO_TOOLTIP
        actionOpenCamera->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Open cameras</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOpenCamera->setStatusTip(QApplication::translate("MainWindow", "Open Cameras.", 0));
#endif // QT_NO_STATUSTIP
        actionProjector->setText(QApplication::translate("MainWindow", "Projector", 0));
#ifndef QT_NO_STATUSTIP
        actionProjector->setStatusTip(QApplication::translate("MainWindow", "Turn on/off the projector", 0));
#endif // QT_NO_STATUSTIP
        actionCalib->setText(QApplication::translate("MainWindow", "Calibrate", 0));
#ifndef QT_NO_TOOLTIP
        actionCalib->setToolTip(QApplication::translate("MainWindow", "Calibrate", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCalib->setStatusTip(QApplication::translate("MainWindow", "Active calibration.", 0));
#endif // QT_NO_STATUSTIP
        actionScan->setText(QApplication::translate("MainWindow", "Scan", 0));
        actionScan->setIconText(QApplication::translate("MainWindow", "  Scan  ", 0));
#ifndef QT_NO_TOOLTIP
        actionScan->setToolTip(QApplication::translate("MainWindow", "Scan", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionScan->setStatusTip(QApplication::translate("MainWindow", "Start scan process.", 0));
#endif // QT_NO_STATUSTIP
        actionReconstruct->setText(QApplication::translate("MainWindow", "Reconstruct", 0));
#ifndef QT_NO_TOOLTIP
        actionReconstruct->setToolTip(QApplication::translate("MainWindow", "Reconstruct", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionReconstruct->setStatusTip(QApplication::translate("MainWindow", "Start reconstruction.", 0));
#endif // QT_NO_STATUSTIP
        actionSet->setText(QApplication::translate("MainWindow", "Settings", 0));
#ifndef QT_NO_TOOLTIP
        actionSet->setToolTip(QApplication::translate("MainWindow", "Settings", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSet->setStatusTip(QApplication::translate("MainWindow", "Set the parameters of the project.", 0));
#endif // QT_NO_STATUSTIP
        actionEnglish->setText(QApplication::translate("MainWindow", "English", 0));
#ifndef QT_NO_TOOLTIP
        actionEnglish->setToolTip(QApplication::translate("MainWindow", "en", 0));
#endif // QT_NO_TOOLTIP
        actionChinese->setText(QApplication::translate("MainWindow", "\347\256\200\344\275\223\344\270\255\346\226\207", 0));
#ifndef QT_NO_TOOLTIP
        actionChinese->setToolTip(QApplication::translate("MainWindow", "zh", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "Point Size", 0));
        label_2->setText(QApplication::translate("MainWindow", "Current Operation Processed:", 0));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Capture images as displayed:</p></body></html>", 0));
        currentPhotoLabel->setText(QApplication::translate("MainWindow", "0", 0));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p>/12 images have been captured.</p></body></html>", 0));
        explainLabel->setText(QApplication::translate("MainWindow", "Illustration", 0));
        captureButton->setText(QApplication::translate("MainWindow", "Capture", 0));
        redoButton->setText(QApplication::translate("MainWindow", "Redo", 0));
        calibButton->setText(QApplication::translate("MainWindow", "Calibrate", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Calibrate", 0));
        startScanButton->setText(QApplication::translate("MainWindow", "Start Scan", 0));
        findPointButton->setText(QApplication::translate("MainWindow", "Find Point", 0));
        label_3->setText(QApplication::translate("MainWindow", "Binary Threshold", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Scan", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Reconstruct", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "Project", 0));
        menuCustomize->setTitle(QApplication::translate("MainWindow", "Customize", 0));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "Left Camera", 0));
        leftViewLabel->setText(QApplication::translate("MainWindow", "View", 0));
        leftCaptureLabel->setText(QApplication::translate("MainWindow", "Capture", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Camera Adjust", 0));
        label_5->setText(QApplication::translate("MainWindow", "Snap Speed(ms)", 0));
        label_6->setText(QApplication::translate("MainWindow", "Exposure", 0));
        dockWidget_2->setWindowTitle(QApplication::translate("MainWindow", "Right Camera", 0));
        rightViewLabel->setText(QApplication::translate("MainWindow", "View", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Camera Adjust", 0));
        label_7->setText(QApplication::translate("MainWindow", "Snap Speed(ms)", 0));
        label_8->setText(QApplication::translate("MainWindow", "Exposure", 0));
        rightCaptureLabel->setText(QApplication::translate("MainWindow", "Capture", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H