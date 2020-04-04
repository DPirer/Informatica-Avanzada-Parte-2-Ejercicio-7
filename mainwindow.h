#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_boton1_clicked();

    void on_boton2_clicked();

    void on_boton_suma_clicked();

    void on_boton_igual_clicked();

    void on_boton3_clicked();

    void on_boton_resta_clicked();

    void on_boton_coma_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
