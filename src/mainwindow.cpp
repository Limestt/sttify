#include "mainwindow.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSplitter>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Sttify");
    setMinimumSize(760, 480);

    buildUi();
}

void MainWindow::buildUi() {
    auto *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    auto *middleSplitter = new QSplitter(Qt::Horizontal);
    middleSplitter->setContentsMargins(0, 0, 0, 0);
    middleSplitter->setChildrenCollapsible(false);

    middleSplitter->addWidget(createLeft());
    middleSplitter->addWidget(createMiddle());
    middleSplitter->addWidget(createRight());

    auto *centralLayout = new QVBoxLayout(centralWidget);
    centralWidget->setLayout(centralLayout);

    centralLayout->setContentsMargins(0, 0, 0, 0);
    centralLayout->setSpacing(0);

    centralLayout->addWidget(createTop(), 1);
    centralLayout->addWidget(middleSplitter, 8);
    centralLayout->addWidget(createBottom(), 1);
}

QWidget *MainWindow::createTop() {
    auto *top = new QWidget(this);
    top->setStyleSheet("background-color: purple;");
    return top;
}

QWidget *MainWindow::createLeft() {
    auto *left = new QWidget(this);

    left->setStyleSheet("background-color: blue;");
    left->setMinimumWidth(200);

    return left;
}

QWidget *MainWindow::createMiddle() {
    auto *middle = new QWidget(this);

    middle->setStyleSheet("background-color: red;");
    middle->setMinimumWidth(200);

    return middle;
}

QWidget *MainWindow::createRight() {
    auto *right = new QWidget(this);

    right->setStyleSheet("background-color: yellow;");
    right->setMinimumWidth(200);

    return right;
}

QWidget *MainWindow::createBottom() {
    auto *bottom = new QWidget(this);

    bottom->setStyleSheet("background-color: green;");

    return bottom;
}



