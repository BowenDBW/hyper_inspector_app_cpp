//
// Created by 26317 on 24-4-30.
//

#ifndef HYPER_INSPECTOR_APP_CPP_MAINWINDOW_H
#define HYPER_INSPECTOR_APP_CPP_MAINWINDOW_H

#include <opencv2/opencv.hpp>

#include <QWidget>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //HYPER_INSPECTOR_APP_CPP_MAINWINDOW_H
