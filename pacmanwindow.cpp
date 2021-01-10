#include "pacmanwindow.h"
#include "ui_pacmanwindow.h"
#include "pacman.h"

pacmanWindow::pacmanWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pacmanWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(640, 480));
}

pacmanWindow::~pacmanWindow()
{
    delete ui;
}


void pacmanWindow::on_pushButtonPlay_clicked()
{
    pac_b = new pacman_board();
    pac_b->show();
    hide();
}
