#include <QToolButton>
#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QToolButton *pButton = new QToolButton(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
