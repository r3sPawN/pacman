#include "pacman_board.h"
#include "ui_pacman_board.h"

pacman_board::pacman_board(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pacman_board)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(500, 500));
}

pacman_board::~pacman_board()
{
    delete ui;
}
