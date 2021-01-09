#ifndef PACMAN_BOARD_H
#define PACMAN_BOARD_H

#include <QDialog>

namespace Ui {
class pacman_board;
}

class pacman_board : public QDialog
{
    Q_OBJECT

public:
    explicit pacman_board(QWidget *parent = nullptr);
    ~pacman_board();

private:
    Ui::pacman_board *ui;
};

#endif // PACMAN_BOARD_H
