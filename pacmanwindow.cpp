#include "pacmanwindow.h"
#include "ui_pacmanwindow.h"

pacmanWindow::pacmanWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pacmanWindow)
{
    ui->setupUi(this);
}

pacmanWindow::~pacmanWindow()
{
    delete ui;
}

