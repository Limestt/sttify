#pragma once

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    void buildUi();

    QWidget *createTop();
    QWidget *createLeft();
    QWidget *createMiddle();
    QWidget *createRight();
    QWidget *createBottom();
};
