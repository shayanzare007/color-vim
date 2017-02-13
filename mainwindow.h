#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private slots:
    void on_actionAbout_triggered();
    
    void on_actionAbote_triggered();

    void on_actionHex_Color_triggered();

    void on_actionFlat_Color_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
