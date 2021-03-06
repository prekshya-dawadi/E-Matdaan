#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QGridLayout>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pushButton = new QPushButton(this);
    pushButton->setText("Click me!");
    QGridLayout *layout1 = new QGridLayout;
    layout1->addWidget(pushButton, 0, 0);
    setLayout(layout1);

    connect(pushButton, SIGNAL(clicked()), this, SLOT(dashboard()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::dashboard()
{

    // New Window Widget
    QWidget *window = new QWidget;
    setWindowTitle("Dashboard");
    // creating Layout for dashboard
    QGridLayout *layout2 = new QGridLayout;

    // Creating push buttons
    QPushButton *BallotButton = new QPushButton("Ballot");
    QPushButton *PartyButton = new QPushButton("Parties Information");
    QPushButton *CandidatesButton = new QPushButton("Candidates Information");
    QPushButton *ResultButton = new QPushButton("Results");
    QPushButton *HelpButton = new QPushButton("Help");

    // Adding push buttons to layout
    layout2->addWidget(BallotButton, 0, 0);
    layout2->addWidget(PartyButton, 0, 1);
    layout2->addWidget(CandidatesButton, 0, 2);
    layout2->addWidget(ResultButton, 1, 1);
    layout2->addWidget(HelpButton, 1, 2);

    window->setLayout(layout2);

    window->show();
}



